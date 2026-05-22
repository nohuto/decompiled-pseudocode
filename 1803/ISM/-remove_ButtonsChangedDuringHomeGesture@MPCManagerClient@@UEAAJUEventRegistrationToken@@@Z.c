/*
 * XREFs of ?remove_ButtonsChangedDuringHomeGesture@MPCManagerClient@@UEAAJUEventRegistrationToken@@@Z @ 0x180026C20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCManagerClient::remove_ButtonsChangedDuringHomeGesture(
        MPCManagerClient *this,
        struct EventRegistrationToken a2)
{
  return Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Input::MPCManager::MPCManagerClient *,Windows::Internal::Input::MPCManager::HomeGestureEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
           (char *)this + 1064,
           a2.value);
}
