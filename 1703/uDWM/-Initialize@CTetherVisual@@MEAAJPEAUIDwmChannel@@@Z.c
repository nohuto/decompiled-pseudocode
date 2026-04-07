/*
 * XREFs of ?Initialize@CTetherVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18008D220
 * Callers:
 *     ??$CreateTouchVisual@VCTetherVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCTetherVisual@@@Z @ 0x180088A60 (--$CreateTouchVisual@VCTetherVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCTetherVisual@@@Z.c)
 * Callees:
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180013014 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x180023A60 (-Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x18004485C (-CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CTetherVisual::Initialize(struct CBitmapSource **this, struct IDwmChannel *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  void *Theme; // rax
  int BitmapFromAtlas; // eax
  __int128 v7; // xmm0

  v3 = CVisual::Initialize((CVisual *)this, a2);
  v4 = v3;
  if ( v3 >= 0 )
  {
    Theme = (void *)CDesktopManager::GetTheme(1);
    BitmapFromAtlas = CTopLevelWindow::CreateBitmapFromAtlas(Theme, 3, 0LL, this + 43);
    v4 = BitmapFromAtlas;
    if ( BitmapFromAtlas >= 0 )
    {
      v7 = *((_OWORD *)this[43] + 5);
      *((_BYTE *)this + 416) = 0;
      *((_OWORD *)this + 22) = v7;
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, BitmapFromAtlas, 0x35u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v3, 0x33u);
  }
  return v4;
}
