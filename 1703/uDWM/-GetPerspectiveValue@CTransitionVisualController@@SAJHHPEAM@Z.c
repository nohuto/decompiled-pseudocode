/*
 * XREFs of ?GetPerspectiveValue@CTransitionVisualController@@SAJHHPEAM@Z @ 0x18000AC60
 * Callers:
 *     ?AddAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z @ 0x18000829C (-AddAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z.c)
 * Callees:
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180013014 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CTransitionVisualController::GetPerspectiveValue(unsigned int a1, unsigned int a2, float *a3)
{
  __int64 Theme; // rbp
  unsigned int v7; // edx
  int ThemeAnimationProperty; // eax
  unsigned int v9; // ebx
  int v11; // eax
  _BYTE v12[40]; // [rsp+40h] [rbp-28h] BYREF
  int v13; // [rsp+88h] [rbp+20h] BYREF

  v13 = 0;
  Theme = CDesktopManager::GetTheme(3LL);
  ThemeAnimationProperty = GetThemeAnimationProperty(Theme, a1, v7, 0LL, &v13, 4, v12);
  v9 = ThemeAnimationProperty;
  if ( ThemeAnimationProperty < 0 )
  {
    MilInstrumentationCheckHR(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      ThemeAnimationProperty,
      0xB59u);
  }
  else if ( (v13 & 0x10) != 0 )
  {
    v11 = GetThemeAnimationProperty(Theme, a1, a2, 258LL, a3, 4, v12);
    v9 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2u, v11, 0xB63u);
  }
  else
  {
    return (unsigned int)-2147467259;
  }
  return v9;
}
