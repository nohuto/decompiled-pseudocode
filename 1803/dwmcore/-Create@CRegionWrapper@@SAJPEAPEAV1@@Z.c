/*
 * XREFs of ?Create@CRegionWrapper@@SAJPEAPEAV1@@Z @ 0x180205170
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@22W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x180163F58 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV-$.c)
 *     ?Init@CDirectFlipInfo@@QEAAXPEAVCOverlayContext@@PEAVIRenderTarget@@PEBVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainContent@@W4Enum@DirectFlipMode@@PEBVCRegion@@@Z @ 0x18017298C (-Init@CDirectFlipInfo@@QEAAXPEAVCOverlayContext@@PEAVIRenderTarget@@PEBVCVisual@@PEAVCCompositio.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18002B3E4 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRegionWrapper::Create(struct CRegionWrapper **a1)
{
  unsigned int v2; // edi
  _DWORD *v3; // rax
  _DWORD *v4; // rbx

  v2 = 0;
  v3 = WPF::ProcessHeapImpl::AllocClear(0x58uLL);
  v4 = v3;
  if ( v3 )
  {
    memset_0(v3, 0, 0x58uLL);
    *(_QWORD *)v4 = &CMILRefCountBase::`vftable';
    v4[2] = 0;
    *((_QWORD *)v4 + 2) = v4 + 6;
    v4[6] = 0;
    *(_QWORD *)v4 = &CRegionWrapper::`vftable';
  }
  else
  {
    v4 = 0LL;
  }
  if ( v4 )
  {
    (**(void (__fastcall ***)(void *))v4)(v4);
    *a1 = (struct CRegionWrapper *)v4;
  }
  else
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x15u);
  }
  return v2;
}
