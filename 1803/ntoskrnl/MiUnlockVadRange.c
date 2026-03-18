/*
 * XREFs of MiUnlockVadRange @ 0x1404BFFA8
 * Callers:
 *     NtUnlockVirtualMemory @ 0x14004E260 (NtUnlockVirtualMemory.c)
 *     NtLockVirtualMemory @ 0x14013B8F4 (NtLockVirtualMemory.c)
 *     MmAssignProcessToJob @ 0x140531714 (MmAssignProcessToJob.c)
 *     MiCloneProcessAddressSpace @ 0x1405BF2F8 (MiCloneProcessAddressSpace.c)
 *     MiCoalescePlaceholderAllocations @ 0x14074D2C8 (MiCoalescePlaceholderAllocations.c)
 * Callees:
 *     UNLOCK_ADDRESS_SPACE @ 0x1400E6714 (UNLOCK_ADDRESS_SPACE.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1400FE990 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiUnlockVadRangeHelper @ 0x1404BFFFC (MiUnlockVadRangeHelper.c)
 */

_QWORD *__fastcall MiUnlockVadRange(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v7; // r8
  __int64 v8; // r9

  CurrentThread = KeGetCurrentThread();
  MiUnlockVadRangeHelper(a1, a2, a3, 0LL);
  if ( a4 )
    return UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, a1, v7, v8);
  else
    return (_QWORD *)UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
}
