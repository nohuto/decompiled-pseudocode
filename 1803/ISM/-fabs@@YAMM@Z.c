/*
 * XREFs of ?fabs@@YAMM@Z @ 0x180031C80
 * Callers:
 *     ?InjectPan@ManipulationInjector@@QEAAXMMK@Z @ 0x1800ACD48 (-InjectPan@ManipulationInjector@@QEAAXMMK@Z.c)
 * Callees:
 *     <none>
 */

float __fastcall fabs(float a1)
{
  return COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a1) & _xmm);
}
