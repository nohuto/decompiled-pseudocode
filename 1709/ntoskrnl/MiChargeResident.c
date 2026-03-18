/*
 * XREFs of MiChargeResident @ 0x14002ADAC
 * Callers:
 *     MmChargeResources @ 0x140005A48 (MmChargeResources.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14000ABF8 (MmAdjustWorkingSetSizeEx.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14000B530 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MmCreateKernelStack @ 0x140029020 (MmCreateKernelStack.c)
 *     MiObtainFaultCharges @ 0x1400383C0 (MiObtainFaultCharges.c)
 *     MiMigratePfn @ 0x14004A320 (MiMigratePfn.c)
 *     MiFindContiguousPages @ 0x140078120 (MiFindContiguousPages.c)
 *     MiAllocatePagedPoolPages @ 0x14009B1E0 (MiAllocatePagedPoolPages.c)
 *     MiObtainMdlCharges @ 0x1400CBE04 (MiObtainMdlCharges.c)
 *     MiAcquireNonPagedResources @ 0x1400CF9DC (MiAcquireNonPagedResources.c)
 *     MiObtainNonPagedPoolCharges @ 0x1400F74DC (MiObtainNonPagedPoolCharges.c)
 *     MiChargeForWriteInProgressPage @ 0x14011F45C (MiChargeForWriteInProgressPage.c)
 *     MiObtainSystemCharges @ 0x1401227CC (MiObtainSystemCharges.c)
 *     MiStoreChargeReservedPages @ 0x140137414 (MiStoreChargeReservedPages.c)
 *     MmGrowKernelStackEx @ 0x140151490 (MmGrowKernelStackEx.c)
 *     MiAcquireNonPagedResourcesForce @ 0x140214450 (MiAcquireNonPagedResourcesForce.c)
 *     MmAllocateSpecialPool @ 0x140220868 (MmAllocateSpecialPool.c)
 *     MiEnableLargeSubsection @ 0x140222C04 (MiEnableLargeSubsection.c)
 *     MmStoreChargeResidentAvailableForRead @ 0x14022D844 (MmStoreChargeResidentAvailableForRead.c)
 *     MiGetSubsectionCharges @ 0x14022DF48 (MiGetSubsectionCharges.c)
 *     MiGetCrossPartitionCloneCharges @ 0x1402301C0 (MiGetCrossPartitionCloneCharges.c)
 *     MiGetCrossPartitionCombineCharges @ 0x140231884 (MiGetCrossPartitionCombineCharges.c)
 *     MiGetFileHashPage @ 0x140231FD0 (MiGetFileHashPage.c)
 *     MiMakePageBad @ 0x1402385C8 (MiMakePageBad.c)
 *     MiConstructLoaderEntry @ 0x140471244 (MiConstructLoaderEntry.c)
 *     MiCreatePagingFileMap @ 0x14048D708 (MiCreatePagingFileMap.c)
 *     MiInsertVadCharges @ 0x1404D0090 (MiInsertVadCharges.c)
 *     MiChargeSystemImageCommitment @ 0x1404F5E38 (MiChargeSystemImageCommitment.c)
 *     MmCreateProcessAddressSpace @ 0x1404FB5AC (MmCreateProcessAddressSpace.c)
 *     MiSessionCreateInternal @ 0x1405B3F68 (MiSessionCreateInternal.c)
 *     MiInitializeSystemWorkingSetList @ 0x1405B471C (MiInitializeSystemWorkingSetList.c)
 *     MmObtainChargesToLockPagedPool @ 0x1406E3434 (MmObtainChargesToLockPagedPool.c)
 *     MiAllocatePerSessionProtos @ 0x1406EAE50 (MiAllocatePerSessionProtos.c)
 *     MiMapUserLargePages @ 0x1406EC0E4 (MiMapUserLargePages.c)
 *     MiAllocateDummyPage @ 0x14082C7C0 (MiAllocateDummyPage.c)
 *     MiInitializeGapFrames @ 0x140849A88 (MiInitializeGapFrames.c)
 * Callees:
 *     MiChargePartitionResidentAvailable @ 0x1400C0428 (MiChargePartitionResidentAvailable.c)
 */

__int64 __fastcall MiChargeResident(ULONG_PTR *a1, unsigned __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // r11
  unsigned __int64 CachedResidentAvailable; // r10
  bool v4; // zf
  unsigned __int32 v5; // eax

  if ( a1 == &MiSystemPartition )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
    while ( a2 <= CachedResidentAvailable && (_DWORD)CachedResidentAvailable != -1 )
    {
      v5 = _InterlockedCompareExchange(
             (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
             CachedResidentAvailable - a2,
             CachedResidentAvailable);
      v4 = (_DWORD)CachedResidentAvailable == v5;
      CachedResidentAvailable = v5;
      if ( v4 )
        return 1LL;
    }
  }
  return MiChargePartitionResidentAvailable(a1);
}
