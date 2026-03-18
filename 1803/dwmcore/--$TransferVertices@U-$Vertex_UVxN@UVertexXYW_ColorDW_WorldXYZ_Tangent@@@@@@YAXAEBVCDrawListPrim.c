/*
 * XREFs of ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@@Z @ 0x18000EDB8
 * Callers:
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x180058640 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 * Callees:
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x18000E930 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_Color.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x180014FC8 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1800152F8 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_Verte_ea_1800152F8.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1800155F0 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdNonScale2DOperator_Vertex_UVxN_Ve_ea_1800155F0.c)
 *     ?GetScaleCorrectLocalToWorldTransform4x4@CDrawListPrimitive@@QEBA?AVCMILMatrix@@AEBV2@@Z @ 0x180017C60 (-GetScaleCorrectLocalToWorldTransform4x4@CDrawListPrimitive@@QEBA-AVCMILMatrix@@AEBV2@@Z.c)
 *     ?invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z @ 0x180098470 (-invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z.c)
 *     ??$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z @ 0x1800A56A0 (--$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x180219328 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdNonScale2DOperator_Vertex_UVxN_Ve_ea_180219328.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x180219830 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_Verte_ea_180219830.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x180219CE4 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldX.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x180219E34 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_C_ea_180219E34.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x180219FD4 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_C_ea_180219FD4.c)
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x18021A2D4 (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_World.c)
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x18021A3C8 (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW__ea_18021A3C8.c)
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x18021A500 (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW__ea_18021A500.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x18021A840 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x18021A960 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_Col_ea_18021A960.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x18021AACC (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_Col_ea_18021AACC.c)
 */

