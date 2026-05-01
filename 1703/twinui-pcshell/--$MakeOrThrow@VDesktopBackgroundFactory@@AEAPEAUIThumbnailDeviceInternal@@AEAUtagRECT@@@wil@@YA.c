/*
 * XREFs of ??$MakeOrThrow@VDesktopBackgroundFactory@@AEAPEAUIThumbnailDeviceInternal@@AEAUtagRECT@@@wil@@YA?AV?$ComPtr@VDesktopBackgroundFactory@@@WRL@Microsoft@@AEAPEAUIThumbnailDeviceInternal@@AEAUtagRECT@@@Z @ 0x180169410
 * Callers:
 *     ?MakeDesktopBackgroundFactory@@YA?AV?$com_ptr_t@UIThumbnailFactory@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@PEAUIThumbnailDeviceInternal@@UtagRECT@@@Z @ 0x180169220 (-MakeDesktopBackgroundFactory@@YA-AV-$com_ptr_t@UIThumbnailFactory@Common@Multitasking@Experienc.c)
 * Callees:
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008A9C0 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$Make@VDesktopBackgroundFactory@@AEAPEAUIThumbnailDeviceInternal@@AEAUtagRECT@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VDesktopBackgroundFactory@@@12@AEAPEAUIThumbnailDeviceInternal@@AEAUtagRECT@@@Z @ 0x180169460 (--$Make@VDesktopBackgroundFactory@@AEAPEAUIThumbnailDeviceInternal@@AEAUtagRECT@@@Details@WRL@Mi.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall wil::MakeOrThrow<DesktopBackgroundFactory,IThumbnailDeviceInternal * &,tagRECT &>(
        _QWORD *a1,
        __int64 a2)
{
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  Microsoft::WRL::Details::Make<DesktopBackgroundFactory,IThumbnailDeviceInternal * &,tagRECT &>(a1, a2);
  if ( !*a1 )
  {
    wil::details::in1diag3::_Throw_NullAlloc(retaddr, (void *)0x38, (__int64)"internal\\sdk\\inc\\wil/wrl.h", v3);
    __debugbreak();
  }
  return a1;
}
