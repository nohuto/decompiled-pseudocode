/*
 * XREFs of Windows::Internal::Holographic::PosePredictionHelpers::CreatePredictionNode @ 0x1800AEA78
 * Callers:
 *     ?PredictFromPoses@ConstantVelocityPosePredictionModel@Holographic@Internal@Windows@@UEAAJPEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@_K_J0@Z @ 0x1800AEE50 (-PredictFromPoses@ConstantVelocityPosePredictionModel@Holographic@Internal@Windows@@UEAAJPEAUSPA.c)
 *     ?PredictFromPoses@ComputeVelocityFallbackPosePredictionModel@Holographic@Internal@Windows@@UEAAJPEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@_K_J0@Z @ 0x1800AF030 (-PredictFromPoses@ComputeVelocityFallbackPosePredictionModel@Holographic@Internal@Windows@@UEAAJ.c)
 * Callees:
 *     ??4SPATIAL_GRAPH_DYNAMIC_NODE_POSE@@QEAAAEAU0@AEBU0@@Z @ 0x1800AE99C (--4SPATIAL_GRAPH_DYNAMIC_NODE_POSE@@QEAAAEAU0@AEBU0@@Z.c)
 *     ??$SE3_mult@M@ST@@YAXAEAU?$SE3@M@0@AEBU10@1@Z @ 0x1800C8F90 (--$SE3_mult@M@ST@@YAXAEAU-$SE3@M@0@AEBU10@1@Z.c)
 *     ??$SE3_invert@M@ST@@YAXAEAU?$SE3@M@0@AEBU10@@Z @ 0x1800C900C (--$SE3_invert@M@ST@@YAXAEAU-$SE3@M@0@AEBU10@@Z.c)
 *     ??$SE3_exp@M@ST@@YAXAEAU?$SE3@M@0@QEBM@Z @ 0x1800C90F8 (--$SE3_exp@M@ST@@YAXAEAU-$SE3@M@0@QEBM@Z.c)
 *     ??$SE3_transform_direction3@MMM@ST@@YAXQEAMAEBU?$SE3@M@0@QEBM@Z @ 0x1800C9400 (--$SE3_transform_direction3@MMM@ST@@YAXQEAMAEBU-$SE3@M@0@QEBM@Z.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

char __fastcall Windows::Internal::Holographic::PosePredictionHelpers::CreatePredictionNode(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        float a4,
        __int64 a5)
{
  float *v8; // r9
  float v9; // xmm7_4
  float v11; // xmm4_4
  float v12; // xmm2_4
  float v14; // xmm8_4
  float v16; // xmm3_4
  float v17; // xmm6_4
  float v18; // xmm9_4
  float v19; // xmm10_4
  float v20; // xmm1_4
  float v21; // xmm0_4
  float v22; // xmm2_4
  float v23; // xmm1_4
  float v24; // xmm3_4
  float v25; // xmm4_4
  float v26; // xmm11_4
  __int128 v27; // xmm1
  __int128 v28; // xmm1
  int v29; // xmm0_4
  int v30; // xmm0_4
  int v31; // xmm0_4
  int v32; // xmm0_4
  char result; // al
  __int128 v34; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v35; // [rsp+38h] [rbp-D0h]
  __int128 v36; // [rsp+48h] [rbp-C0h]
  __int128 v37; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v38; // [rsp+68h] [rbp-A0h]
  __int128 v39; // [rsp+78h] [rbp-90h]
  _DWORD v40[4]; // [rsp+88h] [rbp-80h] BYREF
  __int128 v41; // [rsp+98h] [rbp-70h] BYREF
  __int128 v42; // [rsp+A8h] [rbp-60h]
  __int128 v43; // [rsp+B8h] [rbp-50h]

  SPATIAL_GRAPH_DYNAMIC_NODE_POSE::operator=(a5, (__int64)a1);
  if ( a4 < 0.000000059600001 )
    return 0;
  v9 = a4 * v8[13];
  v11 = v8[18];
  v12 = v8[21];
  v14 = a4 * v8[14];
  v16 = v8[22];
  v17 = a4 * v8[12];
  v18 = a4 * v8[15];
  v19 = a4 * v8[16];
  v20 = (float)(v8[20] * 0.5) * a4;
  *((float *)&v34 + 1) = (float)((float)((float)(v8[19] * 0.5) * a4) * a4) + v9;
  v21 = (float)((float)(v8[23] * 0.5) * a4) * a4;
  v22 = (float)((float)(v12 * 0.5) * a4) * a4;
  v23 = (float)(v20 * a4) + v14;
  v24 = (float)((float)(v16 * 0.5) * a4) * a4;
  v25 = (float)((float)((float)(v11 * 0.5) * a4) * a4) + v17;
  v26 = a4 * v8[17];
  *((float *)&v34 + 2) = v23;
  v27 = *((_OWORD *)v8 + 1);
  *(float *)&v34 = v25;
  *((float *)&v34 + 3) = v22 + v18;
  *(float *)&v35 = v24 + v19;
  v42 = v27;
  *((float *)&v35 + 1) = v21 + v26;
  v41 = *(_OWORD *)v8;
  v43 = *((_OWORD *)v8 + 2);
  ST::SE3_exp<float>(&v37, &v34);
  ST::SE3_mult<float>(&v37, &v37, &v41);
  v41 = v37;
  v42 = v38;
  v43 = v39;
  ST::SE3_invert<float>(&v37, &v41);
  *(_QWORD *)&v34 = __PAIR64__(HIDWORD(v37), v37);
  *((_QWORD *)&v34 + 1) = __PAIR64__(DWORD1(v37), DWORD2(v38));
  LODWORD(v35) = v38;
  *(_QWORD *)((char *)&v35 + 4) = __PAIR64__(DWORD2(v37), HIDWORD(v38));
  v36 = v39;
  HIDWORD(v35) = DWORD1(v38);
  v28 = v39;
  *(_OWORD *)(a5 + 36) = v34;
  *(_OWORD *)(a5 + 52) = v35;
  *(_OWORD *)(a5 + 68) = v28;
  LODWORD(v28) = a1[12];
  LODWORD(v34) = a1[9];
  *(_QWORD *)((char *)&v34 + 4) = __PAIR64__(a1[15], v28);
  v29 = a1[10];
  DWORD1(v36) = a1[18];
  LODWORD(v28) = a1[13];
  HIDWORD(v34) = v29;
  DWORD1(v35) = a1[16];
  v30 = a1[11];
  LODWORD(v35) = v28;
  LODWORD(v28) = a1[19];
  DWORD2(v35) = v30;
  v31 = a1[17];
  DWORD2(v36) = v28;
  LODWORD(v28) = a1[14];
  LODWORD(v36) = v31;
  HIDWORD(v35) = v28;
  HIDWORD(v36) = a1[20];
  v37 = v34;
  v38 = v35;
  v39 = v36;
  ST::SE3_mult<float>(&v34, &v41, &v37);
  v41 = v34;
  v42 = v35;
  LODWORD(v28) = a1[33];
  v43 = v36;
  v32 = a1[34];
  v40[0] = v28;
  LODWORD(v28) = a1[35];
  v40[1] = v32;
  v40[2] = v28;
  ST::SE3_transform_direction3<float,float,float>(&v34, &v41, v40);
  result = 1;
  LODWORD(v28) = DWORD1(v34);
  *(_DWORD *)(a5 + 132) = v34;
  *(_QWORD *)(a5 + 136) = __PAIR64__(DWORD2(v34), v28);
  *(_QWORD *)a5 = a3;
  return result;
}
