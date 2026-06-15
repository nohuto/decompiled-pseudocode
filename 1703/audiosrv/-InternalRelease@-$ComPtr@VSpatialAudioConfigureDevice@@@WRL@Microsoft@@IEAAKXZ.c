/*
 * XREFs of ?InternalRelease@?$ComPtr@VSpatialAudioConfigureDevice@@@WRL@Microsoft@@IEAAKXZ @ 0x180046568
 * Callers:
 *     Create_SpatialAudioConfigureDevice @ 0x1800461F0 (Create_SpatialAudioConfigureDevice.c)
 *     ??$MakeAndInitialize@VSpatialAudioConfigureDevice@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioConfigureDevice@@AEAPEBG@Z @ 0x1800462AC (--$MakeAndInitialize@VSpatialAudioConfigureDevice@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVS.c)
 *     ??1?$ComPtr@VSpatialAudioConfigureDevice@@@WRL@Microsoft@@QEAA@XZ @ 0x18007D3FC (--1-$ComPtr@VSpatialAudioConfigureDevice@@@WRL@Microsoft@@QEAA@XZ.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UISpatialAudioConfigureDevice@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800465B0 (-Release@-$RuntimeClass@U-$InterfaceList@UISpatialAudioConfigureDevice@@U-$InterfaceList@VFtmBas.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<SpatialAudioConfigureDevice>::InternalRelease(__int64 *a1)
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
    if ( v4 == Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ISpatialAudioConfigureDevice,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
      return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ISpatialAudioConfigureDevice,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release();
    else
      return v4();
  }
  return result;
}
