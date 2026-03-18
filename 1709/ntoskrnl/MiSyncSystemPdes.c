/*
 * XREFs of MiSyncSystemPdes @ 0x1400B7A74
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x1404FB5AC (MmCreateProcessAddressSpace.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiUpdateSystemPdes @ 0x140213694 (MiUpdateSystemPdes.c)
 */

__int64 __fastcall MiSyncSystemPdes(__int64 a1)
{
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  while ( 1 )
  {
    KeAcquireInStackQueuedSpinLock(&qword_140389240, &LockHandle);
    if ( (*(_DWORD *)(a1 + 772) & 0x800000) == 0 )
      break;
    _InterlockedAnd((volatile signed __int32 *)(a1 + 772), 0xFF7FFFFF);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    MiUpdateSystemPdes(a1);
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 772), 0x800u);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}
