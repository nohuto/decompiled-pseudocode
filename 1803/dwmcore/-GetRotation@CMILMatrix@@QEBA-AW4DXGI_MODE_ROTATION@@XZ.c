/*
 * XREFs of ?GetRotation@CMILMatrix@@QEBA?AW4DXGI_MODE_ROTATION@@XZ @ 0x18000F220
 * Callers:
 *     ?DrawAsOverlay@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEA_N@Z @ 0x180007DA8 (-DrawAsOverlay@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEA_N@Z.c)
 *     ?RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18006AFF4 (-RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV-$.c)
 * Callees:
 *     ?CalcMatrixEpsilonValue@@YA?AW4MatrixEpsilonValue@@M@Z @ 0x180016F60 (-CalcMatrixEpsilonValue@@YA-AW4MatrixEpsilonValue@@M@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800A5828 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 */

__int64 __fastcall CMILMatrix::GetRotation(CMILMatrix *this)
{
  unsigned int v1; // r11d
  unsigned int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  unsigned int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r9
  unsigned int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // eax
  int v15; // edx
  int v16; // r8d
  int v17; // r9d
  unsigned int v18; // ecx

  if ( (unsigned __int8)CMILMatrix::Is2DAxisAlignedPreserving<1>(this) )
  {
    v2 = ((__int64 (*)(void))CalcMatrixEpsilonValue)();
    v6 = CalcMatrixEpsilonValue(v4, v3, v5, v2);
    v10 = CalcMatrixEpsilonValue(v8, v7, v6, v9);
    v14 = CalcMatrixEpsilonValue(v11, v10, v12, v13);
    v18 = v1 + 1;
    if ( v17 == v1 + 1 )
    {
      if ( !v16 && !v15 && v14 == v18 )
        ++v1;
    }
    else if ( v17 )
    {
      if ( v17 == -1 && !v16 && !v15 && v14 == -1 )
        return 3;
    }
    else if ( v16 == v18 )
    {
      if ( v15 == -1 && !v14 )
        return 2;
    }
    else if ( v16 == -1 && v15 == v18 && !v14 )
    {
      return 4;
    }
  }
  return v1;
}
