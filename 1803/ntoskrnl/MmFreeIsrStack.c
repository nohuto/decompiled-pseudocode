/*
 * XREFs of MmFreeIsrStack @ 0x14074F430
 * Callers:
 *     KiStartDynamicProcessor @ 0x140741260 (KiStartDynamicProcessor.c)
 * Callees:
 *     MiGetPteAddress @ 0x14000A260 (MiGetPteAddress.c)
 *     MmFreeIndependentPages @ 0x1400AD1B0 (MmFreeIndependentPages.c)
 *     MiReleasePtes @ 0x140110560 (MiReleasePtes.c)
 */

char __fastcall MmFreeIsrStack(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int64 PteAddress; // rax

  v1 = a1 - 24576;
  MmFreeIndependentPages(a1 - 24576, 0x6000uLL);
  PteAddress = MiGetPteAddress(v1 - 4096);
  return MiReleasePtes((__int64)&qword_1403CC5E0, PteAddress, 1uLL);
}
