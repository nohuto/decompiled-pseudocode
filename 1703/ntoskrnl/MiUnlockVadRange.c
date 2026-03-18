/*
 * XREFs of MiUnlockVadRange @ 0x14054B6D0
 * Callers:
 *     NtLockVirtualMemory @ 0x14007687C (NtLockVirtualMemory.c)
 *     NtUnlockVirtualMemory @ 0x1400FA8B0 (NtUnlockVirtualMemory.c)
 *     MmAssignProcessToJob @ 0x14011D7EC (MmAssignProcessToJob.c)
 *     MiCloneProcessAddressSpace @ 0x14041DF70 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     MiUnlockVadRangeHelper @ 0x14054B70C (MiUnlockVadRangeHelper.c)
 */

__int64 __fastcall MiUnlockVadRange(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rbx

  CurrentThread = KeGetCurrentThread();
  MiUnlockVadRangeHelper(a1, a2, a3, 0LL);
  return UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
}
