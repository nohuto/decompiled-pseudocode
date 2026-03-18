/*
 * XREFs of MmFreeIsrStack @ 0x1406E5004
 * Callers:
 *     KiStartDynamicProcessor @ 0x1406D7344 (KiStartDynamicProcessor.c)
 * Callees:
 *     MiGetPteAddress @ 0x14003799C (MiGetPteAddress.c)
 *     MiReleasePtes @ 0x140074F70 (MiReleasePtes.c)
 *     MmFreeIndependentPages @ 0x1405D59B0 (MmFreeIndependentPages.c)
 */

__int64 __fastcall MmFreeIsrStack(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int64 PteAddress; // rax
  unsigned __int64 v3; // r9

  v1 = a1 - 24576;
  MmFreeIndependentPages(a1 - 24576, 0x6000uLL);
  PteAddress = MiGetPteAddress(v1 - 4096);
  return MiReleasePtes((__int64)&qword_140389360, PteAddress, 1u, v3);
}
