/*
 * XREFs of xxxComputeProposedPerMonRect @ 0x1C00C9794
 * Callers:
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C00C980C (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 * Callees:
 *     FindOldMonitor @ 0x1C00CA0DC (FindOldMonitor.c)
 *     ?xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z @ 0x1C00CA334 (-xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z.c)
 *     ?_ShouldMaximizeWindow@@YAHPEAUtagWND@@@Z @ 0x1C00CA98C (-_ShouldMaximizeWindow@@YAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxComputeProposedPerMonRect(struct tagWND *a1, struct tagMONITORRECTS *a2, struct tagRECT *a3)
{
  struct tagRECT *v3; // rbp
  int OldMonitor; // eax
  int ShouldMaximizeWindow; // eax
  int v10; // r9d

  v3 = (struct tagRECT *)((char *)a1 + 128);
  *a3 = *((struct tagRECT *)a1 + 8);
  OldMonitor = FindOldMonitor(a1, a2, 0LL);
  if ( OldMonitor == -1 || *((_WORD *)a1 + 186) == *((_WORD *)a2 + 24 * OldMonitor + 20) )
    return 0LL;
  ShouldMaximizeWindow = _ShouldMaximizeWindow(a1);
  xxxNormalizeRect(a1, a3, v3, a2, v10, ShouldMaximizeWindow != 0, 1);
  return 1LL;
}
