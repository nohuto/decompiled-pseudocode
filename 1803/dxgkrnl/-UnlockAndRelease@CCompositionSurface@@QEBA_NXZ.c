/*
 * XREFs of ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x1C0012034
 * Callers:
 *     NtSetCompositionSurfaceBufferUsage @ 0x1C000C2B0 (NtSetCompositionSurfaceBufferUsage.c)
 *     NtQueryCompositionSurfaceHDRMetaData @ 0x1C000C400 (NtQueryCompositionSurfaceHDRMetaData.c)
 *     NtBindCompositionSurface @ 0x1C000C700 (NtBindCompositionSurface.c)
 *     NtQueryCompositionSurfaceBinding @ 0x1C000CA20 (NtQueryCompositionSurfaceBinding.c)
 *     NtOpenCompositionSurfaceSwapChainHandleInfo @ 0x1C000CC00 (NtOpenCompositionSurfaceSwapChainHandleInfo.c)
 *     NtQueryCompositionSurfaceRenderingRealization @ 0x1C000CE40 (NtQueryCompositionSurfaceRenderingRealization.c)
 *     NtOpenCompositionSurfaceDirtyRegion @ 0x1C000D000 (NtOpenCompositionSurfaceDirtyRegion.c)
 *     NtQueryCompositionSurfaceStatistics @ 0x1C000D210 (NtQueryCompositionSurfaceStatistics.c)
 *     NtUnBindCompositionSurface @ 0x1C000D5A0 (NtUnBindCompositionSurface.c)
 *     NtSetCompositionSurfaceDirectFlipState @ 0x1C00171E0 (NtSetCompositionSurfaceDirectFlipState.c)
 *     NtSetCompositionSurfaceIndependentFlipInfo @ 0x1C0017320 (NtSetCompositionSurfaceIndependentFlipInfo.c)
 *     NtNotifyPresentToCompositionSurface @ 0x1C004BE80 (NtNotifyPresentToCompositionSurface.c)
 *     NtOpenCompositionSurfaceSectionInfo @ 0x1C004C170 (NtOpenCompositionSurfaceSectionInfo.c)
 *     NtSetCompositionSurfaceAnalogExclusive @ 0x1C004C350 (NtSetCompositionSurfaceAnalogExclusive.c)
 *     NtSetCompositionSurfaceStatistics @ 0x1C004C440 (NtSetCompositionSurfaceStatistics.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0011C18 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 */

bool __fastcall CCompositionSurface::UnlockAndRelease(CCompositionSurface *this)
{
  CPushLock::ReleaseLock((CCompositionSurface *)((char *)this + 16));
  return ObfDereferenceObject((char *)this - 24) == 0;
}
