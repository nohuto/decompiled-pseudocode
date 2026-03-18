/*
 * XREFs of ?ProcessCreate@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_CREATE@@@Z @ 0x18012D750
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x18007C0CC (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1800C69E0 (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?Reset@CFlipChain@@IEAAXXZ @ 0x180163F9C (-Reset@CFlipChain@@IEAAXXZ.c)
 */

__int64 __fastcall CFlipChain::ProcessCreate(
        enum DXGI_COLOR_SPACE_TYPE *this,
        struct CResourceTable *a2,
        const struct MILCMD_FLIPCHAIN_CREATE *a3)
{
  int v5; // ecx
  int v6; // ecx
  int PixelFormatColorSpace; // eax
  unsigned int v8; // ebx

  CFlipChain::Reset((CFlipChain *)this);
  this[18] = *((enum DXGI_COLOR_SPACE_TYPE *)a3 + 2);
  this[19] = *((enum DXGI_COLOR_SPACE_TYPE *)a3 + 3);
  v5 = *((_DWORD *)a3 + 4);
  *((_DWORD *)this + 71) = v5;
  *((_DWORD *)this + 72) = (unsigned int)HasAlphaChannel(v5) != 0 ? 1 : 3;
  PixelFormatColorSpace = GetPixelFormatColorSpace(v6, this + 73);
  v8 = PixelFormatColorSpace;
  if ( PixelFormatColorSpace < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, PixelFormatColorSpace, 0xF6u);
  return v8;
}
