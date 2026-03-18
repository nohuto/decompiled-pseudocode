/*
 * XREFs of SmFpFree @ 0x140054CF0
 * Callers:
 *     ?StUnlockAndUnmapRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z @ 0x14001F2C4 (-StUnlockAndUnmapRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z.c)
 *     ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x14001F350 (-StMapAndLockRegion@-$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z.c)
 *     ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z @ 0x1400350F0 (-SmStCompareRegionDataCallback@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z.c)
 *     SmKmUnlockMdl @ 0x140039E90 (SmKmUnlockMdl.c)
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x14005327C (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x1400533F8 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x140053590 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     ?SmIoCtxPrepareToQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@PEAU_SM_QUEUE_CONTEXT@1@@Z @ 0x140053ADC (-SmIoCtxPrepareToQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WOR.c)
 *     ?SmWorkItemFreeResource@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@@Z @ 0x140053C18 (-SmWorkItemFreeResource@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_C.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x14005D878 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     ?StDmpSinglePageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_IO_PARAMS@1@PEAXPEAU_ST_PAGE_LOCATION@1@@Z @ 0x14005DCDC (-StDmpSinglePageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14011FB50 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmKmStoreHelperCommandProcess @ 0x140120FFC (SmKmStoreHelperCommandProcess.c)
 *     ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x140121758 (-SmpPageEvict@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z.c)
 *     SmKmStoreHelperCommandCleanup @ 0x14024DFB0 (SmKmStoreHelperCommandCleanup.c)
 * Callees:
 *     SmKmFreeMdlForLock @ 0x14003AEF0 (SmKmFreeMdlForLock.c)
 *     SmAcquireReleaseCharges @ 0x14005DBA8 (SmAcquireReleaseCharges.c)
 *     MmUnmapLockedPages @ 0x1400A3B30 (MmUnmapLockedPages.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     MmUnmapReservedMapping @ 0x14020FA40 (MmUnmapReservedMapping.c)
 *     SmpFpReleaseResource @ 0x14024EAE4 (SmpFpReleaseResource.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall SmFpFree(__int64 a1, int a2, __int64 a3, struct _MDL *a4)
{
  void *MappedSystemVa; // rbx
  struct _MDL *v7; // r14

  MappedSystemVa = a4;
  if ( a2 < 5 )
  {
    v7 = 0LL;
  }
  else
  {
    v7 = a4;
    MappedSystemVa = a4->MappedSystemVa;
  }
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
      SmKmFreeMdlForLock((unsigned int *)MappedSystemVa);
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
