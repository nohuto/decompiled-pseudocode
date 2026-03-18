/*
 * XREFs of ?DeleteComposeTopContent@CDesktopRenderTarget@@UEAAXXZ @ 0x1800440C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDesktopRenderTarget::DeleteComposeTopContent(CDesktopRenderTarget *this)
{
  SAFE_DELETE<CComposeTop>((char *)this + 152);
}
