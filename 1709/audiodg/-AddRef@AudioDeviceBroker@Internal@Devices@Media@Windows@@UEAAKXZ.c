/*
 * XREFs of ?AddRef@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAKXZ @ 0x14000E910
 * Callers:
 *     ?GetAudioDeviceModulesManager@CAudioDeviceGraph@@UEAAJPEAPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@@Z @ 0x14000BAC0 (-GetAudioDeviceModulesManager@CAudioDeviceGraph@@UEAAJPEAPEAUIAudioDeviceModulesManager@Devices@.c)
 *     ?QueryInterface@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14000EB80 (-QueryInterface@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$MakeAndInitialize@VAudioDeviceBroker@Internal@Devices@Media@Windows@@UIAudioDeviceBroker@2345@AEAPEAX@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceBroker@Internal@Devices@Media@Windows@@AEAPEAX@Z @ 0x1400193D0 (--$MakeAndInitialize@VAudioDeviceBroker@Internal@Devices@Media@Windows@@UIAudioDeviceBroker@2345.c)
 *     ?AddRef@AudioDeviceModulesManager@Devices@Media@Windows@@W7EAAKXZ @ 0x14001F4A0 (-AddRef@AudioDeviceModulesManager@Devices@Media@Windows@@W7EAAKXZ.c)
 *     ?AddRef@AudioDeviceModulesManager@Devices@Media@Windows@@WBA@EAAKXZ @ 0x14001F4B0 (-AddRef@AudioDeviceModulesManager@Devices@Media@Windows@@WBA@EAAKXZ.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAudioDeviceModulesManager@Devices@Media@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14002F470 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0_ea_14002F470.c)
 *     ?QueryInterface@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14002F7A0 (-QueryInterface@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Media::Devices::Internal::AudioDeviceBroker::AddRef(
        Windows::Media::Devices::Internal::AudioDeviceBroker *this)
{
  signed __int64 v1; // rax
  unsigned int v2; // edx
  signed __int64 v3; // rtt

  v1 = *((_QWORD *)this + 8);
  while ( v1 >= 0 )
  {
    v2 = v1 + 1;
    v3 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 8, v1 + 1, v1);
    if ( v3 == v1 )
      return v2;
  }
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(2 * v1 + 16));
}
