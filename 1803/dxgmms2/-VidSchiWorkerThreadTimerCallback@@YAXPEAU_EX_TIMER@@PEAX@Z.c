/*
 * XREFs of ?VidSchiWorkerThreadTimerCallback@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x1C0013140
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiCheckYieldExitCondition @ 0x1C0013234 (VidSchiCheckYieldExitCondition.c)
 *     McTemplateK0p @ 0x1C0023F00 (McTemplateK0p.c)
 */

void __fastcall VidSchiWorkerThreadTimerCallback(struct _EX_TIMER *a1, void *a2)
{
  LARGE_INTEGER v3; // rbp
  char v4; // di
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF
  char v9; // [rsp+68h] [rbp+10h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+70h] [rbp+18h] BYREF

  v3 = KeQueryPerformanceCounter(&PerformanceFrequency);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)a2 + 238, &LockHandle);
  if ( v3.QuadPart >= *((_QWORD *)a2 + 21) )
  {
    ExCancelTimer(*((_QWORD *)a2 + 20), 0LL);
    if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0p(v6, &EventYieldCancelExpirationTimer, v7, *((_QWORD *)a2 + 2));
    *((_QWORD *)a2 + 21) = 0LL;
  }
  else
  {
    v4 = 0;
    v5 = 0LL;
    if ( *((_DWORD *)a2 + 16) )
    {
      do
      {
        VidSchiCheckYieldExitCondition(*((struct _VIDSCH_NODE **)a2 + v5 + 55));
        if ( v9 )
          v4 = 1;
        v5 = (unsigned int)(v5 + 1);
      }
      while ( (unsigned int)v5 < *((_DWORD *)a2 + 16) );
      if ( v4 )
      {
        *((_QWORD *)a2 + 175) = MEMORY[0xFFFFF78000000320];
        KeSetEvent((PRKEVENT)a2 + 57, 0, 0);
      }
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
}
