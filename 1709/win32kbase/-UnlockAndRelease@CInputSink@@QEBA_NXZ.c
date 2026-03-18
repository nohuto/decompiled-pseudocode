/*
 * XREFs of ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1C0038F40
 * Callers:
 *     ?UpdateTransform@CompositionInputObject@@QEAAJAEBUtagINPUT_TRANSFORM@@@Z @ 0x1C0003430 (-UpdateTransform@CompositionInputObject@@QEAAJAEBUtagINPUT_TRANSFORM@@@Z.c)
 *     NtBindCompositionSurface @ 0x1C0020870 (NtBindCompositionSurface.c)
 *     NtOpenCompositionSurfaceDirtyRegion @ 0x1C0020D90 (NtOpenCompositionSurfaceDirtyRegion.c)
 *     NtQueryCompositionSurfaceRenderingRealization @ 0x1C00211C0 (NtQueryCompositionSurfaceRenderingRealization.c)
 *     ?QueryInputQueueForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C0021670 (-QueryInputQueueForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAUCOMPOSITIO.c)
 *     ?QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C0021768 (-QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C00217C8 (-SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z.c)
 *     ?AssociateWithVisual@CompositionInputObject@@QEBAJPEAX@Z @ 0x1C00218F0 (-AssociateWithVisual@CompositionInputObject@@QEBAJPEAX@Z.c)
 *     ?NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C00574B8 (-NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     NtQueryCompositionSurfaceStatistics @ 0x1C007DD60 (NtQueryCompositionSurfaceStatistics.c)
 *     NtOpenCompositionSurfaceSwapChainHandleInfo @ 0x1C0084FD0 (NtOpenCompositionSurfaceSwapChainHandleInfo.c)
 *     NtQueryCompositionSurfaceBinding @ 0x1C0085370 (NtQueryCompositionSurfaceBinding.c)
 *     NtUnBindCompositionSurface @ 0x1C008A230 (NtUnBindCompositionSurface.c)
 *     NtQueryCompositionSurfaceHDRMetaData @ 0x1C0090D80 (NtQueryCompositionSurfaceHDRMetaData.c)
 *     NtSetCompositionSurfaceBufferUsage @ 0x1C0093C20 (NtSetCompositionSurfaceBufferUsage.c)
 *     NtNotifyPresentToCompositionSurface @ 0x1C0151AA0 (NtNotifyPresentToCompositionSurface.c)
 *     NtOpenCompositionSurfaceSectionInfo @ 0x1C0151D70 (NtOpenCompositionSurfaceSectionInfo.c)
 *     NtSetCompositionSurfaceAnalogExclusive @ 0x1C0151F30 (NtSetCompositionSurfaceAnalogExclusive.c)
 *     NtSetCompositionSurfaceDirectFlipState @ 0x1C0151FF0 (NtSetCompositionSurfaceDirectFlipState.c)
 *     NtSetCompositionSurfaceHDRMetaData @ 0x1C0152110 (NtSetCompositionSurfaceHDRMetaData.c)
 *     NtSetCompositionSurfaceIndependentFlipInfo @ 0x1C0152310 (NtSetCompositionSurfaceIndependentFlipInfo.c)
 *     NtSetCompositionSurfaceStatistics @ 0x1C0152500 (NtSetCompositionSurfaceStatistics.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00388B0 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 */

bool __fastcall CInputSink::UnlockAndRelease(CInputSink *this)
{
  CPushLock::ReleaseLock((CInputSink *)((char *)this + 8));
  return ObfDereferenceObject((char *)this - 24) == 0;
}
