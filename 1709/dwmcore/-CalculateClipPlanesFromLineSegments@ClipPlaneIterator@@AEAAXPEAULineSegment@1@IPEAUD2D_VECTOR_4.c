/*
 * XREFs of ?CalculateClipPlanesFromLineSegments@ClipPlaneIterator@@AEAAXPEAULineSegment@1@IPEAUD2D_VECTOR_4F@@@Z @ 0x18014A410
 * Callers:
 *     ?GetMorePlaceholderClipPlanes@ClipPlaneIterator@@AEAAXPEAUD2D_VECTOR_4F@@PEAI@Z @ 0x18014A82C (-GetMorePlaceholderClipPlanes@ClipPlaneIterator@@AEAAXPEAUD2D_VECTOR_4F@@PEAI@Z.c)
 *     ?GetMoreStandardClipPlanes@ClipPlaneIterator@@AEAAXPEAUD2D_VECTOR_4F@@PEAI@Z @ 0x18014A8F8 (-GetMoreStandardClipPlanes@ClipPlaneIterator@@AEAAXPEAUD2D_VECTOR_4F@@PEAI@Z.c)
 * Callees:
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     sqrtf_0 @ 0x1800C5DAA (sqrtf_0.c)
 */

void __fastcall ClipPlaneIterator::CalculateClipPlanesFromLineSegments(
        ClipPlaneIterator *this,
        struct ClipPlaneIterator::LineSegment *a2,
        unsigned int a3,
        struct D2D_VECTOR_4F *a4)
{
  __int64 v6; // rdi
  float *v7; // rbx
  __int64 v8; // r14
  signed __int64 v9; // rsi
  float v10; // xmm7_4
  float v11; // xmm6_4
  float v12; // xmm9_4
  float v13; // xmm8_4
  float v14; // xmm0_4
  float v15; // xmm8_4
  float v16; // xmm9_4
  float v17; // xmm1_4
  float v18; // xmm2_4
  float v19; // xmm6_4
  float v20; // xmm8_4
  float v21; // xmm7_4
  float v22; // xmm2_4
  float v23; // xmm9_4
  __int128 v24; // [rsp+20h] [rbp-68h]

  v6 = a3;
  if ( a3 )
  {
    DWORD2(v24) = 0;
    v7 = (float *)((char *)a2 + 8);
    v8 = a3;
    v9 = (char *)a4 - (char *)a2;
    do
    {
      v10 = *v7;
      v11 = v7[1];
      v12 = *v7 - *(v7 - 2);
      v13 = v11 - *(v7 - 1);
      if ( *(_QWORD *)v7 >= *((_QWORD *)v7 - 1) )
      {
        v10 = *(v7 - 2);
        v11 = *(v7 - 1);
      }
      v14 = sqrtf_0((float)(v12 * v12) + (float)(v13 * v13));
      v15 = v13 / v14;
      v16 = v12 / v14;
      v17 = (float)(v11 * v15) + (float)(v10 * v16);
      v18 = *((float *)this + 4);
      v19 = v11 - (float)(v15 * v17);
      v20 = COERCE_FLOAT(LODWORD(v15) ^ _xmm) * v18;
      v21 = v10 - (float)(v17 * v16);
      v22 = v18 * v16;
      if ( (float)((float)(v19 * v22) + (float)(v20 * v21)) <= 0.0 )
        v23 = FLOAT_1_0;
      else
        v23 = FLOAT_N1_0;
      *(_QWORD *)&v24 = __PAIR64__(LODWORD(v22), LODWORD(v20));
      *((float *)&v24 + 3) = sqrtf_0((float)(v19 * v19) + (float)(v21 * v21)) * v23;
      *(_OWORD *)((char *)v7 + v9 - 8) = v24;
      v7 += 4;
      --v8;
    }
    while ( v8 );
  }
  if ( (unsigned int)v6 < 4 )
    memset_0(&a4[v6], 0, 16LL * (unsigned int)(4 - v6));
}
