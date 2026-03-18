/*
 * XREFs of ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C0038C24
 * Callers:
 *     NtOpenCompositionSurfaceDirtyRegion @ 0x1C0020D90 (NtOpenCompositionSurfaceDirtyRegion.c)
 *     ?GetAdapterLuidAndGpuSync@CompositionSurfaceObject@@QEBAJ_KPEAU_LUID@@PEAPEAX@Z @ 0x1C00384A4 (-GetAdapterLuidAndGpuSync@CompositionSurfaceObject@@QEBAJ_KPEAU_LUID@@PEAPEAX@Z.c)
 *     ?ImmediateSignalGpuFence@CompositionSurfaceObject@@QEAAJ_K0@Z @ 0x1C0038534 (-ImmediateSignalGpuFence@CompositionSurfaceObject@@QEAAJ_K0@Z.c)
 *     ?SignalPresentLimitSemaphore@CompositionSurfaceObject@@QEAAX_K@Z @ 0x1C0038580 (-SignalPresentLimitSemaphore@CompositionSurfaceObject@@QEAAX_K@Z.c)
 *     ?StartCompositionEarly@CompositionSurfaceObject@@QEAA_N_K@Z @ 0x1C00385E8 (-StartCompositionEarly@CompositionSurfaceObject@@QEAA_N_K@Z.c)
 *     ?UpdateStats@CCompositionSurface@@IEAAJ_KAEBUDXGI_FRAME_STATISTICS@@@Z @ 0x1C0038980 (-UpdateStats@CCompositionSurface@@IEAAJ_KAEBUDXGI_FRAME_STATISTICS@@@Z.c)
 *     ?UpdateBufferDirtyRegion@CCompositionSurface@@IEAAJ_KAEBVCRegion@@W4DXGI_ALPHA_MODE@@@Z @ 0x1C00389D0 (-UpdateBufferDirtyRegion@CCompositionSurface@@IEAAJ_KAEBVCRegion@@W4DXGI_ALPHA_MODE@@@Z.c)
 *     ?GetBufferAttributes@CCompositionSurface@@IEBAJ_KPEAUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1C0038BA0 (-GetBufferAttributes@CCompositionSurface@@IEBAJ_KPEAUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ?NotifyTokenInFrame@CCompositionSurface@@IEAAJAEBVCToken@@PEA_N@Z @ 0x1C0038DA4 (-NotifyTokenInFrame@CCompositionSurface@@IEAAJAEBVCToken@@PEA_N@Z.c)
 *     ?NotifyPendingFlipPresent@CCompositionSurface@@QEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEA_N2@Z @ 0x1C0038E28 (-NotifyPendingFlipPresent@CCompositionSurface@@QEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@.c)
 *     ?CheckBinding@CCompositionSurface@@QEBA_N_KPEAW4CompositionBufferType@@PEAPEAUHWND__@@PEA_N@Z @ 0x1C0038EAC (-CheckBinding@CCompositionSurface@@QEBA_N_KPEAW4CompositionBufferType@@PEAPEAUHWND__@@PEA_N@Z.c)
 *     ?QueryBinding@CCompositionSurface@@QEBAJ_KPEAUCSM_BUFFER_INFO@@@Z @ 0x1C0039018 (-QueryBinding@CCompositionSurface@@QEBAJ_KPEAUCSM_BUFFER_INFO@@@Z.c)
 *     ?OpenSwapChainHandles@CCompositionSurface@@QEBAJ_KPEAUCSM_SWAPCHAIN_HANDLE_INFO@@@Z @ 0x1C00390D4 (-OpenSwapChainHandles@CCompositionSurface@@QEBAJ_KPEAUCSM_SWAPCHAIN_HANDLE_INFO@@@Z.c)
 *     NtQueryCompositionSurfaceHDRMetaData @ 0x1C0090D80 (NtQueryCompositionSurfaceHDRMetaData.c)
 *     NtSetCompositionSurfaceBufferUsage @ 0x1C0093C20 (NtSetCompositionSurfaceBufferUsage.c)
 *     NtSetCompositionSurfaceDirectFlipState @ 0x1C0151FF0 (NtSetCompositionSurfaceDirectFlipState.c)
 *     NtSetCompositionSurfaceHDRMetaData @ 0x1C0152110 (NtSetCompositionSurfaceHDRMetaData.c)
 *     NtSetCompositionSurfaceIndependentFlipInfo @ 0x1C0152310 (NtSetCompositionSurfaceIndependentFlipInfo.c)
 *     ?ConfirmIndependentFlipEntry@CCompositionSurface@@QEAAJ_K00II0@Z @ 0x1C0152640 (-ConfirmIndependentFlipEntry@CCompositionSurface@@QEAAJ_K00II0@Z.c)
 *     ?OpenSectionInfo@CCompositionSurface@@QEBAJ_KAEBUCSM_SYSMEM_REALIZATION@@PEAUCSM_SYSMEM_SECTION_INFO@@@Z @ 0x1C01526B0 (-OpenSectionInfo@CCompositionSurface@@QEBAJ_KAEBUCSM_SYSMEM_REALIZATION@@PEAUCSM_SYSMEM_SECTION_.c)
 *     ?SetSurfaceStats@CCompositionSurface@@QEAAJ_KAEBUDXGI_FRAME_STATISTICS@@@Z @ 0x1C015279C (-SetSurfaceStats@CCompositionSurface@@QEAAJ_KAEBUDXGI_FRAME_STATISTICS@@@Z.c)
 *     ?UpdateStatsAndCustomPresentDuration@CCompositionSurface@@IEAAJ_KAEBUDXGI_FRAME_STATISTICS@@IW4BufferFlipMode@@@Z @ 0x1C01527EC (-UpdateStatsAndCustomPresentDuration@CCompositionSurface@@IEAAJ_KAEBUDXGI_FRAME_STATISTICS@@IW4B.c)
 *     ?GetIndependentFlipNotifyDwm@CompositionSurfaceObject@@QEAAJ_KPEA_N@Z @ 0x1C01540C4 (-GetIndependentFlipNotifyDwm@CompositionSurfaceObject@@QEAAJ_KPEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionSurface::FindBuffer(
        CCompositionSurface *this,
        __int64 a2,
        struct CCompositionBuffer **a3)
{
  unsigned int v3; // r9d
  _QWORD **v4; // rcx
  _QWORD *i; // rax

  *a3 = 0LL;
  v3 = -1073741275;
  if ( *((_DWORD *)this + 20) )
  {
    v4 = (_QWORD **)((char *)this + 64);
    for ( i = *v4; i != v4; i = (_QWORD *)*i )
    {
      if ( *(i - 1) == a2 )
      {
        *a3 = (struct CCompositionBuffer *)(i - 3);
        return 0;
      }
    }
  }
  return v3;
}
