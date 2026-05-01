/*
 * XREFs of ??$AsStrong@UIInspectable@@@ExperienceManagerUtils@@YA?AV?$ComPtr@UIInspectable@@@WRL@Microsoft@@AEAVWeakRef@23@@Z @ 0x180183CB8
 * Callers:
 *     _lambda_00be1f95221eb842538ce67e0fb4e246_::operator() @ 0x1801827F8 (_lambda_00be1f95221eb842538ce67e0fb4e246_--operator().c)
 *     Microsoft::WRL::Details::InvokeHelper_Windows::Foundation::IEventHandler_IInspectable_____ptr64___lambda_8cf0745262468425ce7edac2544d66d5__2__1_::Invoke @ 0x1801853B0 (Microsoft--WRL--Details--InvokeHelper_Windows--Foundation--IEventHandler_IInspectable_____ptr64_.c)
 *     Microsoft::WRL::Details::InvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::ShellExperienceDispatcher_____ptr64_Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs_____ptr64___lambda_758b2e0460ec60a3197f9f2eea1280c5__2__1_::Invoke @ 0x1801854F0 (Microsoft--WRL--Details--InvokeHelper_Windows--Foundation--ITypedEventHandler_Windo_ea_1801854F0.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c093b048b1c12e288728af00af624558___::Run @ 0x1801858C0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c093b048b1c12e288728af00af624558___--Run.c)
 *     SessionIdleCallback__lambda_5dd62f6e8324cfa711462c7c76a80ce5___::OnIdleStateChanged @ 0x18018E480 (SessionIdleCallback__lambda_5dd62f6e8324cfa711462c7c76a80ce5___--OnIdleStateChanged.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
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
