/*
 * XREFs of IoFreeMdl @ 0x1400E6070
 * Callers:
 *     IopBuildDeviceIoControlRequest @ 0x140060870 (IopBuildDeviceIoControlRequest.c)
 *     IopfCompleteRequest @ 0x1400713E0 (IopfCompleteRequest.c)
 *     IopDropIrp @ 0x1400DD9D0 (IopDropIrp.c)
 *     IopBuildAsynchronousFsdRequest @ 0x1400DE350 (IopBuildAsynchronousFsdRequest.c)
 *     CcZeroDataInCache @ 0x14011ED48 (CcZeroDataInCache.c)
 *     MiZeroPageWrite @ 0x14011F014 (MiZeroPageWrite.c)
 *     CcPrepareMdlWrite @ 0x14012D230 (CcPrepareMdlWrite.c)
 *     CcMdlWriteComplete2 @ 0x14012F234 (CcMdlWriteComplete2.c)
 *     CcMdlWriteAbort @ 0x1401E20B0 (CcMdlWriteAbort.c)
 *     HvlGetCoverageData @ 0x1401E96F4 (HvlGetCoverageData.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x14044AD7C (WbMakeUserDataPagesKernelWritable.c)
 *     MiCreateImageFileMap @ 0x1404F8B90 (MiCreateImageFileMap.c)
 *     CcMdlRead @ 0x140507110 (CcMdlRead.c)
 *     CcMdlReadComplete2 @ 0x14053D7C4 (CcMdlReadComplete2.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x140575C50 (WbMakeUserExecutablePagesKernelWritable.c)
 *     sub_1405763A4 @ 0x1405763A4 (sub_1405763A4.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x1405C93B0 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     FsRtlpFreeMdlChain @ 0x1406B1134 (FsRtlpFreeMdlChain.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x1406B2500 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     IopCleanupFileObjectIosbRange @ 0x1406B4B00 (IopCleanupFileObjectIosbRange.c)
 *     IopExceptionCleanup @ 0x1406B4D78 (IopExceptionCleanup.c)
 *     IopSetFileObjectIosbRange @ 0x1406B622C (IopSetFileObjectIosbRange.c)
 *     IopLiveDumpFreeMappingResources @ 0x1406BADE4 (IopLiveDumpFreeMappingResources.c)
 *     PnprFreeMappingReserve @ 0x1406CC798 (PnprFreeMappingReserve.c)
 *     AlpcpFreeCompletionList @ 0x1406DD928 (AlpcpFreeCompletionList.c)
 *     AlpcpInitializeCompletionList @ 0x1406DD984 (AlpcpInitializeCompletionList.c)
 *     NtFreeUserPhysicalPages @ 0x1406E649C (NtFreeUserPhysicalPages.c)
 *     ViAllocateMapRegisterFile @ 0x1407ACF6C (ViAllocateMapRegisterFile.c)
 *     ViFreeMapRegisterFile @ 0x1407ADC0C (ViFreeMapRegisterFile.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x140074D40 (MmUnmapLockedPages.c)
 *     RtlpInterlockedPushEntrySList @ 0x140188FB0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __stdcall IoFreeMdl(PMDL Mdl)
{
  __int64 v2; // rcx
  struct _KPRCB *CurrentPrcb; // rdx
  _GENERAL_LOOKASIDE *P; // rcx

  if ( (Mdl->MdlFlags & 0x20) != 0 )
    MmUnmapLockedPages(Mdl->MappedSystemVa, Mdl);
  if ( (Mdl->MdlFlags & 8) != 0 )
  {
    v2 = *((unsigned __int16 *)&Mdl->MdlFlags + 1);
    if ( (unsigned int)v2 >= (unsigned int)KeNumberProcessors_0 )
    {
      CurrentPrcb = 0LL;
    }
    else
    {
      _mm_lfence();
      CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[v2];
    }
    if ( !CurrentPrcb )
      CurrentPrcb = KeGetCurrentPrcb();
    P = CurrentPrcb->PPLookasideList[3].P;
    ++P->TotalFrees;
    if ( LOWORD(P->ListHead.Alignment) < P->Depth
      || (++P->FreeMisses,
          P = CurrentPrcb->PPLookasideList[3].L,
          ++P->TotalFrees,
          LOWORD(P->ListHead.Alignment) < P->Depth) )
    {
      RtlpInterlockedPushEntrySList(&P->ListHead, (PSLIST_ENTRY)Mdl);
    }
    else
    {
      ++P->FreeMisses;
      ((void (__fastcall *)(PMDL))P->FreeEx)(Mdl);
    }
  }
  else
  {
    ExFreePoolWithTag(Mdl, 0);
  }
}
