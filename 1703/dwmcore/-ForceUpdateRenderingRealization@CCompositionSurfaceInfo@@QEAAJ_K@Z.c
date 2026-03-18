/*
 * XREFs of ?ForceUpdateRenderingRealization@CCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x1801751A0
 * Callers:
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAUOverlayPlaneInfo@1@_N1@Z @ 0x180150A14 (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAUOverlayPlaneInfo@1@_N1@Z.c)
 *     ?IsEligibleForOverlays@COverlayContext@@AEAA_NPEAUOverlayPlaneInfo@1@@Z @ 0x180151368 (-IsEligibleForOverlays@COverlayContext@@AEAA_NPEAUOverlayPlaneInfo@1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EnsureCurrentRenderingRealization@CCompositionSurfaceInfo@@AEAAJXZ @ 0x180076D24 (-EnsureCurrentRenderingRealization@CCompositionSurfaceInfo@@AEAAJXZ.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::ForceUpdateRenderingRealization(CCompositionSurfaceInfo *this, __int64 a2)
{
  unsigned int v2; // ebx
  int v3; // eax

  v2 = 0;
  if ( *((_QWORD *)this + 7) == a2 )
  {
    if ( *((_DWORD *)this + 26) )
    {
      v3 = CCompositionSurfaceInfo::EnsureCurrentRenderingRealization(this);
      v2 = v3;
      if ( v3 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x331u);
    }
  }
  return v2;
}
