/*
 * XREFs of MiReduceZeroingThreads @ 0x140152834
 * Callers:
 *     MiReassessZeroThreads @ 0x14015C5D8 (MiReassessZeroThreads.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 */

__int64 __fastcall MiReduceZeroingThreads(__int64 a1, int a2)
{
  __int64 v2; // rbx
  unsigned int v4; // esi
  unsigned int v5; // edi
  char v6; // r10
  char v7; // cl
  __int64 v8; // rax
  unsigned int v9; // r9d
  __int64 v10; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 144);
  v4 = 0;
  v5 = *(_DWORD *)(v2 + 112);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 24), &LockHandle);
  v6 = 1;
  do
  {
    v7 = *(_BYTE *)(*(_QWORD *)(v2 + 88) + 16LL * --v5 + 8);
    if ( (v7 & 2) == 0 )
    {
      if ( (v7 & 1) == 0 )
        break;
      v8 = *(_QWORD *)(v2 + 88);
      v4 = 1;
      --*(_DWORD *)(v2 + 116);
      *(_BYTE *)(*(_QWORD *)(v2 + 88) + 16LL * v5 + 8) = *(_BYTE *)(v8 + 16LL * v5 + 8) | 2;
    }
  }
  while ( v5 );
  v9 = v5;
  if ( v5 > *(_DWORD *)(v2 + 108) )
    v9 = *(_DWORD *)(v2 + 108);
  if ( v9 )
  {
    v4 = 1;
    if ( a2 == 1 )
    {
      v6 = 3;
      *(_DWORD *)(v2 + 80) = 4;
    }
    else
    {
      *(_DWORD *)(v2 + 116) += v9;
    }
    *(_DWORD *)(v2 + 104) -= v9;
    do
    {
      v10 = v5--;
      *(_BYTE *)(*(_QWORD *)(v2 + 88) + 16 * v10 + 8) |= v6;
      --v9;
    }
    while ( v9 );
  }
  else
  {
    *(_DWORD *)(v2 + 80) = 4;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  return v4;
}
