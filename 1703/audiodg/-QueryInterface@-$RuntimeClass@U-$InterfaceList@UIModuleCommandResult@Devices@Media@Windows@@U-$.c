/*
 * XREFs of ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIModuleCommandResult@Devices@Media@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001FAA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Media::Devices::IModuleCommandResult,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Windows::Media::Devices::ModuleCommandResult::QueryInterface(
           (Windows::Media::Devices::ModuleCommandResult *)(a1 - 8),
           a2,
           a3);
}
