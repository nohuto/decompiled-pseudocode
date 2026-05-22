/*
 * XREFs of PoseClientStatics::SpatialTrackingPoseToInversePoseWithDifferentials @ 0x1800AE3DC
 * Callers:
 *     ?PredictFromPoses@ConstantVelocityPosePredictionModel@Holographic@Internal@Windows@@UEAAJPEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@_K_J0@Z @ 0x1800AEE50 (-PredictFromPoses@ConstantVelocityPosePredictionModel@Holographic@Internal@Windows@@UEAAJPEAUSPA.c)
 *     ?PredictFromPoses@ComputeVelocityFallbackPosePredictionModel@Holographic@Internal@Windows@@UEAAJPEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@_K_J0@Z @ 0x1800AF030 (-PredictFromPoses@ComputeVelocityFallbackPosePredictionModel@Holographic@Internal@Windows@@UEAAJ.c)
 * Callees:
 *     ??$SE3_invert@M@ST@@YAXAEAU?$SE3@M@0@AEBU10@@Z @ 0x1800C900C (--$SE3_invert@M@ST@@YAXAEAU-$SE3@M@0@AEBU10@@Z.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

_OWORD *__fastcall PoseClientStatics::SpatialTrackingPoseToInversePoseWithDifferentials(_OWORD *a1, __int64 a2)
{
  _DWORD *v3; // rax
  __int64 v4; // rcx
  __int128 v6; // [rsp+20h] [rbp-19h]
  __int128 v7; // [rsp+30h] [rbp-9h]
  __int128 v8; // [rsp+40h] [rbp+7h]
  _OWORD v9[3]; // [rsp+50h] [rbp+17h] BYREF

  v3 = (_DWORD *)a1 + 18;
  *a1 = `ST::SE3_identity<float>'::`2'::id;
  a1[1] = xmmword_1800E60D8;
  a1[2] = xmmword_1800E60E8;
  v4 = 6LL;
  do
  {
    *(v3 - 6) = 0;
    *v3++ = 0;
    --v4;
  }
  while ( v4 );
  LODWORD(v6) = *(_DWORD *)a2;
  DWORD1(v6) = *(_DWORD *)(a2 + 12);
  DWORD2(v6) = *(_DWORD *)(a2 + 24);
  v8 = *(_OWORD *)(a2 + 32);
  HIDWORD(v6) = *(_DWORD *)(a2 + 4);
  DWORD1(v7) = *(_DWORD *)(a2 + 28);
  LODWORD(v7) = *(_DWORD *)(a2 + 16);
  DWORD2(v7) = *(_DWORD *)(a2 + 8);
  HIDWORD(v7) = *(_DWORD *)(a2 + 20);
  v9[0] = v6;
  v9[1] = v7;
  v9[2] = v8;
  ST::SE3_invert<float>(a1, v9);
  return a1;
}
