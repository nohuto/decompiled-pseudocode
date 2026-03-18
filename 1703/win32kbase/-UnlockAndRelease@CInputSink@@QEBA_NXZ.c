/*
 * XREFs of ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1C0010D50
 * Callers:
 *     ?UpdateTransform@CompositionInputObject@@QEAAJAEBUtagINPUT_TRANSFORM@@@Z @ 0x1C00017C0 (-UpdateTransform@CompositionInputObject@@QEAAJAEBUtagINPUT_TRANSFORM@@@Z.c)
 *     NtQueryCompositionSurfaceHDRMetaData @ 0x1C0003420 (NtQueryCompositionSurfaceHDRMetaData.c)
 *     NtSetCompositionSurfaceBufferUsage @ 0x1C0003A40 (NtSetCompositionSurfaceBufferUsage.c)
 *     NtQueryCompositionSurfaceStatistics @ 0x1C0005330 (NtQueryCompositionSurfaceStatistics.c)
 *     ?NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C000544C (-NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     NtQueryCompositionSurfaceRenderingRealization @ 0x1C000E0A0 (NtQueryCompositionSurfaceRenderingRealization.c)
 *     NtOpenCompositionSurfaceSwapChainHandleInfo @ 0x1C000E230 (NtOpenCompositionSurfaceSwapChainHandleInfo.c)
 *     NtBindCompositionSurface @ 0x1C000E450 (NtBindCompositionSurface.c)
 *     NtOpenCompositionSurfaceDirtyRegion @ 0x1C000E890 (NtOpenCompositionSurfaceDirtyRegion.c)
 *     ?QueryInputQueueForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C00105C8 (-QueryInputQueueForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAUCOMPOSITIO.c)
 *     ?QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C00106C8 (-QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C0010728 (-SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z.c)
 *     ?AssociateWithVisual@CompositionInputObject@@QEBAJPEAX@Z @ 0x1C0010828 (-AssociateWithVisual@CompositionInputObject@@QEBAJPEAX@Z.c)
 *     NtQueryCompositionSurfaceBinding @ 0x1C007FE60 (NtQueryCompositionSurfaceBinding.c)
 *     NtUnBindCompositionSurface @ 0x1C0082950 (NtUnBindCompositionSurface.c)
 *     NtOpenCompositionSurfaceSectionInfo @ 0x1C01509F0 (NtOpenCompositionSurfaceSectionInfo.c)
 *     NtSetCompositionSurfaceAnalogExclusive @ 0x1C0150BB0 (NtSetCompositionSurfaceAnalogExclusive.c)
 *     NtSetCompositionSurfaceDirectFlipState @ 0x1C0150C40 (NtSetCompositionSurfaceDirectFlipState.c)
 *     NtSetCompositionSurfaceHDRMetaData @ 0x1C0150D60 (NtSetCompositionSurfaceHDRMetaData.c)
 *     NtSetCompositionSurfaceIndependentFlipInfo @ 0x1C0150F60 (NtSetCompositionSurfaceIndependentFlipInfo.c)
 *     NtSetCompositionSurfaceStatistics @ 0x1C0151150 (NtSetCompositionSurfaceStatistics.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C001125C (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 */

bool __fastcall CInputSink::UnlockAndRelease(CInputSink *this)
{
  CPushLock::ReleaseLock((CInputSink *)((char *)this + 8));
  return ObfDereferenceObject((char *)this - 24) == 0;
}
