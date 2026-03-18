/*
 * XREFs of VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180016650
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x1800ACDB0 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMa.c)
 * Callees:
 *     ?ComputeAdjointIgnoreZ@CMILMatrix@@SA?AV1@AEBV1@@Z @ 0x1800177D4 (-ComputeAdjointIgnoreZ@CMILMatrix@@SA-AV1@AEBV1@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x1800DD3E3 (sqrtf_0.c)
 */

__int64 __fastcall VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___(
        __int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  unsigned int v4; // r15d
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int64 result; // rax
  char *v9; // r12
  char *v10; // r13
  float *v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rsi
  float *v14; // rbx
  float *v15; // rdi
  float *v16; // rax
  float *v17; // rax
  __int64 v18; // rcx
  float v19; // xmm10_4
  float v20; // xmm11_4
  float v21; // xmm8_4
  float v22; // xmm9_4
  float v23; // xmm7_4
  float v24; // xmm6_4
  float v25; // xmm0_4
  float v26; // xmm3_4
  __int64 v27; // rax
  float v28; // xmm6_4
  __int64 v29; // rcx
  float v30; // xmm4_4
  float *v31; // rax
  float v32; // xmm2_4
  float v33; // xmm0_4
  __int64 v34; // rdx
  float *v35; // rax
  char *v36; // rbx
  float v37; // xmm4_4
  char *v38; // rcx
  float v39; // xmm1_4
  unsigned int v40; // [rsp+20h] [rbp-E0h]
  unsigned int v41; // [rsp+24h] [rbp-DCh]
  float *v42; // [rsp+28h] [rbp-D8h]
  char *v43; // [rsp+30h] [rbp-D0h]
  __int128 v44; // [rsp+40h] [rbp-C0h]
  _OWORD v45[2]; // [rsp+50h] [rbp-B0h]
  __int128 v46; // [rsp+70h] [rbp-90h]
  int v47; // [rsp+80h] [rbp-80h]
  char v48[72]; // [rsp+90h] [rbp-70h] BYREF
  float v49; // [rsp+D8h] [rbp-28h] BYREF
  float v50; // [rsp+DCh] [rbp-24h]
  float v51; // [rsp+E4h] [rbp-1Ch]
  float v52[3]; // [rsp+E8h] [rbp-18h] BYREF
  float v53; // [rsp+F4h] [rbp-Ch]
  float v54[3]; // [rsp+F8h] [rbp-8h]
  float v55; // [rsp+104h] [rbp+4h]
  _DWORD v56[3]; // [rsp+108h] [rbp+8h] BYREF
  float v57; // [rsp+114h] [rbp+14h]

  v2 = CMILMatrix::ComputeAdjointIgnoreZ(v48);
  v4 = 0;
  v5 = *(_OWORD *)(v2 + 16);
  v44 = *(_OWORD *)v2;
  v6 = *(_OWORD *)(v2 + 32);
  v45[0] = v5;
  v7 = *(_OWORD *)(v2 + 48);
  v47 = *(_DWORD *)(v2 + 64);
  result = *(unsigned int *)(a1 + 20);
  v45[1] = v6;
  v46 = v7;
  v41 = result;
  if ( (_DWORD)result )
  {
    v9 = (char *)v52 - v3;
    v10 = (char *)&v49 - v3;
    v11 = (float *)(v3 + 48);
    v43 = (char *)v56 - v3;
    v42 = (float *)(v3 + 48);
    do
    {
      v12 = 4LL;
      v13 = *(_QWORD *)(a1 + 8) + (int)(*(_DWORD *)(a1 + 16) * v4);
      v14 = (float *)(*(_QWORD *)(a1 + 24) + (int)(*(_DWORD *)(a1 + 32) * v4));
      v15 = (float *)(*(_QWORD *)(a1 + 56) + (int)(*(_DWORD *)(a1 + 64) * v4));
      v40 = *(_DWORD *)(a1 + 40);
      v16 = v11;
      do
      {
        *(float *)((char *)v16 + (_QWORD)v9 - 48) = (float)((float)(*(float *)(v13 + 4) * *(v16 - 8))
                                                          + (float)(*(float *)v13 * *(v16 - 12)))
                                                  + *v16;
        ++v16;
        --v12;
      }
      while ( v12 );
      v17 = v11;
      v18 = 4LL;
      do
      {
        *(float *)&v10[(_QWORD)v17 - 48] = (float)((float)(v14[1] * *(v17 - 8)) + (float)(*v14 * *(v17 - 12))) + *v17;
        ++v17;
        --v18;
      }
      while ( v18 );
      v19 = v49;
      v20 = v50;
      v21 = v49 / v51;
      v22 = v50 / v51;
      v23 = (float)(v52[0] / v53) - (float)(v49 / v51);
      v24 = (float)(v52[1] / v53) - (float)(v50 / v51);
      v25 = sqrtf_0((float)(v24 * v24) + (float)(v23 * v23));
      v26 = FLOAT_1_0;
      if ( v25 > 0.0 )
        v26 = v14[2] / v25;
      v27 = 0LL;
      v28 = (float)(v24 * v26) + v22;
      do
      {
        v54[v27] = (float)((float)(v28 * *((float *)v45 + v27))
                         + (float)((float)((float)(v26 * v23) + v21) * *((float *)&v45[-1] + v27)))
                 + *((float *)&v46 + v27);
        ++v27;
      }
      while ( v27 < 4 );
      v29 = 4LL;
      v11 = v42;
      v30 = v54[0] / v55;
      v31 = v42;
      v32 = v54[1] / v55;
      do
      {
        *(float *)((char *)v31 + (_QWORD)v43 - 48) = (float)((float)(v32 * *(v31 - 8)) + (float)(v30 * *(v31 - 12)))
                                                   + *v31;
        ++v31;
        --v29;
      }
      while ( v29 );
      v33 = v57;
      if ( v57 <= 0.0 )
      {
        v33 = v51;
      }
      else
      {
        v19 = *(float *)v56;
        v20 = *(float *)&v56[1];
      }
      v34 = v40;
      *v15 = v19;
      v15[1] = v20;
      v15[2] = v33;
      if ( v40 )
      {
        v35 = (float *)(v13 + 20);
        v36 = (char *)v14 - v13;
        v37 = 1.0 - v26;
        v38 = (char *)v15 - v13;
        do
        {
          v39 = (float)(v37 * *(float *)((char *)v35 + (_QWORD)v36)) + (float)(v26 * *v35);
          *(float *)&v38[(_QWORD)v35 - 4] = (float)(v37 * *(float *)((char *)v35 + (_QWORD)v36 - 4))
                                          + (float)(v26 * *(v35 - 1));
          *(float *)((char *)v35 + (_QWORD)v38) = v39;
          v35 += 2;
          --v34;
        }
        while ( v34 );
      }
      result = *(unsigned int *)(v13 + 12);
      ++v4;
      *((_DWORD *)v15 + 3) = result;
    }
    while ( v4 < v41 );
  }
  return result;
}
