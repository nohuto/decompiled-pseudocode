/*
 * XREFs of IoFreeMdl @ 0x140041DB0
 * Callers:
 *     CcPrepareMdlWrite @ 0x140098000 (CcPrepareMdlWrite.c)
 *     IopBuildAsynchronousFsdRequest @ 0x140098370 (IopBuildAsynchronousFsdRequest.c)
 *     CcZeroDataInCache @ 0x1400988F4 (CcZeroDataInCache.c)
 *     MiZeroPageWrite @ 0x1400990E8 (MiZeroPageWrite.c)
 *     CcMdlWriteComplete2 @ 0x1400CB7B4 (CcMdlWriteComplete2.c)
 *     IopfCompleteRequest @ 0x1400FA0B0 (IopfCompleteRequest.c)
 *     CcMapAndCopyInToCache @ 0x140112290 (CcMapAndCopyInToCache.c)
 *     CcCopyBytesToUserBuffer @ 0x14011FF30 (CcCopyBytesToUserBuffer.c)
 *     IopBuildDeviceIoControlRequest @ 0x14012A300 (IopBuildDeviceIoControlRequest.c)
 *     IopDropIrp @ 0x14013FD64 (IopDropIrp.c)
 *     CcLockSystemCacheBuffer @ 0x140220198 (CcLockSystemCacheBuffer.c)
 *     CcMdlWriteAbort @ 0x140220CC0 (CcMdlWriteAbort.c)
 *     HvlGetCoverageData @ 0x140226864 (HvlGetCoverageData.c)
 *     NtFreeUserPhysicalPages @ 0x14026303C (NtFreeUserPhysicalPages.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x14048AACC (WbMakeUserDataPagesKernelWritable.c)
 *     MiCreateImageFileMap @ 0x1404BF468 (MiCreateImageFileMap.c)
 *     AlpcpInitializeCompletionList @ 0x14052DD94 (AlpcpInitializeCompletionList.c)
 *     CcMdlRead @ 0x1405392E0 (CcMdlRead.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x140539770 (WbMakeUserExecutablePagesKernelWritable.c)
 *     sub_14053AB64 @ 0x14053AB64 (sub_14053AB64.c)
 *     CcMdlReadComplete2 @ 0x140573E28 (CcMdlReadComplete2.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x1405F1F60 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     FsRtlpFreeMdlChain @ 0x140715C14 (FsRtlpFreeMdlChain.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x140716FD0 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     HvlUpdateMicrocode @ 0x140717DD0 (HvlUpdateMicrocode.c)
 *     IopCleanupFileObjectIosbRange @ 0x1407197B8 (IopCleanupFileObjectIosbRange.c)
 *     IopExceptionCleanup @ 0x140719A28 (IopExceptionCleanup.c)
 *     IopSetFileObjectIosbRange @ 0x14071AF1C (IopSetFileObjectIosbRange.c)
 *     IopLiveDumpFreeMappingResources @ 0x14071FD70 (IopLiveDumpFreeMappingResources.c)
 *     PnprFreeMappingReserve @ 0x140734138 (PnprFreeMappingReserve.c)
 *     AlpcpFreeCompletionList @ 0x140748648 (AlpcpFreeCompletionList.c)
 *     ViAllocateMapRegisterFile @ 0x14081A0D8 (ViAllocateMapRegisterFile.c)
 *     ViFreeMapRegisterFile @ 0x14081AD7C (ViFreeMapRegisterFile.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x140110450 (MmUnmapLockedPages.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401B2C10 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __stdcall IoFreeMdl(PMDL Mdl)
{
  CSHORT MdlFlags; // ax
  __int64 v3; // rcx
  struct _KPRCB *CurrentPrcb; // rdx
  _GENERAL_LOOKASIDE *P; // rcx

  MdlFlags = Mdl->MdlFlags;
  if ( (MdlFlags & 0x20) != 0 )
  {
    MmUnmapLockedPages(Mdl->MappedSystemVa, Mdl);
    MdlFlags = Mdl->MdlFlags;
  }
  if ( (MdlFlags & 8) != 0 )
  {
    v3 = *((unsigned __int16 *)&Mdl->MdlFlags + 1);
    if ( (unsigned int)v3 >= (unsigned int)KeNumberProcessors_0 )
    {
      CurrentPrcb = 0LL;
    }
    else
    {
      _mm_lfence();
      CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[v3];
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
