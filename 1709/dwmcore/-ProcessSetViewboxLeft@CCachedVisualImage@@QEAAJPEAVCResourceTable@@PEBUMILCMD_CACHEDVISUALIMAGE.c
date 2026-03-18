/*
 * XREFs of ?ProcessSetViewboxLeft@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CACHEDVISUALIMAGE_SETVIEWBOXLEFT@@@Z @ 0x18015965C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetViewboxLeft@CCachedVisualImage@@AEAAJM@Z @ 0x180159ABC (-SetViewboxLeft@CCachedVisualImage@@AEAAJM@Z.c)
 */

__int64 __fastcall CCachedVisualImage::ProcessSetViewboxLeft(
        CCachedVisualImage *this,
        struct CResourceTable *a2,
        const struct MILCMD_CACHEDVISUALIMAGE_SETVIEWBOXLEFT *a3)
{
  signed int v3; // eax
  unsigned int v4; // ebx

  v3 = CCachedVisualImage::SetViewboxLeft(this, *((float *)a3 + 2));
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0xCBu);
  return v4;
}
