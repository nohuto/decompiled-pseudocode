/*
 * XREFs of MiUnlockVa @ 0x140134DC8
 * Callers:
 *     NtLockVirtualMemory @ 0x14007687C (NtLockVirtualMemory.c)
 *     MiSetProtectionOnSection @ 0x1400CEFC0 (MiSetProtectionOnSection.c)
 *     NtUnlockVirtualMemory @ 0x1400FA8B0 (NtUnlockVirtualMemory.c)
 *     MiProtectPrivateMemory @ 0x140106A80 (MiProtectPrivateMemory.c)
 * Callees:
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiUnlockVa(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // r9
  __int64 v4; // r10

  v2 = MI_GET_PAGE_FRAME_FROM_PTE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  return MiUnlockWsle(v4, v3, 48 * v2 - 0x58000000000LL);
}
