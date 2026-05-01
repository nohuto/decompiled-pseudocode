/*
 * XREFs of ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x180048D24
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_532f1f640b749836e78f2398ba6696dd__&___ptr64_::Run @ 0x180046A70 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_532f1f640b749836e78f2398ba6696dd__-___ptr64.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_639d6738ffd80580db82ce4ed229ae7f___::Run @ 0x1800735A0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_639d6738ffd80580db82ce4ed229ae7f___--Run.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64_::_)(Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64___lambda_91340e788704f1afab709d2d81130ce3___1_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64_::Invoke @ 0x1800C9450 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_1800C9450.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64_::_)(Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64___lambda_dd105f6278bc7bec38635a3a4a66283f___1_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64_::Invoke @ 0x1800D1830 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_1800D1830.c)
 *     ?s_RunDirectorThread@LockScreenDirectorServiceProviderImpl@@CAKPEAX@Z @ 0x1800E2250 (-s_RunDirectorThread@LockScreenDirectorServiceProviderImpl@@CAKPEAX@Z.c)
 *     ?GetBarFlyoutExperienceManager@PeoplePaneViewManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180115720 (-GetBarFlyoutExperienceManager@PeoplePaneViewManager@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetJumpListExperienceManager@PeoplePaneViewManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801157F0 (-GetJumpListExperienceManager@PeoplePaneViewManager@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetShoulderTapExperienceManager@PeoplePaneViewManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801158C0 (-GetShoulderTapExperienceManager@PeoplePaneViewManager@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c3db0f6e124d4bdd06e778fc848dc2f1___::Run @ 0x180185800 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c3db0f6e124d4bdd06e778fc848dc2f1___--Run.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f11545691eb1c18d1795497ebae59dd5___::Run @ 0x1801858C0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_f11545691eb1c18d1795497ebae59dd5___--Run.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a632cef2db327014c3fb5d2881c4369e___::Run @ 0x1801B2B80 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_a632cef2db327014c3fb5d2881c4369e___--Run.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4de2082f8d92723017ebdb5676c04982___::Run @ 0x1801CD5F0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_4de2082f8d92723017ebdb5676c04982___--Run.c)
 *     _lambda_05d91f74b5ede77de7d082105d7f406a_::operator() @ 0x1801D2114 (_lambda_05d91f74b5ede77de7d082105d7f406a_--operator().c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_69e066523f5234eeae6ba20c33bcef6c___::Run @ 0x1801DC0D0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_69e066523f5234eeae6ba20c33bcef6c___--Run.c)
 *     ?get_SplashScreen@CActivatedEventArgsBase@@UEAAJPEAPEAUISplashScreen@Activation@ApplicationModel@Windows@@@Z @ 0x1801E0930 (-get_SplashScreen@CActivatedEventArgsBase@@UEAAJPEAPEAUISplashScreen@Activation@ApplicationModel.c)
 * Callees:
 *     ?CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x180048C98 (-CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMarshaledInterface::_Unmarshal(
        CMarshaledInterface *this,
        const struct _GUID *a2,
        void **a3,
        char a4)
{
  unsigned int v6; // edi
  __int64 v7; // rbx
  HRESULT InterfaceAndReleaseStream; // eax
  IStream *v9; // rcx

  *a3 = 0LL;
  v6 = -2147467259;
  v7 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    if ( a4 || *(_DWORD *)(v7 + 24) != 2 )
      *(_QWORD *)this = 0LL;
    else
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    *a3 = 0LL;
    if ( *(_DWORD *)(v7 + 24) == 2 )
    {
      InterfaceAndReleaseStream = AgileGitPtr::CopyLocal((AgileGitPtr *)(v7 + 32), a2, a3);
    }
    else
    {
      v9 = *(IStream **)(v7 + 16);
      *(_QWORD *)(v7 + 16) = 0LL;
      InterfaceAndReleaseStream = CoGetInterfaceAndReleaseStream(v9, a2, a3);
    }
    v6 = InterfaceAndReleaseStream;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return v6;
}
