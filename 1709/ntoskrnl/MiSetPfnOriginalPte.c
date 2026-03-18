/*
 * XREFs of MiSetPfnOriginalPte @ 0x14017CAF8
 * Callers:
 *     MmFreeNonCachedMemory @ 0x1406E0910 (MmFreeNonCachedMemory.c)
 *     MiFillPagedPoolLockedDown @ 0x1406E3220 (MiFillPagedPoolLockedDown.c)
 *     MiGetFastLargePage @ 0x1406EBFA0 (MiGetFastLargePage.c)
 * Callees:
 *     <none>
 */

void __fastcall MiSetPfnOriginalPte(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 16) = a2;
}
