/*
 * XREFs of ?SetTopmost@@YAXPEAUtagWND@@HH@Z @ 0x1C0055B48
 * Callers:
 *     ?SetTopmostEnum@@YAXPEAUtagWND@@HH@Z @ 0x1C0054300 (-SetTopmostEnum@@YAXPEAUtagWND@@HH@Z.c)
 *     ?SetTopmost@@YAXPEAUtagWND@@HH@Z @ 0x1C0055B48 (-SetTopmost@@YAXPEAUtagWND@@HH@Z.c)
 * Callees:
 *     ?SetTopmost@@YAXPEAUtagWND@@HH@Z @ 0x1C0055B48 (-SetTopmost@@YAXPEAUtagWND@@HH@Z.c)
 *     NextOwnedWindow @ 0x1C0057BF0 (NextOwnedWindow.c)
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 */

void __fastcall SetTopmost(struct tagWND *a1, int a2, int a3)
{
  struct tagWND *v6; // rdi
  struct tagWND *OwnedWindow; // rax

  SetOrClrWF(((*((unsigned __int8 *)a1 + 64) >> 3) & 1) != a2, a1, 772LL, 1LL);
  if ( !a3 )
  {
    v6 = 0LL;
    while ( 1 )
    {
      OwnedWindow = (struct tagWND *)NextOwnedWindow(v6, a1, *((_QWORD *)a1 + 13));
      v6 = OwnedWindow;
      if ( !OwnedWindow )
        break;
      SetTopmost(OwnedWindow, a2, 0);
    }
  }
}
