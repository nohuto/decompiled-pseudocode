/*
 * XREFs of ?CalcEyePointOrVector@CCompositionLight@@IEBA?AUfloat4@Numerics@Foundation@Windows@@PEAVCVisual@@@Z @ 0x18015B160
 * Callers:
 *     ?GetLightInfo@CCompositionDistantLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z @ 0x18015ABF0 (-GetLightInfo@CCompositionDistantLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@.c)
 *     ?GetLightInfo@CCompositionPointLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z @ 0x18015BFB0 (-GetLightInfo@CCompositionPointLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@.c)
 *     ?GetLightInfo@CCompositionSpotLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z @ 0x18015D790 (-GetLightInfo@CCompositionSpotLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z.c)
 * Callees:
 *     ?SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z @ 0x18005B088 (-SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z.c)
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x18009677C (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     sqrtf_0 @ 0x1800C5DAA (sqrtf_0.c)
 *     ?Transform3DVector@CMILMatrix@@QEBA?AUD2D_VECTOR_3F@@AEBU2@@Z @ 0x18011C304 (-Transform3DVector@CMILMatrix@@QEBA-AUD2D_VECTOR_3F@@AEBU2@@Z.c)
 *     ?CalcFrustumOutline@@YAXVCMILMatrix@@PEAULine3D@@111@Z @ 0x18015B50C (-CalcFrustumOutline@@YAXVCMILMatrix@@PEAULine3D@@111@Z.c)
 *     ?IntersectFourLines@@YA_NULine3D@@000MPEAUfloat3@Numerics@Foundation@Windows@@@Z @ 0x18015B918 (-IntersectFourLines@@YA_NULine3D@@000MPEAUfloat3@Numerics@Foundation@Windows@@@Z.c)
 *     ?NormalizeVec3@CCompositionLight@@IEBAXAEBUfloat3@Numerics@Foundation@Windows@@PEAU2345@@Z @ 0x18015BD68 (-NormalizeVec3@CCompositionLight@@IEBAXAEBUfloat3@Numerics@Foundation@Windows@@PEAU2345@@Z.c)
 */

