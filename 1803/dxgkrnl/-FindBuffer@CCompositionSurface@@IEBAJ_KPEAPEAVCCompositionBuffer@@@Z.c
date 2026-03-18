/*
 * XREFs of ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C0011DB0
 * Callers:
 *     NtSetCompositionSurfaceBufferUsage @ 0x1C000C2B0 (NtSetCompositionSurfaceBufferUsage.c)
 *     NtQueryCompositionSurfaceHDRMetaData @ 0x1C000C400 (NtQueryCompositionSurfaceHDRMetaData.c)
 *     NtOpenCompositionSurfaceDirtyRegion @ 0x1C000D000 (NtOpenCompositionSurfaceDirtyRegion.c)
 *     ?SignalGpuFence@CompositionSurfaceObject@@QEAAJ_K0_N@Z @ 0x1C000D45C (-SignalGpuFence@CompositionSurfaceObject@@QEAAJ_K0_N@Z.c)
 *     ?SignalPresentLimitSemaphore@CompositionSurfaceObject@@QEAAX_K@Z @ 0x1C000D4EC (-SignalPresentLimitSemaphore@CompositionSurfaceObject@@QEAAX_K@Z.c)
 *     ?QueryBinding@CCompositionSurface@@QEBAJ_KPEAUCSM_BUFFER_INFO@@@Z @ 0x1C0012168 (-QueryBinding@CCompositionSurface@@QEBAJ_KPEAUCSM_BUFFER_INFO@@@Z.c)
 *     ?OpenSwapChainHandles@CCompositionSurface@@QEBAJ_KPEAUCSM_SWAPCHAIN_HANDLE_INFO@@@Z @ 0x1C0012224 (-OpenSwapChainHandles@CCompositionSurface@@QEBAJ_KPEAUCSM_SWAPCHAIN_HANDLE_INFO@@@Z.c)
 *     ?NotifyTokenCompleted@CCompositionSurface@@IEAAJAEBVCFlipToken@@@Z @ 0x1C00123A4 (-NotifyTokenCompleted@CCompositionSurface@@IEAAJAEBVCFlipToken@@@Z.c)
 *     ?GetBufferAttributes@CCompositionSurface@@IEBAJ_KPEAUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1C0012408 (-GetBufferAttributes@CCompositionSurface@@IEBAJ_KPEAUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ?UpdateBufferDirtyRegion@CCompositionSurface@@IEAAJ_KAEBUIRegion@@W4DXGI_ALPHA_MODE@@@Z @ 0x1C001248C (-UpdateBufferDirtyRegion@CCompositionSurface@@IEAAJ_KAEBUIRegion@@W4DXGI_ALPHA_MODE@@@Z.c)
 *     NtSetCompositionSurfaceDirectFlipState @ 0x1C00171E0 (NtSetCompositionSurfaceDirectFlipState.c)
 *     NtSetCompositionSurfaceIndependentFlipInfo @ 0x1C0017320 (NtSetCompositionSurfaceIndependentFlipInfo.c)
 *     ?GetIndependentFlipNotifyDwm@CompositionSurfaceObject@@QEAAJ_KPEA_N@Z @ 0x1C0017B10 (-GetIndependentFlipNotifyDwm@CompositionSurfaceObject@@QEAAJ_KPEA_N@Z.c)
 *     ?NotifyTokenInFrame@CCompositionSurface@@IEAAJAEBVCToken@@PEA_N@Z @ 0x1C0017D0C (-NotifyTokenInFrame@CCompositionSurface@@IEAAJAEBVCToken@@PEA_N@Z.c)
 *     ?ConfirmIndependentFlipEntry@CCompositionSurface@@QEAAJ_K00II0@Z @ 0x1C0017D94 (-ConfirmIndependentFlipEntry@CCompositionSurface@@QEAAJ_K00II0@Z.c)
 *     ?UpdateStatsAndCustomPresentDuration@CCompositionSurface@@IEAAJ_KAEBUDXGI_FRAME_STATISTICS@@IW4BufferFlipMode@@@Z @ 0x1C0017E04 (-UpdateStatsAndCustomPresentDuration@CCompositionSurface@@IEAAJ_KAEBUDXGI_FRAME_STATISTICS@@IW4B.c)
 *     ?CheckBinding@CCompositionSurface@@QEBA_N_KPEAW4CompositionBufferType@@PEAPEAUHWND__@@PEA_N@Z @ 0x1C00243B4 (-CheckBinding@CCompositionSurface@@QEBA_N_KPEAW4CompositionBufferType@@PEAPEAUHWND__@@PEA_N@Z.c)
 *     ?OpenSectionInfo@CCompositionSurface@@QEBAJ_KAEBUCSM_SYSMEM_REALIZATION@@PEAUCSM_SYSMEM_SECTION_INFO@@@Z @ 0x1C004C6AC (-OpenSectionInfo@CCompositionSurface@@QEBAJ_KAEBUCSM_SYSMEM_REALIZATION@@PEAUCSM_SYSMEM_SECTION_.c)
 *     ?SetSurfaceStats@CCompositionSurface@@QEAAJ_KAEBUDXGI_FRAME_STATISTICS@@@Z @ 0x1C004C87C (-SetSurfaceStats@CCompositionSurface@@QEAAJ_KAEBUDXGI_FRAME_STATISTICS@@@Z.c)
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
  if ( *((_DWORD *)this + 22) )
  {
    v4 = (_QWORD **)((char *)this + 72);
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
