/*
 * XREFs of ?ClipToPolygon@ClipPlaneIterator@@QEAAJPEAVCPolygon@@AEBVCMILMatrix@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x18017341C
 * Callers:
 *     ?UpdateBspCurrentPolygonClippingPlanes@CDrawingContext@@AEAAJXZ @ 0x180163308 (-UpdateBspCurrentPolygonClippingPlanes@CDrawingContext@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetD3DMatrix@CMILMatrix@@QEBA?AU_D3DMATRIX@@XZ @ 0x1800A3E2C (-GetD3DMatrix@CMILMatrix@@QEBA-AU_D3DMATRIX@@XZ.c)
 *     ??$SAFE_DELETE_ARRAY@W4D2D1_POLYGON_EDGE_FLAG@@@@YAXAEAPEAW4D2D1_POLYGON_EDGE_FLAG@@@Z @ 0x1800D881C (--$SAFE_DELETE_ARRAY@W4D2D1_POLYGON_EDGE_FLAG@@@@YAXAEAPEAW4D2D1_POLYGON_EDGE_FLAG@@@Z.c)
 *     ?ResetToStart@ClipPlaneIterator@@AEAAXXZ @ 0x1801739A0 (-ResetToStart@ClipPlaneIterator@@AEAAXXZ.c)
 *     ?SetClipPoints@ClipPlaneIterator@@AEAAJPEBUD2D_POINT_2F@@IPEBW4D2D1_POLYGON_EDGE_FLAG@@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801739FC (-SetClipPoints@ClipPlaneIterator@@AEAAJPEBUD2D_POINT_2F@@IPEBW4D2D1_POLYGON_EDGE_FLAG@@AEBUD2D_M.c)
 */

__int64 __fastcall ClipPlaneIterator::ClipToPolygon(
        ClipPlaneIterator *this,
        __int64 a2,
        struct _D3DMATRIX *a3,
        _DWORD *a4)
{
  unsigned int v8; // r14d
  __int64 v9; // r12
  const struct D2D_POINT_2F *v10; // rbx
  unsigned int v11; // ebx
  const enum D2D1_POLYGON_EDGE_FLAG *v12; // r9
  __int64 v13; // r8
  struct D2D_POINT_2F *v14; // r10
  __int64 v15; // rax
  __int128 v16; // xmm0
  __int64 v17; // rax
  __m128 v18; // xmm4
  struct _D3DMATRIX *D3DMatrix; // rax
  float *v20; // r10
  float v21; // xmm2_4
  float v22; // xmm4_4
  float v23; // xmm3_4
  __int64 v24; // rax
  __int64 v25; // r8
  __int128 v26; // xmm0
  _DWORD *v27; // r11
  int v28; // eax
  float v29; // xmm0_4
  int v30; // eax
  const struct D2D_POINT_2F *v32; // [rsp+38h] [rbp-29h] BYREF
  struct D2D_MATRIX_3X2_F v33; // [rsp+40h] [rbp-21h] BYREF
  struct _D3DMATRIX v34; // [rsp+58h] [rbp-9h] BYREF
  const enum D2D1_POLYGON_EDGE_FLAG *v35; // [rsp+D0h] [rbp+6Fh] BYREF

  v35 = 0LL;
  ClipPlaneIterator::ResetToStart(this);
  v8 = *(_DWORD *)(a2 + 40);
  v9 = v8;
  v32 = (const struct D2D_POINT_2F *)operator new(saturated_mul(v8, 8uLL));
  v10 = v32;
  if ( v32 )
  {
    v35 = (const enum D2D1_POLYGON_EDGE_FLAG *)operator new(saturated_mul(v8, 4uLL));
    v12 = v35;
    if ( v35 )
    {
      if ( v8 )
      {
        v13 = 0LL;
        v14 = (struct D2D_POINT_2F *)v32;
        do
        {
          v15 = *(_QWORD *)(a2 + 16);
          v16 = *(_OWORD *)(v13 + v15);
          v33.dx = *(FLOAT *)(v13 + v15 + 16);
          LODWORD(v14->x) = v16;
          v17 = *(_QWORD *)(a2 + 16);
          v18 = *(__m128 *)(v13 + v17);
          v33.dx = *(FLOAT *)(v13 + v17 + 16);
          LODWORD(v14->y) = _mm_shuffle_ps(v18, v18, 85).m128_u32[0];
          D3DMatrix = CMILMatrix::GetD3DMatrix(a3, &v34);
          v21 = *v20;
          v23 = (float)((float)(v22 * D3DMatrix->_24) + (float)(*v20 * D3DMatrix->_14)) + D3DMatrix->_44;
          *v20 = (float)((float)((float)(v22 * D3DMatrix->_21) + (float)(*v20 * D3DMatrix->_11)) + D3DMatrix->_41) / v23;
          v20[1] = (float)((float)((float)(v22 * D3DMatrix->_22) + (float)(v21 * D3DMatrix->_12)) + D3DMatrix->_42)
                 / v23;
          v14 = (struct D2D_POINT_2F *)(v20 + 2);
          v24 = *(_QWORD *)(a2 + 16);
          v26 = *(_OWORD *)(v25 + v24);
          LODWORD(v24) = *(_DWORD *)(v25 + v24 + 16);
          v13 = v25 + 20;
          *v27 = v24;
          *(_OWORD *)&v33.m11 = v26;
          --v9;
        }
        while ( v9 );
      }
      v28 = a4[2] - *a4;
      v33.m21 = 0.0;
      v29 = (float)(a4[3] - a4[1]);
      *(_QWORD *)&v33.m11 = COERCE_UNSIGNED_INT(2.0 / (float)v28);
      v33.m22 = -2.0 / v29;
      *(_QWORD *)&v33.m[2][0] = __PAIR64__(LODWORD(FLOAT_1_0), LODWORD(FLOAT_N1_0));
      v30 = ClipPlaneIterator::SetClipPoints(this, v10, v8, v12, &v33);
      v11 = v30;
      if ( v30 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v30, 0x28Bu);
      else
        *((_QWORD *)this + 15) = a2;
    }
    else
    {
      v11 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x27Au);
    }
  }
  else
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x277u);
  }
  SAFE_DELETE_ARRAY<enum D2D1_POLYGON_EDGE_FLAG>((void **)&v32);
  SAFE_DELETE_ARRAY<enum D2D1_POLYGON_EDGE_FLAG>((void **)&v35);
  return v11;
}
