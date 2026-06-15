/*
 * XREFs of ?QueryInterface@AudioDeviceBroker@Internal@Devices@Media@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001F600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall Windows::Media::Devices::Internal::AudioDeviceBroker::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Windows::Media::Devices::Internal::AudioDeviceBroker::QueryInterface(
           (Windows::Media::Devices::Internal::AudioDeviceBroker *)(a1 - 8),
           a2,
           a3);
}
