/*
 * XREFs of ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIAudioEndpoint@@U?$InterfaceList@UIAudioEndpointRT@@U?$InterfaceList@UIAudioOutputEndpointRT@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140035110
 * Callers:
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIAudioEndpoint@@U?$InterfaceList@UIAudioEndpointRT@@U?$InterfaceList@UIAudioOutputEndpointRT@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001E930 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIAudioEndpoint@@U-$InterfaceList@UIAudioEndpoin.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIAudioEndpoint@@U?$InterfaceList@UIAudioEndpointRT@@U?$InterfaceList@UIAudioOutputEndpointRT@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001E940 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIAudioEndpoint@@U-$InterfaceList@U_ea_14001E940.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x140033484 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$InterfaceList@UIAudioEndpoint@@U?$InterfaceList@UIAudioEndpointRT@@U?$InterfaceList@UIAudioOutputEndpointRT@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@$0A@$0A@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x140034EE8 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$InterfaceList@UIAudioEn.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IAudioEndpoint,Microsoft::WRL::Details::InterfaceList<IAudioEndpointRT,Microsoft::WRL::Details::InterfaceList<IAudioOutputEndpointRT,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        _QWORD *a3)
{
  __int64 *v3; // r8
  __int64 v4; // r9
  const struct _GUID *v5; // r10
  int CanCastTo; // ebx
  _QWORD *v7; // r8

  *a3 = 0LL;
  if ( InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    *v3 = v4;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    return 0;
  }
  else
  {
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IAudioEndpoint,Microsoft::WRL::Details::InterfaceList<IAudioEndpointRT,Microsoft::WRL::Details::InterfaceList<IAudioOutputEndpointRT,Microsoft::WRL::Details::Nil>>>,0,0>::CanCastTo(
                  v4,
                  v5);
    if ( CanCastTo >= 0 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 8LL))(*v7);
  }
  return (unsigned int)CanCastTo;
}
