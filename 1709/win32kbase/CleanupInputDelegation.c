/*
 * XREFs of CleanupInputDelegation @ 0x1C0085870
 * Callers:
 *     <none>
 * Callees:
 *     ?ScrubDelegatedWindows@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C00857D8 (-ScrubDelegatedWindows@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ScrubDelegatedWindow @ 0x1C00858C0 (ScrubDelegatedWindow.c)
 *     ?ScrubDelegatedBaseWindow@@YAHPEAUtagBWND@@@Z @ 0x1C00DE36C (-ScrubDelegatedBaseWindow@@YAHPEAUtagBWND@@@Z.c)
 */

void __fastcall CleanupInputDelegation(struct tagTHREADINFO *a1, struct tagBWND *a2)
{
  if ( a2 )
  {
    if ( *((_BYTE *)qword_1C018E9B8 + dword_1C018E9C0 * (unsigned int)(unsigned __int16)*(_DWORD *)a2 + 24) == 1 )
      ScrubDelegatedWindow(a2);
    else
      ScrubDelegatedBaseWindow(a2);
  }
  else
  {
    ScrubDelegatedWindows(a1);
  }
}
