/*
 * XREFs of ?QueryInterface@AudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001E860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs::QueryInterface(
           (Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *)(a1 - 8),
           a2,
           a3);
}
