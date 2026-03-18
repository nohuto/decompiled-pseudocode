/*
 * XREFs of ?NotifyRenderedRect@CHwTextureRenderTarget@@WNI@EAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800DE0D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwTextureRenderTarget::NotifyRenderedRect(
        __int64 a1,
        struct COcclusionContext *a2,
        const struct D2D_SIZE_F *a3)
{
  return CGenericInk::AddOcclusionInformation((CGenericInk *)(a1 - 216), a2, a3);
}
