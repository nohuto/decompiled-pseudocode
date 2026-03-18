/*
 * XREFs of ?StCompactionPerformEmergency@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x14026AAE0
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1402713C4 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140016D50 (KiQueryUnbiasedInterruptTime.c)
 *     MmStoreDecommitVirtualMemory @ 0x14022D870 (MmStoreDecommitVirtualMemory.c)
 *     ?SmStIsRegionBusy@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z @ 0x14026892C (-SmStIsRegionBusy@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z.c)
 *     ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x14026A3EC (-StCompactRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z.c)
 *     ?StDmCheckForCompaction@?$ST_STORE@USM_TRAITS@@@@SA?AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA_MGR@1@K@Z @ 0x14026B704 (-StDmCheckForCompaction@-$ST_STORE@USM_TRAITS@@@@SA-AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA.c)
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x14026D694 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x140270658 (-StMapAndLockRegion@-$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z.c)
 *     ?StUnlockAndUnmapRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z @ 0x1402712C4 (-StUnlockAndUnmapRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StCompactionPerformEmergency(__int64 a1)
{
  int v1; // edi
  int v3; // ebp
  int v4; // r12d
  unsigned int v5; // r13d
  __int64 UnbiasedInterruptTime; // rax
  __int64 v7; // rdx
  __int64 v8; // rsi
  _WORD *v9; // r14
  _WORD *v10; // r15
  _WORD *v11; // rdi
  unsigned __int64 v12; // rax
  unsigned int v13; // r11d
  __int64 v15; // rsi
  unsigned int v16; // r9d
  unsigned int v17; // r9d
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  int v22; // [rsp+70h] [rbp+8h]
  __int64 v23; // [rsp+78h] [rbp+10h]
  _WORD *v24; // [rsp+80h] [rbp+18h]

  v1 = *(_DWORD *)(a1 + 784);
  v22 = v1;
  v3 = 0;
  ST_STORE<SM_TRAITS>::StDmLazyRegionsWorker(a1, 0LL, 0LL);
  v4 = 0;
  v5 = (unsigned int)(v1 - 4096) >> 4;
  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
  v7 = *(_QWORD *)(a1 + 1032);
  v8 = UnbiasedInterruptTime;
  v23 = UnbiasedInterruptTime;
  v9 = (_WORD *)(v7 + 2LL * *(unsigned int *)(a1 + 1096));
  v24 = v9;
  v10 = (_WORD *)(v7 + 2LL * *(unsigned int *)(a1 + 856));
  while ( 2 )
  {
    v11 = v9;
    if ( v9 >= v10 )
      goto LABEL_29;
    do
    {
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 800) + 6100LL)
         + *(_DWORD *)(*(_QWORD *)(a1 + 800) + 6576LL)
         + *(_DWORD *)(*(_QWORD *)(a1 + 800) + 6096LL)
        && (v4 & 7) == 0
        && v4 )
      {
        v12 = KiQueryUnbiasedInterruptTime() - v8;
        if ( !(v13 >= 0x40 ? v12 < 0x1C9C380 : v12 < 0x2FAF080) )
          break;
      }
      if ( (*v11 & 0x1FFF) == 0 || (*v11 & 0x1FFFu) > v5 )
        goto LABEL_27;
      v15 = ((__int64)v11 - *(_QWORD *)(a1 + 1032)) >> 1;
      if ( !SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(*(_QWORD *)(a1 + 800), v15) )
      {
        if ( (unsigned __int8)*(_DWORD *)(a1 + 776) )
          v17 = 0;
        else
          v17 = v16 >> 13;
        if ( (_DWORD)v15 == *(_DWORD *)(a1 + 16 * (v17 + 78LL)) )
          goto LABEL_26;
        ++v4;
        if ( (int)ST_STORE<SM_TRAITS>::StCompactRegions(a1, 0LL, v15, 0LL, v15, 0) >= 0 )
          goto LABEL_25;
        if ( (unsigned int)ST_STORE<SM_TRAITS>::StDmCheckForCompaction(a1, 2LL, v18, v19) != 2 )
          break;
        v20 = ST_STORE<SM_TRAITS>::StMapAndLockRegion(a1, (unsigned int)v15, 0LL, 1LL);
        if ( v20 )
        {
          if ( v20 != -1 )
          {
            if ( (int)ST_STORE<SM_TRAITS>::StCompactRegions(a1, v20, v15, v20, v15, 0) < 0 )
              NT_ASSERT("(((NTSTATUS)(Status)) >= 0)");
            ST_STORE<SM_TRAITS>::StUnlockAndUnmapRegion(a1, (unsigned int)v15);
LABEL_25:
            MmStoreDecommitVirtualMemory(
              ((16 * (*v11 & 0x1FFF) + 4095) & 0xFFFFF000)
            + (*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 6216LL) + 8LL * (unsigned int)v15) & 0x7FFFFFFFFFFF0000LL),
              v22 - ((16 * (*v11 & 0x1FFF) + 4095) & 0xFFFFF000));
            goto LABEL_26;
          }
        }
      }
      v3 = 1;
LABEL_26:
      v8 = v23;
LABEL_27:
      ++v11;
    }
    while ( v11 < v10 );
    v9 = v24;
    v8 = v23;
LABEL_29:
    if ( v11 == v10 )
    {
      if ( v9 != *(_WORD **)(a1 + 1032) )
      {
        v10 = v9;
        v24 = *(_WORD **)(a1 + 1032);
        v9 = v24;
        continue;
      }
      *(_DWORD *)(a1 + 1096) = 0;
    }
    else
    {
      *(_DWORD *)(a1 + 1096) = ((__int64)v11 - *(_QWORD *)(a1 + 1032)) >> 1;
    }
    return v3 != 0 ? 0xC000022D : 0;
  }
}
