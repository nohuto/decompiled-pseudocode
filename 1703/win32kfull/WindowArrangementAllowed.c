/*
 * XREFs of WindowArrangementAllowed @ 0x1C01EDF7C
 * Callers:
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01F33EC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxArrangeWindow @ 0x1C01F62C4 (xxxArrangeWindow.c)
 *     xxxInitializeMoveSizeData @ 0x1C01F76A4 (xxxInitializeMoveSizeData.c)
 * Callees:
 *     ?WindowArrangementApplicable@@YAHPEAUtagWND@@@Z @ 0x1C0139694 (-WindowArrangementApplicable@@YAHPEAUtagWND@@@Z.c)
 */

_BOOL8 __fastcall WindowArrangementAllowed(struct tagWND *a1)
{
  _BOOL8 result; // rax

  result = WindowArrangementApplicable(a1);
  if ( result )
    return dword_1C03257DC & 1;
  return result;
}
