/*
 * XREFs of PATHOBJ_bCloseFigure @ 0x1C00A2370
 * Callers:
 *     <none>
 * Callees:
 *     ?bCloseFigure@EPATHOBJ@@QEAAHXZ @ 0x1C001CA70 (-bCloseFigure@EPATHOBJ@@QEAAHXZ.c)
 */

BOOL __stdcall PATHOBJ_bCloseFigure(PATHOBJ *ppo)
{
  return EPATHOBJ::bCloseFigure((EPATHOBJ *)ppo);
}
