/*
 * XREFs of ?PredictFromPoses@ConstantVelocityPosePredictionModel@Holographic@Internal@Windows@@UEAAJPEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@_K_J0@Z @ 0x1800AEE50
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032A4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1800AE32C (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     PoseClientStatics::SpatialTrackingPoseToInversePoseWithDifferentials @ 0x1800AE3DC (PoseClientStatics--SpatialTrackingPoseToInversePoseWithDifferentials.c)
 *     ??4SPATIAL_GRAPH_DYNAMIC_NODE_POSE@@QEAAAEAU0@AEBU0@@Z @ 0x1800AE99C (--4SPATIAL_GRAPH_DYNAMIC_NODE_POSE@@QEAAAEAU0@AEBU0@@Z.c)
 *     Windows::Internal::Holographic::PosePredictionHelpers::CreatePredictionNode @ 0x1800AEA78 (Windows--Internal--Holographic--PosePredictionHelpers--CreatePredictionNode.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
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
  float v12; // xmm3_4
  int v13; // xmm1_4
  int v14; // xmm0_4
  int v15; // xmm1_4
  int v16; // xmm0_4
  const char *v17; // [rsp+28h] [rbp-80h]
  _OWORD v18[3]; // [rsp+30h] [rbp-78h] BYREF
  int v19; // [rsp+60h] [rbp-48h]
  int v20; // [rsp+64h] [rbp-44h]
  int v21; // [rsp+68h] [rbp-40h]
  int v22; // [rsp+6Ch] [rbp-3Ch]
  int v23; // [rsp+70h] [rbp-38h]
  int v24; // [rsp+74h] [rbp-34h]
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
      v17);
    return v8;
  }
  if ( *(_QWORD *)a2 > a4 )
  {
    v10 = "timestamp predates poses";
    v11 = 162LL;
    goto LABEL_10;
  }
  PoseClientStatics::SpatialTrackingPoseToInversePoseWithDifferentials(v18, (__int64)a2 + 36);
  v12 = (double)((int)a4 - *(_DWORD *)a2) / (double)(int)qword_18010F278;
  if ( v12 <= 0.0 )
  {
    SPATIAL_GRAPH_DYNAMIC_NODE_POSE::operator=((__int64)a5, (__int64)a2);
  }
  else
  {
    if ( (*((_BYTE *)a2 + 16) & 4) != 0 && (*((_BYTE *)a2 + 156) & 1) == 0 )
    {
      v13 = *((_DWORD *)a2 + 22);
      v19 = *((_DWORD *)a2 + 21) ^ _xmm;
      v14 = *((_DWORD *)a2 + 23) ^ _xmm;
      v20 = v13 ^ _xmm;
      v21 = v14;
    }
    if ( (*((_BYTE *)a2 + 16) & 0x10) != 0 )
    {
      v15 = *((_DWORD *)a2 + 25);
      v22 = *((_DWORD *)a2 + 24) ^ _xmm;
      v16 = *((_DWORD *)a2 + 26) ^ _xmm;
      v23 = v15 ^ _xmm;
      v24 = v16;
    }
    if ( !Windows::Internal::Holographic::PosePredictionHelpers::CreatePredictionNode(
            a2,
            (__int64)v18,
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
