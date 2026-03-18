/*
 * XREFs of ?ProcessSetViewboxBottom@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CACHEDVISUALIMAGE_SETVIEWBOXBOTTOM@@@Z @ 0x180159624
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetViewboxBottom@CCachedVisualImage@@AEAAJM@Z @ 0x180159A78 (-SetViewboxBottom@CCachedVisualImage@@AEAAJM@Z.c)
 */

__int64 __fastcall CCachedVisualImage::ProcessSetViewboxBottom(
        CCachedVisualImage *this,
        struct CResourceTable *a2,
        const struct MILCMD_CACHEDVISUALIMAGE_SETVIEWBOXBOTTOM *a3)
{
  signed int v3; // eax
  unsigned int v4; // ebx

  v3 = CCachedVisualImage::SetViewboxBottom(this, *((float *)a3 + 2));
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0x110u);
  return v4;
}
