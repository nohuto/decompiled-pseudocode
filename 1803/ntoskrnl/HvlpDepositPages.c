/*
 * XREFs of HvlpDepositPages @ 0x140227578
 * Callers:
 *     PsDispatchIumService @ 0x14015CBE4 (PsDispatchIumService.c)
 *     HvlpStartLogicalProcessor @ 0x140228634 (HvlpStartLogicalProcessor.c)
 *     HvlDmaAllocateDeviceDomain @ 0x140228850 (HvlDmaAllocateDeviceDomain.c)
 *     HvlDmaAttachDeviceDomain @ 0x1402288F0 (HvlDmaAttachDeviceDomain.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x140228C20 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlDmaMapDeviceSparsePages @ 0x140228E60 (HvlDmaMapDeviceSparsePages.c)
 *     HvlDmaUnmapDeviceSparsePages @ 0x1402291A0 (HvlDmaUnmapDeviceSparsePages.c)
 *     HvlMapDeviceInterrupt @ 0x140229C50 (HvlMapDeviceInterrupt.c)
 *     HvlRegisterDeviceId @ 0x14022A2B0 (HvlRegisterDeviceId.c)
 *     HvlSetHpetConfig @ 0x14022A690 (HvlSetHpetConfig.c)
 *     HvlSvmAttachPasidSpace @ 0x14022AB30 (HvlSvmAttachPasidSpace.c)
 *     HvlSvmCreatePasidSpace @ 0x14022AC70 (HvlSvmCreatePasidSpace.c)
 *     HvlSvmCreatePrQueue @ 0x14022ACE0 (HvlSvmCreatePrQueue.c)
 *     HvlSvmEnablePasid @ 0x14022AEF0 (HvlSvmEnablePasid.c)
 *     HvlSvmSetPasidAddressSpace @ 0x14022B320 (HvlSvmSetPasidAddressSpace.c)
 *     HvlpAttachRootSvmDevice @ 0x14022B4A4 (HvlpAttachRootSvmDevice.c)
 *     HvlpAddPhysicalMemory @ 0x1402CA3C0 (HvlpAddPhysicalMemory.c)
 *     HvlpCreateRootVirtualProcessor @ 0x140717C40 (HvlpCreateRootVirtualProcessor.c)
 *     HvlUpdateMicrocode @ 0x140717DD0 (HvlUpdateMicrocode.c)
 * Callees:
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x1400B3440 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     HvcallpNoHypervisorPresent @ 0x140140870 (HvcallpNoHypervisorPresent.c)
 *     HvlpReleaseHypercallPage @ 0x140159B9C (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x140159BD4 (HvlpAcquireHypercallPage.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HvlpDepositPages(unsigned __int16 a1)
{
  _OWORD *PartitionNodePagesForMdl; // rbx
  __int64 v3; // rdi
  _QWORD *v4; // rax
  _OWORD *v5; // rcx
  _OWORD *v6; // rax
  __int128 v7; // xmm1
  PHYSICAL_ADDRESS v8[3]; // [rsp+40h] [rbp-28h] BYREF

  PartitionNodePagesForMdl = (_OWORD *)MmAllocatePartitionNodePagesForMdlEx(0, -1, 0LL, 0x80000uLL, 1, a1, 4, 0LL);
  if ( !PartitionNodePagesForMdl )
    return 3221225495LL;
  v3 = 8LL;
  v4 = (_QWORD *)HvlpAcquireHypercallPage(v8, 1, 0LL, 8LL);
  *v4 = HvlPartitionId;
  v5 = PartitionNodePagesForMdl + 3;
  v6 = v4 + 1;
  do
  {
    *v6 = *v5;
    v6[1] = v5[1];
    v6[2] = v5[2];
    v6[3] = v5[3];
    v6[4] = v5[4];
    v6[5] = v5[5];
    v6[6] = v5[6];
    v6 += 8;
    v7 = v5[7];
    v5 += 8;
    *(v6 - 1) = v7;
    --v3;
  }
  while ( v3 );
  HvcallCodeVa();
  HvlpReleaseHypercallPage((__int64)v8);
  ExFreePoolWithTag(PartitionNodePagesForMdl, 0);
  return 0LL;
}
