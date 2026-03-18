/*
 * XREFs of ?NeedsPresentFollowUp@CIndirectSwapchainRenderTarget@@UEAA_NXZ @ 0x1800C11F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CIndirectSwapchainRenderTarget::NeedsPresentFollowUp(CIndirectSwapchainRenderTarget *this)
{
  return (*((_BYTE *)this + 456) & 8) != 0;
}
