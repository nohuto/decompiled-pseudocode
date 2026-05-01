/*
 * XREFs of ?remove_PrepareforInitialPresentation@Win32BackedViewHostItem@@UEAAJUEventRegistrationToken@@@Z @ 0x1800E2BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Remove@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIPrepareForInitialPresentationEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$0A@Uerr_returncode_policy@wil@@@wil@@QEAAJUEventRegistrationToken@@@Z @ 0x1800E3B48 (-Remove@-$AsyncEventSourceT@U-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@W.c)
 */

__int64 __fastcall Win32BackedViewHostItem::remove_PrepareforInitialPresentation(
        Win32BackedViewHostItem *this,
        struct EventRegistrationToken a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPrepareForInitialPresentationEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,0,wil::err_returncode_policy>::Remove(
         (char *)this + 112,
         a2.value);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0xF6,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
