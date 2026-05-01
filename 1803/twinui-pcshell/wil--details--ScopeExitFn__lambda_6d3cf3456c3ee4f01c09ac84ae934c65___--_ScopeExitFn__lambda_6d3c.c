/*
 * XREFs of wil::details::ScopeExitFn__lambda_6d3cf3456c3ee4f01c09ac84ae934c65___::_ScopeExitFn__lambda_6d3cf3456c3ee4f01c09ac84ae934c65___ @ 0x180207370
 * Callers:
 *     _Internal::ComposableShell::Multitasking::ISwitchItemDataView::SwitchItemDataViewImpl::EvaluateItem::[Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView]::add_::_1_::dtor$2 @ 0x1802151E8 (_Internal--ComposableShell--Multitasking--ISwitchItemDataView--SwitchItemDataViewIm_ea_1802151E8.c)
 * Callees:
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::ScopeExitFn__lambda_6d3cf3456c3ee4f01c09ac84ae934c65___::_ScopeExitFn__lambda_6d3cf3456c3ee4f01c09ac84ae934c65___(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        struct EventRegistrationToken a4)
{
  if ( *((_BYTE *)a1 + 16) )
  {
    *((_BYTE *)a1 + 16) = 0;
    Platform::Details::EventSourceRemove(
      (Platform::Details *)(*a1 + 64),
      (void **)(*a1 + 136),
      *(struct Platform::Details::EventLock **)a1[1],
      a4);
  }
  return __abi_winrt_ptr_dtor(*a1);
}
