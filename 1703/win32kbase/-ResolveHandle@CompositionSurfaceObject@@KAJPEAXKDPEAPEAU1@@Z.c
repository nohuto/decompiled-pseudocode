/*
 * XREFs of ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C0010C04
 * Callers:
 *     NtQueryCompositionSurfaceHDRMetaData @ 0x1C0003420 (NtQueryCompositionSurfaceHDRMetaData.c)
 *     NtSetCompositionSurfaceBufferUsage @ 0x1C0003A40 (NtSetCompositionSurfaceBufferUsage.c)
 *     NtQueryCompositionSurfaceStatistics @ 0x1C0005330 (NtQueryCompositionSurfaceStatistics.c)
 *     ?NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C000544C (-NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?CreateFromCompletedFlipToken@CToken@@SAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@Z @ 0x1C000570C (-CreateFromCompletedFlipToken@CToken@@SAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@.c)
 *     NtQueryCompositionSurfaceRenderingRealization @ 0x1C000E0A0 (NtQueryCompositionSurfaceRenderingRealization.c)
 *     NtOpenCompositionSurfaceSwapChainHandleInfo @ 0x1C000E230 (NtOpenCompositionSurfaceSwapChainHandleInfo.c)
 *     NtBindCompositionSurface @ 0x1C000E450 (NtBindCompositionSurface.c)
 *     NtOpenCompositionSurfaceDirtyRegion @ 0x1C000E890 (NtOpenCompositionSurfaceDirtyRegion.c)
 *     ?InitializeUpdates@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z @ 0x1C0011CB8 (-InitializeUpdates@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z.c)
 *     ?SetHandleProperty@CCompositionSurfaceBitmapMarshaler@DirectComposition@@UEAAJIPEAXPEA_N@Z @ 0x1C0025440 (-SetHandleProperty@CCompositionSurfaceBitmapMarshaler@DirectComposition@@UEAAJIPEAXPEA_N@Z.c)
 *     NtQueryCompositionSurfaceBinding @ 0x1C007FE60 (NtQueryCompositionSurfaceBinding.c)
 *     NtValidateCompositionSurfaceHandle @ 0x1C00824E0 (NtValidateCompositionSurfaceHandle.c)
 *     NtUnBindCompositionSurface @ 0x1C0082950 (NtUnBindCompositionSurface.c)
 *     ?NotifySurfaceOfSkippedToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0150940 (-NotifySurfaceOfSkippedToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     NtOpenCompositionSurfaceSectionInfo @ 0x1C01509F0 (NtOpenCompositionSurfaceSectionInfo.c)
 *     NtSetCompositionSurfaceAnalogExclusive @ 0x1C0150BB0 (NtSetCompositionSurfaceAnalogExclusive.c)
 *     NtSetCompositionSurfaceDirectFlipState @ 0x1C0150C40 (NtSetCompositionSurfaceDirectFlipState.c)
 *     NtSetCompositionSurfaceHDRMetaData @ 0x1C0150D60 (NtSetCompositionSurfaceHDRMetaData.c)
 *     NtSetCompositionSurfaceIndependentFlipInfo @ 0x1C0150F60 (NtSetCompositionSurfaceIndependentFlipInfo.c)
 *     NtSetCompositionSurfaceStatistics @ 0x1C0151150 (NtSetCompositionSurfaceStatistics.c)
 *     ?CompleteIndendentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z @ 0x1C0152274 (-CompleteIndendentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z.c)
 * Callees:
 *     ?ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z @ 0x1C0010C48 (-ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z.c)
 */

__int64 __fastcall CompositionSurfaceObject::ResolveHandle(
        void *a1,
        __int64 a2,
        __int64 a3,
        struct CompositionSurfaceObject **a4)
{
  __int64 result; // rax
  struct CompositionSurfaceObject *v6; // [rsp+58h] [rbp+20h] BYREF

  *a4 = 0LL;
  v6 = 0LL;
  LOBYTE(a3) = 1;
  result = CompositionObject::ResolveHandle(a1, a2, a3, 1LL, &v6);
  if ( (int)result >= 0 )
    *a4 = v6;
  return result;
}
