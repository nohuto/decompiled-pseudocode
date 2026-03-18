/*
 * XREFs of xxxComputeProposedPerMonRect @ 0x1C00B73CC
 * Callers:
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C00B7444 (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 * Callees:
 *     FindOldMonitor @ 0x1C00B7BF4 (FindOldMonitor.c)
 *     ?_ShouldMaximizeWindow@@YAHPEAUtagWND@@@Z @ 0x1C00B7CD0 (-_ShouldMaximizeWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?zzzNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z @ 0x1C00FBBB8 (-zzzNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z.c)
 */

__int64 __fastcall xxxComputeProposedPerMonRect(struct tagWND *a1, struct tagMONITORRECTS *a2, struct tagRECT *a3)
{
  struct tagRECT *v3; // rsi
  int OldMonitor; // eax
  int ShouldMaximizeWindow; // eax
  int v10; // r9d

  v3 = (struct tagRECT *)((char *)a1 + 128);
  *a3 = *((struct tagRECT *)a1 + 8);
  OldMonitor = FindOldMonitor((char *)a1 + 128, a2, *((unsigned int *)a1 + 92));
  if ( OldMonitor == -1 || *((_WORD *)a1 + 186) == *((_WORD *)a2 + 60 * OldMonitor + 52) )
    return 0LL;
  ShouldMaximizeWindow = _ShouldMaximizeWindow(a1);
  zzzNormalizeRect(a1, a3, v3, a2, v10, ShouldMaximizeWindow != 0, 1);
  return 1LL;
}
