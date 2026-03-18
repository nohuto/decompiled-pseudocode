/*
 * XREFs of ?InternalRelease@?$ComPtr@$$CBVCDisplaySet@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B6984
 * Callers:
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilStretch@@@Z @ 0x1800B622C (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilSt.c)
 *     ?IsSameLuidAndDisplayId@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NU_LUID@@VDisplayId@@@Z @ 0x1800B6694 (-IsSameLuidAndDisplayId@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NU_LUID@@VDisplayId@@@Z.c)
 * Callees:
 *     ?Release@CDisplaySet@@QEBAKXZ @ 0x1800B6AE8 (-Release@CDisplaySet@@QEBAKXZ.c)
 */

unsigned int __fastcall Microsoft::WRL::ComPtr<CDisplaySet const>::InternalRelease(CDisplaySet **a1)
{
  CDisplaySet *v1; // rdx
  unsigned int result; // eax

  v1 = *a1;
  result = 0;
  if ( *a1 )
  {
    *a1 = 0LL;
    return CDisplaySet::Release(v1);
  }
  return result;
}
