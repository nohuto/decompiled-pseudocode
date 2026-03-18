/*
 * XREFs of SetMinimize @ 0x1C004BB24
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C004AB9C (xxxMinMaximizeEx.c)
 *     xxxCreateWindowEx @ 0x1C006F794 (xxxCreateWindowEx.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01DAD48 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 *     IncVisWindows @ 0x1C0092CD4 (IncVisWindows.c)
 *     DecVisWindows @ 0x1C0092F98 (DecVisWindows.c)
 */

__int64 __fastcall SetMinimize(__int64 a1, char a2)
{
  __int64 result; // rax

  if ( (a2 & 1) != 0 )
  {
    if ( (*(_BYTE *)(a1 + 71) & 0x10) != 0 )
      DecVisWindows();
    return SetOrClrWF(1LL, a1, 3872LL, 1LL);
  }
  else
  {
    result = SetOrClrWF(0LL, a1, 3872LL, 1LL);
    if ( (*(_BYTE *)(a1 + 71) & 0x10) != 0 )
      return IncVisWindows(a1);
  }
  return result;
}
