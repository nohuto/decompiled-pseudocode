/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$InterfaceList@UIAudioEndpoint@@U?$InterfaceList@UIAudioEndpointRT@@U?$InterfaceList@UIAudioOutputEndpointRT@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@$0A@$0A@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x140034EE8
 * Callers:
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIAudioEndpoint@@U?$InterfaceList@UIAudioEndpointRT@@U?$InterfaceList@UIAudioOutputEndpointRT@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140035110 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIAudioEndpoint@@U-$InterfaceList@U_ea_140035110.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x140033484 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IAudioEndpoint,Microsoft::WRL::Details::InterfaceList<IAudioEndpointRT,Microsoft::WRL::Details::InterfaceList<IAudioOutputEndpointRT,Microsoft::WRL::Details::Nil>>>,0,0>::CanCastTo(
        __int64 a1,
        const struct _GUID *a2)
{
  const struct _GUID *v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r10
  const struct _GUID *v6; // rcx
  _QWORD *v7; // r8
  unsigned int v8; // r9d
  __int64 v9; // r10
  _QWORD *v10; // r8
  __int64 v11; // r10

  if ( InlineIsEqualGUID(a2, &GUID_30a99515_1527_4451_af9f_00c5f0234daf) )
  {
    *v3 = v4;
    return 0LL;
  }
  else
  {
    if ( InlineIsEqualGUID(v2, &GUID_dfd2005f_a6e5_4d39_a265_939ada9fbb4d) )
    {
      *v7 = v9;
    }
    else if ( InlineIsEqualGUID(v6, &GUID_8fa906e4_c31c_4e31_932e_19a66385e9aa) )
    {
      *v10 = v11 + 8;
    }
    else
    {
      return (unsigned int)-2147467262;
    }
    return v8;
  }
}
