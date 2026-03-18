/*
 * XREFs of ??0CCachedVisualImage@@IEAA@PEAVCComposition@@@Z @ 0x1800B5094
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002BD94 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ?EnsureCachedVisualImage@CHwndBitmap@@AEAAJXZ @ 0x1801903A4 (-EnsureCachedVisualImage@CHwndBitmap@@AEAAJXZ.c)
 *     ?CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z @ 0x1801A3CF0 (-CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ??0?$DynArrayImpl@$00@@IEAA@PEAXIII@Z @ 0x1800CD200 (--0-$DynArrayImpl@$00@@IEAA@PEAXIII@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800CD620 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 */

CCachedVisualImage *__fastcall CCachedVisualImage::CCachedVisualImage(
        CCachedVisualImage *this,
        struct CComposition *a2)
{
  char *v3; // rcx
  CInputSinkStruct::InputQueueInfo *v4; // rbx
  CCachedVisualImage *result; // rax

  *((_QWORD *)this + 1) = &IBitmapResource::`vftable';
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 4) = a2;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 12) = 0;
  v3 = (char *)this + 240;
  *((_DWORD *)this + 24) = 2;
  *((_QWORD *)this + 10) = (char *)this + 112;
  v4 = (CInputSinkStruct::InputQueueInfo *)(v3 + 32);
  *((_QWORD *)this + 11) = (char *)this + 112;
  *(_QWORD *)((char *)this + 100) = 2LL;
  *(_QWORD *)this = &CCachedVisualImage::`vftable'{for `IPixelFormat'};
  *((_QWORD *)this + 1) = &CCachedVisualImage::`vftable'{for `IImageSource'};
  *((_QWORD *)this + 2) = &CCachedVisualImage::`vftable'{for `CContent'};
  *((_QWORD *)this + 9) = &CCachedVisualImage::`vftable'{for `CDeviceResource'};
  *((_QWORD *)this + 16) = &CCachedVisualImage::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 17) = &CCachedVisualImage::`vftable'{for `IBitmapRealization'};
  DynArrayImpl<1>::DynArrayImpl<1>(v3, v3 + 32, 2LL);
  `vector constructor iterator'(
    v4,
    0x30uLL,
    2uLL,
    (void *(*)(void *))Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal);
  result = this;
  *((_DWORD *)this + 56) = 2;
  return result;
}
