/*
 * XREFs of ?Create@CCompressedSourceBitmap@@SAJPEAUIWICImagingFactory@@PEBXKNNW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAVIBitmapSource@@@Z @ 0x1801AA670
 * Callers:
 *     ?ProcessCompressedPixels@CBitmapResource@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BITMAP_COMPRESSEDPIXELS@@PEBXI@Z @ 0x18015FEF0 (-ProcessCompressedPixels@CBitmapResource@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BITMAP_COMPRESSEDP.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180036B40 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180048FE4 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 *     ?SetResolution@CBitmap@@UEAAJNN@Z @ 0x1801A9BF0 (-SetResolution@CBitmap@@UEAAJNN@Z.c)
 *     ??0CCompressedSourceBitmap@@IEAA@PEAUIWICImagingFactory@@W4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@@Z @ 0x1801AA3F8 (--0CCompressedSourceBitmap@@IEAA@PEAUIWICImagingFactory@@W4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@@Z.c)
 *     ?HrInitFromCompressedBytes@CCompressedSourceBitmap@@IEAAJPEBXK@Z @ 0x1801AACBC (-HrInitFromCompressedBytes@CCompressedSourceBitmap@@IEAAJPEBXK@Z.c)
 */

__int64 __fastcall CCompressedSourceBitmap::Create(
        struct IWICImagingFactory *a1,
        const void *a2,
        unsigned int a3,
        double a4,
        double a5,
        enum DXGI_FORMAT a6,
        enum DXGI_ALPHA_MODE a7,
        struct IBitmapSource **a8)
{
  CCompressedSourceBitmap *v11; // rax
  enum DXGI_FORMAT v12; // r8d
  enum DXGI_ALPHA_MODE v13; // r9d
  CBitmapOfDeviceBitmaps *v14; // rax
  CBitmapOfDeviceBitmaps *v15; // rdi
  unsigned int v16; // ebx
  int v17; // eax
  int v18; // eax
  void *retaddr; // [rsp+48h] [rbp+0h]

  *a8 = 0LL;
  v11 = (CCompressedSourceBitmap *)HeapAlloc(WPF::g_processHeap, 0, 0x118uLL);
  if ( !v11 )
  {
    ModuleFailFastForHRESULT(-2147024882, retaddr);
    __debugbreak();
  }
  v14 = CCompressedSourceBitmap::CCompressedSourceBitmap(v11, a1, v12, v13);
  v15 = v14;
  if ( v14 )
  {
    CBitmapOfDeviceBitmaps::AddRef(v14);
    v17 = CCompressedSourceBitmap::HrInitFromCompressedBytes(v15, a2, a3);
    v16 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x25u);
    }
    else
    {
      v18 = CBitmap::SetResolution((CBitmapOfDeviceBitmaps *)((char *)v15 + 24), a4, a5);
      v16 = v18;
      if ( v18 >= 0 )
      {
        *a8 = (CBitmapOfDeviceBitmaps *)((char *)v15 + 16);
        return v16;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x27u);
    }
    CMILCOMBase::InternalRelease(v15);
    return v16;
  }
  v16 = -2147024882;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x22u);
  return v16;
}
