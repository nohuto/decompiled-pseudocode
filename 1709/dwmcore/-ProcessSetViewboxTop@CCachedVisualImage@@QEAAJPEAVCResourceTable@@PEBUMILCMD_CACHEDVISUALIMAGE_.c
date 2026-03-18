/*
 * XREFs of ?ProcessSetViewboxTop@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CACHEDVISUALIMAGE_SETVIEWBOXTOP@@@Z @ 0x1801596CC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetViewboxTop@CCachedVisualImage@@AEAAJM@Z @ 0x180159B44 (-SetViewboxTop@CCachedVisualImage@@AEAAJM@Z.c)
 */

__int64 __fastcall CCachedVisualImage::ProcessSetViewboxTop(
        CCachedVisualImage *this,
        struct CResourceTable *a2,
        const struct MILCMD_CACHEDVISUALIMAGE_SETVIEWBOXTOP *a3)
{
  signed int v3; // eax
  unsigned int v4; // ebx

  v3 = CCachedVisualImage::SetViewboxTop(this, *((float *)a3 + 2));
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0xE2u);
  return v4;
}
