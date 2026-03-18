/*
 * XREFs of ?_ShouldMaximizeWindow@@YAHPEAUtagWND@@@Z @ 0x1C00B7CD0
 * Callers:
 *     xxxComputeProposedPerMonRect @ 0x1C00B73CC (xxxComputeProposedPerMonRect.c)
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C00B79CC (xxxDeferWindowPosAndCheckPoint.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _ShouldMaximizeWindow(struct tagWND *a1)
{
  unsigned int v1; // r8d

  v1 = 1;
  if ( (*((_BYTE *)a1 + 71) & 1) == 0
    || (((*((_BYTE *)a1 + 70) & 0xC0) == 0xC0) & *((_BYTE *)a1 + 70)) == 0
    || *((int *)a1 + 76) < 0 )
  {
    return 0;
  }
  return v1;
}
