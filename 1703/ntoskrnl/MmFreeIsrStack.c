/*
 * XREFs of MmFreeIsrStack @ 0x1406B8384
 * Callers:
 *     KiStartDynamicProcessor @ 0x1406AC0A4 (KiStartDynamicProcessor.c)
 * Callees:
 *     MiGetPteAddress @ 0x1400CE300 (MiGetPteAddress.c)
 *     MmFreeIndependentPages @ 0x14056B860 (MmFreeIndependentPages.c)
 */

char __fastcall MmFreeIsrStack(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD *PteAddress; // rax

  v1 = a1 - 24576;
  MmFreeIndependentPages(a1 - 24576, 0x6000uLL);
  PteAddress = (_QWORD *)MiGetPteAddress(v1 - 4096);
  return MiReleasePtes((__int64)&qword_14036D0A0, PteAddress, 1u);
}
