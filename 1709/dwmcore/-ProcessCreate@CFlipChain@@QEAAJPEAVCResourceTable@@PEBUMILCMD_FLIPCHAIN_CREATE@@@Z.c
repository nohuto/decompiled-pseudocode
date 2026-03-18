/*
 * XREFs of ?ProcessCreate@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_CREATE@@@Z @ 0x1801657FC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1800823B4 (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x1800823E4 (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?Reset@CFlipChain@@IEAAXXZ @ 0x180165C70 (-Reset@CFlipChain@@IEAAXXZ.c)
 */

__int64 __fastcall CFlipChain::ProcessCreate(
        enum DXGI_COLOR_SPACE_TYPE *this,
        struct CResourceTable *a2,
        const struct MILCMD_FLIPCHAIN_CREATE *a3)
{
  int v5; // ecx
  int v6; // ecx
  signed int PixelFormatColorSpace; // eax
  unsigned int v8; // ebx

  CFlipChain::Reset((CFlipChain *)this);
  this[18] = *((enum DXGI_COLOR_SPACE_TYPE *)a3 + 2);
  this[19] = *((enum DXGI_COLOR_SPACE_TYPE *)a3 + 3);
  v5 = *((_DWORD *)a3 + 4);
  *((_DWORD *)this + 73) = v5;
  *((_DWORD *)this + 74) = (unsigned int)HasAlphaChannel(v5) != 0 ? 1 : 3;
  PixelFormatColorSpace = GetPixelFormatColorSpace(v6, this + 75);
  v8 = PixelFormatColorSpace;
  if ( PixelFormatColorSpace < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, PixelFormatColorSpace, 0xF6u);
  return v8;
}
