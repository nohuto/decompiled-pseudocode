/*
 * XREFs of ?GetBounds@CHwTextureRenderTarget@@UEAAXPEAUMilRectF@@@Z @ 0x1800C18F0
 * Callers:
 *     ?GetBounds@CHwTextureRenderTarget@@WMA@EAAXPEAUMilRectF@@@Z @ 0x1800C6960 (-GetBounds@CHwTextureRenderTarget@@WMA@EAAXPEAUMilRectF@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CHwTextureRenderTarget::GetBounds(CHwTextureRenderTarget *this, struct MilRectF *a2)
{
  *(_DWORD *)a2 = 0;
  *((_DWORD *)a2 + 1) = 0;
  *((float *)a2 + 2) = (float)*((int *)this + 2);
  *((float *)a2 + 3) = (float)*((int *)this + 3);
}
