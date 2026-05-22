/*
 * XREFs of Windows::Internal::Holographic::PosePredictionHelpers::CreatePredictionNode @ 0x1800BA068
 * Callers:
 *     ?PredictFromPoses@ConstantVelocityPosePredictionModel@Holographic@Internal@Windows@@UEAAJPEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@_K_J0@Z @ 0x1800BA3B0 (-PredictFromPoses@ConstantVelocityPosePredictionModel@Holographic@Internal@Windows@@UEAAJPEAUSPA.c)
 *     ?PredictFromPoses@ComputeVelocityFallbackPosePredictionModel@Holographic@Internal@Windows@@UEAAJPEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@_K_J0@Z @ 0x1800BA590 (-PredictFromPoses@ComputeVelocityFallbackPosePredictionModel@Holographic@Internal@Windows@@UEAAJ.c)
 * Callees:
 *     ??4SPATIAL_GRAPH_DYNAMIC_NODE_POSE@@QEAAAEAU0@AEBU0@@Z @ 0x1800B9F8C (--4SPATIAL_GRAPH_DYNAMIC_NODE_POSE@@QEAAAEAU0@AEBU0@@Z.c)
 *     ??$SE3_mult@M@ST@@YAXAEAU?$SE3@M@0@AEBU10@1@Z @ 0x1800DFF9C (--$SE3_mult@M@ST@@YAXAEAU-$SE3@M@0@AEBU10@1@Z.c)
 *     ??$SE3_invert@M@ST@@YAXAEAU?$SE3@M@0@AEBU10@@Z @ 0x1800E0018 (--$SE3_invert@M@ST@@YAXAEAU-$SE3@M@0@AEBU10@@Z.c)
 *     ??$SE3_exp@M@ST@@YAXAEAU?$SE3@M@0@QEBM@Z @ 0x1800E0100 (--$SE3_exp@M@ST@@YAXAEAU-$SE3@M@0@QEBM@Z.c)
 *     ??$SE3_transform_direction3@MMM@ST@@YAXQEAMAEBU?$SE3@M@0@QEBM@Z @ 0x1800E0428 (--$SE3_transform_direction3@MMM@ST@@YAXQEAMAEBU-$SE3@M@0@QEBM@Z.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

char __fastcall Windows::Internal::Holographic::PosePredictionHelpers::CreatePredictionNode(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  float *v7; // r9
  float v8; // xmm5_4
  float v9; // xmm2_4
  float v10; // xmm0_4
  float v11; // xmm2_4
  float v12; // xmm0_4
  float v13; // xmm1_4
  float v14; // xmm2_4
  float v15; // xmm1_4
  float v16; // xmm0_4
  float v17; // xmm2_4
  float v18; // xmm1_4
  __int128 v19; // xmm0
  float v20; // xmm1_4
  float v21; // xmm5_4
  __int128 v22; // xmm1
  char result; // al
  __int128 v24; // [rsp+28h] [rbp-61h] BYREF
  __int128 v25; // [rsp+38h] [rbp-51h]
  __int128 v26; // [rsp+48h] [rbp-41h]
  __int128 v27; // [rsp+58h] [rbp-31h] BYREF
  __int128 v28; // [rsp+68h] [rbp-21h]
  __int128 v29; // [rsp+78h] [rbp-11h]
  _DWORD v30[4]; // [rsp+88h] [rbp-1h] BYREF
  __int128 v31; // [rsp+98h] [rbp+Fh] BYREF
  __int128 v32; // [rsp+A8h] [rbp+1Fh]
  __int128 v33; // [rsp+B8h] [rbp+2Fh]

  SPATIAL_GRAPH_DYNAMIC_NODE_POSE::operator=(a5, (__int64)a1);
  if ( v8 < 0.000000059600001 )
    return 0;
  v9 = (float)((float)(v7[20] * 0.5) * v8) * v8;
  v10 = v8 * v7[13];
  *(float *)&v24 = (float)((float)((float)(v7[18] * 0.5) * v8) * v8) + (float)(v8 * v7[12]);
  v11 = v9 + (float)(v8 * v7[14]);
  *((float *)&v24 + 1) = (float)((float)((float)(v7[19] * 0.5) * v8) * v8) + v10;
  v12 = v8 * v7[15];
  v13 = v7[21] * 0.5;
  *((float *)&v24 + 2) = v11;
  v14 = v7[22];
  v15 = (float)((float)(v13 * v8) * v8) + v12;
  v16 = v8 * v7[16];
  *((float *)&v24 + 3) = v15;
  v17 = (float)((float)((float)(v14 * 0.5) * v8) * v8) + v16;
  v18 = (float)(v7[23] * 0.5) * v8;
  v31 = *(_OWORD *)v7;
  v19 = *((_OWORD *)v7 + 2);
  v20 = v18 * v8;
  v21 = v8 * v7[17];
  *(float *)&v25 = v17;
  v33 = v19;
  *((float *)&v25 + 1) = v20 + v21;
  v32 = *((_OWORD *)v7 + 1);
  ST::SE3_exp<float>(&v27, &v24);
  ST::SE3_mult<float>(&v27, &v27, &v31);
  v31 = v27;
  v32 = v28;
  v33 = v29;
  ST::SE3_invert<float>(&v27, &v31);
  *(_QWORD *)&v24 = __PAIR64__(HIDWORD(v27), v27);
  *((_QWORD *)&v24 + 1) = __PAIR64__(DWORD1(v27), DWORD2(v28));
  LODWORD(v25) = v28;
  *(_QWORD *)((char *)&v25 + 4) = __PAIR64__(DWORD2(v27), HIDWORD(v28));
  v26 = v29;
  HIDWORD(v25) = DWORD1(v28);
  v22 = v29;
  *(_OWORD *)(a5 + 36) = v24;
  *(_OWORD *)(a5 + 52) = v25;
  *(_OWORD *)(a5 + 68) = v22;
  LODWORD(v22) = a1[12];
  LODWORD(v24) = a1[9];
  *(_QWORD *)((char *)&v24 + 4) = __PAIR64__(a1[15], v22);
  LODWORD(v19) = a1[10];
  DWORD1(v26) = a1[18];
  LODWORD(v22) = a1[13];
  HIDWORD(v24) = v19;
  DWORD1(v25) = a1[16];
  LODWORD(v19) = a1[11];
  LODWORD(v25) = v22;
  LODWORD(v22) = a1[19];
  DWORD2(v25) = v19;
  LODWORD(v19) = a1[17];
  DWORD2(v26) = v22;
  LODWORD(v22) = a1[14];
  LODWORD(v26) = v19;
  HIDWORD(v25) = v22;
  HIDWORD(v26) = a1[20];
  v27 = v24;
  v28 = v25;
  v29 = v26;
  ST::SE3_mult<float>(&v24, &v31, &v27);
  v31 = v24;
  v32 = v25;
  LODWORD(v22) = a1[33];
  v33 = v26;
  LODWORD(v19) = a1[34];
  v30[0] = v22;
  LODWORD(v22) = a1[35];
  v30[1] = v19;
  v30[2] = v22;
  ST::SE3_transform_direction3<float,float,float>(&v24, &v31, v30);
  result = 1;
  LODWORD(v22) = DWORD1(v24);
  *(_DWORD *)(a5 + 132) = v24;
  *(_QWORD *)(a5 + 136) = __PAIR64__(DWORD2(v24), v22);
  *(_QWORD *)a5 = a3;
  return result;
}
