/*
 * XREFs of MiInitializePageColorBase @ 0x140057920
 * Callers:
 *     MiResolvePrivateZeroFault @ 0x140017760 (MiResolvePrivateZeroFault.c)
 *     MiWalkEntireImage @ 0x140030B50 (MiWalkEntireImage.c)
 *     MiPfPutPagesInTransition @ 0x140047200 (MiPfPutPagesInTransition.c)
 *     MiInitializeColorBase @ 0x1400494D0 (MiInitializeColorBase.c)
 *     MiGetPageForHeader @ 0x14004DD9C (MiGetPageForHeader.c)
 *     MiAllocateMdlPagesByLists @ 0x14005105C (MiAllocateMdlPagesByLists.c)
 *     MiResolveMappedFileFault @ 0x140056F30 (MiResolveMappedFileFault.c)
 *     MiInitializeColorBaseSession @ 0x14007F688 (MiInitializeColorBaseSession.c)
 *     MmAllocateIndependentPages @ 0x1400C74F0 (MmAllocateIndependentPages.c)
 *     MiGetPoolPages @ 0x1400F0860 (MiGetPoolPages.c)
 *     MmCheckCachedPageStates @ 0x14011E3C0 (MmCheckCachedPageStates.c)
 *     MiAllocateKernelStackPages @ 0x1401278E0 (MiAllocateKernelStackPages.c)
 *     MiMapPageFileHash @ 0x14013C818 (MiMapPageFileHash.c)
 *     MiBuildForkPte @ 0x140141270 (MiBuildForkPte.c)
 *     MiDoneWithThisPageGetAnother @ 0x1401424AC (MiDoneWithThisPageGetAnother.c)
 *     MiMakeOutswappedPageResident @ 0x140250B10 (MiMakeOutswappedPageResident.c)
 *     MmAllocateNonChargedSecurePages @ 0x140255080 (MmAllocateNonChargedSecurePages.c)
 *     MiSwitchToTransition @ 0x140258498 (MiSwitchToTransition.c)
 *     MmAllocateSpecialPool @ 0x14025C600 (MmAllocateSpecialPool.c)
 *     MiPruneStandbyPages @ 0x140266010 (MiPruneStandbyPages.c)
 *     MiGetClusterPage @ 0x1402698A0 (MiGetClusterPage.c)
 *     MiIdealClusterPage @ 0x140269D08 (MiIdealClusterPage.c)
 *     MiHandleForkTransitionPte @ 0x14026AEC0 (MiHandleForkTransitionPte.c)
 *     MiCombineIdenticalPages @ 0x14048CAE4 (MiCombineIdenticalPages.c)
 *     MiPfPrepareSequentialReadList @ 0x1404ADAD0 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x1405B7520 (MiPfPrepareReadList.c)
 *     MiAllocateDriverPage @ 0x1405BB3F0 (MiAllocateDriverPage.c)
 *     MiMapNewSession @ 0x14060B454 (MiMapNewSession.c)
 *     MiFillPerSessionProtos @ 0x140754D84 (MiFillPerSessionProtos.c)
 *     MiScrubNodeLargePages @ 0x140756CEC (MiScrubNodeLargePages.c)
 *     MiInitializeScrubPacket @ 0x140757D28 (MiInitializeScrubPacket.c)
 *     MxRelocatePageTables @ 0x1408998F4 (MxRelocatePageTables.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall MiInitializePageColorBase(__int64 a1, int a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // r10
  __int16 NodeShiftedColor; // dx
  unsigned __int8 result; // al

  if ( a2 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    NodeShiftedColor = ((_WORD)a2 - 1) << byte_1403CB699;
  }
  else
  {
    CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[KeGetCurrentThread()->IdealProcessor];
    NodeShiftedColor = CurrentPrcb->NodeShiftedColor;
  }
  *(_WORD *)(a3 + 10) = NodeShiftedColor;
  *(_WORD *)(a3 + 8) = (1 << byte_1403CB69A) - 1;
  if ( a1 && (result = *(_BYTE *)(a1 + 184) & 7, result < 2u) )
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
