/*
 * XREFs of MiSetPfnOriginalPte @ 0x14017D2B0
 * Callers:
 *     MmFreeNonCachedMemory @ 0x1406B4910 (MmFreeNonCachedMemory.c)
 *     MiFillPagedPoolLockedDown @ 0x1406B6770 (MiFillPagedPoolLockedDown.c)
 *     MiGetFastLargePage @ 0x1406BECF0 (MiGetFastLargePage.c)
 * Callees:
 *     <none>
 */

void __fastcall MiSetPfnOriginalPte(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 16) = a2;
}
