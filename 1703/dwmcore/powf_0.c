/*
 * XREFs of powf_0 @ 0x1800D53A8
 * Callers:
 *     ?scRGBTosRGB@@YAMM@Z @ 0x1800AED2C (-scRGBTosRGB@@YAMM@Z.c)
 *     ?CalcFrustumOutline@@YAXVCMILMatrix@@PEAULine3D@@111@Z @ 0x1801726D8 (-CalcFrustumOutline@@YAXVCMILMatrix@@PEAULine3D@@111@Z.c)
 *     ?Pow@CExpressionValueStack@@QEAAJXZ @ 0x18017F0BC (-Pow@CExpressionValueStack@@QEAAJXZ.c)
 *     ?CurrentInertiaVelocity@CScaleMotion@@MEBAMXZ @ 0x1801855B0 (-CurrentInertiaVelocity@CScaleMotion@@MEBAMXZ.c)
 *     ?UnboundedInertiaPanningAtTime@CPositionMotion@@AEBAMM@Z @ 0x1801857C0 (-UnboundedInertiaPanningAtTime@CPositionMotion@@AEBAMM@Z.c)
 *     ?UnboundedValueAtTime@CScaleMotion@@AEBAMM@Z @ 0x180185A34 (-UnboundedValueAtTime@CScaleMotion@@AEBAMM@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl powf_0(float X, float Y)
{
  return powf(X, Y);
}
