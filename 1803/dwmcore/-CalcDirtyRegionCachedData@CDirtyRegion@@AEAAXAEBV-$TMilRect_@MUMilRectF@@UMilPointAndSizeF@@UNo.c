/*
 * XREFs of ?CalcDirtyRegionCachedData@CDirtyRegion@@AEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUDirtyRegionCachedData@1@@Z @ 0x18009F10C
 * Callers:
 *     ?Merge@CDirtyRegion@@AEAAXII@Z @ 0x18009E29C (-Merge@CDirtyRegion@@AEAAXII@Z.c)
 *     ?_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18009E3A0 (-_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDirtyRegion::CalcDirtyRegionCachedData(__int64 a1, float *a2, __int64 a3)
{
  bool result; // al

  result = a2[2] <= *a2 || a2[3] <= a2[1];
  *(_BYTE *)(a3 + 12) = result;
  *(float *)(a3 + 8) = (float)(a2[2] - *a2) * (float)(a2[3] - a2[1]);
  *(float *)a3 = (float)((float)(a2[2] - *a2) * 0.5) + *a2;
  *(float *)(a3 + 4) = (float)((float)(a2[3] - a2[1]) * 0.5) + a2[1];
  return result;
}
