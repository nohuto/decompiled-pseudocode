/*
 * XREFs of ?XMMatrixRTInverse@DirectX@@YQ?AUXMMATRIX@1@U21@@Z @ 0x1800B4794
 * Callers:
 *     _lambda_d3375ebeae4829c9f30dd12a415fc5f7_::operator() @ 0x1800B82F4 (_lambda_d3375ebeae4829c9f30dd12a415fc5f7_--operator().c)
 *     ?UpdateSimulatedPose@SpatialInteractionController@SpatialInteractionDevices@@AEAAX_JAEBUPoseData@2@PEAUISpatialGraphNodeReference@Holographic@Internal@Windows@@AEBUMatrix4x4@Numerics@Foundation@7@3@Z @ 0x1800C5454 (-UpdateSimulatedPose@SpatialInteractionController@SpatialInteractionDevices@@AEAAX_JAEBUPoseData.c)
 * Callees:
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

// local variable allocation has failed, the output may be wrong!
__m128 __fastcall DirectX::XMMatrixRTInverse(double a1, double a2, double a3)
{
  return _mm_shuffle_ps(
           _mm_shuffle_ps(*(__m128 *)&a1, *(__m128 *)&a2, 68),
           _mm_shuffle_ps(*(__m128 *)&a3, (__m128)0LL, 68),
           136);
}
