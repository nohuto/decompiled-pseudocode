/*
 * XREFs of MiUpdateLinkedListInPte @ 0x14017C9D8
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x140053130 (MmUnmapViewInSystemCache.c)
 *     MiObtainSystemCacheView @ 0x1400A3510 (MiObtainSystemCacheView.c)
 *     InsertTailListPte @ 0x1400A477C (InsertTailListPte.c)
 *     MmFreeSpecialPool @ 0x140220DA4 (MmFreeSpecialPool.c)
 * Callees:
 *     MiReverseSwizzleInvalidPte @ 0x14017C8D0 (MiReverseSwizzleInvalidPte.c)
 *     MiSwizzleInvalidPte @ 0x14017C938 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiUpdateLinkedListInPte(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rdx

  v1 = MiReverseSwizzleInvalidPte(a1);
  return MiSwizzleInvalidPte((v2 << 28) | v1 & 0xFFFFFFF);
}
