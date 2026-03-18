/*
 * XREFs of ?CalculateInsets@CProjectedShadow@@AEBAXPEAVCDrawingContext@@W4ShadowPath@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV4@AEAVInsets@@4@Z @ 0x1801B4160
 * Callers:
 *     ?GetBrushParameters@CProjectedShadow@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1801B4BA0 (-GetBrushParameters@CProjectedShadow@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?GetRelativeOffset@CVisual@@QEBA_NPEAM00@Z @ 0x1801A7EA8 (-GetRelativeOffset@CVisual@@QEBA_NPEAM00@Z.c)
 *     ?ProjectOntoAndLocalize@CProjectedShadow@@CA?AVCMILMatrix@@PEAVCDrawingContext@@PEAVCVisual@@1PEAVCCompositionLight@@@Z @ 0x1801B64B8 (-ProjectOntoAndLocalize@CProjectedShadow@@CA-AVCMILMatrix@@PEAVCDrawingContext@@PEAVCVisual@@1PE.c)
 *     ?Transform4DVector@CMILMatrix@@QEBA?AUD2D_VECTOR_4F@@AEBU2@@Z @ 0x1801C7500 (-Transform4DVector@CMILMatrix@@QEBA-AUD2D_VECTOR_4F@@AEBU2@@Z.c)
 */

__int64 __fastcall CProjectedShadow::CalculateInsets(
        _QWORD *a1,
        __int64 a2,
        int a3,
        float *a4,
        FLOAT *a5,
        float *a6,
        float *a7)
{
  __int64 v9; // rbx
  float v10; // xmm6_4
  CVisual *v11; // rbx
  struct D2D_VECTOR_4F *v12; // r9
  __int64 v13; // rcx
  struct D2D_VECTOR_4F *v14; // r8
  __int64 v15; // rax
  __int128 v16; // xmm1
  float v17; // xmm2_4
  float v18; // xmm4_4
  __int128 v19; // xmm0
  unsigned int v20; // xmm4_4
  unsigned int v21; // xmm2_4
  __int128 v22; // xmm0
  struct D2D_VECTOR_4F *v23; // rax
  struct D2D_VECTOR_4F *v24; // r8
  struct D2D_VECTOR_4F *v25; // r9
  __int64 v26; // r11
  __int64 v27; // rcx
  __int64 v28; // r10
  float v29; // xmm1_4
  __int64 v30; // r10
  __int64 result; // rax
  float x; // xmm5_4
  float y; // xmm4_4
  float v34; // xmm2_4
  float v35; // xmm1_4
  float v36; // xmm0_4
  float v37; // xmm2_4
  float v38; // xmm0_4
  float v39; // xmm1_4
  __int128 v40; // [rsp+38h] [rbp-D0h]
  struct D2D_VECTOR_4F v41; // [rsp+38h] [rbp-D0h]
  float v42; // [rsp+48h] [rbp-C0h] BYREF
  float v43; // [rsp+4Ch] [rbp-BCh] BYREF
  float v44; // [rsp+50h] [rbp-B8h] BYREF
  struct D2D_VECTOR_4F v45; // [rsp+58h] [rbp-B0h] BYREF
  struct D2D_VECTOR_4F v46; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v47[80]; // [rsp+78h] [rbp-90h] BYREF
  struct D2D_VECTOR_4F v48; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v49; // [rsp+D8h] [rbp-30h]
  __int128 v50; // [rsp+E8h] [rbp-20h]
  struct D2D_VECTOR_4F v51; // [rsp+F8h] [rbp-10h]

  v9 = a1[9];
  if ( a3 )
    v10 = *(float *)(v9 + 92) + *(float *)(v9 + 92);
  else
    v10 = FLOAT_32_0;
  v11 = *(CVisual **)(v9 + 56);
  CProjectedShadow::ProjectOntoAndLocalize(v47, a2, v11, *(_QWORD *)(a1[10] + 56LL), *(_QWORD *)(a1[11] + 80LL));
  v42 = 0.0;
  v43 = 0.0;
  v44 = 0.0;
  CVisual::GetRelativeOffset(v11, &v42, &v43, &v44);
  *((_QWORD *)&v40 + 1) = 0x3F80000000000000LL;
  v12 = &v48;
  v13 = a1[9];
  v14 = &v48;
  v15 = *(_QWORD *)(v13 + 56);
  LODWORD(v40) = *(_DWORD *)(v13 + 92) ^ _xmm;
  DWORD1(v40) = v40;
  v16 = v40;
  *((_QWORD *)&v40 + 1) = 0x3F80000000000000LL;
  v17 = *(float *)(v15 + 132);
  v18 = *(float *)(v15 + 136);
  LODWORD(v40) = *(_DWORD *)(v13 + 92);
  DWORD1(v40) = v40;
  v19 = v40;
  *((_QWORD *)&v40 + 1) = 0x3F80000000000000LL;
  v49 = v19;
  *(float *)&v19 = v18 + *(float *)&v40;
  v48 = (struct D2D_VECTOR_4F)v16;
  *(float *)&v20 = v18 - *(float *)&v40;
  *(float *)&v16 = v17 + *(float *)&v40;
  *(float *)&v21 = v17 - *(float *)&v40;
  *(_QWORD *)&v40 = __PAIR64__(v19, v16);
  v22 = v40;
  *(_QWORD *)&v41.z = 0x3F80000000000000LL;
  v50 = v22;
  *(_QWORD *)&v41.x = __PAIR64__(v20, v21);
  v51 = v41;
  do
  {
    v41.x = v42 + v12->x;
    v41.y = v43 + v12->y;
    v41.z = v44 + v12->z;
    *v12 = v41;
    v23 = CMILMatrix::Transform4DVector((CMILMatrix *)v47, &v46, v14);
    v27 = 0LL;
    *v25 = *v23;
    v29 = *(float *)(v28 + 8);
    v30 = v28 - (_QWORD)&v45.y;
    do
    {
      result = v30 + 4 * v27;
      *(&v45.x + v27++) = *(float *)((char *)&v45.x + result) / v29;
    }
    while ( v27 < 4 );
    v14 = v24 + 1;
    *v25 = v45;
    v12 = v25 + 1;
  }
  while ( v26 != 1 );
  x = v48.x;
  y = v48.y;
  v34 = *(float *)&v50;
  v35 = *((float *)&v50 + 1);
  *a5 = v48.x;
  a5[1] = y;
  a5[2] = v34;
  a5[3] = v35;
  if ( (float)(a4[2] - *a4) > (float)(v10 + v10) )
  {
    v36 = *(float *)&v49;
    v37 = v34 - v51.x;
    *a6 = v10;
    a6[2] = v10;
    a7[2] = v37;
    *a7 = v36 - x;
  }
  if ( (float)(a4[3] - a4[1]) > (float)(v10 + v10) )
  {
    v38 = *((float *)&v49 + 1);
    v39 = v35 - v51.y;
    a6[1] = v10;
    a6[3] = v10;
    a7[3] = v39;
    a7[1] = v38 - y;
  }
  return result;
}
