/*
 * XREFs of ??0CCompressedSourceBitmap@@IEAA@PEAUIWICImagingFactory@@W4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@@Z @ 0x1801AA3F8
 * Callers:
 *     ?Create@CCompressedSourceBitmap@@SAJPEAUIWICImagingFactory@@PEBXKNNW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAVIBitmapSource@@@Z @ 0x1801AA670 (-Create@CCompressedSourceBitmap@@SAJPEAUIWICImagingFactory@@PEBXKNNW4DXGI_FORMAT@@W4DXGI_ALPHA_M.c)
 * Callees:
 *     ??0CBitmap@@QEAA@XZ @ 0x1800564D8 (--0CBitmap@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

CCompressedSourceBitmap *__fastcall CCompressedSourceBitmap::CCompressedSourceBitmap(
        CCompressedSourceBitmap *this,
        struct IWICImagingFactory *a2,
        enum DXGI_FORMAT a3,
        enum DXGI_ALPHA_MODE a4)
{
  CCompressedSourceBitmap *result; // rax

  CBitmap::CBitmap(this);
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_DWORD *)this + 66) = 0;
  *(_QWORD *)this = &CCompressedSourceBitmap::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CCompressedSourceBitmap::`vftable'{for `IBitmapSource'};
  *((_QWORD *)this + 3) = &CCompressedSourceBitmap::`vftable'{for `IBitmapDest'};
  *((_QWORD *)this + 4) = &CCompressedSourceBitmap::`vftable'{for `IBitmapUnlock'};
  *((_QWORD *)this + 5) = &CCompressedSourceBitmap::`vftable'{for `IWICBitmap'};
  *((_QWORD *)this + 6) = &CCompressedSourceBitmap::`vftable'{for `CMILResourceCache'};
  *((_QWORD *)this + 28) = &CCompressedSourceBitmap::`vftable'{for `IBitmapCompressedPixels'};
  *((_QWORD *)this + 29) = &CCompressedSourceBitmap::`vftable'{for `IWICDecoderBitmapSource'};
  *((_QWORD *)this + 34) = a2;
  if ( a2 )
    ((void (__fastcall *)(struct IWICImagingFactory *))a2->lpVtbl->AddRef)(a2);
  *((_DWORD *)this + 48) = 0;
  result = this;
  *((_DWORD *)this + 46) = 87;
  *((_DWORD *)this + 47) = 1;
  return result;
}