__int64 __fastcall TransferVertices<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>(
        __int64 a1,
        __int64 a2,
        struct Windows::Foundation::Numerics::float4x4 *a3,
        float a4,
        __int64 *a5)
{
  int v5; // r14d
  int v7; // ecx
  char v9; // si
  __int64 v10; // rdx
  __m128 *v11; // r9
  __int64 v13; // r15
  bool v14; // al
  __m128 v15; // xmm5
  __m128 v16; // xmm4
  __m128 v17; // xmm3
  __m128 v18; // xmm0
  char v19; // r8
  float *v20; // r9
  float *v21; // r10
  float v22; // xmm3_4
  int v23; // xmm7_4
  float v24; // xmm6_4
  float v25; // xmm4_4
  float v26; // xmm5_4
  float v27; // xmm3_4
  float v28; // xmm4_4
  int v29; // xmm8_4
  float v30; // xmm0_4
  float v31; // xmm1_4
  float v32; // xmm1_4
  __int64 result; // rax
  float v34; // xmm1_4
  __int64 v35; // r10
  float v36; // [rsp+20h] [rbp-E0h] BYREF
  float v37; // [rsp+24h] [rbp-DCh]
  int v38; // [rsp+28h] [rbp-D8h]
  int v39; // [rsp+2Ch] [rbp-D4h]
  float v40; // [rsp+30h] [rbp-D0h]
  float v41; // [rsp+34h] [rbp-CCh]
  __int128 v42; // [rsp+38h] [rbp-C8h]
  int v43; // [rsp+48h] [rbp-B8h]
  int v44; // [rsp+4Ch] [rbp-B4h]
  int v45; // [rsp+50h] [rbp-B0h]
  int v46; // [rsp+54h] [rbp-ACh]
  int v47; // [rsp+58h] [rbp-A8h]
  __int64 v48; // [rsp+5Ch] [rbp-A4h]
  _QWORD v49[2]; // [rsp+70h] [rbp-90h] BYREF
  int v50; // [rsp+80h] [rbp-80h]
  int v51; // [rsp+84h] [rbp-7Ch]
  __int64 v52; // [rsp+88h] [rbp-78h]
  int v53; // [rsp+90h] [rbp-70h]
  int v54; // [rsp+94h] [rbp-6Ch]
  int v55; // [rsp+98h] [rbp-68h]
  float v56; // [rsp+9Ch] [rbp-64h]
  char v57; // [rsp+A0h] [rbp-60h]
  __int64 v58; // [rsp+A8h] [rbp-58h]
  int v59; // [rsp+B0h] [rbp-50h]
  int v60; // [rsp+B4h] [rbp-4Ch]
  __m128 v61; // [rsp+C0h] [rbp-40h] BYREF
  __m128 v62; // [rsp+D0h] [rbp-30h]
  __m128 v63; // [rsp+E0h] [rbp-20h]
  __m128 v64; // [rsp+F0h] [rbp-10h]
  int v65; // [rsp+100h] [rbp+0h]

  v5 = *(_DWORD *)(a1 + 12);
  v7 = *(_DWORD *)(a1 + 8);
  v9 = *(_BYTE *)(a1 + 97);
  v10 = (unsigned int)(8 * v5 + 16);
  v11 = 0LL;
  v49[0] = *(_QWORD *)(a1 + 40);
  v49[1] = *(_QWORD *)(a1 + 24);
  v52 = *(_QWORD *)(a1 + 32);
  v51 = v7;
  v54 = v7;
  v56 = a4;
  v50 = 8 * v5 + 16;
  v53 = v50;
  v13 = *a5;
  v59 = *((_DWORD *)a5 + 2);
  v60 = *((_DWORD *)a5 + 3);
  v55 = v5;
  v57 = v9;
  v58 = v13;
  v65 = 0;
  if ( !(_BYTE)a3 )
  {
    v65 = *(_DWORD *)(a2 + 64);
    v14 = Windows::Foundation::Numerics::invert(
            (Windows::Foundation::Numerics *)a2,
            (const struct Windows::Foundation::Numerics::float4x4 *)&v61,
            a3);
    LOBYTE(v10) = v65 & 0xCF;
    if ( !v14 )
    {
      v65 = 0;
      LOBYTE(v10) = 0;
    }
    v11 = &v61;
    LOBYTE(v10) = v10 & 3;
    LOWORD(v65) = (unsigned __int8)v10;
    v15 = _mm_shuffle_ps(v61, v62, 238);
    v16 = _mm_shuffle_ps(v61, v62, 68);
    v17 = _mm_shuffle_ps(v63, v64, 238);
    v18 = _mm_shuffle_ps(v63, v64, 68);
    v61 = _mm_shuffle_ps(v16, v18, 136);
    v62 = _mm_shuffle_ps(v16, v18, 221);
    v63 = _mm_shuffle_ps(v15, v17, 136);
    v64 = _mm_shuffle_ps(v15, v17, 221);
  }
  LOBYTE(a3) = 1;
  if ( (v5 & 1) != 0 || (v13 & 0xF) != 0 )
    LOBYTE(a3) = 0;
  if ( (unsigned __int8)CMILMatrix::Is2DAffine<0>(a2, v10, a3, v11) )
  {
    v22 = 1.0 / *(float *)(a1 + 88);
    v23 = *(_DWORD *)(a2 + 48);
    v24 = v22 * *(float *)a2;
    v25 = 1.0 / *(float *)(a1 + 92);
    v26 = v25 * *(float *)(a2 + 20);
    v27 = v22 * *(float *)(a2 + 4);
    v28 = v25 * *(float *)(a2 + 16);
    v29 = *(_DWORD *)(a2 + 52);
    v30 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v24 - v26)) & _xmm);
    if ( v30 > 0.0000011920929
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v27 - COERCE_FLOAT(LODWORD(v28) ^ _xmm))) & _xmm) > 0.0000011920929
      || (v31 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v28 * v28) + (float)(v24 * v24)) - 1.0)) & _xmm),
          v31 >= 0.0000011920929) )
    {
      v38 = 0;
      v39 = 0;
      v44 = 0;
      v47 = 0;
      v36 = v24;
      v48 = 1065353216LL;
      v43 = 1065353216;
      v37 = v27;
      v40 = v28;
      v34 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a4 - 1.0)) & _xmm);
      v41 = v26;
      v45 = v23;
      v46 = v29;
      v42 = 0LL;
      if ( v34 >= 0.0000011920929 )
      {
        if ( v19 )
        {
          if ( v9 )
            VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
              v49,
              &v36,
              v21);
          else
            VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
              v49,
              &v36,
              v21);
        }
        else if ( v9 )
        {
          VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
            v49,
            &v36,
            v21);
        }
        else
        {
          VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
            v49,
            &v36,
            v21);
        }
      }
      else if ( v19 )
      {
        VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
          v49,
          &v36,
          v21);
      }
      else
      {
        VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
          v49,
          &v36,
          v21);
      }
      result = *(unsigned int *)(a1 + 8);
      dword_1802D6368 += result;
    }
    else
    {
      v38 = 0;
      v39 = 0;
      v44 = 0;
      v47 = 0;
      v36 = v24;
      v48 = 1065353216LL;
      v43 = 1065353216;
      v37 = v27;
      v40 = v28;
      v32 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a4 - 1.0)) & _xmm);
      v41 = v26;
      v45 = v23;
      v46 = v29;
      v42 = 0LL;
      if ( v32 >= 0.0000011920929 )
      {
        if ( v19 )
        {
          if ( v9 )
            VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
              v49,
              &v36,
              v21);
          else
            VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
              v49,
              &v36,
              v21);
        }
        else if ( v9 )
        {
          VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
            v49,
            &v36,
            v21);
        }
        else
        {
          VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
            v49,
            &v36,
            v21);
        }
      }
      else if ( v19 )
      {
        VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
          (__int64)v49,
          (unsigned int *)&v36,
          v21,
          v20);
      }
      else
      {
        VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
          v49,
          &v36,
          v21);
      }
      result = *(unsigned int *)(a1 + 8);
      dword_1802D6364 += result;
    }
  }
  else
  {
    CDrawListPrimitive::GetScaleCorrectLocalToWorldTransform4x4(a1, &v36, a2);
    if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a4 - 1.0)) & _xmm) >= 0.0000011920929 )
    {
      if ( v9 )
        VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
          v49,
          &v36,
          v35);
      else
        VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
          v49,
          &v36,
          v35);
    }
    else
    {
      VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
        v49,
        &v36,
        v35);
    }
    result = *(unsigned int *)(a1 + 8);
    dword_1802D636C += result;
  }
  return result;
}
