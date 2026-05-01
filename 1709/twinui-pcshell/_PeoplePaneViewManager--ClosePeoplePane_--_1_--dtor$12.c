/*
 * XREFs of _PeoplePaneViewManager::ClosePeoplePane_::_1_::dtor$12 @ 0x1801EDC79
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PeoplePaneViewManager::ClosePeoplePane_::_1_::dtor_12(__int64 a1, __int64 a2)
{
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,2>,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,2>,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)(a2 + 112));
}
