/*
 * XREFs of powf_0 @ 0x1800C5D92
 * Callers:
 *     ?CalcFrustumOutline@@YAXVCMILMatrix@@PEAULine3D@@111@Z @ 0x18015B50C (-CalcFrustumOutline@@YAXVCMILMatrix@@PEAULine3D@@111@Z.c)
 *     ?Pow@CExpressionValueStack@@QEAAJXZ @ 0x180186290 (-Pow@CExpressionValueStack@@QEAAJXZ.c)
 *     ?UnboundedInertiaPanningAtTime@CPositionMotion@@AEBAMM@Z @ 0x18018D850 (-UnboundedInertiaPanningAtTime@CPositionMotion@@AEBAMM@Z.c)
 *     ?CurrentInertiaVelocity@CScaleMotion@@MEBAMXZ @ 0x18018D9D0 (-CurrentInertiaVelocity@CScaleMotion@@MEBAMXZ.c)
 *     ?UnboundedValueAtTime@CScaleMotion@@AEBAMM@Z @ 0x18018DB44 (-UnboundedValueAtTime@CScaleMotion@@AEBAMM@Z.c)
 *     ?scRGBTosRGB@@YAMM@Z @ 0x1801CAAAC (-scRGBTosRGB@@YAMM@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl powf_0(float X, float Y)
{
  return powf(X, Y);
}
