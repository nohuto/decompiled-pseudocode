/*
 * XREFs of ?ProcessSetRoot@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICINTEROPTEXTURE_SETROOT@@@Z @ 0x1801BECB4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800AA2B0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SetRootVisual@CHolographicInteropTexture@@AEAAJPEAVCVisual@@@Z @ 0x1801BEE88 (-SetRootVisual@CHolographicInteropTexture@@AEAAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CHolographicInteropTexture::ProcessSetRoot(
        CHolographicInteropTexture *this,
        struct CResourceTable *a2,
        const struct MILCMD_HOLOGRAPHICINTEROPTEXTURE_SETROOT *a3)
{
  unsigned int v4; // ebx
  unsigned int v5; // edx
  struct CVisual *Resource; // rax
  signed int v8; // eax

  v4 = 0;
  v5 = *((_DWORD *)a3 + 2);
  if ( v5 )
  {
    Resource = (struct CVisual *)CResourceTable::GetResource((__int64)a2, v5, 0x86u);
    if ( Resource )
    {
      v8 = CHolographicInteropTexture::SetRootVisual(this, Resource);
      v4 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0xA8u);
    }
    else
    {
      v4 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x88980403, 0xA5u);
    }
  }
  return v4;
}
