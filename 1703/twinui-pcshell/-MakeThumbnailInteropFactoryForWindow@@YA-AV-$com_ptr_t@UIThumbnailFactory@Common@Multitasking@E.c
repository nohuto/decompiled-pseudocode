/*
 * XREFs of ?MakeThumbnailInteropFactoryForWindow@@YA?AV?$com_ptr_t@UIThumbnailFactory@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@PEAUIThumbnailDeviceInternal@@PEAUHWND__@@@Z @ 0x180167C68
 * Callers:
 *     ?CreateThumbnailFactoryForWindow@ThumbnailInteropDevice@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x180166A00 (-CreateThumbnailFactoryForWindow@ThumbnailInteropDevice@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VThumbnailInteropFactoryBase@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180167F20 (-Release@-$RuntimeClass@U-$InterfaceList@VThumbnailInteropFactoryBase@@VNil@Details@WRL@Microsof.c)
 *     ??$MakeOrThrow@VThumbnailInteropFactory@@AEAPEAUIThumbnailDeviceInternal@@AEAPEAUHWND__@@@wil@@YA?AV?$ComPtr@VThumbnailInteropFactory@@@WRL@Microsoft@@AEAPEAUIThumbnailDeviceInternal@@AEAPEAUHWND__@@@Z @ 0x180168444 (--$MakeOrThrow@VThumbnailInteropFactory@@AEAPEAUIThumbnailDeviceInternal@@AEAPEAUHWND__@@@wil@@Y.c)
 *     ??$com_query@UIThumbnailFactory@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@AEAV?$ComPtr@VDesktopBackgroundFactory@@@WRL@Microsoft@@@wil@@YA?AV?$com_ptr_t@UIThumbnailFactory@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@Uerr_exception_policy@wil@@@0@AEAV?$ComPtr@VDesktopBackgroundFactory@@@WRL@Microsoft@@@Z @ 0x180168494 (--$com_query@UIThumbnailFactory@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MakeThumbnailInteropFactoryForWindow(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = a3;
  v6 = a2;
  v5 = a1;
  wil::MakeOrThrow<ThumbnailInteropFactory,IThumbnailDeviceInternal * &,HWND__ * &>(&v5, &v6, &v7);
  wil::com_query<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::IThumbnailFactory,Microsoft::WRL::ComPtr<DesktopBackgroundFactory> &>(
    a1,
    &v5);
  if ( v5 )
  {
    v5 = 0LL;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ThumbnailInteropFactoryBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release();
  }
  return a1;
}
