/*
 * XREFs of ?InterpolatePoses@ConstantVelocityPosePredictionModel@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@0_JPEAU5@@Z @ 0x1800AF010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::Holographic::ConstantVelocityPosePredictionModel::InterpolatePoses(
        Windows::Internal::Holographic::ConstantVelocityPosePredictionModel *this,
        const struct SPATIAL_GRAPH_DYNAMIC_NODE_POSE *a2,
        const struct SPATIAL_GRAPH_DYNAMIC_NODE_POSE *a3,
        __int64 a4,
        struct SPATIAL_GRAPH_DYNAMIC_NODE_POSE *a5)
{
  return Windows::Internal::Holographic::PosePredictionHelpers::InterpolatePoses(
           (__int64)a2,
           (__int64)a3,
           a4,
           (__int64)a5);
}
