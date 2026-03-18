/*
 * XREFs of MiAllocateKernelCfgBitmapPageTables @ 0x14075408C
 * Callers:
 *     MiMarkKernelImageCfgBits @ 0x140605D78 (MiMarkKernelImageCfgBits.c)
 * Callees:
 *     MiGetPteAddress @ 0x14000A260 (MiGetPteAddress.c)
 *     MiMakeZeroedPageTables @ 0x1400490A0 (MiMakeZeroedPageTables.c)
 */

__int64 __fastcall MiAllocateKernelCfgBitmapPageTables(__int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // r9
  __int64 PteAddress; // rax
  __int64 v4; // rdx

  MiGetPteAddress(qword_1403CB4C8 + ((2 * (((unsigned __int64)a2 + 0x7FFFFFFFFFFFLL + a1) >> 4)) >> 3));
  PteAddress = MiGetPteAddress(v2);
  return (unsigned int)MiMakeZeroedPageTables(PteAddress, v4, 1u, 9) == 0 ? 0xC000009A : 0;
}
