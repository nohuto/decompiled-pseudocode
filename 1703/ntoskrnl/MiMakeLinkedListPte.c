/*
 * XREFs of MiMakeLinkedListPte @ 0x14017CF2C
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x1400A83B0 (MmUnmapViewInSystemCache.c)
 *     RemoveListHeadPte @ 0x1400AA5FC (RemoveListHeadPte.c)
 *     InsertTailListPte @ 0x1400ABE6C (InsertTailListPte.c)
 *     MmFreeSpecialPool @ 0x14021753C (MmFreeSpecialPool.c)
 *     InitializeListHeadPte @ 0x140225E2C (InitializeListHeadPte.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMakeLinkedListPte(__int64 a1)
{
  return MiSwizzleInvalidPte(a1 << 28);
}
