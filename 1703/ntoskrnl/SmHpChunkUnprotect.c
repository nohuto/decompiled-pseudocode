/*
 * XREFs of SmHpChunkUnprotect @ 0x1400599CC
 * Callers:
 *     ?StDmPageRecordUnprotect@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x140059904 (-StDmPageRecordUnprotect@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z.c)
 *     ?StDmCombinePageEntry@?$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_PAGE_RECORD@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_ENTRY@1@@Z @ 0x14005C128 (-StDmCombinePageEntry@-$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_PAGE_RECORD@1@PEAU_ST_DATA_MGR@1@PEAU_S.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmHpChunkUnprotect(__int64 a1, __int64 a2)
{
  __int64 v3; // r9
  __int64 v4; // rcx

  v3 = *(unsigned int *)((a2 & 0xFFFFFFFFFFFFF000uLL) + 0x10);
  _BitScanReverse((unsigned int *)&v4, v3);
  return SmHpBufferProtect(v4, *(_QWORD *)(a1 + 8 * v4) + 16 * (v3 ^ (unsigned int)(1 << v4)), 1LL);
}
