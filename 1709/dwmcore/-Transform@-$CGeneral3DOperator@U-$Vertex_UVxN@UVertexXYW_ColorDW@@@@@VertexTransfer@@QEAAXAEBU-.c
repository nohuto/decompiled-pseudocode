/*
 * XREFs of ?Transform@?$CGeneral3DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@VertexTransfer@@QEAAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBVCMILMatrix@@PEAU3@@Z @ 0x1801D7850
 * Callers:
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801D64D4 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_V.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801D65B8 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_V.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801D66EC (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_V.c)
 * Callees:
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x1800C5DAA (sqrtf_0.c)
 *     ?TransformIgnoreZW@CMILMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAUMilPoint4F@@I@Z @ 0x1801909B4 (-TransformIgnoreZW@CMILMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAUMilPoint4F@@I@Z.c)
 */

void __fastcall VertexTransfer::CGeneral3DOperator<Vertex_UVxN<VertexXYW_ColorDW>>::Transform(
        CMILMatrix *this,
        const struct D2D_POINT_2F *a2,
        const struct D2D_POINT_2F *a3,
        unsigned int a4,
        CMILMatrix *a5,
        char *a6)
{
  __int64 v8; // r14
  float v10; // xmm9_4
  float v11; // xmm10_4
  float v12; // xmm12_4
  float v13; // xmm13_4
  float v14; // xmm7_4
  float v15; // xmm8_4
  float v16; // xmm0_4
  float v17; // xmm5_4
  float v18; // xmm5_4
  float v19; // xmm4_4
  signed __int64 v20; // rdi
  float v21; // xmm6_4
  signed __int64 v22; // rbx
  float *p_y; // rax
  __int64 v24; // rcx
  float v25; // xmm1_4
  struct D2D_POINT_2F v26; // [rsp+28h] [rbp-89h] BYREF
  float v27; // [rsp+34h] [rbp-7Dh]
  float v28; // [rsp+38h] [rbp-79h] BYREF
  float v29; // [rsp+3Ch] [rbp-75h]
  float v30; // [rsp+44h] [rbp-6Dh]
  float v31; // [rsp+48h] [rbp-69h] BYREF
  float v32; // [rsp+4Ch] [rbp-65h]
  float v33; // [rsp+54h] [rbp-5Dh]

  v8 = a4;
  CMILMatrix::TransformIgnoreZW(a5, a2, (struct MilPoint4F *)&v26);
  CMILMatrix::TransformIgnoreZW(a5, a3, (struct MilPoint4F *)&v31);
  v10 = v31;
  v11 = v32;
  v12 = v31 / v33;
  v13 = v32 / v33;
  v14 = (float)(v26.x / v27) - (float)(v31 / v33);
  v15 = (float)(v26.y / v27) - (float)(v32 / v33);
  v16 = sqrtf_0((float)(v15 * v15) + (float)(v14 * v14));
  v17 = FLOAT_1_0;
  if ( v16 > 0.0 )
    v17 = a3[1].x / v16;
  v26.x = (float)(v14 * v17) + v12;
  v26.y = (float)(v15 * v17) + v13;
  CMILMatrix::TransformIgnoreZW(this, &v26, (struct MilPoint4F *)&v28);
  v26.y = v29 / v30;
  v26.x = v28 / v30;
  CMILMatrix::TransformIgnoreZW(a5, &v26, (struct MilPoint4F *)&v28);
  v19 = v30;
  if ( v30 <= 0.0 )
  {
    v19 = v33;
  }
  else
  {
    v10 = v28;
    v11 = v29;
  }
  *(float *)a6 = v10;
  *((float *)a6 + 1) = v11;
  *((float *)a6 + 2) = v19;
  if ( (_DWORD)v8 )
  {
    v20 = (char *)a3 - (char *)a2;
    v21 = 1.0 - v18;
    v22 = a6 - (char *)a2;
    p_y = &a2[2].y;
    v24 = v8;
    do
    {
      v25 = (float)(v21 * *(float *)((char *)p_y + v20)) + (float)(v18 * *p_y);
      *(float *)((char *)p_y + v22 - 4) = (float)(v21 * *(float *)((char *)p_y + v20 - 4)) + (float)(v18 * *(p_y - 1));
      *(float *)((char *)p_y + v22) = v25;
      p_y += 2;
      --v24;
    }
    while ( v24 );
  }
}
