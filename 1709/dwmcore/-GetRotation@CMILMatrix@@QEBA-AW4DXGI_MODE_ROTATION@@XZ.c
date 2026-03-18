/*
 * XREFs of ?GetRotation@CMILMatrix@@QEBA?AW4DXGI_MODE_ROTATION@@XZ @ 0x180059220
 * Callers:
 *     ?RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18003AEA4 (-RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV-$.c)
 *     ?DrawAsOverlay@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEA_N@Z @ 0x18003B044 (-DrawAsOverlay@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEA_N@Z.c)
 * Callees:
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18005A460 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 */

__int64 __fastcall CMILMatrix::GetRotation(CMILMatrix *this, __int64 a2)
{
  float *v2; // rcx
  unsigned int v3; // r9d
  unsigned int v4; // r11d
  float v5; // xmm1_4
  float v6; // xmm1_4
  float v7; // xmm1_4
  int v8; // r10d
  float v9; // xmm4_4
  float v10; // xmm1_4
  int v11; // r8d
  float v12; // xmm4_4
  float v13; // xmm1_4
  int v14; // edx
  float v15; // xmm4_4
  float v16; // xmm1_4
  int v17; // eax
  float v19; // xmm1_4
  float v20; // xmm1_4

  LOBYTE(a2) = 1;
  if ( (unsigned __int8)CMILMatrix::Is2DAffine<1>(this, a2)
    && (v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v2[1]) & _xmm), v5 < 0.000081380211)
    && (v6 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v2[4]) & _xmm), v6 < 0.000081380211)
    || (v19 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*v2) & _xmm), v19 < 0.000081380211)
    && (v20 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v2[5]) & _xmm), v20 < 0.000081380211) )
  {
    v7 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*v2) & _xmm);
    if ( v7 < 0.000081380211 )
    {
      v8 = v3;
    }
    else
    {
      v8 = -1;
      if ( *v2 > 0.0 )
        v8 = v4;
    }
    v9 = v2[1];
    v10 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v9) & _xmm);
    if ( v10 >= 0.000081380211 )
    {
      v11 = -1;
      if ( v9 > 0.0 )
        v11 = v4;
    }
    else
    {
      v11 = v3;
    }
    v12 = v2[4];
    v13 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v12) & _xmm);
    if ( v13 >= 0.000081380211 )
    {
      v14 = -1;
      if ( v12 > 0.0 )
        v14 = v4;
    }
    else
    {
      v14 = v3;
    }
    v15 = v2[5];
    v16 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v15) & _xmm);
    if ( v16 < 0.000081380211 )
    {
      v17 = v3;
    }
    else
    {
      v17 = -1;
      if ( v15 > 0.0 )
        v17 = v4;
    }
    if ( v8 == v4 )
    {
      if ( !v11 && !v14 && v17 == v4 )
        return v4;
    }
    else if ( v8 )
    {
      if ( v8 == -1 && !v11 && !v14 && v17 == -1 )
        return 3;
    }
    else if ( v11 == v4 )
    {
      if ( v14 == -1 && !v17 )
        return 2;
    }
    else if ( v11 == -1 && v14 == v4 && !v17 )
    {
      return 4;
    }
  }
  return v3;
}
