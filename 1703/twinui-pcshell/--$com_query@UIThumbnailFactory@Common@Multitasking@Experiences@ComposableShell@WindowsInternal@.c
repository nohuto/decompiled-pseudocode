/*
 * XREFs of ??$com_query@UIThumbnailFactory@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@AEAV?$ComPtr@VDesktopBackgroundFactory@@@WRL@Microsoft@@@wil@@YA?AV?$com_ptr_t@UIThumbnailFactory@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@Uerr_exception_policy@wil@@@0@AEAV?$ComPtr@VDesktopBackgroundFactory@@@WRL@Microsoft@@@Z @ 0x180168494
 * Callers:
 *     ?MakeThumbnailInteropFactoryForWindow@@YA?AV?$com_ptr_t@UIThumbnailFactory@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@PEAUIThumbnailDeviceInternal@@PEAUHWND__@@@Z @ 0x180167C68 (-MakeThumbnailInteropFactoryForWindow@@YA-AV-$com_ptr_t@UIThumbnailFactory@Common@Multitasking@E.c)
 *     ?MakeDesktopBackgroundFactory@@YA?AV?$com_ptr_t@UIThumbnailFactory@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@PEAUIThumbnailDeviceInternal@@UtagRECT@@@Z @ 0x180169220 (-MakeDesktopBackgroundFactory@@YA-AV-$com_ptr_t@UIThumbnailFactory@Common@Multitasking@Experienc.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024F20 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VThumbnailInteropFactoryBase@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180168030 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VThumbnailInteropFactoryBase@@VNil@Details@WRL@M.c)
 */

_QWORD *__fastcall wil::com_query<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::IThumbnailFactory,Microsoft::WRL::ComPtr<DesktopBackgroundFactory> &>(
        _QWORD *a1,
        __int64 *a2)
{
  int Interface; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  Interface = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ThumbnailInteropFactoryBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
                *a2,
                &GUID_5c594542_969f_4b3c_971b_c13cb89bbdbb,
                a1);
  if ( Interface < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x15CA,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)Interface);
    JUMPOUT(0x1801684DDLL);
  }
  return a1;
}
