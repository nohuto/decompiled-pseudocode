/*
 * XREFs of ?NeedsPresentFollowUp@CIndirectSwapchainRenderTarget@@UEAA_NXZ @ 0x1800CC500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CIndirectSwapchainRenderTarget::NeedsPresentFollowUp(CIndirectSwapchainRenderTarget *this)
{
  return (*((_BYTE *)this + 456) & 8) != 0;
}
