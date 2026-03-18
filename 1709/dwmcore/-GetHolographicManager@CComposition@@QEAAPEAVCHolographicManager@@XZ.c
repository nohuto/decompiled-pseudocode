/*
 * XREFs of ?GetHolographicManager@CComposition@@QEAAPEAVCHolographicManager@@XZ @ 0x180128048
 * Callers:
 *     ??0CHolographicComposition@@IEAA@PEAVCComposition@@@Z @ 0x1801BCE8C (--0CHolographicComposition@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CHolographicDisplay@@IEAA@PEAVCComposition@@@Z @ 0x1801BCFAC (--0CHolographicDisplay@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CHolographicExclusiveMode@@IEAA@PEAVCComposition@@@Z @ 0x1801BD4E4 (--0CHolographicExclusiveMode@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CHolographicExclusiveView@@AEAA@PEAVCComposition@@@Z @ 0x1801BD59C (--0CHolographicExclusiveView@@AEAA@PEAVCComposition@@@Z.c)
 *     ?ProcessCreate@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICINTEROPTEXTURE_CREATE@@@Z @ 0x1801BEB4C (-ProcessCreate@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICINTERO.c)
 *     ?Initialize@CHolographicInteropTarget@@QEAAJPEAU_LUID@@@Z @ 0x1801C17E8 (-Initialize@CHolographicInteropTarget@@QEAAJPEAU_LUID@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Create@CHolographicManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1801BFF6C (-Create@CHolographicManager@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 */

struct CHolographicManager *__fastcall CComposition::GetHolographicManager(struct CHolographicManager **this)
{
  char *v1; // rbx
  signed int v2; // eax

  v1 = (char *)(this + 16);
  if ( !this[16] )
  {
    v2 = CHolographicManager::Create((struct CComposition *)this, this + 16);
    if ( v2 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v2, 0x1067u);
  }
  return *(struct CHolographicManager **)v1;
}
