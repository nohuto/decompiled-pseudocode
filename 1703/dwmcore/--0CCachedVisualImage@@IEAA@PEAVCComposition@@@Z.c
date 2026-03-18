/*
 * XREFs of ??0CCachedVisualImage@@IEAA@PEAVCComposition@@@Z @ 0x18004876C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18005A0F8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ?EnsureCachedVisualImage@CHwndBitmap@@AEAAJXZ @ 0x180164784 (-EnsureCachedVisualImage@CHwndBitmap@@AEAAJXZ.c)
 *     ?CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z @ 0x180164F10 (-CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ??0?$DynArrayIA@URenderTargetBitmapInfo@CCachedVisualImage@@$01$00@@QEAA@XZ @ 0x1800B2720 (--0-$DynArrayIA@URenderTargetBitmapInfo@CCachedVisualImage@@$01$00@@QEAA@XZ.c)
 */

CCachedVisualImage *__fastcall CCachedVisualImage::CCachedVisualImage(
        CCachedVisualImage *this,
        struct CComposition *a2)
{
  *((_QWORD *)this + 1) = &IImageSource::`vftable';
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 2) = &CResource::`vftable';
  *((_QWORD *)this + 4) = a2;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 12) = 0;
  *(_QWORD *)this = &CCachedVisualImage::`vftable'{for `IPixelFormat'};
  *((_QWORD *)this + 1) = &CCachedVisualImage::`vftable'{for `IImageSource'};
  *((_QWORD *)this + 2) = &CCachedVisualImage::`vftable'{for `CContent'};
  *((_QWORD *)this + 9) = &CCachedVisualImage::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 10) = &CCachedVisualImage::`vftable'{for `IBitmapRealization'};
  DynArrayIA<CCachedVisualImage::RenderTargetBitmapInfo,2,1>::DynArrayIA<CCachedVisualImage::RenderTargetBitmapInfo,2,1>((char *)this + 184);
  if ( g_LockTilingTarget )
  {
    *((_DWORD *)this + 85) = 1065353216;
    *((_DWORD *)this + 82) = 1065353216;
    *((_DWORD *)this + 84) = 1065353216;
  }
  *((_DWORD *)this + 42) = 2;
  return this;
}
