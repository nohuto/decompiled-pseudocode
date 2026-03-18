/*
 * XREFs of ?CalculateClipPlanesFromLineSegments@ClipPlaneIterator@@AEAAXPEAULineSegment@1@IPEAUD2D_VECTOR_4F@@@Z @ 0x180156508
 * Callers:
 *     ?GetMorePlaceholderClipPlanes@ClipPlaneIterator@@AEAAXPEAUD2D_VECTOR_4F@@PEAI@Z @ 0x18015692C (-GetMorePlaceholderClipPlanes@ClipPlaneIterator@@AEAAXPEAUD2D_VECTOR_4F@@PEAI@Z.c)
 *     ?GetMoreStandardClipPlanes@ClipPlaneIterator@@AEAAXPEAUD2D_VECTOR_4F@@PEAI@Z @ 0x1801569E0 (-GetMoreStandardClipPlanes@ClipPlaneIterator@@AEAAXPEAUD2D_VECTOR_4F@@PEAI@Z.c)
 * Callees:
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     sqrtf_0 @ 0x1800D53C0 (sqrtf_0.c)
 */

void __fastcall ClipPlaneIterator::CalculateClipPlanesFromLineSegments(
        ClipPlaneIterator *this,
        struct ClipPlaneIterator::LineSegment *a2,
        unsigned int a3,
        struct D2D_VECTOR_4F *a4)
{
  __int64 v6; // rdi
  float *v7; // rbx
  signed __int64 v8; // rsi
  __int64 v9; // r14
  float v10; // xmm7_4
  float v11; // xmm6_4
  float v12; // xmm9_4
  float v13; // xmm8_4
  float v14; // xmm0_4
  float v15; // xmm8_4
  float v16; // xmm9_4
  float v17; // xmm1_4
  float v18; // xmm6_4
  float v19; // xmm3_4
  float v20; // xmm2_4
  float v21; // xmm7_4
  float v22; // xmm3_4
  float v23; // xmm8_4
  float v24[16]; // [rsp+20h] [rbp-78h]

  v6 = a3;
  if ( a3 )
  {
    v7 = (float *)((char *)a2 + 8);
    v8 = (char *)a4 - (char *)a2;
    v9 = a3;
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
      v14 = sqrtf_0((float)(v13 * v13) + (float)(v12 * v12));
      v15 = v13 / v14;
      v16 = v12 / v14;
      v17 = (float)(v11 * v15) + (float)(v10 * v16);
      v18 = v11 - (float)(v17 * v15);
      v19 = *((float *)this + 4);
      v20 = v19 * v16;
      v21 = v10 - (float)(v17 * v16);
      v22 = v19 * COERCE_FLOAT(LODWORD(v15) ^ _xmm);
      if ( (float)((float)(v18 * v20) + (float)(v21 * v22)) <= 0.0 )
        v23 = FLOAT_1_0;
      else
        v23 = FLOAT_N1_0;
      v24[0] = v22;
      *(_QWORD *)&v24[1] = LODWORD(v20);
      v24[3] = sqrtf_0((float)(v18 * v18) + (float)(v21 * v21)) * v23;
      *(_OWORD *)((char *)v7 + v8 - 8) = *(_OWORD *)v24;
      v7 += 4;
      --v9;
    }
    while ( v9 );
  }
  if ( (unsigned int)v6 < 4 )
    memset_0(&a4[v6], 0, 16LL * (unsigned int)(4 - v6));
}
