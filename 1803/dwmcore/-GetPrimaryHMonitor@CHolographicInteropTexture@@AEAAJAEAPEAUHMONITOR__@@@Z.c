/*
 * XREFs of ?GetPrimaryHMonitor@CHolographicInteropTexture@@AEAAJAEAPEAUHMONITOR__@@@Z @ 0x1801FB3FC
 * Callers:
 *     ?SetVisualTree@CHolographicInteropTexture@@AEAAJPEAVCVisualTree@@@Z @ 0x1801FBC58 (-SetVisualTree@CHolographicInteropTexture@@AEAAJPEAVCVisualTree@@@Z.c)
 * Callees:
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x18001F1FC (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z @ 0x1800B69A4 (--$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z.c)
 *     ?GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z @ 0x1800B6AB0 (-GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z.c)
 *     ??$ReleaseInterface@$$CBVCDisplay@@@@YAXAEAPEBVCDisplay@@@Z @ 0x1800C2FFC (--$ReleaseInterface@$$CBVCDisplay@@@@YAXAEAPEBVCDisplay@@@Z.c)
 */

__int64 __fastcall CHolographicInteropTexture::GetPrimaryHMonitor(CHolographicInteropTexture *this, HMONITOR *a2)
{
  int CurrentDisplaySet; // eax
  unsigned int v4; // ebx
  int PrimaryDisplay; // eax
  struct CDisplay *v7; // [rsp+40h] [rbp+8h] BYREF
  CDisplaySet *v8; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0LL;
  v8 = 0LL;
  v7 = 0LL;
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(this, &v8);
  v4 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, CurrentDisplaySet, 0x11Fu);
  }
  else
  {
    PrimaryDisplay = CDisplaySet::GetPrimaryDisplay(v8, &v7);
    v4 = PrimaryDisplay;
    if ( PrimaryDisplay < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, PrimaryDisplay, 0x120u);
    else
      *a2 = *(HMONITOR *)(*((_QWORD *)v7 + 19) + 16LL);
  }
  ReleaseInterface<CDisplay const>(&v7);
  ReleaseInterface<CDisplaySet const>(&v8);
  return v4;
}
