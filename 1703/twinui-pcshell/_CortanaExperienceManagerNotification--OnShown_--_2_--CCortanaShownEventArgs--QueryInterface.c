/*
 * XREFs of _CortanaExperienceManagerNotification::OnShown_::_2_::CCortanaShownEventArgs::QueryInterface @ 0x1800BE370
 * Callers:
 *     sub_1800C0620 @ 0x1800C0620 (sub_1800C0620.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CortanaExperienceManagerNotification::OnShown_::_2_::CCortanaShownEventArgs::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        __int64 *a3)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Experience::ICortanaShownEventArgs,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::QueryInterface(
           a1,
           a2,
           a3);
}
