/*
 * XREFs of HvlpDepositPages @ 0x1401E567C
 * Callers:
 *     HvlpStartLogicalProcessor @ 0x1401E673C (HvlpStartLogicalProcessor.c)
 *     HvlMapDeviceInterrupt @ 0x1401E7330 (HvlMapDeviceInterrupt.c)
 *     HvlSetHpetConfig @ 0x1401E7C60 (HvlSetHpetConfig.c)
 *     HvlSvmAttachPasidSpace @ 0x1401E8100 (HvlSvmAttachPasidSpace.c)
 *     HvlSvmCreatePasidSpace @ 0x1401E8240 (HvlSvmCreatePasidSpace.c)
 *     HvlSvmCreatePrQueue @ 0x1401E82C0 (HvlSvmCreatePrQueue.c)
 *     HvlSvmEnablePasid @ 0x1401E84E0 (HvlSvmEnablePasid.c)
 *     HvlSvmSetPasidAddressSpace @ 0x1401E8900 (HvlSvmSetPasidAddressSpace.c)
 *     HvlpAttachRootSvmDevice @ 0x1401E8A20 (HvlpAttachRootSvmDevice.c)
 *     PsDispatchIumService @ 0x140239D84 (PsDispatchIumService.c)
 *     HvlpAddPhysicalMemory @ 0x140269B10 (HvlpAddPhysicalMemory.c)
 *     HvlpCreateRootVirtualProcessor @ 0x1406876B8 (HvlpCreateRootVirtualProcessor.c)
 * Callees:
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x140077330 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     HvcallpNoHypervisorPresent @ 0x140130000 (HvcallpNoHypervisorPresent.c)
 *     HvlpAcquireHypercallPage @ 0x1401E5364 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401E5D98 (HvlpReleaseHypercallPage.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
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
  HvlpReleaseHypercallPage(v8);
  ExFreePoolWithTag(PartitionNodePagesForMdl, 0);
  return 0LL;
}
