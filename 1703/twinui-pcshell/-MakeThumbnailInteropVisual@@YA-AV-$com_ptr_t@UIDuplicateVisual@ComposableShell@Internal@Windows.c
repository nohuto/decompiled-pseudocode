/*
 * XREFs of ?MakeThumbnailInteropVisual@@YA?AV?$com_ptr_t@UIDuplicateVisual@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIThumbnailDeviceInternal@@PEAUIThumbnailFactoryInternal@@PEAUHWND__@@PEAURect@Foundation@Windows@@PEAUICompositor@Composition@UI@8@USize@78@UThumbnailProperties@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180169E60
 * Callers:
 *     ?CreateThumbnailVisual@ThumbnailInteropFactoryBase@@UEAAJPEAUICompositor@Composition@UI@Windows@@USize@Foundation@5@UThumbnailProperties@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@PEAPEAUIDuplicateVisual@ComposableShell@Internal@5@@Z @ 0x180167890 (-CreateThumbnailVisual@ThumbnailInteropFactoryBase@@UEAAJPEAUICompositor@Composition@UI@Windows@.c)
 *     ?CreateThumbnailVisual@DesktopBackgroundFactory@@UEAAJPEAUICompositor@Composition@UI@Windows@@USize@Foundation@5@UThumbnailProperties@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@PEAPEAUIDuplicateVisual@ComposableShell@Internal@5@@Z @ 0x180169030 (-CreateThumbnailVisual@DesktopBackgroundFactory@@UEAAJPEAUICompositor@Composition@UI@Windows@@US.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIDuplicateVisual@ComposableShell@Internal@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180169F80 (-Release@-$RuntimeClass@U-$InterfaceList@UIDuplicateVisual@ComposableShell@Internal@Windows@@VNi.c)
 *     ??$MakeOrThrow@VThumbnailInteropVisual@@AEAPEAUIThumbnailDeviceInternal@@AEAPEAUIThumbnailFactoryInternal@@AEAPEAUHWND__@@AEAPEAURect@Foundation@Windows@@AEAPEAUICompositor@Composition@UI@7@AEAUSize@67@AEAUThumbnailProperties@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@wil@@YA?AV?$ComPtr@VThumbnailInteropVisual@@@WRL@Microsoft@@AEAPEAUIThumbnailDeviceInternal@@AEAPEAUIThumbnailFactoryInternal@@AEAPEAUHWND__@@AEAPEAURect@Foundation@Windows@@AEAPEAUICompositor@Composition@UI@9@AEAUSize@89@AEAUThumbnailProperties@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18016A1E8 (--$MakeOrThrow@VThumbnailInteropVisual@@AEAPEAUIThumbnailDeviceInternal@@AEAPEAUIThumbnailFactor.c)
 *     ??$com_query@UIDuplicateVisual@ComposableShell@Internal@Windows@@AEAV?$ComPtr@VThumbnailInteropVisual@@@WRL@Microsoft@@@wil@@YA?AV?$com_ptr_t@UIDuplicateVisual@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@0@AEAV?$ComPtr@VThumbnailInteropVisual@@@WRL@Microsoft@@@Z @ 0x18016A268 (--$com_query@UIDuplicateVisual@ComposableShell@Internal@Windows@@AEAV-$ComPtr@VThumbnailInteropV.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MakeThumbnailInteropVisual(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        char a6,
        char a7,
        __int64 a8)
{
  __int64 v10; // [rsp+70h] [rbp+18h] BYREF
  __int64 v11; // [rsp+78h] [rbp+20h] BYREF
  __int64 v12; // [rsp+80h] [rbp+28h] BYREF
  __int64 v13; // [rsp+88h] [rbp+30h] BYREF

  v13 = a4;
  v12 = a3;
  v11 = a2;
  v10 = a1;
  wil::MakeOrThrow<ThumbnailInteropVisual,IThumbnailDeviceInternal * &,IThumbnailFactoryInternal * &,HWND__ * &,Windows::Foundation::Rect * &,Windows::UI::Composition::ICompositor * &,Windows::Foundation::Size &,WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ThumbnailProperties &>(
    (unsigned int)&v10,
    (unsigned int)&v11,
    (unsigned int)&v12,
    (unsigned int)&v13,
    (__int64)&a5,
    (__int64)&a6,
    (__int64)&a7,
    a8);
  wil::com_query<Windows::Internal::ComposableShell::IDuplicateVisual,Microsoft::WRL::ComPtr<ThumbnailInteropVisual> &>(
    a1,
    &v10);
  if ( v10 )
  {
    v10 = 0LL;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::ComposableShell::IDuplicateVisual,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release();
  }
  return a1;
}
