/*
 * XREFs of ?GetPrimaryHMonitor@CHolographicInteropTexture@@AEAAJAEAPEAUHMONITOR__@@@Z @ 0x1801A3F28
 * Callers:
 *     ?SetVisualTree@CHolographicInteropTexture@@AEAAJPEAVCVisualTree@@@Z @ 0x1801A43C0 (-SetVisualTree@CHolographicInteropTexture@@AEAAJPEAVCVisualTree@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x18007F234 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ??$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z @ 0x1800B7154 (--$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z.c)
 *     ?GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z @ 0x1800B76D8 (-GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z.c)
 *     ??$ReleaseInterface@$$CBVCDisplay@@@@YAXAEAPEBVCDisplay@@@Z @ 0x1800C588C (--$ReleaseInterface@$$CBVCDisplay@@@@YAXAEAPEBVCDisplay@@@Z.c)
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
    MilInstrumentationCheckHR(0x14u, 0LL, 0, CurrentDisplaySet, 0xEDu);
  }
  else
  {
    PrimaryDisplay = CDisplaySet::GetPrimaryDisplay(v8, &v7);
    v4 = PrimaryDisplay;
    if ( PrimaryDisplay < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, PrimaryDisplay, 0xEEu);
    else
      *a2 = *(HMONITOR *)(*((_QWORD *)v7 + 16) + 16LL);
  }
  ReleaseInterface<CDisplay const>(&v7);
  ReleaseInterface<CDisplaySet const>(&v8);
  return v4;
}
