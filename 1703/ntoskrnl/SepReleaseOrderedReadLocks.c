/*
 * XREFs of SepReleaseOrderedReadLocks @ 0x140024A90
 * Callers:
 *     SepIsSiblingTokenByPointer @ 0x14043FDC0 (SepIsSiblingTokenByPointer.c)
 *     SeTokenCanImpersonate @ 0x14047EAA0 (SeTokenCanImpersonate.c)
 *     NtCompareTokens @ 0x1405614B4 (NtCompareTokens.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 */

void __fastcall SepReleaseOrderedReadLocks(__int64 a1, __int64 a2)
{
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegion();
  ExReleaseResourceLite(*(PERESOURCE *)(a2 + 48));
  KeLeaveCriticalRegion();
}
