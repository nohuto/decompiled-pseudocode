/*
 * XREFs of ?DrawSolidRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x180170880
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CollectRectangleForOcclusion@COcclusionContext@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAV2@@Z @ 0x1800A90A0 (-CollectRectangleForOcclusion@COcclusionContext@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSi.c)
 */

__int64 __fastcall COcclusionContext::DrawSolidRectangle(__int64 a1, const struct D2D_RECT_F *a2, __int64 a3)
{
  unsigned int v3; // ebx
  int v4; // eax

  v3 = 0;
  if ( !*(_DWORD *)(a1 + 1036) && *(float *)(a3 + 12) == 1.0 )
  {
    v4 = COcclusionContext::CollectRectangleForOcclusion(a1, a2, 0, 0LL);
    v3 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x42Cu);
  }
  return v3;
}