_DWORD *__fastcall CCompositionLight::CalcEyePointOrVector(__int64 a1, _DWORD *a2, __int64 a3)
{
  CTransform3D *v3; // rcx
  const struct CMILMatrix *Matrix; // rax
  float v6; // xmm4_4
  float v7; // xmm3_4
  float v8; // xmm9_4
  float v9; // xmm7_4
  float v10; // xmm6_4
  float v11; // xmm15_4
  float v12; // xmm14_4
  float v13; // xmm13_4
  float v14; // xmm12_4
  float v15; // xmm11_4
  float v16; // xmm10_4
  float v17; // xmm5_4
  float v18; // xmm0_4
  float v19; // xmm8_4
  float v20; // xmm6_4
  float v21; // xmm0_4
  unsigned int v22; // xmm1_4
  CCompositionLight *v23; // rcx
  unsigned int v24; // xmm1_4
  __int128 v26; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v27; // [rsp+48h] [rbp-C0h]
  __int128 v28; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v29; // [rsp+68h] [rbp-A0h]
  __int128 v30; // [rsp+78h] [rbp-90h] BYREF
  __int64 v31; // [rsp+88h] [rbp-80h]
  __int128 v32; // [rsp+98h] [rbp-70h] BYREF
  __int64 v33; // [rsp+A8h] [rbp-60h]
  __int128 v34; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v35; // [rsp+C8h] [rbp-40h]
  __int128 v36; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v37; // [rsp+E8h] [rbp-20h]
  __m128 v38[4]; // [rsp+F8h] [rbp-10h] BYREF
  int v39; // [rsp+138h] [rbp+30h]
  _OWORD v40[4]; // [rsp+148h] [rbp+40h] BYREF
  int v41; // [rsp+188h] [rbp+80h]

  v3 = *(CTransform3D **)(a3 + 224);
  if ( !v3 )
  {
    *a2 = 0;
    a2[1] = 0;
    a2[3] = 0;
    a2[2] = 1065353216;
    return a2;
  }
  Matrix = CTransform3D::GetMatrix(v3, (const struct D2D_SIZE_F *)(a3 + 132));
  v39 = 0;
  if ( !CMILMatrix::SetToInverse(v38, Matrix) )
  {
    *a2 = 0;
    a2[1] = 0;
    a2[2] = 1065353216;
    goto LABEL_6;
  }
  v40[0] = v38[0];
  v40[1] = v38[1];
  v41 = v39;
  v40[2] = v38[2];
  v40[3] = v38[3];
  CalcFrustumOutline(v40, &v32, &v26, &v28, &v30);
  v6 = *((float *)&v32 + 1) - *((float *)&v30 + 1);
  v7 = *((float *)&v32 + 2) - *((float *)&v30 + 2);
  v8 = *(float *)&v26 - *(float *)&v28;
  v9 = *((float *)&v26 + 1) - *((float *)&v28 + 1);
  v10 = *((float *)&v26 + 2) - *((float *)&v28 + 2);
  v11 = *(float *)&v30 - *(float *)&v28;
  v12 = *((float *)&v30 + 1) - *((float *)&v28 + 1);
  v13 = *((float *)&v30 + 2) - *((float *)&v28 + 2);
  v14 = *(float *)&v32 - *(float *)&v26;
  v15 = *((float *)&v32 + 1) - *((float *)&v26 + 1);
  v16 = *((float *)&v32 + 2) - *((float *)&v26 + 2);
  v17 = (float)(*(float *)&v32 - *(float *)&v30) * (float)(*(float *)&v32 - *(float *)&v30);
  v34 = v30;
  v35 = v31;
  v31 = v29;
  v30 = v28;
  v29 = v27;
  v28 = v26;
  v36 = v32;
  v37 = v33;
  v18 = sqrtf_0((float)(v17 + (float)(v6 * v6)) + (float)(v7 * v7));
  v19 = (float)(v18 + sqrtf_0((float)((float)(v8 * v8) + (float)(v9 * v9)) + (float)(v10 * v10))) * 0.5;
  v20 = sqrtf_0((float)((float)(v14 * v14) + (float)(v15 * v15)) + (float)(v16 * v16));
  v21 = sqrtf_0((float)((float)(v11 * v11) + (float)(v12 * v12)) + (float)(v13 * v13));
  if ( !(unsigned __int8)IntersectFourLines(
                           &v36,
                           &v28,
                           &v30,
                           &v34,
                           (float)(v19 + (float)((float)(v20 + v21) * 0.5)) / 20.0,
                           &v26) )
  {
    *(_QWORD *)&v26 = 0LL;
    *((float *)&v26 + 2) = FLOAT_1_0;
    CMILMatrix::Transform3DVector((CMILMatrix *)v38, (struct D2D_VECTOR_3F *)&v28, (const struct D2D_VECTOR_3F *)&v26);
    LODWORD(v26) = v28;
    *(_QWORD *)((char *)&v26 + 4) = *(_QWORD *)((char *)&v28 + 4);
    CCompositionLight::NormalizeVec3(
      v23,
      (const struct Windows::Foundation::Numerics::float3 *)&v26,
      (struct Windows::Foundation::Numerics::float3 *)&v28);
    v24 = DWORD1(v28);
    *a2 = v28;
    *(_QWORD *)(a2 + 1) = __PAIR64__(DWORD2(v28), v24);
LABEL_6:
    a2[3] = 0;
    return a2;
  }
  v22 = DWORD1(v26);
  *a2 = v26;
  *(_QWORD *)(a2 + 1) = __PAIR64__(DWORD2(v26), v22);
  a2[3] = 1065353216;
  return a2;
}
