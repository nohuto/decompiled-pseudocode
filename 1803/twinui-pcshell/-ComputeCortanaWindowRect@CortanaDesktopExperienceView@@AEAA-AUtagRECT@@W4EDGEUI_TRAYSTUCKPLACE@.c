/*
 * XREFs of ?ComputeCortanaWindowRect@CortanaDesktopExperienceView@@AEAA?AUtagRECT@@W4EDGEUI_TRAYSTUCKPLACE@@HHU2@_N@Z @ 0x18006324C
 * Callers:
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x180062350 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?ApplyCortanaWindowRegionWithCustomRects@CortanaDesktopExperienceView@@AEAAJURect@Foundation@Windows@@@Z @ 0x18018503C (-ApplyCortanaWindowRegionWithCustomRects@CortanaDesktopExperienceView@@AEAAJURect@Foundation@Win.c)
 * Callees:
 *     ?IsBiDiLocale@@YAHK@Z @ 0x18007DE0C (-IsBiDiLocale@@YAHK@Z.c)
 */

_DWORD *__fastcall CortanaDesktopExperienceView::ComputeCortanaWindowRect(
        __int64 a1,
        _DWORD *a2,
        int a3,
        int a4,
        int LCData,
        _DWORD *a6,
        char a7)
{
  int v7; // esi
  int v10; // r8d
  LANGID v11; // ax
  _DWORD *v12; // rax
  int v13; // ecx
  bool v14; // zf
  int v15; // eax
  int v16; // eax
  _DWORD *result; // rax
  _DWORD *v18; // rcx
  int v19; // eax
  LANGID ThreadUILanguage; // ax
  int v21; // ecx

  v7 = LCData;
  if ( !a3 )
  {
    v18 = a6;
    v19 = a6[2];
    goto LABEL_19;
  }
  v10 = a3 - 1;
  if ( !v10 )
  {
    ThreadUILanguage = GetThreadUILanguage();
    if ( (unsigned int)IsBiDiLocale(ThreadUILanguage) )
      v21 = a6[2] - a4;
    else
      v21 = *a6;
    v16 = a6[3];
    *a2 = v21;
    goto LABEL_10;
  }
  if ( v10 == 1 )
  {
    v18 = a6;
    v19 = *a6 - a4;
LABEL_19:
    *a2 = v19;
    v16 = v18[1];
    goto LABEL_10;
  }
  v11 = GetThreadUILanguage();
  if ( GetLocaleInfoW(v11, 0x20000070u, (LPWSTR)&LCData, 2) > 0 && LCData == 1 )
  {
    v12 = a6;
    v13 = a6[2] - a4;
  }
  else
  {
    v12 = a6;
    v13 = *a6;
  }
  v14 = a7 == 0;
  *a2 = v13;
  if ( v14 )
    v15 = v12[1];
  else
    v15 = v12[3];
  v16 = v15 - v7;
LABEL_10:
  a2[1] = v16;
  result = a2;
  a2[2] = a4 + *a2;
  a2[3] = v7 + a2[1];
  return result;
}
