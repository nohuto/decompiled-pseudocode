/*
 * XREFs of MiSetPfnOriginalPte @ 0x1401A6920
 * Callers:
 *     MmFreeNonCachedMemory @ 0x14074B840 (MmFreeNonCachedMemory.c)
 *     MiGetFastLargePage @ 0x140755A14 (MiGetFastLargePage.c)
 * Callees:
 *     <none>
 */

void __fastcall MiSetPfnOriginalPte(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 16) = a2;
}
