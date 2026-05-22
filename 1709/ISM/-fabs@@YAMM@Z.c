/*
 * XREFs of ?fabs@@YAMM@Z @ 0x1800367F4
 * Callers:
 *     ?InjectPan@ManipulationInjector@@QEAAXMMK@Z @ 0x1800C0FF0 (-InjectPan@ManipulationInjector@@QEAAXMMK@Z.c)
 * Callees:
 *     <none>
 */

float __fastcall fabs(float a1)
{
  return COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a1) & _xmm);
}
