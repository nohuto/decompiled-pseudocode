/*
 * XREFs of ?InternalRelease@?$ComPtr@UISpatialAudioDevicePropertyReader@@@WRL@Microsoft@@IEAAKXZ @ 0x18004BF44
 * Callers:
 *     Create_SpatialAudioDevicePropertyReader @ 0x18004BFE0 (Create_SpatialAudioDevicePropertyReader.c)
 *     ??$MakeAndInitialize@VSpatialAudioDevicePropertyReader@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioDevicePropertyReader@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x18004C094 (--$MakeAndInitialize@VSpatialAudioDevicePropertyReader@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Detail.c)
 *     ?GetVirtualSurroundEffectMode@CEndpointCharacteristics@@QEAAIXZ @ 0x1800509E4 (-GetVirtualSurroundEffectMode@CEndpointCharacteristics@@QEAAIXZ.c)
 *     ??1?$ComPtr@VSpatialAudioDevicePropertyReader@@@WRL@Microsoft@@QEAA@XZ @ 0x180099F34 (--1-$ComPtr@VSpatialAudioDevicePropertyReader@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?GetSpatialRenderingMode@CEndpointCharacteristics@@QEAAXPEAI@Z @ 0x1800EBE40 (-GetSpatialRenderingMode@CEndpointCharacteristics@@QEAAXPEAI@Z.c)
 *     ?LoadDictionary@SpatialAudioMetadataDictionary@@AEAAJW4DictionaryLoadKind@@AEBU_GUID@@GPEBG@Z @ 0x180106F2C (-LoadDictionary@SpatialAudioMetadataDictionary@@AEAAJW4DictionaryLoadKind@@AEBU_GUID@@GPEBG@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISpatialAudioDevicePropertyReader@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18004C2A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISp_ea_18004C2A0.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<ISpatialAudioDevicePropertyReader>::InternalRelease(__int64 *a1)
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
    if ( v4 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISpatialAudioDevicePropertyReader,Microsoft::WRL::FtmBase>::Release )
      return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISpatialAudioDevicePropertyReader,Microsoft::WRL::FtmBase>::Release();
    else
      return v4();
  }
  return result;
}
