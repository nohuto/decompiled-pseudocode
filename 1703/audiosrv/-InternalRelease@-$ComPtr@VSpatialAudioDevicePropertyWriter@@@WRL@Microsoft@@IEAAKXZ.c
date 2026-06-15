/*
 * XREFs of ?InternalRelease@?$ComPtr@VSpatialAudioDevicePropertyWriter@@@WRL@Microsoft@@IEAAKXZ @ 0x1800464B0
 * Callers:
 *     Create_SpatialAudioDevicePropertyWriter @ 0x180046350 (Create_SpatialAudioDevicePropertyWriter.c)
 *     ??$MakeAndInitialize@VSpatialAudioDevicePropertyWriter@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioDevicePropertyWriter@@AEAPEBG@Z @ 0x18004640C (--$MakeAndInitialize@VSpatialAudioDevicePropertyWriter@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEA.c)
 *     ??1?$ComPtr@VSpatialAudioDevicePropertyWriter@@@WRL@Microsoft@@QEAA@XZ @ 0x18007D404 (--1-$ComPtr@VSpatialAudioDevicePropertyWriter@@@WRL@Microsoft@@QEAA@XZ.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UISpatialAudioDevicePropertyWriter@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800464F0 (-Release@-$RuntimeClass@U-$InterfaceList@UISpatialAudioDevicePropertyWriter@@U-$InterfaceList@VF.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<SpatialAudioDevicePropertyWriter>::InternalRelease(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 (*v4)(void); // rax

  result = 0LL;
  v3 = *a1;
  if ( v3 )
  {
    *a1 = 0LL;
    v4 = *(__int64 (**)(void))(*(_QWORD *)v3 + 16LL);
    if ( v4 == Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ISpatialAudioDevicePropertyWriter,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
      return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ISpatialAudioDevicePropertyWriter,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release();
    else
      return v4();
  }
  return result;
}
