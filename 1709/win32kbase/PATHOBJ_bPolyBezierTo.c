/*
 * XREFs of PATHOBJ_bPolyBezierTo @ 0x1C00A0550
 * Callers:
 *     <none>
 * Callees:
 *     ?bPolyBezierTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z @ 0x1C001CB80 (-bPolyBezierTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z.c)
 */

BOOL __stdcall PATHOBJ_bPolyBezierTo(PATHOBJ *ppo, POINTFIX *pptfx, ULONG cptfx)
{
  return EPATHOBJ::bPolyBezierTo((EPATHOBJ *)ppo, 0LL, (struct _POINTL *)pptfx, cptfx);
}
