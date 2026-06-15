/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@U?$InterfaceList@UIWeakReferenceSource@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@23@$00$0A@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x14004A58C
 * Callers:
 *     ?QueryInterface@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140011BD0 (-QueryInterface@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIAudioDeviceModulesManager@Devices@Media@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14002F3F0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIAudioDeviceModulesManager@Devices_ea_14002F3F0.c)
 *     ?QueryInterface@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14002F830 (-QueryInterface@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIAudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14004DBB0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIAudioDeviceBrokerChangedEventArgs_ea_14004DBB0.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIAudioDeviceModule@Devices@Media@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14004DC40 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIAudioDeviceModule@Devices@Media@W_ea_14004DC40.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIAudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14004DCD0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIAudioDeviceModuleNotificationEven_ea_14004DCD0.c)
 *     ?QueryInterface@ModuleCommandResult@Devices@Media@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14004DD60 (-QueryInterface@ModuleCommandResult@Devices@Media@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x140033484 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 */

int __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,1,0>::CanCastTo(
        __int64 a1,
        const struct _GUID *a2)
{
  void **v2; // r8
  __int64 v3; // r9
  const struct _GUID *v4; // r10

  if ( !InlineIsEqualGUID(a2, &GUID_00000038_0000_0000_c000_000000000046) )
    return Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v3 + 8), v4, v2);
  *v2 = (void *)v3;
  return 0;
}
