/*
 * XREFs of ?DetachFromChannel@COffScreenRenderTarget@@UEAAXPEAVCChannelContext@@_N@Z @ 0x18000D6D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall COffScreenRenderTarget::DetachFromChannel(COffScreenRenderTarget *this, struct CChannelContext *a2)
{
  CRenderTargetManager::RemoveRenderTarget(*(CRenderTargetManager **)(*((_QWORD *)this + 2) + 72LL), this);
}
