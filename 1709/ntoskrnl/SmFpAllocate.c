/*
 * XREFs of SmFpAllocate @ 0x140272DD0
 * Callers:
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140006590 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmIoCtxPrepareToQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@PEAU_SM_QUEUE_CONTEXT@1@@Z @ 0x1402671BC (-SmIoCtxPrepareToQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WOR.c)
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1402675D8 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 *     ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z @ 0x140267F20 (-SmStCompareRegionDataCallback@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z.c)
 *     ?SmStMapPhysicalRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x140268960 (-SmStMapPhysicalRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x14026A088 (-SmpPageEvict@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z.c)
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x14026D694 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z.c)
 *     SmKmStoreHelperCommandProcess @ 0x14027384C (SmKmStoreHelperCommandProcess.c)
 * Callees:
 *     SmAcquireReleaseCharges @ 0x1400059FC (SmAcquireReleaseCharges.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14009A990 (MmMapLockedPagesSpecifyCache.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x14014E860 (MmMapLockedPagesWithReservedMapping.c)
 *     SmKmAllocateMdlForLock @ 0x1402731C0 (SmKmAllocateMdlForLock.c)
 *     SmpFpWaitForResource @ 0x1402746D4 (SmpFpWaitForResource.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

unsigned __int64 __fastcall SmFpAllocate(PEX_SPIN_LOCK SpinLock, int a2, __int64 a3, __int64 a4, int a5)
{
  unsigned __int64 v8; // rbx
  PVOID MdlForLock; // rax
  void *v10; // rax
  ULONG Tag; // [rsp+58h] [rbp+10h]

  if ( a2 >= 5 )
  {
    if ( (*(_BYTE *)(a4 + 10) & 5) != 0 )
    {
      v8 = *(_QWORD *)(a4 + 24);
      goto LABEL_13;
    }
    MdlForLock = MmMapLockedPagesSpecifyCache((PMDL)a4, 0, MmCached, 0LL, 0, 0x40000010u);
    goto LABEL_12;
  }
  if ( a2 == 2 )
  {
    MdlForLock = (PVOID)SmKmAllocateMdlForLock((unsigned __int64)*((unsigned __int16 *)SpinLock + 46) << 12);
LABEL_12:
    v8 = (unsigned __int64)MdlForLock;
LABEL_13:
    if ( v8 )
      return v8;
    goto LABEL_14;
  }
  if ( a2 == 3 )
  {
    v8 = -(__int64)((unsigned int)SmAcquireReleaseCharges(
                                    (unsigned __int64)*((unsigned __int16 *)SpinLock + 47) << 12,
                                    1,
                                    0LL) != 0) & 0xFFFFFFFFFFFFFFF8uLL;
    goto LABEL_13;
  }
  if ( a2 != 4 )
  {
    Tag = 810708339;
    HIBYTE(Tag) = a2 + 48;
    MdlForLock = ExAllocatePoolWithTag(NonPagedPoolNx, *((unsigned __int16 *)SpinLock + a2 + 44), Tag);
    goto LABEL_12;
  }
  v8 = 0LL;
LABEL_14:
  if ( a5 )
  {
    v10 = (void *)SmpFpWaitForResource(SpinLock);
    v8 = (unsigned __int64)v10;
    if ( a2 >= 5 )
      MmMapLockedPagesWithReservedMapping(v10, 0x6D526D73u, (PMDL)a4, MmCached);
  }
  return v8;
}
