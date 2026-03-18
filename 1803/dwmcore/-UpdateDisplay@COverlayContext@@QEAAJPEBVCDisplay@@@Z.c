/*
 * XREFs of ?UpdateDisplay@COverlayContext@@QEAAJPEBVCDisplay@@@Z @ 0x18007A040
 * Callers:
 *     ?InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@_N4@Z @ 0x180062824 (-InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@.c)
 *     ?Create@COverlayContext@@SAJPEAVCComposition@@PEBVCDisplay@@PEAPEAV1@@Z @ 0x1800C98A0 (-Create@COverlayContext@@SAJPEAVCComposition@@PEBVCDisplay@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x18001F1FC (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180079700 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?IsXboxAdapterLuid@CD3DDeviceManager@@QEAA_NU_LUID@@@Z @ 0x1800898AC (-IsXboxAdapterLuid@CD3DDeviceManager@@QEAA_NU_LUID@@@Z.c)
 *     ?Release@CDisplaySet@@QEBAKXZ @ 0x1800B6AE8 (-Release@CDisplaySet@@QEBAKXZ.c)
 *     ?IsDesktopPlaneSplitEnabled@CDisplay@@QEBA_NXZ @ 0x1800B75A8 (-IsDesktopPlaneSplitEnabled@CDisplay@@QEBA_NXZ.c)
 *     ?IsOldIntelOverlayDriver@CDisplay@@QEBA_NXZ @ 0x1800B75C8 (-IsOldIntelOverlayDriver@CDisplay@@QEBA_NXZ.c)
 *     ?IsOldQualcommOverlayDriver@CDisplay@@QEBA_NXZ @ 0x1800B75FC (-IsOldQualcommOverlayDriver@CDisplay@@QEBA_NXZ.c)
 */

__int64 __fastcall COverlayContext::UpdateDisplay(COverlayContext *this, const struct CDisplay *a2)
{
  __int64 v2; // rax
  bool v5; // al
  bool v6; // al
  CDisplayManager *v7; // rcx
  int CurrentDisplaySet; // eax
  CD3DDeviceManager *v9; // rcx
  CDisplaySet *v10; // rsi
  unsigned int v11; // ebp
  CDisplaySet *v13; // [rsp+30h] [rbp-28h] BYREF

  v2 = *((_QWORD *)a2 + 19);
  v13 = 0LL;
  *((_QWORD *)this + 11) = *(_QWORD *)(v2 + 16);
  *((_DWORD *)this + 24) = *((_DWORD *)a2 + 64);
  *((_DWORD *)this + 295) = *((_DWORD *)a2 + 67);
  v5 = CDisplay::IsDesktopPlaneSplitEnabled(a2) && CCommonRegistryData::m_fEnableDesktopPlaneSplit;
  *((_BYTE *)this + 1184) = v5;
  v6 = *((_BYTE *)a2 + 317) && !*((_BYTE *)this + 1185);
  *((_BYTE *)this + 1199) = v6;
  *((_BYTE *)this + 1186) = CDisplay::IsOldIntelOverlayDriver(a2);
  *((_BYTE *)this + 1187) = CDisplay::IsOldQualcommOverlayDriver(a2);
  **((_DWORD **)this + 133) = 0;
  *((_DWORD *)this + 290) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 1136, 0x10u);
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(v7, &v13);
  v10 = v13;
  v11 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, CurrentDisplaySet, 0x6Eu);
  }
  else
  {
    LOBYTE(v9) = *((_DWORD *)v13 + 18) == 1;
    *((_BYTE *)this + 1201) = (_BYTE)v9;
    if ( CD3DDeviceManager::IsXboxAdapterLuid(v9, *(struct _LUID *)((char *)a2 + 248)) )
      COverlayContext::s_bXbox = 1;
  }
  if ( v10 )
    CDisplaySet::Release(v10);
  return v11;
}
