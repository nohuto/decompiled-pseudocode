/*
 * XREFs of ?ConvertGlobalMotionToLocalMotion@CInteractionProcessor@@AEAA?AUD2DVector3@@AEBUInteractionMotion@@AEBUD2DMatrix@@PEAU4@2@Z @ 0x18018DFB4
 * Callers:
 *     ??$CalculateHandledInteractions@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@AEBUInteractionAxis@@PEAUInteractionAxisGroup@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@PEAUD2DMatrix@@66@Z @ 0x18018BFF4 (--$CalculateHandledInteractions@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4F.c)
 * Callees:
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x180012220 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x180098570 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?GetD3DMatrix@CMILMatrix@@QEBA?AU_D3DMATRIX@@XZ @ 0x18009A95C (-GetD3DMatrix@CMILMatrix@@QEBA-AU_D3DMATRIX@@XZ.c)
 *     _TlgKeywordOn @ 0x1800BB2F8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800BD9E0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z @ 0x1801AECC4 (-D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z.c)
 *     ?D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z @ 0x1801AF2B0 (-D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z.c)
 *     ?D2DMatrixTranspose@@YAPEAUD2DMatrix@@PEAU1@PEBU1@@Z @ 0x1801AF3B0 (-D2DMatrixTranspose@@YAPEAUD2DMatrix@@PEAU1@PEBU1@@Z.c)
 *     ?D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x1801AFA40 (-D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
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
  struct _D3DMATRIX v37; // [rsp+50h] [rbp-B0h] BYREF
  int v38; // [rsp+90h] [rbp-70h]
  struct _D3DMATRIX v39; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v40; // [rsp+E0h] [rbp-20h] BYREF
  int v41; // [rsp+E8h] [rbp-18h]
  struct _D3DMATRIX v42; // [rsp+F0h] [rbp-10h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+130h] [rbp+30h] BYREF
  __int64 **v44; // [rsp+150h] [rbp+50h]
  __int64 v45; // [rsp+158h] [rbp+58h]
  __int64 *v46; // [rsp+160h] [rbp+60h]
  __int64 v47; // [rsp+168h] [rbp+68h]
  __int64 *v48; // [rsp+170h] [rbp+70h]
  __int64 v49; // [rsp+178h] [rbp+78h]
  int *v50; // [rsp+180h] [rbp+80h]
  const GUID *v51; // [rsp+188h] [rbp+88h]
  __int64 v52; // [rsp+190h] [rbp+90h]
  const GUID *v53; // [rsp+198h] [rbp+98h]
  __int64 v54; // [rsp+1A0h] [rbp+A0h]
  const GUID *v55; // [rsp+1A8h] [rbp+A8h]
  __int64 v56; // [rsp+1B0h] [rbp+B0h]
  const GUID *v57; // [rsp+1B8h] [rbp+B8h]
  float *v58; // [rsp+1C0h] [rbp+C0h]
  const GUID *v59; // [rsp+1C8h] [rbp+C8h]
  unsigned int *v60; // [rsp+1D0h] [rbp+D0h]
  const GUID *v61; // [rsp+1D8h] [rbp+D8h]
  unsigned int *v62; // [rsp+1E0h] [rbp+E0h]
  const GUID *v63; // [rsp+1E8h] [rbp+E8h]
  struct D2DMatrix *v64; // [rsp+1F0h] [rbp+F0h]
  const GUID *v65; // [rsp+1F8h] [rbp+F8h]
  char *v66; // [rsp+200h] [rbp+100h]
  const GUID *v67; // [rsp+208h] [rbp+108h]
  char *v68; // [rsp+210h] [rbp+110h]
  const GUID *v69; // [rsp+218h] [rbp+118h]
  char *v70; // [rsp+220h] [rbp+120h]
  const GUID *v71; // [rsp+228h] [rbp+128h]
  char *v72; // [rsp+230h] [rbp+130h]
  const GUID *v73; // [rsp+238h] [rbp+138h]
  char *v74; // [rsp+240h] [rbp+140h]
  const GUID *v75; // [rsp+248h] [rbp+148h]
  char *v76; // [rsp+250h] [rbp+150h]
  const GUID *v77; // [rsp+258h] [rbp+158h]
  char *v78; // [rsp+260h] [rbp+160h]
  const GUID *v79; // [rsp+268h] [rbp+168h]
  char *v80; // [rsp+270h] [rbp+170h]
  const GUID *v81; // [rsp+278h] [rbp+178h]
  struct _D3DMATRIX *v82; // [rsp+280h] [rbp+180h]
  const GUID *v83; // [rsp+288h] [rbp+188h]
  D3DVALUE *p__12; // [rsp+290h] [rbp+190h]
  const GUID *v85; // [rsp+298h] [rbp+198h]
  D3DVALUE *p__13; // [rsp+2A0h] [rbp+1A0h]
  const GUID *v87; // [rsp+2A8h] [rbp+1A8h]
  D3DVALUE *p__21; // [rsp+2B0h] [rbp+1B0h]
  const GUID *v89; // [rsp+2B8h] [rbp+1B8h]
  D3DVALUE *p__22; // [rsp+2C0h] [rbp+1C0h]
  const GUID *v91; // [rsp+2C8h] [rbp+1C8h]
  D3DVALUE *p__23; // [rsp+2D0h] [rbp+1D0h]
  const GUID *v93; // [rsp+2D8h] [rbp+1D8h]
  D3DVALUE *p__31; // [rsp+2E0h] [rbp+1E0h]
  const GUID *v95; // [rsp+2E8h] [rbp+1E8h]
  D3DVALUE *p__32; // [rsp+2F0h] [rbp+1F0h]
  const GUID *v97; // [rsp+2F8h] [rbp+1F8h]
  D3DVALUE *p__33; // [rsp+300h] [rbp+200h]
  const GUID *v99; // [rsp+308h] [rbp+208h]

  D3DMatrix = CMILMatrix::GetD3DMatrix((struct _D3DMATRIX *)&CMILMatrix::Identity, &v42);
  v10 = *(_OWORD *)&D3DMatrix->_21;
  v11 = *(_OWORD *)&D3DMatrix->_31;
  v12 = *(_OWORD *)&D3DMatrix->_41;
  *v13 = *(_OWORD *)&D3DMatrix->_11;
  v13[1] = v10;
  v13[2] = v11;
  v13[3] = v12;
  v15 = CMILMatrix::GetD3DMatrix(v14, &v42);
  v16 = *(_OWORD *)&v15->_21;
  v17 = *(_OWORD *)&v15->_31;
  v18 = *(_OWORD *)&v15->_41;
  *(_OWORD *)a6 = *(_OWORD *)&v15->_11;
  *((_OWORD *)a6 + 1) = v16;
  *((_OWORD *)a6 + 2) = v17;
  *((_OWORD *)a6 + 3) = v18;
  *(float *)&v16 = (float)(1.0 / a3[2]) - 1.0;
  *(_QWORD *)a2 = _mm_unpacklo_ps((__m128)*(unsigned int *)a3, (__m128)*((unsigned int *)a3 + 1)).m128_u64[0];
  v41 = v16;
  *(_DWORD *)(a2 + 8) = v16;
  v42 = *CMILMatrix::GetD3DMatrix(v19, &v39);
  if ( !CMILMatrix::IsIdentity<0>((__int64)a1 + 652) )
  {
    v24 = *v21;
    v25 = v21[1];
    v38 = *((_DWORD *)v21 + 16);
    *(_OWORD *)&v37._11 = v24;
    v26 = v21[2];
    *(_OWORD *)&v37._21 = v25;
    v27 = v21[3];
    *(_OWORD *)&v37._31 = v26;
    *(_OWORD *)&v37._41 = v27;
    if ( CMILMatrix::Invert((CMILMatrix *)&v37, v20, v22) )
    {
      v42 = *CMILMatrix::GetD3DMatrix(&v37, &v39);
      D3DXVec3TransformCoord((struct D2DVector3 *)a2, (const struct D2DVector3 *)a2, (const struct D2DMatrix *)&v42);
    }
  }
  if ( !(unsigned int)D2DMatrixIsIdentity(v23) )
  {
    v30 = D2DMatrixTranspose(v29, v28);
    if ( D2DMatrixInverse(a6, 0LL, v30) )
      D3DXVec3TransformCoord((struct D2DVector3 *)a2, (const struct D2DVector3 *)a2, a6);
  }
  if ( dword_18023D7F0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18023D7F0, 2uLL) )
  {
    v35 = a1;
    v44 = &v35;
    v36 = *a1;
    v46 = &v36;
    v40 = a1[20];
    v48 = &v40;
    v34 = *((_DWORD *)a1 + 101);
    v50 = &v34;
    v54 = a2 + 4;
    v56 = a2 + 8;
    v66 = (char *)a6 + 4;
    v68 = (char *)a6 + 8;
    v70 = (char *)a6 + 16;
    v72 = (char *)a6 + 20;
    v74 = (char *)a6 + 24;
    v76 = (char *)a6 + 32;
    v78 = (char *)a6 + 36;
    v80 = (char *)a6 + 40;
    v82 = &v42;
    p__12 = &v42._12;
    p__13 = &v42._13;
    p__21 = &v42._21;
    p__22 = &v42._22;
    p__23 = &v42._23;
    p__31 = &v42._31;
    v45 = 8LL;
    v47 = 8LL;
    v49 = 8LL;
    v51 = v32;
    v52 = a2;
    v53 = v32;
    v55 = v32;
    v57 = v32;
    v58 = a3;
    v59 = v32;
    v60 = (unsigned int *)(a3 + 1);
    v61 = v32;
    v62 = (unsigned int *)(a3 + 2);
    v63 = v32;
    v64 = a6;
    v65 = v32;
    v67 = v32;
    v69 = v32;
    v71 = v32;
    v73 = v32;
    v75 = v32;
    v77 = v32;
    v79 = v32;
    v81 = v32;
    v83 = v32;
    v85 = v32;
    v87 = v32;
    v89 = v32;
    v91 = v32;
    v93 = v32;
    v95 = v32;
    p__32 = &v42._32;
    p__33 = &v42._33;
    v97 = v32;
    v99 = v32;
    TlgWrite((TraceLoggingHProvider)&dword_18023D7F0, &unk_1801F8C9C, v31, v32, 0x1Eu, &pData);
  }
  return a2;
}
