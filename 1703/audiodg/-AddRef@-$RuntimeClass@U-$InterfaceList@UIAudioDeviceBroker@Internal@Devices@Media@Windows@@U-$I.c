/*
 * XREFs of ?AddRef@?$RuntimeClass@U?$InterfaceList@UIAudioDeviceBroker@Internal@Devices@Media@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x14002F3C0
 * Callers:
 *     ?AddRef@ModuleCommandResult@Devices@Media@Windows@@W7EAAKXZ @ 0x14001F760 (-AddRef@ModuleCommandResult@Devices@Media@Windows@@W7EAAKXZ.c)
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@UIModuleCommandResult@Devices@Media@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x14001F770 (-AddRef@-$RuntimeClass@U-$InterfaceList@UIModuleCommandResult@Devices@Media@Windows@@U-$Interfac.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Media::Devices::Internal::IAudioDeviceBroker,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::AddRef(
        __int64 a1)
{
  signed __int64 v1; // rax
  unsigned int v2; // edx
  signed __int64 v3; // rtt

  v1 = *(_QWORD *)(a1 + 48);
  while ( v1 >= 0 )
  {
    v2 = v1 + 1;
    v3 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 48), v1 + 1, v1);
    if ( v3 == v1 )
      return v2;
  }
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(2 * v1 + 16));
}
