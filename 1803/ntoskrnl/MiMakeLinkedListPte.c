/*
 * XREFs of MiMakeLinkedListPte @ 0x1401A65E4
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x140018AE0 (MmUnmapViewInSystemCache.c)
 *     RemoveListHeadPte @ 0x1400DE6D0 (RemoveListHeadPte.c)
 *     InsertTailListPte @ 0x1400E06C0 (InsertTailListPte.c)
 *     MmFreeSpecialPool @ 0x14025CAE4 (MmFreeSpecialPool.c)
 *     InitializeListHeadPte @ 0x14026D8CC (InitializeListHeadPte.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x1401A673C (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiMakeLinkedListPte(__int64 a1)
{
  return MiSwizzleInvalidPte(a1 << 28);
}
