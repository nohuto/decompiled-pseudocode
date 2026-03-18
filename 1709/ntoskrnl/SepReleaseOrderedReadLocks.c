/*
 * XREFs of SepReleaseOrderedReadLocks @ 0x14011C128
 * Callers:
 *     SeTokenCanImpersonate @ 0x1404CEBB0 (SeTokenCanImpersonate.c)
 *     NtCompareTokens @ 0x140512FAC (NtCompareTokens.c)
 *     SepIsSiblingTokenByPointer @ 0x140573C84 (SepIsSiblingTokenByPointer.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 */

void __fastcall SepReleaseOrderedReadLocks(__int64 a1, __int64 a2)
{
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegion();
  ExReleaseResourceLite(*(PERESOURCE *)(a2 + 48));
  KeLeaveCriticalRegion();
}
