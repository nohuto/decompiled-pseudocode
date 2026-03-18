/*
 * XREFs of ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1400549C8
 * Callers:
 *     ?StLazyWorkMgrRunExpiredWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z @ 0x14003A9C4 (-StLazyWorkMgrRunExpiredWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140053EC8 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     SmHpChunkHeapProtect @ 0x14001EC34 (SmHpChunkHeapProtect.c)
 *     ?StDmInvalidateCurrentRegions@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z @ 0x14001F120 (-StDmInvalidateCurrentRegions@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z.c)
 *     SmKmStoreReference @ 0x140053794 (SmKmStoreReference.c)
 *     SmKmStoreRefFromStoreIndex @ 0x140053AB4 (SmKmStoreRefFromStoreIndex.c)
 *     ?StLazyWorkMgrResetIdle@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@@Z @ 0x140054BF0 (-StLazyWorkMgrResetIdle@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@@Z.c)
 *     ?StDmPageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140054D9C (-StDmPageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StLazyWorkMgrQueueWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE@1@KK@Z @ 0x140059944 (-StLazyWorkMgrQueueWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE.c)
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14005B2AC (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmCheckForCompaction@?$ST_STORE@USM_TRAITS@@@@SA?AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA_MGR@1@K@Z @ 0x14005B704 (-StDmCheckForCompaction@-$ST_STORE@USM_TRAITS@@@@SA-AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA.c)
 *     ?StDmPageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14005D274 (-StDmPageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_S.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14008AB1C (KiQueryUnbiasedInterruptTime.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ?StCompactionWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x140139500 (-StCompactionWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x14013958C (-StCompactionPerformInMem@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StQueueCompaction@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_COMPACTION_CHECK_RESULT@@@Z @ 0x14013C968 (-StQueueCompaction@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_COMPACTION_CHECK_RESULT@.c)
 *     ?StAddRemoveRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14024A530 (-StAddRemoveRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StCompactionPerformEmergency@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x14024A718 (-StCompactionPerformEmergency@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StDmCombineLazyCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z @ 0x14024AE1C (-StDmCombineLazyCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StDmDeviceIoCompletion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14024B13C (-StDmDeviceIoCompletion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmEtaRefresh@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x14024B690 (-StDmEtaRefresh@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x14024BC90 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StEmptyStore@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x14024C840 (-StEmptyStore@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@K@Z.c)
 *     ?StGetStats@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14024C8C8 (-StGetStats@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StMetaRegionsUpdate@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14024C954 (-StMetaRegionsUpdate@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StStoreWorkItemCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14024D04C (-StStoreWorkItemCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StWorkItemProcess(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rsi
  int v4; // eax
  unsigned int v5; // ebp
  int v6; // edi
  int v7; // r15d
  unsigned __int64 v8; // r14
  unsigned int Stats; // eax
  unsigned int v10; // edi
  int v13; // edi
  int v14; // edi
  int v15; // edi
  int v16; // edi
  int v17; // edi
  __int64 v18; // rcx
  int v19; // eax
  struct _EX_RUNDOWN_REF *v20; // rax
  int v21; // eax
  int v22; // eax
  __int64 v23; // rdi
  __int64 v24; // rcx
  unsigned int v25; // eax
  char v26; // bl
  int v27; // eax

  v2 = a2;
  if ( (a2 & 1) != 0 )
  {
    v4 = 1;
    v2 = a2 & 0xFFFFFFFFFFFFFFFEuLL;
  }
  else
  {
    v4 = 0;
  }
  v5 = -1;
  v6 = *(_DWORD *)v2 & 7;
  v7 = 0;
  v8 = 0LL;
  if ( !v4 )
    ST_STORE<SM_TRAITS>::StLazyWorkMgrResetIdle(a1 + 5712);
  if ( !v6 )
  {
    Stats = ST_STORE<SM_TRAITS>::StDmPageAdd(a1 + 80, v2);
LABEL_7:
    v10 = Stats;
    goto LABEL_8;
  }
  v13 = v6 - 1;
  if ( !v13 )
  {
    Stats = ST_STORE<SM_TRAITS>::StDmPageRemove((struct NP_CONTEXT::NP_CTX *)(a1 + 80));
    goto LABEL_7;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    Stats = ST_STORE<SM_TRAITS>::StDmPageRetrieve(a1 + 80, a1 + 992, v2);
    goto LABEL_7;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    Stats = ST_STORE<SM_TRAITS>::StGetStats(a1, v2);
    goto LABEL_7;
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    if ( (*(_DWORD *)(v2 + 8) & 7) == 0 )
    {
      ST_STORE<SM_TRAITS>::StEmptyStore(a1, 0LL);
      v10 = 0;
LABEL_8:
      if ( v10 == -1073741818 )
        ST_STORE<SM_TRAITS>::StEmptyStore(a1, 0LL);
      goto LABEL_10;
    }
    if ( (*(_DWORD *)(v2 + 8) & 7u) - 4 <= 1 )
    {
      Stats = ST_STORE<SM_TRAITS>::StAddRemoveRegions(a1, v2);
      v5 = 0;
      goto LABEL_7;
    }
LABEL_67:
    v10 = -1073741811;
    goto LABEL_8;
  }
  v17 = v16 - 1;
  if ( v17 )
  {
    v10 = v17 - 1;
    if ( v10 )
    {
      if ( v10 == 1 )
      {
        ST_STORE<SM_TRAITS>::StDmDeviceIoCompletion(a1 + ((*(_BYTE *)(v2 + 28) & 2) != 0 ? 2000LL : 80LL), v2);
        return 259;
      }
      else
      {
        return (unsigned int)-1073741822;
      }
    }
    v5 = 259;
    if ( *(_DWORD *)(v2 + 8) != 1 )
      v8 = v2;
    if ( !SmKmStoreReference((__int64)&SmGlobals, *(_DWORD *)(*(_QWORD *)(a1 + 24) + 5984LL)) )
    {
      v10 = -1073741431;
      goto LABEL_8;
    }
    v19 = *(_DWORD *)(v2 + 8);
    v7 = 1;
    switch ( v19 )
    {
      case 1:
        v21 = *(_DWORD *)(v2 + 16);
        if ( v21 < 0 )
          goto LABEL_10;
        if ( v21 > 1 )
        {
          if ( v21 == 4 )
          {
            SmHpChunkHeapProtect(a1 + 272, 0);
            goto LABEL_10;
          }
          if ( v21 == 3 )
          {
            ST_STORE<SM_TRAITS>::StDmInvalidateCurrentRegions(a1 + 80);
            goto LABEL_10;
          }
          if ( v21 != 2 )
          {
            if ( v21 == 5 )
            {
              ST_STORE<SM_TRAITS>::StDmCombineLazyCleanup(a1 + 80);
            }
            else if ( v21 == 6 )
            {
              v10 = -1073741811;
            }
LABEL_10:
            if ( v8 )
              ST_STORE<SM_TRAITS>::StStoreWorkItemCleanup(a1, v8);
            if ( !v7 )
              goto LABEL_13;
            goto LABEL_33;
          }
          Stats = ST_STORE<SM_TRAITS>::StDmLazyRegionsWorker(a1 + 80, 0LL, a1 + 944);
        }
        else
        {
          Stats = ST_STORE<SM_TRAITS>::StCompactionWorker((v21 != 0 ? 0x780 : 0) + a1 + 80);
        }
        goto LABEL_7;
      case 2:
        Stats = ST_STORE<SM_TRAITS>::StDmEtaRefresh(a1 + 80);
        goto LABEL_7;
      case 3:
        Stats = ST_STORE<SM_TRAITS>::StMetaRegionsUpdate(a1, v2);
        v8 = 0LL;
        goto LABEL_7;
      case 4:
        ST_STORE<SM_TRAITS>::StLazyWorkMgrQueueWork(
          *(_QWORD *)(a1 + 1976),
          2LL,
          (*(_WORD *)(v2 + 14) & 1) != 0 ? 200 : 2000,
          (*(_WORD *)(v2 + 14) & 1) != 0 ? 2000 : 30000);
        goto LABEL_33;
      case 5:
        _InterlockedAnd16((volatile signed __int16 *)(v2 + 12), 0xFFFEu);
LABEL_33:
        v20 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(
                                          (__int64)&SmGlobals,
                                          *(_DWORD *)(*(_QWORD *)(a1 + 24) + 5984LL) & 0x3FF);
        ExReleaseRundownProtection(v20 + 1);
LABEL_13:
        if ( v5 != -1 )
          return v5;
        return v10;
      case 6:
        _InterlockedAnd16((volatile signed __int16 *)(v2 + 12), 0xFFFEu);
        LOBYTE(v18) = 1;
        if ( (unsigned __int64)(KiQueryUnbiasedInterruptTime(v18) - *(_QWORD *)(a1 + 5976)) >= 0x989680
          && (unsigned int)ST_STORE<SM_TRAITS>::StDmCheckForCompaction(a1 + 80, 2LL) == 2 )
        {
          ST_STORE<SM_TRAITS>::StCompactionPerformEmergency(a1 + 80);
          LOBYTE(v24) = 1;
          *(_QWORD *)(a1 + 5976) = KiQueryUnbiasedInterruptTime(v24);
        }
        goto LABEL_33;
    }
    goto LABEL_67;
  }
  v22 = *(_DWORD *)(v2 + 8) & 7;
  if ( v22 )
  {
    if ( v22 == 1 )
    {
      ST_STORE<SM_TRAITS>::StDmInvalidateCurrentRegions(a1 + 80);
    }
    else if ( v22 == 3 )
    {
      v25 = ST_STORE<SM_TRAITS>::StDmCheckForCompaction(a1 + 80, 0LL);
      if ( v25 )
        ST_STORE<SM_TRAITS>::StQueueCompaction(a1 + 80, v25);
    }
    else
    {
      v23 = a1 + 80;
      do
      {
        if ( !(unsigned int)ST_STORE<SM_TRAITS>::StDmCheckForCompaction(v23, 1LL) )
          break;
        v26 = *(_BYTE *)(v23 + 1888);
        *(_BYTE *)(v23 + 1888) = v26 | 3;
        v27 = ST_STORE<SM_TRAITS>::StCompactionPerformInMem(v23, 0LL);
        *(_BYTE *)(v23 + 1888) ^= (*(_BYTE *)(v23 + 1888) ^ v26) & 3;
      }
      while ( v27 >= 0 );
    }
  }
  else
  {
    ST_STORE<SM_TRAITS>::StDmEtaRefresh(a1 + 80);
  }
  return 0;
}
