/*
 * XREFs of VidSchSetNodePowerState @ 0x1C00142B0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiUpdateContextStatus @ 0x1C000A0C0 (VidSchiUpdateContextStatus.c)
 */

void __fastcall VidSchSetNodePowerState(__int64 a1, unsigned int a2, int a3, char a4)
{
  __int64 v5; // rdi
  char v6; // si
  char v7; // bp
  _QWORD *v8; // rdi
  _QWORD *v9; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v5 = *(_QWORD *)(a1 + 8LL * (a3 + (unsigned int)*(unsigned __int8 *)(a2 + a1 + 64)) + 416);
  if ( a4 )
  {
    if ( KeGetCurrentThread() == *(struct _KTHREAD **)(a1 + 144) )
    {
      v6 = 1;
    }
    else
    {
      v6 = 0;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1880), &LockHandle);
    }
    v7 = 0;
    *(_BYTE *)(v5 + 2796) = 1;
    v8 = (_QWORD *)(v5 + 2504);
    while ( 1 )
    {
      v9 = (_QWORD *)*v8;
      if ( (_QWORD *)*v8 == v8 )
        break;
      *((_DWORD *)v9 + 42) &= ~0x80u;
      v7 = 1;
      VidSchiUpdateContextStatus((__int64)(v9 - 1), (_QWORD *)5, 10466LL);
    }
    if ( !v6 )
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( v7 )
    {
      *(_QWORD *)(a1 + 1376) = MEMORY[0xFFFFF78000000320];
      KeSetEvent((PRKEVENT)(a1 + 1344), 0, 0);
    }
  }
  else
  {
    *(_BYTE *)(v5 + 2796) = 0;
  }
}
