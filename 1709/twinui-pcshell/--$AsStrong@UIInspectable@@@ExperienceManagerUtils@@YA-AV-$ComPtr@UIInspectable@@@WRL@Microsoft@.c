/*
 * XREFs of ??$AsStrong@UIInspectable@@@ExperienceManagerUtils@@YA?AV?$ComPtr@UIInspectable@@@WRL@Microsoft@@AEAVWeakRef@23@@Z @ 0x1800D1720
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64_::_)(Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64___lambda_dd105f6278bc7bec38635a3a4a66283f___1_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64_::Invoke @ 0x1800D1830 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_1800D1830.c)
 *     _lambda_05d91f74b5ede77de7d082105d7f406a_::operator() @ 0x1801D2114 (_lambda_05d91f74b5ede77de7d082105d7f406a_--operator().c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IEventHandler_impl_IInspectable_____ptr64_::_)(IInspectable_____ptr64_IInspectable_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::IEventHandler_IInspectable_____ptr64___lambda_bebc36e78399f71117fc73082d12469b___1_IInspectable_____ptr64_IInspectable_____ptr64_::Invoke @ 0x1801D4670 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IEventHandler_impl.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c093b048b1c12e288728af00af624558___::Run @ 0x1801D4700 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c093b048b1c12e288728af00af624558___--Run.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::ShellExperienceDispatcher_____ptr64_Windows::Internal::Shell::Experience::IShellExperienceDispatcher_____ptr64__Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs_____ptr64_::_)(Windows::Internal::Shell::Experience::IShellExperienceDispatcher_____ptr64_Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::ShellExperienceDispatcher_____ptr64_Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs_____ptr64___lambda_758b2e0460ec60a3197f9f2eea1280c5___1_Windows::Internal::Shell::Experience::IShellExperienceDispatcher_____ptr64_Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs_____ptr64_::Invoke @ 0x1801D4940 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_1801D4940.c)
 *     SessionIdleCallback__lambda_5dd62f6e8324cfa711462c7c76a80ce5___::OnIdleStateChanged @ 0x1801DD8C0 (SessionIdleCallback__lambda_5dd62f6e8324cfa711462c7c76a80ce5___--OnIdleStateChanged.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall ExperienceManagerUtils::AsStrong<IInspectable>(_QWORD *a1, _QWORD *a2)
{
  *a1 = 0LL;
  if ( *a2 )
    (*(void (__fastcall **)(_QWORD, GUID *, _QWORD *))(*(_QWORD *)*a2 + 24LL))(
      *a2,
      &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
      a1);
  return a1;
}
