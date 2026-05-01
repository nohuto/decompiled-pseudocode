/*
 * XREFs of ??$MakeOrThrow@VThumbnailInteropFactory@@AEAPEAUIThumbnailDeviceInternal@@AEAPEAUHWND__@@@wil@@YA?AV?$ComPtr@VThumbnailInteropFactory@@@WRL@Microsoft@@AEAPEAUIThumbnailDeviceInternal@@AEAPEAUHWND__@@@Z @ 0x180168444
 * Callers:
 *     ?MakeThumbnailInteropFactoryForWindow@@YA?AV?$com_ptr_t@UIThumbnailFactory@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@PEAUIThumbnailDeviceInternal@@PEAUHWND__@@@Z @ 0x180167C68 (-MakeThumbnailInteropFactoryForWindow@@YA-AV-$com_ptr_t@UIThumbnailFactory@Common@Multitasking@E.c)
 * Callees:
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008A9C0 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$Make@VThumbnailInteropFactory@@AEAPEAUIThumbnailDeviceInternal@@AEAPEAUHWND__@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VThumbnailInteropFactory@@@12@AEAPEAUIThumbnailDeviceInternal@@AEAPEAUHWND__@@@Z @ 0x1801687D8 (--$Make@VThumbnailInteropFactory@@AEAPEAUIThumbnailDeviceInternal@@AEAPEAUHWND__@@@Details@WRL@M.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall wil::MakeOrThrow<ThumbnailInteropFactory,IThumbnailDeviceInternal * &,HWND__ * &>(
        _QWORD *a1,
        __int64 a2)
{
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  Microsoft::WRL::Details::Make<ThumbnailInteropFactory,IThumbnailDeviceInternal * &,HWND__ * &>(a1, a2);
  if ( !*a1 )
  {
    wil::details::in1diag3::_Throw_NullAlloc(retaddr, (void *)0x38, (__int64)"internal\\sdk\\inc\\wil/wrl.h", v3);
    __debugbreak();
  }
  return a1;
}
