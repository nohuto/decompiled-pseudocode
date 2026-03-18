/*
 * XREFs of MiAddZeroingThreads @ 0x14015D0DC
 * Callers:
 *     MiReassessZeroThreads @ 0x14015C5D8 (MiReassessZeroThreads.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 */

__int64 __fastcall MiAddZeroingThreads(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // edi
  unsigned int v3; // ebp
  unsigned int v4; // esi
  __int64 v6; // r8
  signed __int32 v7[8]; // [rsp+0h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 144);
  v2 = 0;
  v3 = *(_DWORD *)(v1 + 104);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 24), &LockHandle);
  if ( v3 == *(_DWORD *)(v1 + 112) )
    goto LABEL_2;
  v4 = 1;
  do
  {
    if ( (*(_BYTE *)(*(_QWORD *)(v1 + 88) + 16LL * v3 + 8) & 2) != 0 )
      break;
    ++v2;
    ++v3;
  }
  while ( v3 != *(_DWORD *)(v1 + 112) );
  if ( !v2 )
  {
LABEL_2:
    *(_DWORD *)(v1 + 80) = 4;
    v4 = 0;
  }
  else
  {
    if ( *(_DWORD *)(v1 + 108) > v2 )
      *(_DWORD *)(v1 + 108) = v2;
    v6 = 2LL * *(unsigned int *)(v1 + 104);
    --*(_DWORD *)(v1 + 116);
    ++*(_DWORD *)(v1 + 104);
    _InterlockedOr(v7, 0);
    *(_BYTE *)(*(_QWORD *)(v1 + 88) + 8 * v6 + 8) &= ~1u;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  return v4;
}
