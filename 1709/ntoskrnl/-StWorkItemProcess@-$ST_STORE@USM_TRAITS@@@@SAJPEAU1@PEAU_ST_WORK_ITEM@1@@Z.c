/*
 * XREFs of ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1402713C4
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14000B530 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?StLazyWorkMgrRunExpiredWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z @ 0x140270400 (-StLazyWorkMgrRunExpiredWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z.c)
 * Callees:
 *     SmHpChunkHeapProtect @ 0x140006D94 (SmHpChunkHeapProtect.c)
 *     ?StDmInvalidateCurrentRegions@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z @ 0x140006DDC (-StDmInvalidateCurrentRegions@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z.c)
 *     SmKmStoreReference @ 0x14000A2E4 (SmKmStoreReference.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140016D50 (KiQueryUnbiasedInterruptTime.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     SmKmStoreRefFromStoreIndex @ 0x14011B054 (SmKmStoreRefFromStoreIndex.c)
 *     ?StAddRemoveRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14026A204 (-StAddRemoveRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StCompactionPerformEmergency@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x14026AAE0 (-StCompactionPerformEmergency@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x14026AD74 (-StCompactionPerformInMem@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StCompactionWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x14026B13C (-StCompactionWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StDmCheckForCompaction@?$ST_STORE@USM_TRAITS@@@@SA?AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA_MGR@1@K@Z @ 0x14026B704 (-StDmCheckForCompaction@-$ST_STORE@USM_TRAITS@@@@SA-AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA.c)
 *     ?StDmCombineLazyCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z @ 0x14026BFA8 (-StDmCombineLazyCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StDmDeviceIoCompletion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14026C84C (-StDmDeviceIoCompletion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmEtaRefresh@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x14026CDA8 (-StDmEtaRefresh@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x14026D694 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmPageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14026D96C (-StDmPageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14026DDA0 (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmPageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14026E5F8 (-StDmPageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_S.c)
 *     ?StEmptyStore@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x1402701FC (-StEmptyStore@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@K@Z.c)
 *     ?StGetStats@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140270284 (-StGetStats@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StLazyWorkMgrQueueWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE@1@KK@Z @ 0x140270310 (-StLazyWorkMgrQueueWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE.c)
 *     ?StLazyWorkMgrResetIdle@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@@Z @ 0x1402703A4 (-StLazyWorkMgrResetIdle@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@@Z.c)
 *     ?StMetaRegionsUpdate@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140270890 (-StMetaRegionsUpdate@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StQueueCompaction@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_COMPACTION_CHECK_RESULT@@@Z @ 0x140270CB4 (-StQueueCompaction@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_COMPACTION_CHECK_RESULT@.c)
 *     ?StStoreWorkItemCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140271290 (-StStoreWorkItemCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StWorkItemProcess(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rsi
  int v4; // eax
  unsigned int v5; // ebp
  int v6; // edi
  int v7; // r15d
  _DWORD *v8; // r14
  int v9; // edi
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // edi
  int v14; // edi
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v19; // edi
  int v20; // eax
  int v21; // eax
  unsigned int Stats; // eax
  int v23; // eax
  int v24; // eax
  __int64 v25; // rdi
  char v26; // bl
  int v27; // eax
  struct _EX_RUNDOWN_REF *v28; // rax

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
    ST_STORE<SM_TRAITS>::StLazyWorkMgrResetIdle((__int64)(a1 + 718));
  if ( !v6 )
  {
    Stats = ST_STORE<SM_TRAITS>::StDmPageAdd((__int64)(a1 + 10), v2);
    goto LABEL_66;
  }
  v9 = v6 - 1;
  if ( !v9 )
  {
    Stats = ST_STORE<SM_TRAITS>::StDmPageRemove((__int64)(a1 + 10), v2);
    goto LABEL_66;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    Stats = ST_STORE<SM_TRAITS>::StDmPageRetrieve((__int64)(a1 + 10), (__int64)(a1 + 124), v2);
    goto LABEL_66;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    Stats = ST_STORE<SM_TRAITS>::StGetStats((__int64)a1, v2);
    goto LABEL_66;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    if ( (*(_DWORD *)(v2 + 8) & 7) == 0 )
    {
      ST_STORE<SM_TRAITS>::StEmptyStore((__int64)a1, 0);
      v19 = 0;
      goto LABEL_67;
    }
    if ( (*(_DWORD *)(v2 + 8) & 7u) - 4 <= 1 )
    {
      Stats = ST_STORE<SM_TRAITS>::StAddRemoveRegions((__int64)a1, v2);
      v5 = 0;
      goto LABEL_66;
    }
    goto LABEL_46;
  }
  v13 = v12 - 1;
  if ( v13 )
  {
    v14 = v13 - 1;
    if ( v14 )
    {
      if ( v14 == 1 )
      {
        ST_STORE<SM_TRAITS>::StDmDeviceIoCompletion((__int64)a1 + ((*(_DWORD *)(v2 + 28) & 2) != 0 ? 2016LL : 80LL), v2);
        return 259;
      }
      else
      {
        return (unsigned int)-1073741822;
      }
    }
    v5 = 259;
    if ( *(_DWORD *)(v2 + 8) != 1 )
      v8 = (_DWORD *)v2;
    if ( !SmKmStoreReference((__int64)&SmGlobals, *(_DWORD *)(a1[3] + 6016LL)) )
    {
      v19 = -1073741431;
      goto LABEL_67;
    }
    v20 = *(_DWORD *)(v2 + 8);
    v19 = 0;
    v7 = 1;
    switch ( v20 )
    {
      case 1:
        v21 = *(_DWORD *)(v2 + 16);
        if ( v21 < 0 )
          goto LABEL_69;
        if ( v21 <= 1 )
        {
          Stats = ST_STORE<SM_TRAITS>::StCompactionWorker((__int64)a1 + (v21 != 0 ? 2016LL : 80LL), v16, v17, v18);
        }
        else
        {
          if ( v21 != 2 )
          {
            switch ( v21 )
            {
              case 3:
                ST_STORE<SM_TRAITS>::StDmInvalidateCurrentRegions((__int64)(a1 + 10));
                break;
              case 4:
                SmHpChunkHeapProtect((__int64)(a1 + 34), 0, 0);
                break;
              case 5:
                ST_STORE<SM_TRAITS>::StDmCombineLazyCleanup((__int64)(a1 + 10));
                break;
              case 6:
                v19 = -1073741811;
                break;
            }
LABEL_69:
            if ( v8 )
              ST_STORE<SM_TRAITS>::StStoreWorkItemCleanup((__int64)a1, v8);
            if ( !v7 )
              goto LABEL_73;
            goto LABEL_72;
          }
          Stats = ST_STORE<SM_TRAITS>::StDmLazyRegionsWorker((__int64)(a1 + 10), 0, (__int64)(a1 + 118));
        }
        goto LABEL_66;
      case 2:
        Stats = ST_STORE<SM_TRAITS>::StDmEtaRefresh((__int64)(a1 + 10));
LABEL_66:
        v19 = Stats;
LABEL_67:
        if ( v19 == -1073741818 )
          ST_STORE<SM_TRAITS>::StEmptyStore((__int64)a1, 0);
        goto LABEL_69;
      case 3:
        Stats = ST_STORE<SM_TRAITS>::StMetaRegionsUpdate((__int64)a1, v2);
        v8 = 0LL;
        goto LABEL_66;
      case 4:
        ST_STORE<SM_TRAITS>::StLazyWorkMgrQueueWork(
          a1[249],
          2LL,
          (*(_WORD *)(v2 + 14) & 1) != 0 ? 200 : 2000,
          (*(_WORD *)(v2 + 14) & 1) != 0 ? 2000 : 30000);
LABEL_72:
        v28 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(
                                          (__int64)&SmGlobals,
                                          *(_DWORD *)(a1[3] + 6016LL) & 0x3FF);
        ExReleaseRundownProtection_0(v28 + 1);
LABEL_73:
        if ( v5 != -1 )
          return v5;
        return v19;
      case 5:
        _InterlockedAnd16((volatile signed __int16 *)(v2 + 12), 0xFFFEu);
        goto LABEL_72;
      case 6:
        _InterlockedAnd16((volatile signed __int16 *)(v2 + 12), 0xFFFEu);
        if ( (unsigned __int64)(KiQueryUnbiasedInterruptTime() - a1[751]) >= 0x989680
          && (unsigned int)ST_STORE<SM_TRAITS>::StDmCheckForCompaction((__int64)(a1 + 10), 2) == 2 )
        {
          ST_STORE<SM_TRAITS>::StCompactionPerformEmergency((__int64)(a1 + 10));
          a1[751] = KiQueryUnbiasedInterruptTime();
        }
        goto LABEL_72;
    }
LABEL_46:
    v19 = -1073741811;
    goto LABEL_67;
  }
  v23 = *(_DWORD *)(v2 + 8) & 7;
  if ( v23 )
  {
    if ( v23 == 1 )
    {
      ST_STORE<SM_TRAITS>::StDmInvalidateCurrentRegions((__int64)(a1 + 10));
    }
    else if ( v23 == 3 )
    {
      v24 = ST_STORE<SM_TRAITS>::StDmCheckForCompaction((__int64)(a1 + 10), 0);
      if ( v24 )
        ST_STORE<SM_TRAITS>::StQueueCompaction((__int64)(a1 + 10), v24);
    }
    else
    {
      v25 = (__int64)(a1 + 10);
      do
      {
        if ( !(unsigned int)ST_STORE<SM_TRAITS>::StDmCheckForCompaction(v25, 1) )
          break;
        v26 = *(_BYTE *)(v25 + 1904);
        *(_BYTE *)(v25 + 1904) = v26 | 3;
        v27 = ST_STORE<SM_TRAITS>::StCompactionPerformInMem(v25, 0);
        *(_BYTE *)(v25 + 1904) ^= (v26 ^ *(_BYTE *)(v25 + 1904)) & 3;
      }
      while ( v27 >= 0 );
    }
  }
  else
  {
    ST_STORE<SM_TRAITS>::StDmEtaRefresh((__int64)(a1 + 10));
  }
  return 0;
}
