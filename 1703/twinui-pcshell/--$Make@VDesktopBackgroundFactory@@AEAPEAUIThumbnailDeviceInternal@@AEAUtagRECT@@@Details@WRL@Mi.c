/*
 * XREFs of ??$Make@VDesktopBackgroundFactory@@AEAPEAUIThumbnailDeviceInternal@@AEAUtagRECT@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VDesktopBackgroundFactory@@@12@AEAPEAUIThumbnailDeviceInternal@@AEAUtagRECT@@@Z @ 0x180169460
 * Callers:
 *     ??$MakeOrThrow@VDesktopBackgroundFactory@@AEAPEAUIThumbnailDeviceInternal@@AEAUtagRECT@@@wil@@YA?AV?$ComPtr@VDesktopBackgroundFactory@@@WRL@Microsoft@@AEAPEAUIThumbnailDeviceInternal@@AEAUtagRECT@@@Z @ 0x180169410 (--$MakeOrThrow@VDesktopBackgroundFactory@@AEAPEAUIThumbnailDeviceInternal@@AEAUtagRECT@@@wil@@YA.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VThumbnailInteropFactoryBase@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180167F20 (-Release@-$RuntimeClass@U-$InterfaceList@VThumbnailInteropFactoryBase@@VNil@Details@WRL@Microsof.c)
 *     ??0DesktopBackgroundFactory@@QEAA@PEAUIThumbnailDeviceInternal@@UtagRECT@@@Z @ 0x180168E30 (--0DesktopBackgroundFactory@@QEAA@PEAUIThumbnailDeviceInternal@@UtagRECT@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
volatile signed __int64 **__fastcall Microsoft::WRL::Details::Make<DesktopBackgroundFactory,IThumbnailDeviceInternal * &,tagRECT &>(
        volatile signed __int64 **a1,
        struct IThumbnailDeviceInternal **a2,
        struct tagRECT *a3)
{
  DesktopBackgroundFactory *v6; // rax
  DesktopBackgroundFactory *v7; // rdi
  struct tagRECT v9; // [rsp+40h] [rbp-18h] BYREF

  *a1 = 0LL;
  v6 = (DesktopBackgroundFactory *)operator new(0x98uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v9 = *a3;
    v7 = DesktopBackgroundFactory::DesktopBackgroundFactory(v6, *a2, &v9);
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ThumbnailInteropFactoryBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(*a1);
    *a1 = (volatile signed __int64 *)v7;
  }
  return a1;
}
