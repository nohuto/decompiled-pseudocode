/*
 * XREFs of ??0CGdiSpriteBitmap@@IEAA@PEAVCComposition@@@Z @ 0x180055A58
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18005A0F8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CGdiSpriteBitmap *__fastcall CGdiSpriteBitmap::CGdiSpriteBitmap(CGdiSpriteBitmap *this, struct CComposition *a2)
{
  CGdiSpriteBitmap *result; // rax

  *((_QWORD *)this + 4) = a2;
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 12) = 0;
  *(_QWORD *)this = &CGdiSpriteBitmap::`vftable'{for `IPixelFormat'};
  *((_QWORD *)this + 1) = &CGdiSpriteBitmap::`vftable'{for `IImageSource'};
  *((_QWORD *)this + 2) = &CGdiSpriteBitmap::`vftable'{for `CContent'};
  *((_QWORD *)this + 11) = &CGdiSpriteBitmap::`vftable'{for `ISpriteImage'};
  *((_QWORD *)this + 12) = &CGdiSpriteBitmap::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 25) = (char *)this + 232;
  *((_QWORD *)this + 26) = (char *)this + 232;
  *((_DWORD *)this + 54) = 1;
  *(_QWORD *)((char *)this + 220) = 1LL;
  *((_QWORD *)this + 30) = (char *)this + 248;
  *((_DWORD *)this + 62) = 0;
  *((_QWORD *)this + 39) = &CRegionShape::`vftable';
  result = this;
  *((_QWORD *)this + 40) = 0LL;
  *((_DWORD *)this + 30) = 87;
  *((_DWORD *)this + 32) = 0;
  return result;
}
