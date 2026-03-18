/*
 * XREFs of ?UpdateMPOCaps@CHwndRenderTarget@@QEAAJ_N@Z @ 0x180062F50
 * Callers:
 *     ?UpdateMPOCaps@CRenderTargetManager@@QEAAJXZ @ 0x18005F4F8 (-UpdateMPOCaps@CRenderTargetManager@@QEAAJXZ.c)
 *     ?HandleWindowErrors@CHwndRenderTarget@@IEAAJJ@Z @ 0x18005FF50 (-HandleWindowErrors@CHwndRenderTarget@@IEAAJJ@Z.c)
 *     ?CheckOcclusionState@CHwndRenderTarget@@UEAAJXZ @ 0x180060830 (-CheckOcclusionState@CHwndRenderTarget@@UEAAJXZ.c)
 *     ?GetPresentStatistics@CHwndRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO@@@Z @ 0x1800609D0 (-GetPresentStatistics@CHwndRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO.c)
 *     ?Render@CHwndRenderTarget@@UEAAJPEA_N@Z @ 0x180061DB0 (-Render@CHwndRenderTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UpdateMPOCaps@COverlayContext@@QEAAJ_NPEA_N@Z @ 0x180079B3C (-UpdateMPOCaps@COverlayContext@@QEAAJ_NPEA_N@Z.c)
 */

__int64 __fastcall CHwndRenderTarget::UpdateMPOCaps(CHwndRenderTarget *this, bool a2)
{
  unsigned int v3; // ebx
  COverlayContext *v4; // rcx
  int updated; // eax
  bool v7; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v4 = (COverlayContext *)*((_QWORD *)this + 105);
  if ( v4 )
  {
    v7 = 0;
    updated = COverlayContext::UpdateMPOCaps(v4, a2, &v7);
    v3 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x261u);
    }
    else if ( v7 )
    {
      *((_BYTE *)this + 161) = 1;
    }
  }
  return v3;
}
