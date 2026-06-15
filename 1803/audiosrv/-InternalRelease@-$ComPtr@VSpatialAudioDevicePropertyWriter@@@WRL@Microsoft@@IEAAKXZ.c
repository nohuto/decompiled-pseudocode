/*
 * XREFs of ?InternalRelease@?$ComPtr@VSpatialAudioDevicePropertyWriter@@@WRL@Microsoft@@IEAAKXZ @ 0x18004B988
 * Callers:
 *     Create_SpatialAudioDevicePropertyWriter @ 0x18004B4C4 (Create_SpatialAudioDevicePropertyWriter.c)
 *     ??$MakeAndInitialize@VSpatialAudioDevicePropertyWriter@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioDevicePropertyWriter@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x18004B578 (--$MakeAndInitialize@VSpatialAudioDevicePropertyWriter@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Detail.c)
 *     ??1?$ComPtr@VSpatialAudioDevicePropertyWriter@@@WRL@Microsoft@@QEAA@XZ @ 0x18009A108 (--1-$ComPtr@VSpatialAudioDevicePropertyWriter@@@WRL@Microsoft@@QEAA@XZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISpatialAudioDevicePropertyWriter@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18004B9D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISpatialAudioDev.c)
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
    if ( v4 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISpatialAudioDevicePropertyWriter,Microsoft::WRL::FtmBase>::Release )
      return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISpatialAudioDevicePropertyWriter,Microsoft::WRL::FtmBase>::Release();
    else
      return v4();
  }
  return result;
}
