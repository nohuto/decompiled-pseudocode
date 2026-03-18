/*
 * XREFs of ?ProcessSetViewboxLeft@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CACHEDVISUALIMAGE_SETVIEWBOXLEFT@@@Z @ 0x18012DAAC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetViewboxLeft@CCachedVisualImage@@AEAAJM@Z @ 0x180165C98 (-SetViewboxLeft@CCachedVisualImage@@AEAAJM@Z.c)
 */

__int64 __fastcall CCachedVisualImage::ProcessSetViewboxLeft(
        CCachedVisualImage *this,
        struct CResourceTable *a2,
        const struct MILCMD_CACHEDVISUALIMAGE_SETVIEWBOXLEFT *a3)
{
  int v3; // eax
  unsigned int v4; // ebx

  v3 = CCachedVisualImage::SetViewboxLeft(this, *((float *)a3 + 2));
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xC8u);
  return v4;
}
