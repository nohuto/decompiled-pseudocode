/*
 * XREFs of ?StUnlockAndUnmapRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z @ 0x14001F2C4
 * Callers:
 *     ?StDmCurrentRegionSet@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x14001F170 (-StDmCurrentRegionSet@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x14013958C (-StCompactionPerformInMem@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StCompactionPerformEmergency@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x14024A718 (-StCompactionPerformEmergency@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     SmFpFree @ 0x140054CF0 (SmFpFree.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x14005D878 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StUnlockAndUnmapRegion(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // r9
  __int64 v5; // rbx
  __int64 v6; // r9
  __int64 result; // rax
  __int64 v8; // rax
  __int64 v9; // r10
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r10
  __int64 v12; // r10
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // r10

  v3 = *(_QWORD *)(a1 + 800);
  v5 = a2;
  if ( (*(_BYTE *)(v3 + 5989) & 4) != 0 )
  {
    SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(v3, a2, a3, v3);
  }
  else
  {
    v8 = *(_QWORD *)(v3 + 6184);
    v9 = *(_QWORD *)(v8 + 8LL * a2);
    v10 = v9 & 0xFFFFFFFFFFFFFFFEuLL;
    v11 = v9 & 0xFFFFFFFFFFFFFFF8uLL;
    *(_QWORD *)(v8 + 8LL * a2) = v10;
    if ( (v10 & 3) == 0 )
      SmFpFree(v3 + 6560, 5LL, KeGetCurrentThread(), v11);
  }
  v6 = *(_QWORD *)(a1 + 800);
  if ( (*(_BYTE *)(v6 + 5989) & 4) != 0 )
    return SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(*(_QWORD *)(a1 + 800), v5, a3, v6);
  result = *(_QWORD *)(v6 + 6184);
  v12 = *(_QWORD *)(result + 8 * v5);
  v13 = v12 & 0xFFFFFFFFFFFFFFFDuLL;
  v14 = v12 & 0xFFFFFFFFFFFFFFF8uLL;
  *(_QWORD *)(result + 8 * v5) = v13;
  if ( (v13 & 3) == 0 )
    return SmFpFree(v6 + 6560, 5LL, KeGetCurrentThread(), v14);
  return result;
}
