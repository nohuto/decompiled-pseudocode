/*
 * XREFs of SmFpFree @ 0x140091540
 * Callers:
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x14008FC80 (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14008FE10 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x14008FFAC (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     ?SmIoCtxPrepareToQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@PEAU_SM_QUEUE_CONTEXT@1@@Z @ 0x14009034C (-SmIoCtxPrepareToQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WOR.c)
 *     ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x1400967E8 (-StMapAndLockRegion@-$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z.c)
 *     SmKmStoreHelperCommandProcess @ 0x140096ABC (SmKmStoreHelperCommandProcess.c)
 *     ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x140096C50 (-SmpPageEvict@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z.c)
 *     ?StUnlockAndUnmapRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z @ 0x140097378 (-StUnlockAndUnmapRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x14009740C (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     SmKmUnlockMdl @ 0x140097D04 (SmKmUnlockMdl.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140099390 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z @ 0x140099680 (-SmStCompareRegionDataCallback@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z.c)
 *     ?SmWorkItemFreeResource@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@@Z @ 0x1400CC674 (-SmWorkItemFreeResource@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_C.c)
 *     ?StDmpSinglePageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_IO_PARAMS@1@PEAXPEAU_ST_PAGE_LOCATION@1@@Z @ 0x140150FFC (-StDmpSinglePageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1.c)
 *     SmKmStoreHelperCommandCleanup @ 0x1402A7548 (SmKmStoreHelperCommandCleanup.c)
 * Callees:
 *     MmUnmapReservedMapping @ 0x140001420 (MmUnmapReservedMapping.c)
 *     SmKmFreeMdlForLock @ 0x14009728C (SmKmFreeMdlForLock.c)
 *     SmAcquireReleaseCharges @ 0x140097750 (SmAcquireReleaseCharges.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     MmUnmapLockedPages @ 0x140110450 (MmUnmapLockedPages.c)
 *     SmpFpReleaseResource @ 0x1402A8048 (SmpFpReleaseResource.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall SmFpFree(__int64 a1, int a2, __int64 a3, struct _MDL *a4)
{
  void *MappedSystemVa; // rbx
  struct _MDL *v7; // r14

  MappedSystemVa = a4;
  v7 = a4;
  if ( a2 < 5 )
    v7 = 0LL;
  else
    MappedSystemVa = a4->MappedSystemVa;
  if ( *(_QWORD *)(a1 + 104) == a3 && (unsigned int)SmpFpReleaseResource((PEX_SPIN_LOCK)a1) )
  {
    if ( a2 >= 5 )
      MmUnmapReservedMapping(MappedSystemVa, 0x6D526D73u, v7);
    if ( !*(_BYTE *)(a1 + 86) )
    {
      _InterlockedExchange64((volatile __int64 *)(a1 + 104), 0LL);
      KeSetEvent((PRKEVENT)(a1 + 8), 0, 0);
    }
  }
  else if ( a2 < 5 )
  {
    if ( a2 == 2 )
    {
      SmKmFreeMdlForLock(MappedSystemVa);
    }
    else if ( a2 == 3 )
    {
      SmAcquireReleaseCharges((unsigned __int64)*(unsigned __int16 *)(a1 + 94) << 12, 1LL, 1LL);
    }
    else
    {
      ExFreePoolWithTag(MappedSystemVa, 0);
    }
  }
  else
  {
    MmUnmapLockedPages(MappedSystemVa, v7);
  }
}
