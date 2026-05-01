/*
 * XREFs of ?remove_Dismissed@CSplashScreen@@UEAAJUEventRegistrationToken@@@Z @ 0x180138DC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSplashScreen::remove_Dismissed(CSplashScreen *this, struct EventRegistrationToken a2)
{
  return Microsoft::WRL::EventSource<Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler,Microsoft::WRL::InvokeModeOptions<2>>::Remove(
           (char *)this + 72,
           a2.value);
}
