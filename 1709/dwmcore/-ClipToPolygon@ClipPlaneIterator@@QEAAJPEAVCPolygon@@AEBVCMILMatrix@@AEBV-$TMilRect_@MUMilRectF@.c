/*
 * XREFs of ?ClipToPolygon@ClipPlaneIterator@@QEAAJPEAVCPolygon@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18014A5BC
 * Callers:
 *     ?UpdateBspCurrentPolygonClippingPlanes@CDrawingContext@@AEAAJXZ @ 0x18013F330 (-UpdateBspCurrentPolygonClippingPlanes@CDrawingContext@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?GetD3DMatrix@CMILMatrix@@QEBA?AU_D3DMATRIX@@XZ @ 0x18005ACD4 (-GetD3DMatrix@CMILMatrix@@QEBA-AU_D3DMATRIX@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$SAFE_DELETE_ARRAY@W4D2D1_POLYGON_EDGE_FLAG@@@@YAXAEAPEAW4D2D1_POLYGON_EDGE_FLAG@@@Z @ 0x1800BE440 (--$SAFE_DELETE_ARRAY@W4D2D1_POLYGON_EDGE_FLAG@@@@YAXAEAPEAW4D2D1_POLYGON_EDGE_FLAG@@@Z.c)
 *     ?ResetToStart@ClipPlaneIterator@@AEAAXXZ @ 0x18014AB3C (-ResetToStart@ClipPlaneIterator@@AEAAXXZ.c)
 *     ?SetClipPoints@ClipPlaneIterator@@AEAAJPEBUD2D_POINT_2F@@IPEBW4D2D1_POLYGON_EDGE_FLAG@@AEBUD2D_MATRIX_3X2_F@@W4Enum@Orientation@@@Z @ 0x18014AB98 (-SetClipPoints@ClipPlaneIterator@@AEAAJPEBUD2D_POINT_2F@@IPEBW4D2D1_POLYGON_EDGE_FLAG@@AEBUD2D_M.c)
 */

__int64 __fastcall ClipPlaneIterator::ClipToPolygon(ClipPlaneIterator *a1, __int64 a2, CMILMatrix *a3, float *a4)
{
  float v6; // xmm0_4
  float v7; // xmm1_4
  int v8; // r12d
  unsigned int v9; // esi
  __int64 v10; // r15
  _DWORD *v11; // rbx
  unsigned int v12; // ebx
  void *v13; // r9
  CMILMatrix *v14; // rcx
  __int64 v15; // r8
  _DWORD *v16; // r10
  __int64 v17; // rax
  __int128 v18; // xmm0
  __int64 v19; // rax
  __m128 v20; // xmm4
  struct _D3DMATRIX *D3DMatrix; // rax
  float *v22; // r10
  float v23; // xmm2_4
  float v24; // xmm4_4
  float v25; // xmm3_4
  __int64 v26; // rax
  __int64 v27; // r8
  __int128 v28; // xmm0
  _DWORD *v29; // r11
  signed int v30; // eax
  __int128 v32; // [rsp+30h] [rbp-39h] BYREF
  float v33; // [rsp+40h] [rbp-29h]
  float v34; // [rsp+44h] [rbp-25h]
  struct _D3DMATRIX v35; // [rsp+50h] [rbp-19h] BYREF
  LPVOID v36; // [rsp+D8h] [rbp+6Fh] BYREF
  CMILMatrix *v37; // [rsp+E0h] [rbp+77h]
  _DWORD *v38; // [rsp+E8h] [rbp+7Fh] BYREF

  v37 = a3;
  v6 = a4[2] - *a4;
  v7 = a4[3] - a4[1];
  v36 = 0LL;
  v8 = (int)v6;
  ClipPlaneIterator::ResetToStart(a1);
  v9 = *(_DWORD *)(a2 + 40);
  v10 = v9;
  v38 = operator new(saturated_mul(v9, 8uLL));
  v11 = v38;
  if ( v38 )
  {
    v36 = operator new(saturated_mul(v9, 4uLL));
    v13 = v36;
    if ( v36 )
    {
      if ( v9 )
      {
        v14 = v37;
        v15 = 0LL;
        v16 = v11;
        do
        {
          v17 = *(_QWORD *)(a2 + 16);
          v18 = *(_OWORD *)(v17 + v15);
          v33 = *(float *)(v17 + v15 + 16);
          *v16 = v18;
          v19 = *(_QWORD *)(a2 + 16);
          v20 = *(__m128 *)(v19 + v15);
          v33 = *(float *)(v19 + v15 + 16);
          v16[1] = _mm_shuffle_ps(v20, v20, 85).m128_u32[0];
          D3DMatrix = CMILMatrix::GetD3DMatrix((struct _D3DMATRIX *)v14, &v35);
          v23 = *v22;
          v25 = (float)((float)(v24 * D3DMatrix->_24) + (float)(*v22 * D3DMatrix->_14)) + D3DMatrix->_44;
          *v22 = (float)((float)((float)(v24 * D3DMatrix->_21) + (float)(*v22 * D3DMatrix->_11)) + D3DMatrix->_41) / v25;
          v22[1] = (float)((float)((float)(v24 * D3DMatrix->_22) + (float)(v23 * D3DMatrix->_12)) + D3DMatrix->_42)
                 / v25;
          v16 = v22 + 2;
          v26 = *(_QWORD *)(a2 + 16);
          v28 = *(_OWORD *)(v26 + v27);
          LODWORD(v26) = *(_DWORD *)(v26 + v27 + 16);
          v15 = v27 + 20;
          *v29 = v26;
          v32 = v28;
          --v10;
        }
        while ( v10 );
      }
      *(_QWORD *)((char *)&v32 + 4) = 0LL;
      *(float *)&v32 = 2.0 / (float)v8;
      *((float *)&v32 + 3) = -2.0 / (float)(int)v7;
      v34 = FLOAT_1_0;
      v33 = FLOAT_N1_0;
      v30 = ClipPlaneIterator::SetClipPoints(a1, v11, v9, v13, &v32);
      v12 = v30;
      if ( v30 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v30, 0x299u);
      else
        *((_QWORD *)a1 + 15) = a2;
    }
    else
    {
      v12 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x288u);
    }
  }
  else
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x285u);
  }
  SAFE_DELETE_ARRAY<enum D2D1_POLYGON_EDGE_FLAG>((void **)&v38);
  SAFE_DELETE_ARRAY<enum D2D1_POLYGON_EDGE_FLAG>(&v36);
  return v12;
}
