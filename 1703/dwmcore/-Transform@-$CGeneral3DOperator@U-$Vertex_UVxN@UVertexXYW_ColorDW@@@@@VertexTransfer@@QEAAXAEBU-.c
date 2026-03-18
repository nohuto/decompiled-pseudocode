/*
 * XREFs of ?Transform@?$CGeneral3DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@VertexTransfer@@QEAAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBVCMILMatrix@@PEAU3@@Z @ 0x18001CBE8
 * Callers:
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x18001C9DC (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_V.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x18001CB1C (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_V.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801BCEE0 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_V.c)
 * Callees:
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x1800D53C0 (sqrtf_0.c)
 */

float *__fastcall VertexTransfer::CGeneral3DOperator<Vertex_UVxN<VertexXYW_ColorDW>>::Transform(
        __int64 a1,
        float *a2,
        float *a3,
        unsigned int a4,
        __int64 a5,
        char *a6)
{
  __int64 v7; // r12
  float *v10; // rbx
  float *v11; // rax
  __int64 v12; // r8
  float *v13; // rax
  __int64 v14; // rdx
  float v15; // xmm8_4
  float v16; // xmm9_4
  float v17; // xmm10_4
  float v18; // xmm11_4
  float v19; // xmm6_4
  float v20; // xmm7_4
  float v21; // xmm0_4
  __m128 v22; // xmm4
  float v23; // xmm3_4
  float *v24; // rax
  __int64 v25; // rdx
  float v26; // xmm6_4
  float v27; // xmm7_4
  float *result; // rax
  float v29; // xmm2_4
  __int64 v30; // rcx
  float v31; // xmm5_4
  float v32; // xmm0_4
  signed __int64 v33; // rdi
  __int64 v34; // rcx
  __m128 v35; // xmm2
  __m128 v36; // xmm1
  float v37; // [rsp+28h] [rbp-69h] BYREF
  float v38; // [rsp+2Ch] [rbp-65h]
  float v39; // [rsp+34h] [rbp-5Dh]
  float v40; // [rsp+38h] [rbp-59h] BYREF
  float v41; // [rsp+3Ch] [rbp-55h]
  float v42; // [rsp+44h] [rbp-4Dh]

  v7 = a4;
  v10 = (float *)(a5 + 48);
  v11 = (float *)(a5 + 48);
  v12 = 4LL;
  do
  {
    *(float *)((char *)v11 + (_QWORD)&v37 - a5 - 48) = (float)((float)(a2[1] * *(v11 - 8)) + (float)(*a2 * *(v11 - 12)))
                                                     + *v11;
    ++v11;
    --v12;
  }
  while ( v12 );
  v13 = (float *)(a5 + 48);
  v14 = 4LL;
  do
  {
    *(float *)((char *)v13 + (_QWORD)&v40 - a5 - 48) = (float)((float)(a3[1] * *(v13 - 8)) + (float)(*a3 * *(v13 - 12)))
                                                     + *v13;
    ++v13;
    --v14;
  }
  while ( v14 );
  v15 = v40;
  v16 = v41;
  v17 = v40 / v42;
  v18 = v41 / v42;
  v19 = (float)(v37 / v39) - (float)(v40 / v42);
  v20 = (float)(v38 / v39) - (float)(v41 / v42);
  v21 = sqrtf_0((float)(v20 * v20) + (float)(v19 * v19));
  v22 = (__m128)LODWORD(FLOAT_1_0);
  v23 = FLOAT_1_0;
  if ( v21 > 0.0 )
    v23 = a3[2] / v21;
  v24 = (float *)(a1 + 48);
  v25 = 4LL;
  v26 = (float)(v19 * v23) + v17;
  v27 = (float)(v20 * v23) + v18;
  do
  {
    *(float *)((char *)v24 + (_QWORD)&v37 - a1 - 48) = (float)((float)(v27 * *(v24 - 8)) + (float)(v26 * *(v24 - 12)))
                                                     + *v24;
    ++v24;
    --v25;
  }
  while ( v25 );
  result = (float *)((char *)&v37 - a5);
  v29 = v37 / v39;
  v30 = 4LL;
  v31 = v38 / v39;
  do
  {
    *(float *)((char *)v10 + (_QWORD)result - 48) = (float)((float)(v31 * *(v10 - 8)) + (float)(v29 * *(v10 - 12)))
                                                  + *v10;
    ++v10;
    --v30;
  }
  while ( v30 );
  v32 = v39;
  if ( v39 <= 0.0 )
  {
    v32 = v42;
  }
  else
  {
    v15 = v37;
    v16 = v38;
  }
  *(float *)a6 = v15;
  *((float *)a6 + 1) = v16;
  *((float *)a6 + 2) = v32;
  if ( (_DWORD)v7 )
  {
    v33 = (char *)a3 - (char *)a2;
    v22.m128_f32[0] = 1.0 - v23;
    result = a2 + 5;
    v34 = v7;
    do
    {
      v35 = v22;
      v36 = v22;
      v35.m128_f32[0] = (float)(v22.m128_f32[0] * *(float *)((char *)result + v33 - 4)) + (float)(v23 * *(result - 1));
      v36.m128_f32[0] = (float)(v22.m128_f32[0] * *(float *)((char *)result + v33)) + (float)(v23 * *result);
      *(_QWORD *)((char *)result + a6 - (char *)a2 - 4) = _mm_unpacklo_ps(v35, v36).m128_u64[0];
      result += 2;
      --v34;
    }
    while ( v34 );
  }
  return result;
}
