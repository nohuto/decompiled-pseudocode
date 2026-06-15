/*
 * XREFs of ?remove_ModuleNotificationReceived@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x140016EB0
 * Callers:
 *     ??_EAudioDeviceModulesManager@Devices@Media@Windows@@MEAAPEAXI@Z @ 0x140011AB0 (--_EAudioDeviceModulesManager@Devices@Media@Windows@@MEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Media::Devices::Internal::AudioDeviceBroker::remove_ModuleNotificationReceived(
        Windows::Media::Devices::Internal::AudioDeviceBroker *this,
        struct EventRegistrationToken a2)
{
  return Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
           (char *)this + 120,
           a2.value);
}
