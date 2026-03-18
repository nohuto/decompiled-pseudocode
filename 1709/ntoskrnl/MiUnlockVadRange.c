/*
 * XREFs of MiUnlockVadRange @ 0x1405405F8
 * Callers:
 *     MmAssignProcessToJob @ 0x1400D43A8 (MmAssignProcessToJob.c)
 *     NtUnlockVirtualMemory @ 0x1400EB680 (NtUnlockVirtualMemory.c)
 *     NtLockVirtualMemory @ 0x14010ABA8 (NtLockVirtualMemory.c)
 *     MiCloneProcessAddressSpace @ 0x14057A87C (MiCloneProcessAddressSpace.c)
 * Callees:
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14003DE40 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiUnlockVadRangeHelper @ 0x140540634 (MiUnlockVadRangeHelper.c)
 */

__int64 __fastcall MiUnlockVadRange(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rbx

  CurrentThread = KeGetCurrentThread();
  MiUnlockVadRangeHelper(a1, a2, a3, 0LL);
  return UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
}
