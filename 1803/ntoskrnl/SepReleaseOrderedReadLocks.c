/*
 * XREFs of SepReleaseOrderedReadLocks @ 0x1400BB618
 * Callers:
 *     NtCompareTokens @ 0x1404DFFD0 (NtCompareTokens.c)
 *     SepIsSiblingTokenByPointer @ 0x14056310C (SepIsSiblingTokenByPointer.c)
 *     SeTokenCanImpersonate @ 0x140599E60 (SeTokenCanImpersonate.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 */

void __fastcall SepReleaseOrderedReadLocks(__int64 a1, __int64 a2)
{
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegion();
  ExReleaseResourceLite(*(PERESOURCE *)(a2 + 48));
  KeLeaveCriticalRegion();
}
