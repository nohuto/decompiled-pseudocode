/*
 * XREFs of IoFreeMdl @ 0x1401148E0
 * Callers:
 *     IopDropIrp @ 0x140011708 (IopDropIrp.c)
 *     MiZeroPageWrite @ 0x14002FFC4 (MiZeroPageWrite.c)
 *     CcPrepareMdlWrite @ 0x1400339A0 (CcPrepareMdlWrite.c)
 *     CcMdlWriteComplete2 @ 0x140036100 (CcMdlWriteComplete2.c)
 *     IopBuildDeviceIoControlRequest @ 0x14004A740 (IopBuildDeviceIoControlRequest.c)
 *     IopBuildAsynchronousFsdRequest @ 0x140081250 (IopBuildAsynchronousFsdRequest.c)
 *     IopfCompleteRequest @ 0x1400DEE70 (IopfCompleteRequest.c)
 *     CcZeroDataInCache @ 0x1401178EC (CcZeroDataInCache.c)
 *     CcMdlWriteAbort @ 0x1401DE3F0 (CcMdlWriteAbort.c)
 *     HvlGetCoverageData @ 0x1401E4A10 (HvlGetCoverageData.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x14043EF34 (WbMakeUserExecutablePagesKernelWritable.c)
 *     MiCreateImageFileMap @ 0x1404921D4 (MiCreateImageFileMap.c)
 *     CcMdlReadComplete2 @ 0x140543FDC (CcMdlReadComplete2.c)
 *     sub_140547D68 @ 0x140547D68 (sub_140547D68.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1405493C8 (WbMakeUserDataPagesKernelWritable.c)
 *     CcMdlRead @ 0x140549510 (CcMdlRead.c)
 *     AlpcpInitializeCompletionList @ 0x14056B364 (AlpcpInitializeCompletionList.c)
 *     AlpcpFreeCompletionList @ 0x14056C968 (AlpcpFreeCompletionList.c)
 *     ?Read@PC_ENVIRONMENT@@SAJPEAX0K_K@Z @ 0x1405C25B4 (-Read@PC_ENVIRONMENT@@SAJPEAX0K_K@Z.c)
 *     FsRtlpFreeMdlChain @ 0x140685D14 (FsRtlpFreeMdlChain.c)
 *     ?Write@PC_ENVIRONMENT@@SAJPEAX0K_K@Z @ 0x140687044 (-Write@PC_ENVIRONMENT@@SAJPEAX0K_K@Z.c)
 *     IopCleanupFileObjectIosbRange @ 0x140688B20 (IopCleanupFileObjectIosbRange.c)
 *     IopExceptionCleanup @ 0x140688D98 (IopExceptionCleanup.c)
 *     IopSetFileObjectIosbRange @ 0x14068A5DC (IopSetFileObjectIosbRange.c)
 *     IopLiveDumpFreeMappingResources @ 0x14068F120 (IopLiveDumpFreeMappingResources.c)
 *     PnprFreeMappingReserve @ 0x1406A1EF8 (PnprFreeMappingReserve.c)
 *     NtFreeUserPhysicalPages @ 0x1406B9738 (NtFreeUserPhysicalPages.c)
 *     ViAllocateMapRegisterFile @ 0x14076B29C (ViAllocateMapRegisterFile.c)
 *     ViFreeMapRegisterFile @ 0x14076BF40 (ViFreeMapRegisterFile.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x1400A3B30 (MmUnmapLockedPages.c)
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
