/*
 * XREFs of ?Initialize@CTetherVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x180087FC0
 * Callers:
 *     ??$CreateTouchVisual@VCTetherVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCTetherVisual@@@Z @ 0x18007FF0C (--$CreateTouchVisual@VCTetherVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCTetherVisual@@@Z.c)
 * Callees:
 *     ?Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x1800184C0 (-Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x18002FD58 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x18003B1B4 (-CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z.c)
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
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, BitmapFromAtlas, 0x35u);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x33u);
  }
  return v4;
}
