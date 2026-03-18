/*
 * XREFs of ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@@Z @ 0x1800735F8
 * Callers:
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x18001BBE0 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 * Callees:
 *     ?invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z @ 0x18004CA90 (-invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z.c)
 *     ??$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z @ 0x18005A380 (--$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?GetScaleCorrectLocalToWorldTransform3x2@CDrawListPrimitive@@QEBA?AUD2D_MATRIX_3X2_F@@AEBVCMILMatrix@@@Z @ 0x180063528 (-GetScaleCorrectLocalToWorldTransform3x2@CDrawListPrimitive@@QEBA-AUD2D_MATRIX_3X2_F@@AEBVCMILMa.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1800728C0 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x180073254 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_Color.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x180073998 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdNonScale2DOperator_Vertex_UVxN_Ve_ea_180073998.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?GetScaleCorrectLocalToWorldTransform4x4@CDrawListPrimitive@@QEBA?AVCMILMatrix@@AEBV2@@Z @ 0x1801553D8 (-GetScaleCorrectLocalToWorldTransform4x4@CDrawListPrimitive@@QEBA-AVCMILMatrix@@AEBV2@@Z.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801D5A28 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdNonScale2DOperator_Vertex_UVxN_Ve_ea_1801D5A28.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801D5ECC (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_Verte_ea_1801D5ECC.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801D61F4 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_Verte_ea_1801D61F4.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801D67B8 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldX.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801D6908 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_C_ea_1801D6908.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801D6AA8 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_C_ea_1801D6AA8.c)
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801D6DA8 (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_World.c)
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801D6E9C (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW__ea_1801D6E9C.c)
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801D6FD4 (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW__ea_1801D6FD4.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801D7314 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801D7434 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_Col_ea_1801D7434.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801D75A0 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_Col_ea_1801D75A0.c)
 */

