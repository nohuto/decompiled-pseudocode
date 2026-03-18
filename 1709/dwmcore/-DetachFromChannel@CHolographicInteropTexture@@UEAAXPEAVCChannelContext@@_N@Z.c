/*
 * XREFs of ?DetachFromChannel@CHolographicInteropTexture@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1801BE440
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseVisualTree@CHolographicInteropTexture@@AEAAXXZ @ 0x1801BEDF4 (-ReleaseVisualTree@CHolographicInteropTexture@@AEAAXXZ.c)
 *     ?RemoveInteropTexture@CHolographicManager@@QEAAXPEAVCHolographicInteropTexture@@@Z @ 0x1801C0FB8 (-RemoveInteropTexture@CHolographicManager@@QEAAXPEAVCHolographicInteropTexture@@@Z.c)
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
