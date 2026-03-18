/*
 * XREFs of ?DetachFromChannel@CHolographicInteropTexture@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1801FAD40
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveInteropTexture@CHolographicManager@@QEAAXPEAVCHolographicInteropTexture@@@Z @ 0x1801F918C (-RemoveInteropTexture@CHolographicManager@@QEAAXPEAVCHolographicInteropTexture@@@Z.c)
 *     ?ReleaseVisualTree@CHolographicInteropTexture@@AEAAXXZ @ 0x1801FBAF8 (-ReleaseVisualTree@CHolographicInteropTexture@@AEAAXXZ.c)
 */

void __fastcall CHolographicInteropTexture::DetachFromChannel(
        CHolographicInteropTexture *this,
        struct CChannelContext *a2)
{
  CHolographicManager *v3; // rcx

  v3 = (CHolographicManager *)*((_QWORD *)this + 9);
  if ( v3 )
    CHolographicManager::RemoveInteropTexture(v3, this);
  CHolographicInteropTexture::ReleaseVisualTree(this);
  CHolographicInteropTexture::ReleaseResources(this);
}
