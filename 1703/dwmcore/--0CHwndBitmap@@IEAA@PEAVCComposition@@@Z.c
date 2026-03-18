/*
 * XREFs of ??0CHwndBitmap@@IEAA@PEAVCComposition@@@Z @ 0x180020368
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18005A0F8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CCommandListBitmapRepresentation@@IEAA@XZ @ 0x1800C2C30 (--0CCommandListBitmapRepresentation@@IEAA@XZ.c)
 */

CHwndBitmap *__fastcall CHwndBitmap::CHwndBitmap(CHwndBitmap *this, struct CComposition *a2)
{
  CHwndBitmap *result; // rax

  *((_QWORD *)this + 1) = &IImageSource::`vftable';
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 4) = a2;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  CCommandListBitmapRepresentation::CCommandListBitmapRepresentation((CHwndBitmap *)((char *)this + 88));
  *(_QWORD *)this = &CHwndBitmap::`vftable'{for `IPixelFormat'};
  *((_QWORD *)this + 1) = &CHwndBitmap::`vftable'{for `IImageSource'};
  *((_QWORD *)this + 2) = &CHwndBitmap::`vftable'{for `CContent'};
  *((_QWORD *)this + 11) = &CHwndBitmap::`vftable';
  result = this;
  *((_BYTE *)this + 488) = 1;
  return result;
}
