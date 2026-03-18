/*
 * XREFs of MiUnlockVa @ 0x14010C884
 * Callers:
 *     MiProtectPrivateMemory @ 0x1400371A0 (MiProtectPrivateMemory.c)
 *     MiSetProtectionOnSection @ 0x14003B7E0 (MiSetProtectionOnSection.c)
 *     NtUnlockVirtualMemory @ 0x1400EB680 (NtUnlockVirtualMemory.c)
 *     NtLockVirtualMemory @ 0x14010ABA8 (NtLockVirtualMemory.c)
 * Callees:
 *     MiUnlockWsle @ 0x14010C8E0 (MiUnlockWsle.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiUnlockVa(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r9
  __int64 v4; // r10

  v2 = MI_GET_PAGE_FRAME_FROM_PTE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  return MiUnlockWsle(v4, v3, 48 * v2 - 0x58000000000LL);
}
