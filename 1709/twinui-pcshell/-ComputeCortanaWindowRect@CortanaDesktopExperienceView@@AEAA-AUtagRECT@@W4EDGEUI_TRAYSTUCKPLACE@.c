/*
 * XREFs of ?ComputeCortanaWindowRect@CortanaDesktopExperienceView@@AEAA?AUtagRECT@@W4EDGEUI_TRAYSTUCKPLACE@@HHU2@_N@Z @ 0x1800D8EAC
 * Callers:
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x1800D9474 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 * Callees:
 *     <none>
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
  _DWORD *v17; // rcx
  int v18; // eax
  LANGID ThreadUILanguage; // ax
  _DWORD *v20; // rax
  int v21; // ecx
  _DWORD *result; // rax

  v7 = LCData;
  if ( !a3 )
  {
    v17 = a6;
    v18 = a6[2];
    goto LABEL_20;
  }
  v10 = a3 - 1;
  if ( !v10 )
  {
    ThreadUILanguage = GetThreadUILanguage();
    if ( GetLocaleInfoW(ThreadUILanguage, 0x20000070u, (LPWSTR)&LCData, 2) > 0 && LCData == 1 )
    {
      v20 = a6;
      v21 = a6[2] - a4;
    }
    else
    {
      v20 = a6;
      v21 = *a6;
    }
    v16 = v20[3];
    *a2 = v21;
    goto LABEL_18;
  }
  if ( v10 == 1 )
  {
    v17 = a6;
    v18 = *a6 - a4;
LABEL_20:
    *a2 = v18;
    a2[1] = v17[1];
    goto LABEL_21;
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
LABEL_18:
  a2[1] = v16;
LABEL_21:
  result = a2;
  a2[2] = a4 + *a2;
  a2[3] = v7 + a2[1];
  return result;
}
