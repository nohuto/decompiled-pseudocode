/*
 * XREFs of wil::details::ScopeExitFn__lambda_ee3cd95579de1bc4ff8ba8015879bb86___::_ScopeExitFn__lambda_ee3cd95579de1bc4ff8ba8015879bb86___ @ 0x1801335AC
 * Callers:
 *     _ComposableShell::Experiences::Multitasking::Common::ISwitchItemDataView::SwitchItemDataViewImpl::EvaluateItem::[WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemDataView]::add_::_1_::dtor$2 @ 0x1801A1652 (_ComposableShell--Experiences--Multitasking--Common--ISwitchItemDataView--SwitchIte_ea_1801A1652.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_ee3cd95579de1bc4ff8ba8015879bb86___::_ScopeExitFn__lambda_ee3cd95579de1bc4ff8ba8015879bb86___(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        struct EventRegistrationToken a4)
{
  if ( *((_BYTE *)a1 + 16) )
  {
    *((_BYTE *)a1 + 16) = 0;
    Platform::Details::EventSourceRemove(
      (Platform::Details *)(*a1 + 64LL),
      (void **)(*a1 + 136LL),
      *(struct Platform::Details::EventLock **)a1[1],
      a4);
  }
  if ( *a1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
}
