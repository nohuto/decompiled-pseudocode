/*
 * XREFs of wil::details::ScopeExitFn__lambda_6d3cf3456c3ee4f01c09ac84ae934c65___::_ScopeExitFn__lambda_6d3cf3456c3ee4f01c09ac84ae934c65___ @ 0x18016189C
 * Callers:
 *     _Internal::ComposableShell::Multitasking::ISwitchItemDataView::SwitchItemDataViewImpl::EvaluateItem::[Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView]::add_::_1_::dtor$2 @ 0x1801F1CA5 (_Internal--ComposableShell--Multitasking--ISwitchItemDataView--SwitchItemDataViewIm_ea_1801F1CA5.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_6d3cf3456c3ee4f01c09ac84ae934c65___::_ScopeExitFn__lambda_6d3cf3456c3ee4f01c09ac84ae934c65___(
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
