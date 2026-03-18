/*
 * XREFs of ??0CCachedVisualImage@@IEAA@PEAVCComposition@@@Z @ 0x18008ED34
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800930B8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ?EnsureCachedVisualImage@CHwndBitmap@@AEAAJXZ @ 0x180167918 (-EnsureCachedVisualImage@CHwndBitmap@@AEAAJXZ.c)
 *     ?CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z @ 0x180175E30 (-CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ??0?$DynArrayIA@URenderTargetBitmapInfo@CCachedVisualImage@@$01$00@@QEAA@XZ @ 0x18007E4BC (--0-$DynArrayIA@URenderTargetBitmapInfo@CCachedVisualImage@@$01$00@@QEAA@XZ.c)
 */

CCachedVisualImage *__fastcall CCachedVisualImage::CCachedVisualImage(
        CCachedVisualImage *this,
        struct CComposition *a2)
{
  *((_QWORD *)this + 1) = &IBitmapResource::`vftable';
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 2) = &CResource::`vftable';
  *((_QWORD *)this + 4) = a2;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 26) = 0;
  *((_QWORD *)this + 10) = (char *)this + 112;
  *((_QWORD *)this + 11) = (char *)this + 112;
  *((_DWORD *)this + 24) = 2;
  *((_DWORD *)this + 25) = 2;
  *(_QWORD *)this = &CCachedVisualImage::`vftable'{for `IPixelFormat'};
  *((_QWORD *)this + 1) = &CCachedVisualImage::`vftable'{for `IImageSource'};
  *((_QWORD *)this + 2) = &CCachedVisualImage::`vftable'{for `CContent'};
  *((_QWORD *)this + 9) = &CCachedVisualImage::`vftable'{for `CDeviceResource'};
  *((_QWORD *)this + 16) = &CCachedVisualImage::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 17) = &CCachedVisualImage::`vftable'{for `IBitmapRealization'};
  DynArrayIA<CCachedVisualImage::RenderTargetBitmapInfo,2,1>::DynArrayIA<CCachedVisualImage::RenderTargetBitmapInfo,2,1>((__int64)this + 240);
  if ( g_LockTilingTarget )
  {
    *((_DWORD *)this + 99) = 1065353216;
    *((_DWORD *)this + 96) = 1065353216;
    *((_DWORD *)this + 98) = 1065353216;
  }
  *((_DWORD *)this + 56) = 2;
  return this;
}
