/*
 * XREFs of ?MakeDesktopBackgroundFactory@@YA?AV?$com_ptr_t@UIThumbnailFactory@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@PEAUIThumbnailDeviceInternal@@UtagRECT@@@Z @ 0x180169220
 * Callers:
 *     ?CreateDesktopBackgroundThumbnailFactory@ThumbnailInteropDevice@@UEAAJUtagRECT@@AEBU_GUID@@PEAPEAX@Z @ 0x180166AA0 (-CreateDesktopBackgroundThumbnailFactory@ThumbnailInteropDevice@@UEAAJUtagRECT@@AEBU_GUID@@PEAPE.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VThumbnailInteropFactoryBase@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180167F20 (-Release@-$RuntimeClass@U-$InterfaceList@VThumbnailInteropFactoryBase@@VNil@Details@WRL@Microsof.c)
 *     ??$com_query@UIThumbnailFactory@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@AEAV?$ComPtr@VDesktopBackgroundFactory@@@WRL@Microsoft@@@wil@@YA?AV?$com_ptr_t@UIThumbnailFactory@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@Uerr_exception_policy@wil@@@0@AEAV?$ComPtr@VDesktopBackgroundFactory@@@WRL@Microsoft@@@Z @ 0x180168494 (--$com_query@UIThumbnailFactory@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@.c)
 *     ??$MakeOrThrow@VDesktopBackgroundFactory@@AEAPEAUIThumbnailDeviceInternal@@AEAUtagRECT@@@wil@@YA?AV?$ComPtr@VDesktopBackgroundFactory@@@WRL@Microsoft@@AEAPEAUIThumbnailDeviceInternal@@AEAUtagRECT@@@Z @ 0x180169410 (--$MakeOrThrow@VDesktopBackgroundFactory@@AEAPEAUIThumbnailDeviceInternal@@AEAUtagRECT@@@wil@@YA.c)
 */

// Hidden C++ exception states: #wind=1
volatile signed __int64 *__fastcall MakeDesktopBackgroundFactory(volatile signed __int64 *a1, __int64 a2)
{
  volatile signed __int64 *v3; // rcx
  volatile signed __int64 *v5; // [rsp+40h] [rbp+8h] BYREF
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = a2;
  v5 = a1;
  wil::MakeOrThrow<DesktopBackgroundFactory,IThumbnailDeviceInternal * &,tagRECT &>(&v5, &v6);
  wil::com_query<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::IThumbnailFactory,Microsoft::WRL::ComPtr<DesktopBackgroundFactory> &>(
    a1,
    (__int64 *)&v5);
  v3 = v5;
  if ( v5 )
  {
    v5 = 0LL;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ThumbnailInteropFactoryBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(v3);
  }
  return a1;
}
