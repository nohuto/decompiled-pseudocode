/*
 * XREFs of CleanupInputDelegation @ 0x1C00800C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CleanupInputDelegation(struct tagTHREADINFO *a1, struct tagBWND *a2)
{
  if ( a2 )
  {
    if ( *((_BYTE *)qword_1C0189E38 + dword_1C0189E40 * (unsigned int)(unsigned __int16)*(_DWORD *)a2 + 24) == 1 )
      ScrubDelegatedWindow(a2);
    else
      ScrubDelegatedBaseWindow(a2);
  }
  else
  {
    ScrubDelegatedWindows(a1);
  }
}
