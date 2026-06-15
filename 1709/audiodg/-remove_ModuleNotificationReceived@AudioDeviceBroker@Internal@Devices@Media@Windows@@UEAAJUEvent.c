/*
 * XREFs of ?remove_ModuleNotificationReceived@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x140018360
 * Callers:
 *     ??1AudioDeviceModulesManager@Devices@Media@Windows@@MEAA@XZ @ 0x14000E934 (--1AudioDeviceModulesManager@Devices@Media@Windows@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Media::Devices::Internal::AudioDeviceBroker::remove_ModuleNotificationReceived(
        Windows::Media::Devices::Internal::AudioDeviceBroker *this,
        struct EventRegistrationToken a2)
{
  return Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
           (__int64)this + 136,
           (struct IUnknown *)a2.value);
}
