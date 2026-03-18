/*
 * XREFs of MiTerminateHardwareEnclave @ 0x140752DD8
 * Callers:
 *     MiDeleteEnclavePages @ 0x14075220C (MiDeleteEnclavePages.c)
 *     MiTerminateEnclave @ 0x140752D34 (MiTerminateEnclave.c)
 * Callees:
 *     MiGetPteAddress @ 0x14000A260 (MiGetPteAddress.c)
 *     MiDecommitHardwareEnclavePages @ 0x140263B34 (MiDecommitHardwareEnclavePages.c)
 */

__int64 __fastcall MiTerminateHardwareEnclave(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 PteAddress; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // r9
  __int64 v7; // r10
  __int64 result; // rax

  MiGetPteAddress(((*(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32)) << 12) | 0xFFF);
  PteAddress = MiGetPteAddress((*(unsigned int *)(v3 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v3 + 32) << 32)) << 12);
  result = MiDecommitHardwareEnclavePages(v7, v5, PteAddress, v6, 1);
  *(_DWORD *)(a2 + 64) |= 8u;
  return result;
}
