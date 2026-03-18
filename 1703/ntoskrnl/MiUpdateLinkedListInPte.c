/*
 * XREFs of MiUpdateLinkedListInPte @ 0x14017D130
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x1400A83B0 (MmUnmapViewInSystemCache.c)
 *     MiObtainSystemCacheView @ 0x1400A9C20 (MiObtainSystemCacheView.c)
 *     InsertTailListPte @ 0x1400ABE6C (InsertTailListPte.c)
 *     MmFreeSpecialPool @ 0x14021753C (MmFreeSpecialPool.c)
 * Callees:
 *     MiReverseSwizzleInvalidPte @ 0x14017D030 (MiReverseSwizzleInvalidPte.c)
 */

__int64 __fastcall MiUpdateLinkedListInPte(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rdx

  v1 = MiReverseSwizzleInvalidPte(a1);
  return MiSwizzleInvalidPte((v2 << 28) | v1 & 0xFFFFFFF);
}
