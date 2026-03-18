/*
 * XREFs of ?ConvertGlobalMotionToLocalMotion@CInteractionProcessor@@AEAA?AUD2DVector3@@AEBUInteractionMotion@@AEBUD2DMatrix@@PEAU4@2@Z @ 0x18019B700
 * Callers:
 *     ??$CalculateHandledInteractions@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@AEBUInteractionAxis@@PEAUInteractionAxisGroup@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@PEAUD2DMatrix@@66@Z @ 0x180199450 (--$CalculateHandledInteractions@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4F.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180004630 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180005610 (_TlgWrite.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x180058F90 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x180059138 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ?GetD3DMatrix@CMILMatrix@@QEBA?AU_D3DMATRIX@@XZ @ 0x18005ACD4 (-GetD3DMatrix@CMILMatrix@@QEBA-AU_D3DMATRIX@@XZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z @ 0x1801C957C (-D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z.c)
 *     ?D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z @ 0x1801C9B68 (-D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z.c)
 *     ?D2DMatrixTranspose@@YAPEAUD2DMatrix@@PEAU1@PEBU1@@Z @ 0x1801C9DB8 (-D2DMatrixTranspose@@YAPEAUD2DMatrix@@PEAU1@PEBU1@@Z.c)
 *     ?D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x1801CA300 (-D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 */

