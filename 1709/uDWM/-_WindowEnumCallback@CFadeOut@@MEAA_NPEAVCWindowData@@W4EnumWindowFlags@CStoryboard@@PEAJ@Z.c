/*
 * XREFs of ?_WindowEnumCallback@CFadeOut@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180098D50
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?_FadeWindow@CFade@@IEAAJPEAVCWindowData@@_N@Z @ 0x18009581C (-_FadeWindow@CFade@@IEAAJPEAVCWindowData@@_N@Z.c)
 */

char __fastcall CFadeOut::_WindowEnumCallback(CFade *a1, struct CWindowData *a2, char a3, int *a4)
{
  int v4; // ebx
  unsigned int v6; // eax
  int v7; // eax

  v4 = 0;
  if ( (a3 & 1) != 0 )
  {
    v6 = *((_DWORD *)a2 + 150) & 0xFFF;
    if ( v6 >= 0x1A && (v6 <= 0x1B || v6 == 67) )
    {
      v7 = CFade::_FadeWindow(a1, a2, 0);
      v4 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v7, 0x11B2u);
    }
  }
  *a4 = v4;
  return 1;
}
