/*
 * XREFs of MiChargeResident @ 0x14010EE5C
 * Callers:
 *     MiObtainSystemCharges @ 0x14002D65C (MiObtainSystemCharges.c)
 *     MmAdjustWorkingSetSizeEx @ 0x140030524 (MmAdjustWorkingSetSizeEx.c)
 *     MiAcquireNonPagedResources @ 0x14003CAA4 (MiAcquireNonPagedResources.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140053EC8 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MmChargeResources @ 0x14005DC3C (MmChargeResources.c)
 *     MiObtainMdlCharges @ 0x14007B0D0 (MiObtainMdlCharges.c)
 *     MiFindContiguousPages @ 0x1400B65D0 (MiFindContiguousPages.c)
 *     MiObtainFaultCharges @ 0x1400CDE40 (MiObtainFaultCharges.c)
 *     MiAllocatePagedPoolPages @ 0x1400F8A60 (MiAllocatePagedPoolPages.c)
 *     MiObtainNonPagedPoolCharges @ 0x14010ECE0 (MiObtainNonPagedPoolCharges.c)
 *     MiChargeForWriteInProgressPage @ 0x14010EDCC (MiChargeForWriteInProgressPage.c)
 *     MmCreateKernelStack @ 0x14010FBC0 (MmCreateKernelStack.c)
 *     MmStoreChargeResidentAvailableForRead @ 0x140121428 (MmStoreChargeResidentAvailableForRead.c)
 *     MmGrowKernelStackEx @ 0x1401359F0 (MmGrowKernelStackEx.c)
 *     MiGetFileHashPage @ 0x14013D880 (MiGetFileHashPage.c)
 *     MiStoreChargeReservedPages @ 0x140154858 (MiStoreChargeReservedPages.c)
 *     MmAllocateSpecialPool @ 0x140217008 (MmAllocateSpecialPool.c)
 *     MiEnableLargeSubsection @ 0x140218958 (MiEnableLargeSubsection.c)
 *     MiGetSubsectionCharges @ 0x14022129C (MiGetSubsectionCharges.c)
 *     MiMakePageBad @ 0x140225FD8 (MiMakePageBad.c)
 *     MmCreateProcessAddressSpace @ 0x14049C77C (MmCreateProcessAddressSpace.c)
 *     MiChargeSystemImageCommitment @ 0x1404B0FE4 (MiChargeSystemImageCommitment.c)
 *     MiConstructLoaderEntry @ 0x1404B65FC (MiConstructLoaderEntry.c)
 *     MiInsertVadCharges @ 0x1405136C0 (MiInsertVadCharges.c)
 *     MiCreatePagingFileMap @ 0x14054A5D0 (MiCreatePagingFileMap.c)
 *     MiInitializeSystemWorkingSetList @ 0x14057EA30 (MiInitializeSystemWorkingSetList.c)
 *     MiSessionCreateInternal @ 0x14057EB28 (MiSessionCreateInternal.c)
 *     MmObtainChargesToLockPagedPool @ 0x1405DA144 (MmObtainChargesToLockPagedPool.c)
 *     MiAllocatePerSessionProtos @ 0x1406BDAA4 (MiAllocatePerSessionProtos.c)
 *     MiMapUserLargePages @ 0x1406BEE28 (MiMapUserLargePages.c)
 *     MiAllocateDummyPage @ 0x14080276C (MiAllocateDummyPage.c)
 *     MiInitializeGapFrames @ 0x1408165A8 (MiInitializeGapFrames.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiChargeResident(ULONG_PTR *a1, unsigned __int64 a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // r11
  unsigned __int64 CachedResidentAvailable; // r10
  bool v5; // zf
  unsigned __int32 v6; // eax

  if ( a1 == &MiSystemPartition )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
    while ( a2 <= CachedResidentAvailable && (_DWORD)CachedResidentAvailable != -1 )
    {
      v6 = _InterlockedCompareExchange(
             (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
             CachedResidentAvailable - a2,
             CachedResidentAvailable);
      v5 = (_DWORD)CachedResidentAvailable == v6;
      CachedResidentAvailable = v6;
      if ( v5 )
        return 1LL;
    }
  }
  return MiChargePartitionResidentAvailable((__int64)a1, a2, a3);
}
