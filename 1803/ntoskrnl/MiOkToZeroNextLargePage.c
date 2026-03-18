/*
 * XREFs of MiOkToZeroNextLargePage @ 0x14017B760
 * Callers:
 *     MiZeroLargePages @ 0x14017B634 (MiZeroLargePages.c)
 * Callees:
 *     KeResetEvent @ 0x140060F40 (KeResetEvent.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 */

__int64 __fastcall MiOkToZeroNextLargePage(__int64 a1, _DWORD *a2)
{
  __int64 v2; // r15
  __int64 v5; // r14
  LONG v7; // ebx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  v2 = *(_QWORD *)(a1 + 224);
  *a2 = 0;
  if ( *(_DWORD *)(v2 + 88) )
  {
    v5 = 2LL * *(unsigned int *)(a1 + 248);
    while ( 1 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(v2 + 96) + 8 * v5 + 8) & 3) == 0 )
        return 1LL;
      if ( (*(_BYTE *)(*(_QWORD *)(v2 + 96) + 8 * v5 + 8) & 2) != 0 )
        break;
      *a2 = 1;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 24), &LockHandle);
      if ( *(_DWORD *)(v2 + 88) == 4 )
      {
        --*(_DWORD *)(v2 + 124);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        __writecr8(LockHandle.OldIrql);
        return 0LL;
      }
      v7 = KeResetEvent((PRKEVENT)(v2 + 64));
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      if ( !v7 )
        KeWaitForSingleObject((PVOID)(v2 + 64), Executive, 0, 0, 0LL);
    }
    *(_BYTE *)(*(_QWORD *)(v2 + 96) + 8 * v5 + 8) |= 4u;
    _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(a1 + 224) + 56LL), 1u);
    return 0LL;
  }
  if ( !*(_BYTE *)(a1 + 256) )
  {
    *(_BYTE *)(a1 + 256) = 1;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 92), 0xFFFFFFFF) == 1 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 24), &LockHandle);
      if ( *(_DWORD *)(v2 + 88) != 4 )
        *(_DWORD *)(v2 + 88) = 1;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
    }
  }
  return 1LL;
}