__int64 __fastcall TransferVertices<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>(
        CDrawListPrimitive *this,
        struct CMILMatrix *a2,
        struct Windows::Foundation::Numerics::float4x4 *a3,
        float a4,
        __int64 *a5)
{
  int v5; // r9d
  int v6; // r14d
  __int64 v9; // rdx
  __int64 v11; // r11
  char v12; // di
  int v13; // eax
  bool v14; // al
  __m128 v15; // xmm5
  __m128 v16; // xmm4
  __m128 v17; // xmm0
  __m128 v18; // xmm3
  __int64 v19; // r9
  unsigned int *v20; // r10
  char v21; // r11
  float v22; // xmm1_4
  float v23; // xmm1_4
  float v24; // xmm1_4
  __int64 result; // rax
  float v26; // xmm1_4
  __int64 v27; // r10
  __int64 v28; // [rsp+20h] [rbp-E0h] BYREF
  int v29; // [rsp+28h] [rbp-D8h]
  int v30; // [rsp+2Ch] [rbp-D4h]
  __int64 v31; // [rsp+30h] [rbp-D0h]
  __int128 v32; // [rsp+38h] [rbp-C8h]
  int v33; // [rsp+48h] [rbp-B8h]
  int v34; // [rsp+4Ch] [rbp-B4h]
  __int64 v35; // [rsp+50h] [rbp-B0h]
  int v36; // [rsp+58h] [rbp-A8h]
  __int64 v37; // [rsp+5Ch] [rbp-A4h]
  __int64 v38[2]; // [rsp+70h] [rbp-90h] BYREF
  int v39; // [rsp+80h] [rbp-80h]
  int v40; // [rsp+84h] [rbp-7Ch]
  __int64 v41; // [rsp+88h] [rbp-78h]
  int v42; // [rsp+90h] [rbp-70h]
  int v43; // [rsp+94h] [rbp-6Ch]
  int v44; // [rsp+98h] [rbp-68h]
  float v45; // [rsp+9Ch] [rbp-64h]
  char v46; // [rsp+A0h] [rbp-60h]
  __int64 v47; // [rsp+A8h] [rbp-58h]
  int v48; // [rsp+B0h] [rbp-50h]
  int v49; // [rsp+B4h] [rbp-4Ch]
  __m128 v50; // [rsp+C0h] [rbp-40h] BYREF
  __m128 v51; // [rsp+D0h] [rbp-30h]
  __m128 v52; // [rsp+E0h] [rbp-20h]
  __m128 v53; // [rsp+F0h] [rbp-10h]
  int v54; // [rsp+100h] [rbp+0h]
  struct D2D_MATRIX_3X2_F v55; // [rsp+110h] [rbp+10h] BYREF

  v5 = *((_DWORD *)this + 2);
  v6 = *((_DWORD *)this + 3);
  v9 = *((_QWORD *)this + 3);
  v11 = *((_QWORD *)this + 4);
  v12 = *((_BYTE *)this + 97);
  v38[0] = *((_QWORD *)this + 5);
  v39 = 8 * v6 + 16;
  v40 = v5;
  v47 = *a5;
  v48 = *((_DWORD *)a5 + 2);
  v13 = *((_DWORD *)a5 + 3);
  v42 = v39;
  v43 = v5;
  v49 = v13;
  v45 = a4;
  v38[1] = v9;
  v41 = v11;
  v44 = v6;
  v46 = v12;
  v54 = 0;
  if ( !(_BYTE)a3 )
  {
    v54 = *((_DWORD *)a2 + 16);
    v14 = Windows::Foundation::Numerics::invert(a2, &v50, a3);
    LOWORD(v54) = v54 & 0xCCF;
    v15 = _mm_shuffle_ps(v50, v51, 238);
    v16 = _mm_shuffle_ps(v50, v51, 68);
    v17 = _mm_shuffle_ps(v52, v53, 68);
    v18 = _mm_shuffle_ps(v52, v53, 238);
    v54 = v14 ? v54 : 0;
    LOWORD(v54) = v54 & 3;
    v50 = _mm_shuffle_ps(v16, v17, 136);
    v51 = _mm_shuffle_ps(v16, v17, 221);
    v52 = _mm_shuffle_ps(v15, v18, 136);
    v53 = _mm_shuffle_ps(v15, v18, 221);
  }
  if ( (unsigned __int8)CMILMatrix::Is2DAffine<0>((float *)a2, v9) )
  {
    CDrawListPrimitive::GetScaleCorrectLocalToWorldTransform3x2(this, &v55, a2);
    v22 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v55.m11 - v55.m22)) & _xmm);
    if ( v22 > 0.0000011920929
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v55.m12 - COERCE_FLOAT(LODWORD(v55.m21) ^ _xmm))) & _xmm) > 0.0000011920929
      || (v23 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v55.m21 * v55.m21)
                                                                  + (float)(v55.m11 * v55.m11))
                                                          - 1.0)) & _xmm),
          v23 >= 0.0000011920929) )
    {
      v29 = 0;
      v30 = 0;
      v34 = 0;
      v36 = 0;
      v37 = 1065353216LL;
      v33 = 1065353216;
      v28 = *(_QWORD *)&v55.m11;
      v26 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a4 - 1.0)) & _xmm);
      v31 = *(_QWORD *)&v55.m[1][0];
      v32 = 0LL;
      v35 = *(_QWORD *)&v55.m[2][0];
      if ( v26 >= 0.0000011920929 )
      {
        if ( v21 )
        {
          if ( v12 )
            VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
              v38,
              &v28,
              v20);
          else
            VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
              v38,
              &v28,
              v20);
        }
        else if ( v12 )
        {
          VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
            v38,
            &v28,
            v20);
        }
        else
        {
          VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
            v38,
            &v28,
            v20);
        }
      }
      else if ( v21 )
      {
        VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
          v38,
          (unsigned int *)&v28,
          v20,
          v19);
      }
      else
      {
        VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
          v38,
          &v28,
          v20);
      }
      result = *((unsigned int *)this + 2);
      dword_18026EE28 += result;
    }
    else
    {
      v29 = 0;
      v30 = 0;
      v34 = 0;
      v36 = 0;
      v37 = 1065353216LL;
      v33 = 1065353216;
      v28 = *(_QWORD *)&v55.m11;
      v24 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a4 - 1.0)) & _xmm);
      v31 = *(_QWORD *)&v55.m[1][0];
      v32 = 0LL;
      v35 = *(_QWORD *)&v55.m[2][0];
      if ( v24 >= 0.0000011920929 )
      {
        if ( v21 )
        {
          if ( v12 )
            VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
              v38,
              (unsigned int *)&v28,
              v20,
              v19);
          else
            VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
              v38,
              &v28,
              v20);
        }
        else if ( v12 )
        {
          VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
            v38,
            &v28,
            v20);
        }
        else
        {
          VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
            v38,
            &v28,
            v20);
        }
      }
      else if ( v21 )
      {
        VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
          v38,
          &v28,
          v20);
      }
      else
      {
        VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
          v38,
          &v28,
          v20);
      }
      result = *((unsigned int *)this + 2);
      dword_18026EE24 += result;
    }
  }
  else
  {
    CDrawListPrimitive::GetScaleCorrectLocalToWorldTransform4x4(this, &v28);
    if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a4 - 1.0)) & _xmm) >= 0.0000011920929 )
    {
      if ( v12 )
        VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
          v38,
          &v28,
          v27);
      else
        VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
          v38,
          &v28,
          v27);
    }
    else
    {
      VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
        v38,
        &v28,
        v27);
    }
    result = *((unsigned int *)this + 2);
    dword_18026EE2C += result;
  }
  return result;
}
