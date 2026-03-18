/*
 * XREFs of ?VidSchiWorkerThreadTimerCallback@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x1C0011D10
 * Callers:
 *     <none>
 * Callees:
 *     ?VidSchiStopNodeYield@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C0011E64 (-VidSchiStopNodeYield@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     Template_p @ 0x1C001F4D4 (Template_p.c)
 */

void __fastcall VidSchiWorkerThreadTimerCallback(struct _EX_TIMER *a1, void *a2)
{
  LARGE_INTEGER v3; // rsi
  char v4; // r8
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+58h] [rbp+10h] BYREF

  v3 = KeQueryPerformanceCounter(&PerformanceFrequency);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)a2 + 235, &LockHandle);
  if ( v3.QuadPart >= *((_QWORD *)a2 + 21) )
  {
    ExCancelTimer(*((_QWORD *)a2 + 20), 0LL);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_p(v7, &EventYieldCancelExpirationTimer, v8, *((_QWORD *)a2 + 2));
    *((_QWORD *)a2 + 21) = 0LL;
  }
  else
  {
    v4 = 0;
    v5 = 0LL;
    if ( *((_DWORD *)a2 + 15) )
    {
      do
      {
        v6 = *((_QWORD *)a2 + v5 + 52);
        if ( *(_BYTE *)(v6 + 1944) )
        {
          v9 = *(_QWORD *)(v6 + 1920);
          if ( v9 )
          {
            if ( v3.QuadPart > (unsigned __int64)(*(_QWORD *)(v6 + 1928) + v9) )
            {
              VidSchiStopNodeYield((struct _VIDSCH_NODE *)v6);
              v4 = 1;
            }
          }
        }
        v5 = (unsigned int)(v5 + 1);
      }
      while ( (unsigned int)v5 < *((_DWORD *)a2 + 15) );
      if ( v4 )
      {
        *((_QWORD *)a2 + 172) = MEMORY[0xFFFFF78000000320];
        KeSetEvent((PRKEVENT)a2 + 56, 0, 0);
      }
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
}
