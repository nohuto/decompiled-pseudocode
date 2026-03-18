/*
 * XREFs of ?_IsTaskWindow@@YAHPEAUtagWND@@0@Z @ 0x1C01CB238
 * Callers:
 *     ?_RemoveNonTaskWindows@@YAHPEAUtagBWL@@PEAUtagWND@@PEAHPEAPEAPEAUHWND__@@@Z @ 0x1C01CB2B0 (-_RemoveNonTaskWindows@@YAHPEAUtagBWL@@PEAUtagWND@@PEAHPEAPEAPEAUHWND__@@@Z.c)
 * Callees:
 *     GetWindowCloakState @ 0x1C0061BB0 (GetWindowCloakState.c)
 *     IsWindowUnderActiveLockScreen @ 0x1C00B7310 (IsWindowUnderActiveLockScreen.c)
 */

__int64 __fastcall _IsTaskWindow(struct tagWND *a1, struct tagWND *a2)
{
  unsigned int v2; // edi
  __int64 v5; // rax

  v2 = 0;
  if ( ((*((_BYTE *)a1 + 66) & 4) != 0 || *((char *)a1 + 64) >= 0 && (*((_BYTE *)a1 + 67) & 8) == 0)
    && ((*((_BYTE *)a1 + 71) & 0x10) != 0 && !(unsigned int)GetWindowCloakState((__int64)a1) || a1 == a2) )
  {
    v5 = *((_QWORD *)a1 + 32);
    if ( (!v5 || (*(_BYTE *)(v5 + 71) & 8) == 0) && !(unsigned int)IsWindowUnderActiveLockScreen((__int64)a1) )
      return 1;
  }
  return v2;
}
