/*
 * XREFs of MiReduceZeroingThreads @ 0x14017BFA8
 * Callers:
 *     MiReassessZeroThreads @ 0x14017BC60 (MiReassessZeroThreads.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 */

__int64 __fastcall MiReduceZeroingThreads(__int64 a1, int a2)
{
  __int64 v2; // rbx
  unsigned int v4; // esi
  unsigned int v5; // edi
  char v6; // r10
  char v7; // cl
  unsigned int v8; // r9d
  __int64 v9; // r8
  __int64 v10; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 224);
  v4 = 0;
  v5 = *(_DWORD *)(v2 + 120);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 24), &LockHandle);
  v6 = 1;
  do
  {
    v7 = *(_BYTE *)(*(_QWORD *)(v2 + 96) + 16LL * --v5 + 8);
    if ( (v7 & 2) == 0 )
    {
      if ( (v7 & 1) == 0 )
        break;
      v10 = *(_QWORD *)(v2 + 96);
      v4 = 1;
      --*(_DWORD *)(v2 + 124);
      *(_BYTE *)(*(_QWORD *)(v2 + 96) + 16LL * v5 + 8) = *(_BYTE *)(v10 + 16LL * v5 + 8) | 2;
    }
  }
  while ( v5 );
  v8 = *(_DWORD *)(v2 + 116);
  if ( v5 <= v8 )
    v8 = v5;
  if ( v8 )
  {
    v4 = 1;
    if ( a2 == 1 )
    {
      v6 = 3;
      *(_DWORD *)(v2 + 88) = 4;
    }
    else
    {
      *(_DWORD *)(v2 + 124) += v8;
    }
    *(_DWORD *)(v2 + 112) -= v8;
    do
    {
      v9 = v5--;
      *(_BYTE *)(*(_QWORD *)(v2 + 96) + 16 * v9 + 8) |= v6;
      --v8;
    }
    while ( v8 );
  }
  else
  {
    *(_DWORD *)(v2 + 88) = 4;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  return v4;
}
