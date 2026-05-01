/*
 * XREFs of ?Add@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostViewModeChangeRequestedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$0A@Uerr_returncode_policy@wil@@@wil@@QEAAJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostViewModeChangeRequestedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180109C4C
 * Callers:
 *     ?add_ViewModeChangeRequested@Win32BackedViewHostItem@@UEAAJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostViewModeChangeRequestedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x1801082A0 (-add_ViewModeChangeRequested@Win32BackedViewHostItem@@UEAAJPEAU-$ITypedEventHandler@PEAUIViewHos.c)
 *     ?add_ViewModeChangeRequested@ApplicationViewBackedViewHostItem@@UEAAJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostViewModeChangeRequestedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x18010E280 (-add_ViewModeChangeRequested@ApplicationViewBackedViewHostItem@@UEAAJPEAU-$ITypedEventHandler@PE.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddInternal@?$EventSource@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x18005EFC8 (-AddInternal@-$EventSource@U-$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Int.c)
 *     ??$CreateGitHelper@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostViewModeChangeRequestedEventArgs@2345@@Foundation@Windows@@V?$GitPtrSupportsAgile@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostViewModeChangeRequestedEventArgs@2345@@Foundation@Windows@@@Internal@3@@Details@Internal@Windows@@YAJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostViewModeChangeRequestedEventArgs@2345@@Foundation@2@PEAPEAU342@@Z @ 0x18010A374 (--$CreateGitHelper@U-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@P.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewHostViewModeChangeRequestedEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,0,wil::err_returncode_policy>::Add(
        RTL_SRWLOCK *a1,
        __int64 a2,
        struct IUnknown **a3)
{
  int v6; // ebx
  struct IUnknown *v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IUnknown *v10; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
  {
    v6 = -2147024809;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15E1,
      (__int64)"internal\\sdk\\inc\\wil\\ResultMacros.h",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v10 = 0LL;
  v6 = Windows::Internal::Details::CreateGitHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewHostViewModeChangeRequestedEventArgs *>,Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewHostViewModeChangeRequestedEventArgs *>>>(
         a2,
         &v10);
  if ( v6 >= 0 )
  {
    if ( !v10 )
    {
      v6 = -2147024809;
      goto LABEL_9;
    }
    v6 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,int>,Microsoft::WRL::InvokeModeOptions<2>>::AddInternal(
           a1,
           v10,
           *(void **)(*(_QWORD *)a2 + 24LL),
           a3);
  }
  v7 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    ((void (__fastcall *)(struct IUnknown *))v7->lpVtbl->Release)(v7);
  }
LABEL_9:
  if ( v6 < 0 )
    goto LABEL_10;
  return (unsigned int)v6;
}
