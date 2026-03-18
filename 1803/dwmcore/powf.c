/*
 * XREFs of powf @ 0x1800DB79C
 * Callers:
 *     ?CalcFrustumOutline@@YAXVCMILMatrix@@PEAULine3D@@111@Z @ 0x18018467C (-CalcFrustumOutline@@YAXVCMILMatrix@@PEAULine3D@@111@Z.c)
 *     ?Pow@CExpressionValueStack@@QEAAJXZ @ 0x1801BAC0C (-Pow@CExpressionValueStack@@QEAAJXZ.c)
 *     ?CurrentInertiaVelocity@CScaleMotion@@MEBAMXZ @ 0x1801C5360 (-CurrentInertiaVelocity@CScaleMotion@@MEBAMXZ.c)
 *     ?UnboundedInertiaPanningAtTime@CPositionMotion@@AEBAMM@Z @ 0x1801C5580 (-UnboundedInertiaPanningAtTime@CPositionMotion@@AEBAMM@Z.c)
 *     ?UnboundedValueAtTime@CScaleMotion@@AEBAMM@Z @ 0x1801C57F4 (-UnboundedValueAtTime@CScaleMotion@@AEBAMM@Z.c)
 *     ?ComputePrefilteredSize@@YAXIMMAEAI@Z @ 0x1801C6C3C (-ComputePrefilteredSize@@YAXIMMAEAI@Z.c)
 *     ?scRGBTosRGB@@YAMM@Z @ 0x180207F84 (-scRGBTosRGB@@YAMM@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl powf(float X, float Y)
{
  return _o_powf(X, Y);
}
