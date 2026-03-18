/*
 * XREFs of ?SplitVertex@@YAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBUD2D_VECTOR_2F@@PEAUD2D_POINT_2F@@PEAU1@PEAU2@@Z @ 0x1800170E0
 * Callers:
 *     ?Initialize@CDrawListPrimitive@@IEAAX_NAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IPEBGIAEBUD2D_VECTOR_2F@@0@Z @ 0x1800AF3E0 (-Initialize@CDrawListPrimitive@@IEAAX_NAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_ColorDW@@.c)
 * Callees:
 *     ??$Transform2DAndFillPosXYUVs@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBVCMILMatrix@@PEAU0@PEAUD2D_POINT_2F@@@Z @ 0x1800BF134 (--$Transform2DAndFillPosXYUVs@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBU-$Vertex_UVxN@UVerte.c)
 */

_QWORD *__fastcall SplitVertex(__int64 a1, __int64 a2, unsigned int a3, float *a4, _QWORD *a5, _QWORD *a6, _QWORD *a7)
{
  float v9; // xmm5_4
  __int64 v10; // r14
  float v11; // xmm1_4
  float v12; // xmm2_4
  _QWORD *v13; // rdi
  _QWORD *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  _QWORD *v17; // xmm0_8
  _QWORD *v18; // rcx
  _QWORD *result; // rax
  __int64 v20; // rbx
  __int64 v21; // rcx
  int v22; // xmm0_4
  _DWORD v23[8]; // [rsp+30h] [rbp-50h] BYREF
  __int128 v24; // [rsp+50h] [rbp-30h]
  __int128 v25; // [rsp+60h] [rbp-20h]
  int v26; // [rsp+70h] [rbp-10h]

  *a5 = *(_QWORD *)a1;
  v9 = *a4;
  v10 = a3;
  v11 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*a4 - 1.0)) & _xmm);
  if ( v11 >= 0.0000011920929
    || (v12 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a4[1] - 1.0)) & _xmm), v12 >= 0.0000011920929) )
  {
    v22 = *((_DWORD *)a4 + 1);
    v13 = a6;
    v23[1] = 0;
    v23[2] = 0;
    v23[3] = 0;
    v23[4] = 0;
    v23[6] = 0;
    v23[7] = 0;
    v26 = 0;
    v23[5] = v22;
    v24 = _xmm;
    *(float *)v23 = v9;
    v25 = _xmm;
    Transform2DAndFillPosXYUVs<Vertex_UVxN<VertexXYW_ColorDW>>(a1, a2, a3, (unsigned int)v23, (__int64)a6, (__int64)&a5);
    v17 = a5;
  }
  else
  {
    v13 = a6;
    *a6 = *(_QWORD *)a1;
    if ( a3 )
    {
      v14 = v13 + 2;
      v15 = a1 - (_QWORD)v13;
      v16 = a3;
      do
      {
        *v14 = *(_QWORD *)((char *)v14 + v15);
        ++v14;
        --v16;
      }
      while ( v16 );
    }
    v17 = *(_QWORD **)a2;
  }
  v18 = a7;
  *a7 = v17;
  *((_DWORD *)v13 + 2) = *(_DWORD *)(a1 + 8);
  *((_DWORD *)v13 + 3) = *(_DWORD *)(a1 + 12);
  *((_DWORD *)v18 + 2) = *(_DWORD *)(a2 + 8);
  result = (_QWORD *)*(unsigned int *)(a2 + 12);
  *((_DWORD *)v18 + 3) = (_DWORD)result;
  if ( (_DWORD)v10 )
  {
    result = v18 + 2;
    v20 = a2 - (_QWORD)v18;
    v21 = v10;
    do
    {
      *result = *(_QWORD *)((char *)result + v20);
      ++result;
      --v21;
    }
    while ( v21 );
  }
  return result;
}
