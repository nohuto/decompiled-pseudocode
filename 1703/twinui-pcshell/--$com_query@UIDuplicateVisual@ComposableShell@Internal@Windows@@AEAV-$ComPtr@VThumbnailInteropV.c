/*
 * XREFs of ??$com_query@UIDuplicateVisual@ComposableShell@Internal@Windows@@AEAV?$ComPtr@VThumbnailInteropVisual@@@WRL@Microsoft@@@wil@@YA?AV?$com_ptr_t@UIDuplicateVisual@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@0@AEAV?$ComPtr@VThumbnailInteropVisual@@@WRL@Microsoft@@@Z @ 0x18016A268
 * Callers:
 *     ?MakeThumbnailInteropVisual@@YA?AV?$com_ptr_t@UIDuplicateVisual@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIThumbnailDeviceInternal@@PEAUIThumbnailFactoryInternal@@PEAUHWND__@@PEAURect@Foundation@Windows@@PEAUICompositor@Composition@UI@8@USize@78@UThumbnailProperties@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180169E60 (-MakeThumbnailInteropVisual@@YA-AV-$com_ptr_t@UIDuplicateVisual@ComposableShell@Internal@Windows.c)
 *     ?MakeSolidColorVisual@@YA?AV?$com_ptr_t@UIDuplicateVisual@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@UColor@UI@Windows@@PEAUICompositor@Composition@45@USize@Foundation@5@@Z @ 0x18016A9E0 (-MakeSolidColorVisual@@YA-AV-$com_ptr_t@UIDuplicateVisual@ComposableShell@Internal@Windows@@Uerr.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024F20 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIDuplicateVisual@ComposableShell@Internal@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18016A020 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIDuplicateVisual@ComposableShell@Internal@Windo.c)
 */

__int64 *__fastcall wil::com_query<Windows::Internal::ComposableShell::IDuplicateVisual,Microsoft::WRL::ComPtr<ThumbnailInteropVisual> &>(
        __int64 *a1,
        __int64 *a2)
{
  int Interface; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  Interface = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::ComposableShell::IDuplicateVisual,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
                *a2,
                &GUID_84fa17ed_2003_44ed_a305_5bff9322b748,
                a1);
  if ( Interface < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x15CA,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)Interface);
    JUMPOUT(0x18016A2B1LL);
  }
  return a1;
}
