/*
 * XREFs of ?Find@?$InterfaceMap@UISaDeviceProxy@@VCEndpointResourcePool@Sarm@@@util@@QEAAPEAVCEndpointResourcePool@Sarm@@PEAUISaDeviceProxy@@@Z @ 0x1800C2854
 * Callers:
 *     ?OnCreateStream@CSpatialAudioResourceManager@Sarm@@UEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL_STREAM_PROPERTIES@@@Z @ 0x18002B790 (-OnCreateStream@CSpatialAudioResourceManager@Sarm@@UEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSP.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800466D0 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Attach@?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAXPEAUISaDeviceProxy@@@Z @ 0x18007D368 (-Attach@-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAXPEAUISaDeviceProxy@@@Z.c)
 *     ?GetKey@?$InterfaceMap@UISaDeviceProxy@@VCEndpointResourcePool@Sarm@@@util@@AEAAPEAUISaDeviceProxy@@PEAU3@@Z @ 0x1800C2B6C (-GetKey@-$InterfaceMap@UISaDeviceProxy@@VCEndpointResourcePool@Sarm@@@util@@AEAAPEAUISaDevicePro.c)
 *     ?GetNode@?$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V?$CElementTraits@PEAUISaDeviceProxy@@@ATL@@V?$CElementTraits@VCEndpointResourcePool@Sarm@@@5@@ATL@@AEBAPEAVCNode@12@AEBQEAUISaDeviceProxy@@AEAI1AEAPEAV312@@Z @ 0x1800C2D58 (-GetNode@-$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V-$CElementTraits@PEAUISaDev.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall util::InterfaceMap<ISaDeviceProxy,Sarm::CEndpointResourcePool>::Find(int a1)
{
  __int64 v2; // rbx
  __int64 Key; // rax
  __int64 Node; // rax
  __int64 v6; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v7[2]; // [rsp+38h] [rbp-20h] BYREF
  char v8[16]; // [rsp+48h] [rbp-10h] BYREF
  char v9; // [rsp+70h] [rbp+18h] BYREF
  char v10; // [rsp+78h] [rbp+20h] BYREF

  v7[1] = -2LL;
  v2 = 0LL;
  v6 = 0LL;
  Key = util::InterfaceMap<ISaDeviceProxy,Sarm::CEndpointResourcePool>::GetKey();
  Microsoft::WRL::ComPtr<ISaDeviceProxy>::Attach(&v6, Key);
  if ( v6 )
  {
    v7[0] = v6;
    Node = ATL::CAtlMap<ISaDeviceProxy *,Sarm::CEndpointResourcePool,ATL::CElementTraits<ISaDeviceProxy *>,ATL::CElementTraits<Sarm::CEndpointResourcePool>>::GetNode(
             a1,
             (unsigned int)v7,
             (unsigned int)&v10,
             (unsigned int)&v9,
             (__int64)v8);
    if ( Node )
      v2 = Node + 8;
  }
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v6);
  return v2;
}
