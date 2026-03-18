/*
 * XREFs of MiInitializePageColorBase @ 0x1401069F0
 * Callers:
 *     MiBuildForkPte @ 0x140001E68 (MiBuildForkPte.c)
 *     MiDoneWithThisPageGetAnother @ 0x140002DEC (MiDoneWithThisPageGetAnother.c)
 *     MiInitializeColorBaseSession @ 0x14002E4C4 (MiInitializeColorBaseSession.c)
 *     MiMapPageFileHash @ 0x140075F48 (MiMapPageFileHash.c)
 *     MmCheckCachedPageStates @ 0x14009E320 (MmCheckCachedPageStates.c)
 *     MiWalkEntireImage @ 0x1400C9D50 (MiWalkEntireImage.c)
 *     MiAllocateKernelStackPages @ 0x1401059E0 (MiAllocateKernelStackPages.c)
 *     MiResolveMappedFileFault @ 0x1401060D0 (MiResolveMappedFileFault.c)
 *     MiPfPutPagesInTransition @ 0x140108850 (MiPfPutPagesInTransition.c)
 *     MiGetPageForHeader @ 0x140109BE0 (MiGetPageForHeader.c)
 *     MiMakeZeroedPageTableRange @ 0x140109D80 (MiMakeZeroedPageTableRange.c)
 *     MiGetPageTablePages @ 0x14010E79C (MiGetPageTablePages.c)
 *     MiFindNonPagedPoolPages @ 0x14010E930 (MiFindNonPagedPoolPages.c)
 *     MiAllocateMdlPagesByLists @ 0x140133DC0 (MiAllocateMdlPagesByLists.c)
 *     MiMakeOutswappedPageResident @ 0x14020B6DC (MiMakeOutswappedPageResident.c)
 *     MiSwitchToTransition @ 0x14021430C (MiSwitchToTransition.c)
 *     MmAllocateSpecialPool @ 0x140217008 (MmAllocateSpecialPool.c)
 *     MiGetClusterPage @ 0x140222084 (MiGetClusterPage.c)
 *     MiIdealClusterPage @ 0x1402224A8 (MiIdealClusterPage.c)
 *     MiHandleForkTransitionPte @ 0x1402232C0 (MiHandleForkTransitionPte.c)
 *     MiPfPrepareReadList @ 0x140518E60 (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x140519D10 (MiPfPrepareSequentialReadList.c)
 *     MiAllocateDriverPage @ 0x14053D888 (MiAllocateDriverPage.c)
 *     MmAllocateIndependentPages @ 0x1405723D0 (MmAllocateIndependentPages.c)
 *     MiMapNewSession @ 0x14057EF68 (MiMapNewSession.c)
 *     MiFillPagedPoolLockedDown @ 0x1406B6770 (MiFillPagedPoolLockedDown.c)
 *     MiFillPerSessionProtos @ 0x1406BE094 (MiFillPerSessionProtos.c)
 *     MxRelocatePageTables @ 0x1408000CC (MxRelocatePageTables.c)
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
    *(_WORD *)(a3 + 10) = ((_WORD)a2 - 1) << byte_14036C1B9;
  }
  else
  {
    CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[KeGetCurrentThread()->IdealProcessor];
    *(_WORD *)(a3 + 10) = CurrentPrcb->NodeShiftedColor;
  }
  *(_WORD *)(a3 + 8) = (1 << byte_14036C1BA) - 1;
  if ( a1 && (result = *(_BYTE *)(a1 + 192) & 7, result < 2u) )
  {
    *(_QWORD *)a3 = a1;
  }
  else
  {
    result = (_BYTE)CurrentPrcb + 100;
    *(_QWORD *)a3 = &CurrentPrcb->PageColor;
  }
  return result;
}
