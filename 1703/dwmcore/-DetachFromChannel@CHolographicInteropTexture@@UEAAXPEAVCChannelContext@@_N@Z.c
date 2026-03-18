/*
 * XREFs of ?DetachFromChannel@CHolographicInteropTexture@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1801A3A90
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseVisualTree@CHolographicInteropTexture@@AEAAXXZ @ 0x1801A428C (-ReleaseVisualTree@CHolographicInteropTexture@@AEAAXXZ.c)
 *     ?RemoveInteropTexture@CHolographicManager@@QEAAXPEAVCHolographicInteropTexture@@@Z @ 0x1801A6478 (-RemoveInteropTexture@CHolographicManager@@QEAAXPEAVCHolographicInteropTexture@@@Z.c)
 */

void __fastcall CHolographicInteropTexture::DetachFromChannel(CHolographicManager **this, struct CChannelContext *a2)
{
  CHolographicManager::RemoveInteropTexture(this[9], (struct CHolographicInteropTexture *)this);
  CHolographicInteropTexture::ReleaseVisualTree((CHolographicInteropTexture *)this);
  CHolographicInteropTexture::ReleaseResources((CHolographicInteropTexture *)this);
}
