/*
 * XREFs of ??$MakeOrThrow@VThumbnailInteropVisual@@AEAPEAUIThumbnailDeviceInternal@@AEAPEAUIThumbnailFactoryInternal@@AEAPEAUHWND__@@AEAPEAURect@Foundation@Windows@@AEAPEAUICompositor@Composition@UI@7@AEAUSize@67@AEAUThumbnailProperties@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@wil@@YA?AV?$ComPtr@VThumbnailInteropVisual@@@WRL@Microsoft@@AEAPEAUIThumbnailDeviceInternal@@AEAPEAUIThumbnailFactoryInternal@@AEAPEAUHWND__@@AEAPEAURect@Foundation@Windows@@AEAPEAUICompositor@Composition@UI@9@AEAUSize@89@AEAUThumbnailProperties@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18016A1E8
 * Callers:
 *     ?MakeThumbnailInteropVisual@@YA?AV?$com_ptr_t@UIDuplicateVisual@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIThumbnailDeviceInternal@@PEAUIThumbnailFactoryInternal@@PEAUHWND__@@PEAURect@Foundation@Windows@@PEAUICompositor@Composition@UI@8@USize@78@UThumbnailProperties@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180169E60 (-MakeThumbnailInteropVisual@@YA-AV-$com_ptr_t@UIDuplicateVisual@ComposableShell@Internal@Windows.c)
 * Callees:
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008A9C0 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$Make@VThumbnailInteropVisual@@AEAPEAUIThumbnailDeviceInternal@@AEAPEAUIThumbnailFactoryInternal@@AEAPEAUHWND__@@AEAPEAURect@Foundation@Windows@@AEAPEAUICompositor@Composition@UI@7@AEAUSize@67@AEAUThumbnailProperties@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VThumbnailInteropVisual@@@12@AEAPEAUIThumbnailDeviceInternal@@AEAPEAUIThumbnailFactoryInternal@@AEAPEAUHWND__@@AEAPEAURect@Foundation@Windows@@AEAPEAUICompositor@Composition@UI@9@AEAUSize@89@AEAUThumbnailProperties@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18016A528 (--$Make@VThumbnailInteropVisual@@AEAPEAUIThumbnailDeviceInternal@@AEAPEAUIThumbnailFactoryIntern.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall wil::MakeOrThrow<ThumbnailInteropVisual,IThumbnailDeviceInternal * &,IThumbnailFactoryInternal * &,HWND__ * &,Windows::Foundation::Rect * &,Windows::UI::Composition::ICompositor * &,Windows::Foundation::Size &,WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ThumbnailProperties &>(
        _QWORD *a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  const char *v9; // r9
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  Microsoft::WRL::Details::Make<ThumbnailInteropVisual,IThumbnailDeviceInternal * &,IThumbnailFactoryInternal * &,HWND__ * &,Windows::Foundation::Rect * &,Windows::UI::Composition::ICompositor * &,Windows::Foundation::Size &,WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ThumbnailProperties &>(
    (_DWORD)a1,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8);
  if ( !*a1 )
  {
    wil::details::in1diag3::_Throw_NullAlloc(retaddr, (void *)0x38, (__int64)"internal\\sdk\\inc\\wil/wrl.h", v9);
    __debugbreak();
  }
  return a1;
}
