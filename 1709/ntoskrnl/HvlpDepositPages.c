/*
 * XREFs of HvlpDepositPages @ 0x1401EA4C8
 * Callers:
 *     HvlpStartLogicalProcessor @ 0x1401EB5C0 (HvlpStartLogicalProcessor.c)
 *     HvlDmaAllocateDeviceDomain @ 0x1401EB7E0 (HvlDmaAllocateDeviceDomain.c)
 *     HvlDmaAttachDeviceDomain @ 0x1401EB880 (HvlDmaAttachDeviceDomain.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x1401EBA30 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlMapDeviceInterrupt @ 0x1401EC5B0 (HvlMapDeviceInterrupt.c)
 *     HvlSetHpetConfig @ 0x1401ECE60 (HvlSetHpetConfig.c)
 *     HvlSvmAttachPasidSpace @ 0x1401ED300 (HvlSvmAttachPasidSpace.c)
 *     HvlSvmCreatePasidSpace @ 0x1401ED440 (HvlSvmCreatePasidSpace.c)
 *     HvlSvmCreatePrQueue @ 0x1401ED4B0 (HvlSvmCreatePrQueue.c)
 *     HvlSvmEnablePasid @ 0x1401ED6D0 (HvlSvmEnablePasid.c)
 *     HvlSvmSetPasidAddressSpace @ 0x1401EDAF0 (HvlSvmSetPasidAddressSpace.c)
 *     HvlpAttachRootSvmDevice @ 0x1401EDC10 (HvlpAttachRootSvmDevice.c)
 *     PsDispatchIumService @ 0x14024ED54 (PsDispatchIumService.c)
 *     HvlpAddPhysicalMemory @ 0x140294874 (HvlpAddPhysicalMemory.c)
 *     HvlpCreateRootVirtualProcessor @ 0x1406B30D4 (HvlpCreateRootVirtualProcessor.c)
 * Callees:
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x14011CC70 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     HvcallpNoHypervisorPresent @ 0x140132F60 (HvcallpNoHypervisorPresent.c)
 *     HvlpReleaseHypercallPage @ 0x140140F8C (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x140140FC4 (HvlpAcquireHypercallPage.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HvlpDepositPages(unsigned __int16 a1)
{
  char *PartitionNodePagesForMdl; // rbx
  __int64 v3; // rdi
  _QWORD *v4; // rax
  _OWORD *v5; // rcx
  _OWORD *v6; // rax
  __int128 v7; // xmm1
  PHYSICAL_ADDRESS v8[3]; // [rsp+40h] [rbp-28h] BYREF

  PartitionNodePagesForMdl = MmAllocatePartitionNodePagesForMdlEx(
                               0LL,
                               0xFFFFFFFFFFFFFFFFuLL,
                               0LL,
                               0x80000uLL,
                               1,
                               a1,
                               4,
                               0LL);
  if ( !PartitionNodePagesForMdl )
    return 3221225495LL;
  v3 = 8LL;
  v4 = (_QWORD *)HvlpAcquireHypercallPage(v8, 1, 0LL, 8LL);
  *v4 = HvlPartitionId;
  v5 = PartitionNodePagesForMdl + 48;
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
