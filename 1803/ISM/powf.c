/*
 * XREFs of powf @ 0x1800E1ADA
 * Callers:
 *     ?CalculateNavigationDelta@ControllerProcessor@@AEAAJMM@Z @ 0x1800342EC (-CalculateNavigationDelta@ControllerProcessor@@AEAAJMM@Z.c)
 *     ?CalculateZoomDelta@ControllerProcessor@@AEAAJM@Z @ 0x1800346E8 (-CalculateZoomDelta@ControllerProcessor@@AEAAJM@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl powf(float X, float Y)
{
  return _o_powf(X, Y);
}
