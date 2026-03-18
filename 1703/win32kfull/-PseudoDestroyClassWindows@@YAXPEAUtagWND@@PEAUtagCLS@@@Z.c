/*
 * XREFs of ?PseudoDestroyClassWindows@@YAXPEAUtagWND@@PEAUtagCLS@@@Z @ 0x1C01EF808
 * Callers:
 *     ?PseudoDestroyClassWindows@@YAXPEAUtagWND@@PEAUtagCLS@@@Z @ 0x1C01EF808 (-PseudoDestroyClassWindows@@YAXPEAUtagWND@@PEAUtagCLS@@@Z.c)
 *     _WOWModuleUnload @ 0x1C01EF9B0 (_WOWModuleUnload.c)
 * Callees:
 *     ?PseudoDestroyClassWindows@@YAXPEAUtagWND@@PEAUtagCLS@@@Z @ 0x1C01EF808 (-PseudoDestroyClassWindows@@YAXPEAUtagWND@@PEAUtagCLS@@@Z.c)
 */

void __fastcall PseudoDestroyClassWindows(struct tagWND *a1, struct tagCLS *a2)
{
  __int64 i; // rbx

  for ( i = *((_QWORD *)a1 + 14); i; i = *(_QWORD *)(i + 88) )
  {
    if ( *(struct tagCLS **)(i + 168) == a2 && gptiCurrent == *(_QWORD *)(i + 16) && (*(_BYTE *)(i + 58) & 4) == 0 )
      *(_QWORD *)(i + 160) = *(_QWORD *)(gpsi + 424LL);
    if ( *(_QWORD *)(i + 112) )
      PseudoDestroyClassWindows((struct tagWND *)i, a2);
  }
}
