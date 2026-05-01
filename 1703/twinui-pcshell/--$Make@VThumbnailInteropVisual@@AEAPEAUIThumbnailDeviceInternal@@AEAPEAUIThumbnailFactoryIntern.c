/*
 * XREFs of ??$Make@VThumbnailInteropVisual@@AEAPEAUIThumbnailDeviceInternal@@AEAPEAUIThumbnailFactoryInternal@@AEAPEAUHWND__@@AEAPEAURect@Foundation@Windows@@AEAPEAUICompositor@Composition@UI@7@AEAUSize@67@AEAUThumbnailProperties@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VThumbnailInteropVisual@@@12@AEAPEAUIThumbnailDeviceInternal@@AEAPEAUIThumbnailFactoryInternal@@AEAPEAUHWND__@@AEAPEAURect@Foundation@Windows@@AEAPEAUICompositor@Composition@UI@9@AEAUSize@89@AEAUThumbnailProperties@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18016A528
 * Callers:
 *     ??$MakeOrThrow@VThumbnailInteropVisual@@AEAPEAUIThumbnailDeviceInternal@@AEAPEAUIThumbnailFactoryInternal@@AEAPEAUHWND__@@AEAPEAURect@Foundation@Windows@@AEAPEAUICompositor@Composition@UI@7@AEAUSize@67@AEAUThumbnailProperties@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@wil@@YA?AV?$ComPtr@VThumbnailInteropVisual@@@WRL@Microsoft@@AEAPEAUIThumbnailDeviceInternal@@AEAPEAUIThumbnailFactoryInternal@@AEAPEAUHWND__@@AEAPEAURect@Foundation@Windows@@AEAPEAUICompositor@Composition@UI@9@AEAUSize@89@AEAUThumbnailProperties@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18016A1E8 (--$MakeOrThrow@VThumbnailInteropVisual@@AEAPEAUIThumbnailDeviceInternal@@AEAPEAUIThumbnailFactor.c)
 * Callees:
 *     ??0ThumbnailInteropVisual@@QEAA@PEAUIThumbnailDeviceInternal@@PEAUIThumbnailFactoryInternal@@PEAUHWND__@@PEAURect@Foundation@Windows@@PEAUICompositor@Composition@UI@6@USize@56@UThumbnailProperties@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18016950C (--0ThumbnailInteropVisual@@QEAA@PEAUIThumbnailDeviceInternal@@PEAUIThumbnailFactoryInternal@@PEA.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIDuplicateVisual@ComposableShell@Internal@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180169F80 (-Release@-$RuntimeClass@U-$InterfaceList@UIDuplicateVisual@ComposableShell@Internal@Windows@@VNi.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
volatile signed __int64 **__fastcall Microsoft::WRL::Details::Make<ThumbnailInteropVisual,IThumbnailDeviceInternal * &,IThumbnailFactoryInternal * &,HWND__ * &,Windows::Foundation::Rect * &,Windows::UI::Composition::ICompositor * &,Windows::Foundation::Size &,WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ThumbnailProperties &>(
        volatile signed __int64 **a1,
        __int64 *a2,
        void **a3,
        __int64 *a4,
        __int64 *a5,
        __int64 *a6,
        __int64 *a7,
        __int64 *a8)
{
  RTL_SRWLOCK *v12; // rax
  RTL_SRWLOCK *v13; // rdi
  __int64 v15; // [rsp+70h] [rbp-18h] BYREF
  int v16; // [rsp+78h] [rbp-10h]

  *a1 = 0LL;
  v12 = (RTL_SRWLOCK *)operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v12 )
  {
    v15 = *a8;
    v16 = *((_DWORD *)a8 + 2);
    v13 = ThumbnailInteropVisual::ThumbnailInteropVisual(v12, *a2, *a3, *a4, *a5, *a6, *a7, &v15);
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::ComposableShell::IDuplicateVisual,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(*a1);
    *a1 = (volatile signed __int64 *)v13;
  }
  return a1;
}