__int64 __fastcall CInteractionProcessor::ConvertGlobalMotionToLocalMotion(
        __int64 *a1,
        __int64 a2,
        float *a3,
        __int64 a4,
        __int64 a5,
        struct D2DMatrix *a6)
{
  struct _D3DMATRIX *D3DMatrix; // rax
  __int128 v10; // xmm1
  __int128 v11; // xmm2
  __int128 v12; // xmm3
  _OWORD *v13; // r10
  struct _D3DMATRIX *v14; // rcx
  struct _D3DMATRIX *v15; // rax
  __int128 v16; // xmm1
  __int128 v17; // xmm2
  __int128 v18; // xmm3
  struct _D3DMATRIX *v19; // rcx
  __int64 v20; // rdx
  __int128 *v21; // rcx
  struct Windows::Foundation::Numerics::float4x4 *v22; // r8
  const struct D2DMatrix *v23; // r9
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  const struct D2DMatrix *v28; // r9
  struct D2DMatrix *v29; // r10
  const struct D2DMatrix *v30; // rax
  const GUID *v31; // r8
  const GUID *v32; // r9
  int v34; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v35; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v36; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v37; // [rsp+48h] [rbp-B8h] BYREF
  struct _D3DMATRIX v38; // [rsp+50h] [rbp-B0h] BYREF
  int v39; // [rsp+90h] [rbp-70h]
  struct _D3DMATRIX v40; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v41; // [rsp+E0h] [rbp-20h] BYREF
  int v42; // [rsp+E8h] [rbp-18h]
  struct _D3DMATRIX v43; // [rsp+F0h] [rbp-10h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+130h] [rbp+30h] BYREF
  __int64 **v45; // [rsp+150h] [rbp+50h]
  __int64 v46; // [rsp+158h] [rbp+58h]
  __int64 *v47; // [rsp+160h] [rbp+60h]
  __int64 v48; // [rsp+168h] [rbp+68h]
  __int64 *v49; // [rsp+170h] [rbp+70h]
  __int64 v50; // [rsp+178h] [rbp+78h]
  __int64 *v51; // [rsp+180h] [rbp+80h]
  __int64 v52; // [rsp+188h] [rbp+88h]
  int *v53; // [rsp+190h] [rbp+90h]
  const GUID *v54; // [rsp+198h] [rbp+98h]
  __int64 v55; // [rsp+1A0h] [rbp+A0h]
  const GUID *v56; // [rsp+1A8h] [rbp+A8h]
  __int64 v57; // [rsp+1B0h] [rbp+B0h]
  const GUID *v58; // [rsp+1B8h] [rbp+B8h]
  __int64 v59; // [rsp+1C0h] [rbp+C0h]
  const GUID *v60; // [rsp+1C8h] [rbp+C8h]
  float *v61; // [rsp+1D0h] [rbp+D0h]
  const GUID *v62; // [rsp+1D8h] [rbp+D8h]
  unsigned int *v63; // [rsp+1E0h] [rbp+E0h]
  const GUID *v64; // [rsp+1E8h] [rbp+E8h]
  unsigned int *v65; // [rsp+1F0h] [rbp+F0h]
  const GUID *v66; // [rsp+1F8h] [rbp+F8h]
  struct D2DMatrix *v67; // [rsp+200h] [rbp+100h]
  const GUID *v68; // [rsp+208h] [rbp+108h]
  char *v69; // [rsp+210h] [rbp+110h]
  const GUID *v70; // [rsp+218h] [rbp+118h]
  char *v71; // [rsp+220h] [rbp+120h]
  const GUID *v72; // [rsp+228h] [rbp+128h]
  char *v73; // [rsp+230h] [rbp+130h]
  const GUID *v74; // [rsp+238h] [rbp+138h]
  char *v75; // [rsp+240h] [rbp+140h]
  const GUID *v76; // [rsp+248h] [rbp+148h]
  char *v77; // [rsp+250h] [rbp+150h]
  const GUID *v78; // [rsp+258h] [rbp+158h]
  char *v79; // [rsp+260h] [rbp+160h]
  const GUID *v80; // [rsp+268h] [rbp+168h]
  char *v81; // [rsp+270h] [rbp+170h]
  const GUID *v82; // [rsp+278h] [rbp+178h]
  char *v83; // [rsp+280h] [rbp+180h]
  const GUID *v84; // [rsp+288h] [rbp+188h]
  struct _D3DMATRIX *v85; // [rsp+290h] [rbp+190h]
  const GUID *v86; // [rsp+298h] [rbp+198h]
  D3DVALUE *p__12; // [rsp+2A0h] [rbp+1A0h]
  const GUID *v88; // [rsp+2A8h] [rbp+1A8h]
  D3DVALUE *p__13; // [rsp+2B0h] [rbp+1B0h]
  const GUID *v90; // [rsp+2B8h] [rbp+1B8h]
  D3DVALUE *p__21; // [rsp+2C0h] [rbp+1C0h]
  const GUID *v92; // [rsp+2C8h] [rbp+1C8h]
  D3DVALUE *p__22; // [rsp+2D0h] [rbp+1D0h]
  const GUID *v94; // [rsp+2D8h] [rbp+1D8h]
  D3DVALUE *p__23; // [rsp+2E0h] [rbp+1E0h]
  const GUID *v96; // [rsp+2E8h] [rbp+1E8h]
  D3DVALUE *p__31; // [rsp+2F0h] [rbp+1F0h]
  const GUID *v98; // [rsp+2F8h] [rbp+1F8h]
  D3DVALUE *p__32; // [rsp+300h] [rbp+200h]
  const GUID *v100; // [rsp+308h] [rbp+208h]
  D3DVALUE *p__33; // [rsp+310h] [rbp+210h]
  const GUID *v102; // [rsp+318h] [rbp+218h]

