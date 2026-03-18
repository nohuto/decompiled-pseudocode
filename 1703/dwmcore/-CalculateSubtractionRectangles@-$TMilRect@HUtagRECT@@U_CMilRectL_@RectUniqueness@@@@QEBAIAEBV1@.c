/*
 * XREFs of ?CalculateSubtractionRectangles@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBAIAEBV1@_NPEAV1@IPEAK@Z @ 0x1800206A0
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAU_MARGINS@@H_N77PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180050730 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::CalculateSubtractionRectangles(
        _DWORD *a1,
        _DWORD *a2,
        __int64 a3,
        _DWORD *a4)
{
  int v4; // eax
  unsigned int v5; // r8d
  int v7; // eax
  int v8; // eax
  int v9; // eax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdx

  v4 = a1[1];
  v5 = 0;
  if ( a2[1] > v4 )
  {
    a4[1] = v4;
    v5 = 1;
    a4[3] = a2[1];
    *a4 = *a1;
    a4[2] = a1[2];
  }
  v7 = *a1;
  if ( *a2 > *a1 )
  {
    v11 = 2LL * v5++;
    a4[2 * v11] = v7;
    a4[2 * v11 + 2] = *a2;
    a4[2 * v11 + 1] = a2[1];
    a4[2 * v11 + 3] = a2[3];
  }
  v8 = a2[2];
  if ( a1[2] > v8 )
  {
    if ( v5 < 4 )
    {
      v12 = 2LL * v5;
      a4[2 * v12] = v8;
      a4[2 * v12 + 2] = a1[2];
      a4[2 * v12 + 1] = a2[1];
      a4[2 * v12 + 3] = a2[3];
    }
    ++v5;
  }
  v9 = a2[3];
  if ( a1[3] > v9 )
  {
    if ( v5 < 4 )
    {
      v13 = 2LL * v5;
      a4[2 * v13 + 1] = v9;
      a4[2 * v13 + 3] = a1[3];
      a4[2 * v13] = *a1;
      a4[2 * v13 + 2] = a1[2];
    }
    ++v5;
  }
  return v5;
}
