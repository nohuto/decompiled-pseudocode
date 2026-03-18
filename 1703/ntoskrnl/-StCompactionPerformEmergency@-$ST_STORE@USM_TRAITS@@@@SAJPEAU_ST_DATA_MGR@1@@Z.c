/*
 * XREFs of ?StCompactionPerformEmergency@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x14024A718
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1400549C8 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?StUnlockAndUnmapRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z @ 0x14001F2C4 (-StUnlockAndUnmapRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z.c)
 *     ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x14001F350 (-StMapAndLockRegion@-$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z.c)
 *     ?SmStIsRegionBusy@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z @ 0x14001FEBC (-SmStIsRegionBusy@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z.c)
 *     MmStoreDecommitVirtualMemory @ 0x14003ACDC (MmStoreDecommitVirtualMemory.c)
 *     ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x14005AB00 (-StCompactRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z.c)
 *     ?StDmCheckForCompaction@?$ST_STORE@USM_TRAITS@@@@SA?AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA_MGR@1@K@Z @ 0x14005B704 (-StDmCheckForCompaction@-$ST_STORE@USM_TRAITS@@@@SA-AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA.c)
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x14024BC90 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StCompactionPerformEmergency(__int64 a1)
{
  int v1; // r13d
  int v3; // ebp
  _WORD *v4; // rsi
  _WORD *v5; // r15
  __int64 v6; // rdi
  unsigned int v7; // r9d
  unsigned int v8; // r9d
  __int64 v9; // rax
  int v10; // r8d

  v1 = *(_DWORD *)(a1 + 784);
  v3 = 0;
  ST_STORE<SM_TRAITS>::StDmLazyRegionsWorker(a1, 0LL, 0LL);
  v4 = *(_WORD **)(a1 + 1016);
  v5 = &v4[*(unsigned int *)(a1 + 856)];
  if ( v4 < v5 )
  {
    while ( 1 )
    {
      if ( (*v4 & 0x1FFF) == 0 || (*v4 & 0x1FFFu) > (unsigned int)(v1 - 4096) >> 4 )
        goto LABEL_18;
      v6 = ((__int64)v4 - *(_QWORD *)(a1 + 1016)) >> 1;
      if ( !SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(*(_QWORD *)(a1 + 800), v6) )
      {
        if ( (unsigned __int8)*(_DWORD *)(a1 + 776) )
          v8 = 0;
        else
          v8 = v7 >> 13;
        if ( (_DWORD)v6 == *(_DWORD *)(16 * (v8 + 77LL) + a1) )
          goto LABEL_18;
        if ( (int)ST_STORE<SM_TRAITS>::StCompactRegions(a1, 0LL, v6, 0LL, v6, 0) >= 0 )
          goto LABEL_17;
        if ( (unsigned int)ST_STORE<SM_TRAITS>::StDmCheckForCompaction(a1, 2) != 2 )
          return v3 != 0 ? 0xC000022D : 0;
        v9 = ST_STORE<SM_TRAITS>::StMapAndLockRegion(a1, v6, 0, 1);
        if ( v9 )
        {
          if ( v9 != -1 )
            break;
        }
      }
      v3 = 1;
LABEL_18:
      if ( ++v4 >= v5 )
        return v3 != 0 ? 0xC000022D : 0;
    }
    if ( (int)ST_STORE<SM_TRAITS>::StCompactRegions(a1, v9, v6, v9, v6, 0) < 0 )
      NT_ASSERT("(((NTSTATUS)(Status)) >= 0)");
    ST_STORE<SM_TRAITS>::StUnlockAndUnmapRegion(a1, v6, v10);
LABEL_17:
    MmStoreDecommitVirtualMemory(
      ((16 * (*v4 & 0x1FFF) + 4095) & 0xFFFFF000)
    + (*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 6184LL) + 8LL * (unsigned int)v6) & 0x7FFFFFFFFFFF0000LL),
      v1 - ((16 * (*v4 & 0x1FFF) + 4095) & 0xFFFFF000));
    goto LABEL_18;
  }
  return v3 != 0 ? 0xC000022D : 0;
}
