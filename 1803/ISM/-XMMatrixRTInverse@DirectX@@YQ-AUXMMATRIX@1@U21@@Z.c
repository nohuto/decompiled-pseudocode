/*
 * XREFs of ?XMMatrixRTInverse@DirectX@@YQ?AUXMMATRIX@1@U21@@Z @ 0x1800BAAB8
 * Callers:
 *     _lambda_2e90b6ae67ad76cbf474a8c31d64668a_::operator() @ 0x1800C7D00 (_lambda_2e90b6ae67ad76cbf474a8c31d64668a_--operator().c)
 *     ?UpdateSimulatedPose@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAX_JAEBUPoseData@SpatialInteractionDevices@@PEAUISpatialGraphNodeReference@Holographic@34@AEBUMatrix4x4@Numerics@Foundation@4@3@Z @ 0x1800D7430 (-UpdateSimulatedPose@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AE.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

// local variable allocation has failed, the output may be wrong!
__m128 __fastcall DirectX::XMMatrixRTInverse(double a1, double a2, double a3)
{
  return _mm_shuffle_ps(
           _mm_shuffle_ps(*(__m128 *)&a1, *(__m128 *)&a2, 68),
           _mm_shuffle_ps(*(__m128 *)&a3, (__m128)0LL, 68),
           136);
}
