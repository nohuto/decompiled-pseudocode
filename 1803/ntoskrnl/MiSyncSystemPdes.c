/*
 * XREFs of MiSyncSystemPdes @ 0x1400709B4
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x1405129E8 (MmCreateProcessAddressSpace.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiUpdateSystemPdes @ 0x14025191C (MiUpdateSystemPdes.c)
 */

__int64 __fastcall MiSyncSystemPdes(__int64 a1)
{
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_1403CC4C0, &LockHandle);
  if ( (*(_DWORD *)(a1 + 772) & 0x800000) != 0 )
  {
    _InterlockedAnd((volatile signed __int32 *)(a1 + 772), 0xFF7FFFFF);
    MiUpdateSystemPdes(a1);
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 772), 0x800u);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}