  D3DMatrix = CMILMatrix::GetD3DMatrix((struct _D3DMATRIX *)&CMILMatrix::Identity, &v43);
  v10 = *(_OWORD *)&D3DMatrix->_21;
  v11 = *(_OWORD *)&D3DMatrix->_31;
  v12 = *(_OWORD *)&D3DMatrix->_41;
  *v13 = *(_OWORD *)&D3DMatrix->_11;
  v13[1] = v10;
  v13[2] = v11;
  v13[3] = v12;
  v15 = CMILMatrix::GetD3DMatrix(v14, &v43);
  v16 = *(_OWORD *)&v15->_21;
  v17 = *(_OWORD *)&v15->_31;
  v18 = *(_OWORD *)&v15->_41;
  *(_OWORD *)a6 = *(_OWORD *)&v15->_11;
  *((_OWORD *)a6 + 1) = v16;
  *((_OWORD *)a6 + 2) = v17;
  *((_OWORD *)a6 + 3) = v18;
  *(float *)&v16 = (float)(1.0 / a3[2]) - 1.0;
  *(_QWORD *)a2 = _mm_unpacklo_ps((__m128)*(unsigned int *)a3, (__m128)*((unsigned int *)a3 + 1)).m128_u64[0];
  v42 = v16;
  *(_DWORD *)(a2 + 8) = v16;
  v43 = *CMILMatrix::GetD3DMatrix(v19, &v40);
  if ( !CMILMatrix::IsIdentity<0>((__int64)a1 + 844) )
  {
    v24 = *v21;
    v25 = v21[1];
    v39 = *((_DWORD *)v21 + 16);
    *(_OWORD *)&v38._11 = v24;
    v26 = v21[2];
    *(_OWORD *)&v38._21 = v25;
    v27 = v21[3];
    *(_OWORD *)&v38._31 = v26;
    *(_OWORD *)&v38._41 = v27;
    if ( CMILMatrix::Invert((CMILMatrix *)&v38, v20, v22) )
    {
      v43 = *CMILMatrix::GetD3DMatrix(&v38, &v40);
      D3DXVec3TransformCoord((struct D2DVector3 *)a2, (const struct D2DVector3 *)a2, (const struct D2DMatrix *)&v43);
    }
  }
  if ( !(unsigned int)D2DMatrixIsIdentity(v23) )
  {
    v30 = D2DMatrixTranspose(v29, v28);
    if ( D2DMatrixInverse(a6, 0LL, v30) )
      D3DXVec3TransformCoord((struct D2DVector3 *)a2, (const struct D2DVector3 *)a2, a6);
  }
  if ( dword_18026D7B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18026D7B0, 2uLL) )
  {
    v35 = a1;
    v45 = &v35;
    v36 = *a1;
    v47 = &v36;
    v37 = a1[20];
    v49 = &v37;
    v41 = a1[40];
    v51 = &v41;
    v34 = *((_DWORD *)a1 + 149);
    v53 = &v34;
    v57 = a2 + 4;
    v59 = a2 + 8;
    v69 = (char *)a6 + 4;
    v71 = (char *)a6 + 8;
    v73 = (char *)a6 + 16;
    v75 = (char *)a6 + 20;
    v77 = (char *)a6 + 24;
    v79 = (char *)a6 + 32;
    v81 = (char *)a6 + 36;
    v83 = (char *)a6 + 40;
    v85 = &v43;
    p__12 = &v43._12;
    p__13 = &v43._13;
    p__21 = &v43._21;
    p__22 = &v43._22;
    p__23 = &v43._23;
    v46 = 8LL;
    v48 = 8LL;
    v50 = 8LL;
    v52 = 8LL;
    v54 = v32;
    v55 = a2;
    v56 = v32;
    v58 = v32;
    v60 = v32;
    v61 = a3;
    v62 = v32;
    v63 = (unsigned int *)(a3 + 1);
    v64 = v32;
    v65 = (unsigned int *)(a3 + 2);
    v66 = v32;
    v67 = a6;
    v68 = v32;
    v70 = v32;
    v72 = v32;
    v74 = v32;
    v76 = v32;
    v78 = v32;
    v80 = v32;
    v82 = v32;
    v84 = v32;
    v86 = v32;
    v88 = v32;
    v90 = v32;
    v92 = v32;
    v94 = v32;
    v96 = v32;
    p__31 = &v43._31;
    p__32 = &v43._32;
    p__33 = &v43._33;
    v98 = v32;
    v100 = v32;
    v102 = v32;
    TlgWrite((TraceLoggingHProvider)&dword_18026D7B0, &unk_180215608, v31, v32, 0x1Fu, &pData);
  }
  return a2;
}
