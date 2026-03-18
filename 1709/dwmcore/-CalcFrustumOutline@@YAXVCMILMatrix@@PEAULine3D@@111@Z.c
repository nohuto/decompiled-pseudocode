/*
 * XREFs of ?CalcFrustumOutline@@YAXVCMILMatrix@@PEAULine3D@@111@Z @ 0x18015B50C
 * Callers:
 *     ?CalcEyePointOrVector@CCompositionLight@@IEBA?AUfloat4@Numerics@Foundation@Windows@@PEAVCVisual@@@Z @ 0x18015B160 (-CalcEyePointOrVector@CCompositionLight@@IEBA-AUfloat4@Numerics@Foundation@Windows@@PEAVCVisual@.c)
 * Callees:
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     floorf_0 @ 0x1800C5D5C (floorf_0.c)
 *     log10f_0 @ 0x1800C5D74 (log10f_0.c)
 *     powf_0 @ 0x1800C5D92 (powf_0.c)
 *     sqrtf_0 @ 0x1800C5DAA (sqrtf_0.c)
 *     ??0Line3D@@QEAA@UMilPoint4F@@0@Z @ 0x18015B090 (--0Line3D@@QEAA@UMilPoint4F@@0@Z.c)
 *     ?Transform@CMILMatrix@@QEBAXPEBUMilPoint4F@@PEAU2@I@Z @ 0x1801908A8 (-Transform@CMILMatrix@@QEBAXPEBUMilPoint4F@@PEAU2@I@Z.c)
 */

__int64 __fastcall CalcFrustumOutline(CMILMatrix *a1, __int64 a2, __int64 a3, __int64 a4, _OWORD *a5)
{
  float *v5; // rbx
  unsigned int v6; // xmm1_4
  char v11; // r14
  float v12; // xmm7_4
  float v13; // xmm8_4
  __int64 v14; // rsi
  float v15; // xmm0_4
  float v16; // xmm0_4
  float v17; // xmm6_4
  float v18; // xmm0_4
  float v19; // xmm1_4
  float v20; // xmm0_4
  float *v21; // rax
  float v22; // xmm3_4
  __int64 v23; // rcx
  unsigned int v24; // xmm1_4
  unsigned int v25; // xmm0_4
  __int64 v26; // rax
  __int128 v27; // xmm0
  __int64 v28; // rax
  __int128 v29; // xmm0
  __int64 v30; // rax
  __int128 v31; // xmm0
  __int64 result; // rax
  _OWORD *v33; // rcx
  _QWORD v34[3]; // [rsp+20h] [rbp-E8h] BYREF
  _OWORD *v35; // [rsp+38h] [rbp-D0h]
  _BYTE v36[16]; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v37; // [rsp+58h] [rbp-B0h] BYREF
  _OWORD v38[8]; // [rsp+68h] [rbp-A0h] BYREF
  _OWORD v39[8]; // [rsp+E8h] [rbp-20h] BYREF

  v5 = (float *)&v37;
  v6 = *((_DWORD *)a1 + 7);
  LODWORD(v37) = *((_DWORD *)a1 + 3);
  *(_QWORD *)((char *)&v37 + 4) = __PAIR64__(*((_DWORD *)a1 + 11), v6);
  v11 = 0;
  v12 = 0.0;
  v13 = 0.0;
  HIDWORD(v37) = *((_DWORD *)a1 + 15);
  v14 = 4LL;
  v35 = a5;
  do
  {
    if ( *v5 == 0.0 )
      goto LABEL_9;
    v15 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*v5) & _xmm);
    v16 = log10f_0(v15);
    v17 = v16 / log10f_0(2.0);
    *v5 = v17;
    if ( v11 )
    {
      if ( v17 > v12 )
      {
        v12 = v17;
        goto LABEL_9;
      }
      v17 = fminf(v17, v13);
    }
    else
    {
      v11 = 1;
      v12 = v17;
    }
    v13 = v17;
LABEL_9:
    ++v5;
    --v14;
  }
  while ( v14 );
  v18 = sqrtf_0(v12 - v13);
  v19 = floorf_0(v18);
  v20 = powf_0(2.0, v19);
  v21 = (float *)v38 + 2;
  v38[0] = _xmm;
  v22 = v20;
  v23 = 8LL;
  v38[2] = _xmm;
  v38[1] = _xmm;
  v38[4] = _xmm;
  v38[3] = _xmm;
  v38[6] = _xmm;
  v38[5] = _xmm;
  v38[7] = _xmm;
  do
  {
    *(float *)&v24 = v22 * *(v21 - 1);
    *(float *)&v37 = v22 * *(v21 - 2);
    *(float *)&v25 = v22 * *v21;
    v21 += 4;
    *(_QWORD *)((char *)&v37 + 4) = __PAIR64__(v25, v24);
    *((float *)&v37 + 3) = *(v21 - 3);
    *(_OWORD *)(v21 - 6) = v37;
    --v23;
  }
  while ( v23 );
  CMILMatrix::Transform(a1, (const struct MilPoint4F *)v38, (struct MilPoint4F *)v39, 8u);
  v37 = v39[4];
  *(_OWORD *)&v34[1] = v39[0];
  v26 = Line3D::Line3D((__int64)v36, (float *)&v34[1], (float *)&v37);
  *(_OWORD *)a2 = *(_OWORD *)v26;
  v27 = v39[5];
  *(_QWORD *)(a2 + 16) = *(_QWORD *)(v26 + 16);
  v37 = v39[1];
  *(_OWORD *)&v34[1] = v27;
  v28 = Line3D::Line3D((__int64)v36, (float *)&v37, (float *)&v34[1]);
  *(_OWORD *)a3 = *(_OWORD *)v28;
  v29 = v39[6];
  *(_QWORD *)(a3 + 16) = *(_QWORD *)(v28 + 16);
  v37 = v39[2];
  *(_OWORD *)&v34[1] = v29;
  v30 = Line3D::Line3D((__int64)v36, (float *)&v37, (float *)&v34[1]);
  *(_OWORD *)a4 = *(_OWORD *)v30;
  v31 = v39[7];
  *(_QWORD *)(a4 + 16) = *(_QWORD *)(v30 + 16);
  v37 = v39[3];
  *(_OWORD *)&v34[1] = v31;
  result = Line3D::Line3D((__int64)v36, (float *)&v37, (float *)&v34[1]);
  v33 = v35;
  *v35 = *(_OWORD *)result;
  *((_QWORD *)v33 + 2) = *(_QWORD *)(result + 16);
  return result;
}
