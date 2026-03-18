/*
 * XREFs of MiAllocateKernelCfgBitmapPageTables @ 0x1406BD480
 * Callers:
 *     MiMarkKernelImageCfgBits @ 0x1405858D8 (MiMarkKernelImageCfgBits.c)
 * Callees:
 *     MiGetPteAddress @ 0x1400CE300 (MiGetPteAddress.c)
 */

__int64 __fastcall MiAllocateKernelCfgBitmapPageTables(__int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // r9
  __int64 PteAddress; // rax
  __int64 v4; // rdx

  MiGetPteAddress(qword_14036C008 + ((2 * (((unsigned __int64)a2 + 0x7FFFFFFFFFFFLL + a1) >> 4)) >> 3));
  PteAddress = MiGetPteAddress(v2);
  return MiMakeZeroedPageTables(PteAddress, v4, 1, 9);
}
