/*
 * XREFs of _CortanaExperienceManagerNotification::OnFocusNavigate_::_2_::CFocusNavigateEventArgs::QueryInterface @ 0x1800BE1A0
 * Callers:
 *     sub_1800C0510 @ 0x1800C0510 (sub_1800C0510.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CortanaExperienceManagerNotification::OnFocusNavigate_::_2_::CFocusNavigateEventArgs::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        __int64 *a3)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Experience::IFocusNavigateEventArgs,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::QueryInterface(
           a1,
           a2,
           a3);
}
