/*
 * XREFs of ?GetHolographicManager@CComposition@@QEAAPEAVCHolographicManager@@XZ @ 0x18013F660
 * Callers:
 *     ?ProcessCreate@CHolographicViewerContent@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICVIEWERCONTENT_CREATE@@@Z @ 0x18012EA24 (-ProcessCreate@CHolographicViewerContent@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICVIEWERC.c)
 *     ?ProcessCreate@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICINTEROPTEXTURE_CREATE@@@Z @ 0x18012FF84 (-ProcessCreate@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICINTERO.c)
 *     ??0CHolographicDisplay@@IEAA@PEAVCComposition@@@Z @ 0x1801A4504 (--0CHolographicDisplay@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CHolographicExclusiveMode@@IEAA@PEAVCComposition@@@Z @ 0x1801A4784 (--0CHolographicExclusiveMode@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CHolographicExclusiveView@@AEAA@PEAVCComposition@@@Z @ 0x1801A483C (--0CHolographicExclusiveView@@AEAA@PEAVCComposition@@@Z.c)
 *     ?CreateRenderTarget@CHolographicViewerContent@@AEAAJPEAUIDXGIResource@@@Z @ 0x1801A5064 (-CreateRenderTarget@CHolographicViewerContent@@AEAAJPEAUIDXGIResource@@@Z.c)
 *     ?DetachFromChannel@CHolographicViewerContent@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1801A5180 (-DetachFromChannel@CHolographicViewerContent@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?Initialize@CHolographicInteropTarget@@QEAAJPEAU_LUID@@@Z @ 0x1801A6868 (-Initialize@CHolographicInteropTarget@@QEAAJPEAU_LUID@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CHolographicManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1801A5E40 (-Create@CHolographicManager@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 */

struct CHolographicManager *__fastcall CComposition::GetHolographicManager(struct CHolographicManager **this)
{
  char *v1; // rbx
  int v2; // eax

  v1 = (char *)(this + 19);
  if ( !this[19] )
  {
    v2 = CHolographicManager::Create((struct CComposition *)this, this + 19);
    if ( v2 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x11B7u);
  }
  return *(struct CHolographicManager **)v1;
}
