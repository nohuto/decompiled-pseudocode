/*
 * XREFs of ?remove_SwitchItemChanged@SwitchItemBase@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@UEAAJUEventRegistrationToken@@@Z @ 0x180164B00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemBase::remove_SwitchItemChanged(
        RTL_SRWLOCK *this,
        struct EventRegistrationToken a2)
{
  return Microsoft::WRL::EventSource<Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler,Microsoft::WRL::InvokeModeOptions<2>>::Remove(
           this + 13,
           (struct IUnknown *)a2.value);
}
