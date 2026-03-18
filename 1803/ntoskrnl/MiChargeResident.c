/*
 * XREFs of MiChargeResident @ 0x140131D0C
 * Callers:
 *     MiObtainSystemCharges @ 0x1400717C0 (MiObtainSystemCharges.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1400906FC (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MmChargeResources @ 0x140097798 (MmChargeResources.c)
 *     MiObtainMdlCharges @ 0x1400B3AB8 (MiObtainMdlCharges.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1400C8FB8 (MmAdjustWorkingSetSizeEx.c)
 *     MmGrowKernelStackEx @ 0x1400CAE30 (MmGrowKernelStackEx.c)
 *     MiObtainFaultCharges @ 0x14011C410 (MiObtainFaultCharges.c)
 *     MiFindContiguousPages @ 0x140123CF0 (MiFindContiguousPages.c)
 *     MmCreateKernelStack @ 0x14012FD20 (MmCreateKernelStack.c)
 *     MiChargeForWriteInProgressPage @ 0x140131D70 (MiChargeForWriteInProgressPage.c)
 *     MiObtainPoolCharges @ 0x14013307C (MiObtainPoolCharges.c)
 *     MiAcquireNonPagedResources @ 0x14013A8EC (MiAcquireNonPagedResources.c)
 *     MiGetFileHashPage @ 0x140155748 (MiGetFileHashPage.c)
 *     MmStoreChargeResidentAvailableForRead @ 0x14016A458 (MmStoreChargeResidentAvailableForRead.c)
 *     MiStoreChargeReservedPages @ 0x14016FFA4 (MiStoreChargeReservedPages.c)
 *     MiAcquireNonPagedResourcesForce @ 0x140252618 (MiAcquireNonPagedResourcesForce.c)
 *     MmAllocateSpecialPool @ 0x14025C600 (MmAllocateSpecialPool.c)
 *     MiEnableLargeSubsection @ 0x14025D860 (MiEnableLargeSubsection.c)
 *     MiGetSubsectionCharges @ 0x140268104 (MiGetSubsectionCharges.c)
 *     MiGetCrossPartitionCloneCharges @ 0x14026AE50 (MiGetCrossPartitionCloneCharges.c)
 *     MiGetCrossPartitionCombineCharges @ 0x14026BCF0 (MiGetCrossPartitionCombineCharges.c)
 *     MiMakePageBad @ 0x1402701E8 (MiMakePageBad.c)
 *     MiInsertVadCharges @ 0x1404AEFA0 (MiInsertVadCharges.c)
 *     MiCreatePagingFileMap @ 0x1404BC908 (MiCreatePagingFileMap.c)
 *     MmCreateProcessAddressSpace @ 0x1405129E8 (MmCreateProcessAddressSpace.c)
 *     MiChargeSystemImageCommitment @ 0x1405F8AB4 (MiChargeSystemImageCommitment.c)
 *     MiConstructLoaderEntry @ 0x1405F8E14 (MiConstructLoaderEntry.c)
 *     MiInitializeSystemWorkingSetList @ 0x14060B070 (MiInitializeSystemWorkingSetList.c)
 *     MiSessionCreateInternal @ 0x14060B190 (MiSessionCreateInternal.c)
 *     PopPreallocateHibernateMemory @ 0x1406251EC (PopPreallocateHibernateMemory.c)
 *     MiAllocatePerSessionProtos @ 0x14075472C (MiAllocatePerSessionProtos.c)
 *     MiMapUserLargePages @ 0x140755B60 (MiMapUserLargePages.c)
 *     MiAllocateDummyPage @ 0x14089BBF0 (MiAllocateDummyPage.c)
 *     MiInitializeGapFrames @ 0x1408BAAB8 (MiInitializeGapFrames.c)
 * Callees:
 *     MiChargePartitionResidentAvailable @ 0x140134FF4 (MiChargePartitionResidentAvailable.c)
 */

__int64 __fastcall MiChargeResident(ULONG_PTR *a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  struct _KPRCB *CurrentPrcb; // r11
  unsigned __int64 CachedResidentAvailable; // r10
  bool v6; // zf
  unsigned __int32 v7; // eax

  if ( a1 == &MiSystemPartition )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
    while ( a2 <= CachedResidentAvailable && (_DWORD)CachedResidentAvailable != -1 )
    {
      v7 = _InterlockedCompareExchange(
             (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
             CachedResidentAvailable - a2,
             CachedResidentAvailable);
      v6 = (_DWORD)CachedResidentAvailable == v7;
      CachedResidentAvailable = v7;
      if ( v6 )
        return 1LL;
    }
  }
  return MiChargePartitionResidentAvailable(a1, a2, a3, a4);
}
