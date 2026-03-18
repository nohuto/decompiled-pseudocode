/*
 * XREFs of SmFpAllocate @ 0x140121890
 * Callers:
 *     ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z @ 0x1400350F0 (-SmStCompareRegionDataCallback@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z.c)
 *     ?SmIoCtxPrepareToQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@PEAU_SM_QUEUE_CONTEXT@1@@Z @ 0x140053ADC (-SmIoCtxPrepareToQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WOR.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14011FB50 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmKmStoreHelperCommandProcess @ 0x140120FFC (SmKmStoreHelperCommandProcess.c)
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x140121190 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 *     ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x140121758 (-SmpPageEvict@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z.c)
 *     ?SmStMapPhysicalRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x140249EEC (-SmStMapPhysicalRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x14024BC90 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     SmAcquireReleaseCharges @ 0x14005DBA8 (SmAcquireReleaseCharges.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400F8330 (MmMapLockedPagesSpecifyCache.c)
 *     SmKmAllocateMdlForLock @ 0x140121DA8 (SmKmAllocateMdlForLock.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x14020F8C0 (MmMapLockedPagesWithReservedMapping.c)
 *     SmpFpWaitForResource @ 0x14024EB6C (SmpFpWaitForResource.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 */

unsigned __int64 __fastcall SmFpAllocate(PEX_SPIN_LOCK SpinLock, int a2, __int64 a3, __int64 a4, int a5)
{
  PVOID MdlForLock; // rax
  unsigned __int64 v9; // rbx
  void *v11; // rax
  ULONG Tag; // [rsp+58h] [rbp+10h]

  if ( a2 >= 5 )
  {
    if ( (*(_BYTE *)(a4 + 10) & 5) == 0 )
    {
      MdlForLock = MmMapLockedPagesSpecifyCache((PMDL)a4, 0, MmCached, 0LL, 0, 0x40000010u);
      goto LABEL_6;
    }
    v9 = *(_QWORD *)(a4 + 24);
LABEL_7:
    if ( v9 )
      return v9;
    goto LABEL_15;
  }
  if ( a2 == 2 )
  {
    MdlForLock = (PVOID)SmKmAllocateMdlForLock((unsigned __int64)*((unsigned __int16 *)SpinLock + 46) << 12);
    goto LABEL_6;
  }
  if ( a2 == 3 )
  {
    v9 = -(__int64)((unsigned int)SmAcquireReleaseCharges(
                                    (unsigned __int64)*((unsigned __int16 *)SpinLock + 47) << 12,
                                    1,
                                    0) != 0) & 0xFFFFFFFFFFFFFFF8uLL;
    goto LABEL_7;
  }
  if ( a2 != 4 )
  {
    Tag = 810708339;
    HIBYTE(Tag) = a2 + 48;
    MdlForLock = ExAllocatePoolWithTag(NonPagedPoolNx, *((unsigned __int16 *)SpinLock + a2 + 44), Tag);
LABEL_6:
    v9 = (unsigned __int64)MdlForLock;
    goto LABEL_7;
  }
  v9 = 0LL;
LABEL_15:
  if ( a5 )
  {
    v11 = (void *)SmpFpWaitForResource(SpinLock);
    v9 = (unsigned __int64)v11;
    if ( a2 >= 5 )
      MmMapLockedPagesWithReservedMapping(v11, 0x6D526D73u, (PMDL)a4, MmCached);
  }
  return v9;
}
