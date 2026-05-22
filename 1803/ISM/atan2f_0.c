/*
 * XREFs of atan2f_0 @ 0x1800E31ED
 * Callers:
 *     ?IsPointInHorizontalQuadrant@@YA_NNUfloat2@Numerics@Foundation@Windows@@@Z @ 0x18003AC80 (-IsPointInHorizontalQuadrant@@YA_NNUfloat2@Numerics@Foundation@Windows@@@Z.c)
 *     ?QuaternionToEulerAngles@SpatialInteractionDevices@@YAJAEBUXMFLOAT4@DirectX@@PEAM11@Z @ 0x18009BA00 (-QuaternionToEulerAngles@SpatialInteractionDevices@@YAJAEBUXMFLOAT4@DirectX@@PEAM11@Z.c)
 *     ?OnFlick@EdgyProcessorTarget@@AEAAJXZ @ 0x1800B445C (-OnFlick@EdgyProcessorTarget@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl atan2f_0(float Y, float X)
{
  return atan2f(Y, X);
}
