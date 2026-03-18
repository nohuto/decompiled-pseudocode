/*
 * XREFs of MiMakeLinkedListPte @ 0x14017C790
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x140053130 (MmUnmapViewInSystemCache.c)
 *     RemoveListHeadPte @ 0x1400A3BF4 (RemoveListHeadPte.c)
 *     InsertTailListPte @ 0x1400A477C (InsertTailListPte.c)
 *     MmFreeSpecialPool @ 0x140220DA4 (MmFreeSpecialPool.c)
 *     InitializeListHeadPte @ 0x140234CA0 (InitializeListHeadPte.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x14017C938 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiMakeLinkedListPte(__int64 a1)
{
  return MiSwizzleInvalidPte(a1 << 28);
}
