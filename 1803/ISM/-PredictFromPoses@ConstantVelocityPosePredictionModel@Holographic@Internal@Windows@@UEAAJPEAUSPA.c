/*
 * XREFs of ?PredictFromPoses@ConstantVelocityPosePredictionModel@Holographic@Internal@Windows@@UEAAJPEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@_K_J0@Z @ 0x1800BA3B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1800B9954 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     PoseClientStatics::SpatialTrackingPoseToInversePoseWithDifferentials @ 0x1800B99CC (PoseClientStatics--SpatialTrackingPoseToInversePoseWithDifferentials.c)
 *     ??4SPATIAL_GRAPH_DYNAMIC_NODE_POSE@@QEAAAEAU0@AEBU0@@Z @ 0x1800B9F8C (--4SPATIAL_GRAPH_DYNAMIC_NODE_POSE@@QEAAAEAU0@AEBU0@@Z.c)
 *     Windows::Internal::Holographic::PosePredictionHelpers::CreatePredictionNode @ 0x1800BA068 (Windows--Internal--Holographic--PosePredictionHelpers--CreatePredictionNode.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

__int64 __fastcall Windows::Internal::Holographic::ConstantVelocityPosePredictionModel::PredictFromPoses(
        Windows::Internal::Holographic::ConstantVelocityPosePredictionModel *this,
        struct SPATIAL_GRAPH_DYNAMIC_NODE_POSE *a2,
        __int64 a3,
        __int64 a4,
        struct SPATIAL_GRAPH_DYNAMIC_NODE_POSE *a5)
{
  __int64 v7; // rdx
  unsigned int v8; // ebx
  char *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r9
  float v13; // xmm3_4
  int v14; // xmm1_4
  int v15; // xmm0_4
  int v16; // xmm1_4
  int v17; // xmm0_4
  const char *v18; // [rsp+28h] [rbp-80h]
  _OWORD v19[3]; // [rsp+30h] [rbp-78h] BYREF
  int v20; // [rsp+60h] [rbp-48h]
  int v21; // [rsp+64h] [rbp-44h]
  int v22; // [rsp+68h] [rbp-40h]
  int v23; // [rsp+6Ch] [rbp-3Ch]
  int v24; // [rsp+70h] [rbp-38h]
  int v25; // [rsp+74h] [rbp-34h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  if ( !a2 )
  {
    v7 = 156LL;
LABEL_3:
    v8 = -2147467261;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\posepredictionmodels.h",
      (const char *)v8);
    return v8;
  }
  if ( !a5 )
  {
    v7 = 157LL;
    goto LABEL_3;
  }
  if ( !a3 )
  {
    v10 = "Incorrect number of poses provided";
    v11 = 159LL;
LABEL_10:
    v8 = -2147024809;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)v11,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\posepredictionmodels.h",
      (const char *)0x80070057LL,
      (unsigned __int16 *)v10,
      v18);
    return v8;
  }
  if ( *(_QWORD *)a2 > a4 )
  {
    v10 = "timestamp predates poses";
    v11 = 162LL;
    goto LABEL_10;
  }
  PoseClientStatics::SpatialTrackingPoseToInversePoseWithDifferentials(v19, (__int64)a2 + 36);
  v13 = (double)((int)a4 - *(_DWORD *)a2) / (double)(int)qword_1801366F8;
  if ( v13 <= 0.0 )
  {
    SPATIAL_GRAPH_DYNAMIC_NODE_POSE::operator=((__int64)a5, (__int64)a2);
  }
  else
  {
    if ( (*((_BYTE *)a2 + 16) & 4) != 0 && (*((_BYTE *)a2 + 156) & 1) == 0 )
    {
      v14 = *((_DWORD *)a2 + 22);
      v20 = *((_DWORD *)a2 + 21) ^ _xmm;
      v15 = *((_DWORD *)a2 + 23) ^ _xmm;
      v21 = v14 ^ _xmm;
      v22 = v15;
    }
    if ( (*((_BYTE *)a2 + 16) & 0x10) != 0 )
    {
      v16 = *((_DWORD *)a2 + 25);
      v23 = *((_DWORD *)a2 + 24) ^ _xmm;
      v17 = *((_DWORD *)a2 + 26) ^ _xmm;
      v24 = v16 ^ _xmm;
      v25 = v17;
    }
    if ( !Windows::Internal::Holographic::PosePredictionHelpers::CreatePredictionNode(
            a2,
            (__int64)v19,
            a4,
            v12,
            (__int64)a5) )
    {
      v8 = -2147418113;
      v7 = 181LL;
      goto LABEL_4;
    }
  }
  return 0LL;
}
