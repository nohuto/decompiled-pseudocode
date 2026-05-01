/*
 * XREFs of ?remove_SwitchItemCollectionChanged@SwitchItemDataSourceBase@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@UEAAJUEventRegistrationToken@@@Z @ 0x18015ED70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataSourceBase::remove_SwitchItemCollectionChanged(
        RTL_SRWLOCK *this,
        struct EventRegistrationToken a2)
{
  return Microsoft::WRL::EventSource<Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler,Microsoft::WRL::InvokeModeOptions<2>>::Remove(
           this + 4,
           (struct IUnknown *)a2.value);
}
