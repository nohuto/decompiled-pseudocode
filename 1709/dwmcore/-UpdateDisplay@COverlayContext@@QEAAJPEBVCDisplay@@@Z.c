/*
 * XREFs of ?UpdateDisplay@COverlayContext@@QEAAJPEBVCDisplay@@@Z @ 0x18006777C
 * Callers:
 *     ?InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@_N4@Z @ 0x180019AC4 (-InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@.c)
 *     ?Create@COverlayContext@@SAJPEAVCComposition@@PEBVCDisplay@@PEAPEAV1@@Z @ 0x180141990 (-Create@COverlayContext@@SAJPEAVCComposition@@PEBVCDisplay@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180010F74 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?IsXboxAdapterLuid@CD3DDeviceManager@@QEAA_NU_LUID@@@Z @ 0x18001A0A0 (-IsXboxAdapterLuid@CD3DDeviceManager@@QEAA_NU_LUID@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180068870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsDesktopPlaneSplitEnabled@CDisplay@@QEBA_NXZ @ 0x180077948 (-IsDesktopPlaneSplitEnabled@CDisplay@@QEBA_NXZ.c)
 *     ?IsOldQualcommOverlayDriver@CDisplay@@QEBA_NXZ @ 0x180077968 (-IsOldQualcommOverlayDriver@CDisplay@@QEBA_NXZ.c)
 *     ?IsOldIntelOverlayDriver@CDisplay@@QEBA_NXZ @ 0x180077980 (-IsOldIntelOverlayDriver@CDisplay@@QEBA_NXZ.c)
 *     ?Release@CDisplaySet@@QEBAKXZ @ 0x180098A94 (-Release@CDisplaySet@@QEBAKXZ.c)
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

  v2 = *((_QWORD *)a2 + 16);
  v13 = 0LL;
  *((_QWORD *)this + 11) = *(_QWORD *)(v2 + 16);
  *((_DWORD *)this + 24) = *((_DWORD *)a2 + 58);
  *((_DWORD *)this + 292) = *((_DWORD *)a2 + 62);
  v5 = CDisplay::IsDesktopPlaneSplitEnabled(a2) && CCommonRegistryData::m_fEnableDesktopPlaneSplit;
  *((_BYTE *)this + 1172) = v5;
  v6 = *((_BYTE *)a2 + 297) && !*((_BYTE *)this + 1173);
  *((_BYTE *)this + 1187) = v6;
  *((_BYTE *)this + 1174) = CDisplay::IsOldIntelOverlayDriver(a2);
  *((_BYTE *)this + 1175) = CDisplay::IsOldQualcommOverlayDriver(a2);
  **((_DWORD **)this + 132) = 0;
  *((_DWORD *)this + 288) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 1128, 16LL);
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(v7, &v13);
  v10 = v13;
  v11 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, CurrentDisplaySet, 0x6Du);
  }
  else
  {
    LOBYTE(v9) = *((_DWORD *)v13 + 18) == 1;
    *((_BYTE *)this + 1189) = (_BYTE)v9;
    if ( CD3DDeviceManager::IsXboxAdapterLuid(v9, *(struct _LUID *)((char *)a2 + 224)) )
      COverlayContext::s_bXbox = 1;
  }
  if ( v10 )
    CDisplaySet::Release(v10);
  return v11;
}
