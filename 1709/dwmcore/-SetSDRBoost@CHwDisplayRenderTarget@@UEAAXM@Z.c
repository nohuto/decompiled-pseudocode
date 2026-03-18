/*
 * XREFs of ?SetSDRBoost@CHwDisplayRenderTarget@@UEAAXM@Z @ 0x1800C1950
 * Callers:
 *     ?SetSDRBoost@CHwDisplayRenderTarget@@WMA@EAAXM@Z @ 0x1800C6D50 (-SetSDRBoost@CHwDisplayRenderTarget@@WMA@EAAXM@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CHwDisplayRenderTarget::SetSDRBoost(CHwDisplayRenderTarget *this, float a2)
{
  *((float *)this + 45) = a2;
}
