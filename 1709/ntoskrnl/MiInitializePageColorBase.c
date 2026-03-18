/*
 * XREFs of MiInitializePageColorBase @ 0x14002A810
 * Callers:
 *     MiHandleForkTransitionPte @ 0x14000E3C0 (MiHandleForkTransitionPte.c)
 *     MiPfPutPagesInTransition @ 0x140025FD0 (MiPfPutPagesInTransition.c)
 *     MiGetPageTablePages @ 0x140027ECC (MiGetPageTablePages.c)
 *     MiAllocateKernelStackPages @ 0x140029AB0 (MiAllocateKernelStackPages.c)
 *     MiResolveMappedFileFault @ 0x14002A0B0 (MiResolveMappedFileFault.c)
 *     MiWalkEntireImage @ 0x140039480 (MiWalkEntireImage.c)
 *     MiResolvePrivateZeroFault @ 0x1400464C0 (MiResolvePrivateZeroFault.c)
 *     MmCheckCachedPageStates @ 0x14007B8D0 (MmCheckCachedPageStates.c)
 *     MiFindNonPagedPoolPages @ 0x140089100 (MiFindNonPagedPoolPages.c)
 *     MiDoneWithThisPageGetAnother @ 0x1400CEC64 (MiDoneWithThisPageGetAnother.c)
 *     MiBuildForkPte @ 0x1400E7530 (MiBuildForkPte.c)
 *     MiGetPageForHeader @ 0x1400EE050 (MiGetPageForHeader.c)
 *     MiInitializeColorBaseSession @ 0x140123BEC (MiInitializeColorBaseSession.c)
 *     MiAllocateMdlPagesByLists @ 0x140128900 (MiAllocateMdlPagesByLists.c)
 *     MiMakeOutswappedPageResident @ 0x1402125D4 (MiMakeOutswappedPageResident.c)
 *     MmAllocateNonChargedSecurePages @ 0x140217718 (MmAllocateNonChargedSecurePages.c)
 *     MiSwitchToTransition @ 0x14021C340 (MiSwitchToTransition.c)
 *     MmAllocateSpecialPool @ 0x140220868 (MmAllocateSpecialPool.c)
 *     MiGetClusterPage @ 0x14022EEDC (MiGetClusterPage.c)
 *     MiIdealClusterPage @ 0x14022F348 (MiIdealClusterPage.c)
 *     MiMapPageFileHash @ 0x1402320E8 (MiMapPageFileHash.c)
 *     MiPfPrepareReadList @ 0x140494BE0 (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x140495440 (MiPfPrepareSequentialReadList.c)
 *     MiAllocateDriverPage @ 0x140509740 (MiAllocateDriverPage.c)
 *     MiCombineIdenticalPages @ 0x140509D90 (MiCombineIdenticalPages.c)
 *     MiMapNewSession @ 0x1405B43F8 (MiMapNewSession.c)
 *     MmAllocateIndependentPages @ 0x1405B7830 (MmAllocateIndependentPages.c)
 *     MiFillPagedPoolLockedDown @ 0x1406E3220 (MiFillPagedPoolLockedDown.c)
 *     MiFillPerSessionProtos @ 0x1406EB4D0 (MiFillPerSessionProtos.c)
 *     MiScrubNodeLargePages @ 0x1406ED858 (MiScrubNodeLargePages.c)
 *     MiInitializeScrubPacket @ 0x1406EE840 (MiInitializeScrubPacket.c)
 *     MxRelocatePageTables @ 0x14082A08C (MxRelocatePageTables.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall MiInitializePageColorBase(__int64 a1, int a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // r10
  unsigned __int8 result; // al

  if ( a2 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    *(_WORD *)(a3 + 10) = ((_WORD)a2 - 1) << byte_140388501;
  }
  else
  {
    CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[KeGetCurrentThread()->IdealProcessor];
    *(_WORD *)(a3 + 10) = CurrentPrcb->NodeShiftedColor;
  }
  *(_WORD *)(a3 + 8) = (1 << byte_140388502) - 1;
  if ( a1 && (result = *(_BYTE *)(a1 + 192) & 7, result < 2u) )
  {
    *(_QWORD *)a3 = a1;
  }
  else
  {
    result = (_BYTE)CurrentPrcb + 16;
    *(_QWORD *)a3 = &CurrentPrcb->PageColor;
  }
  return result;
}
