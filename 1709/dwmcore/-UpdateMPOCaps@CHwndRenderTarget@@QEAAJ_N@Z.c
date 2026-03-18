/*
 * XREFs of ?UpdateMPOCaps@CHwndRenderTarget@@QEAAJ_N@Z @ 0x180017388
 * Callers:
 *     ?HandleWindowErrors@CHwndRenderTarget@@IEAAJJ@Z @ 0x1800179B4 (-HandleWindowErrors@CHwndRenderTarget@@IEAAJJ@Z.c)
 *     ?CheckOcclusionState@CHwndRenderTarget@@UEAAJXZ @ 0x180018130 (-CheckOcclusionState@CHwndRenderTarget@@UEAAJXZ.c)
 *     ?GetPresentStatistics@CHwndRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO@@@Z @ 0x180018220 (-GetPresentStatistics@CHwndRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO.c)
 *     ?Render@CHwndRenderTarget@@UEAAJPEA_N@Z @ 0x180019700 (-Render@CHwndRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?UpdateMPOCaps@CRenderTargetManager@@QEAAJXZ @ 0x18001B594 (-UpdateMPOCaps@CRenderTargetManager@@QEAAJXZ.c)
 * Callees:
 *     ?UpdateMPOCaps@COverlayContext@@QEAAJ_NPEA_N@Z @ 0x180067510 (-UpdateMPOCaps@COverlayContext@@QEAAJ_NPEA_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwndRenderTarget::UpdateMPOCaps(CHwndRenderTarget *this, bool a2)
{
  unsigned int v3; // ebx
  COverlayContext *v4; // rcx
  int updated; // eax
  bool v7; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v4 = (COverlayContext *)*((_QWORD *)this + 99);
  if ( v4 )
  {
    v7 = 0;
    updated = COverlayContext::UpdateMPOCaps(v4, a2, &v7);
    v3 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x205u);
    }
    else if ( v7 )
    {
      (*(void (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)this + 216LL))(this);
    }
  }
  return v3;
}
