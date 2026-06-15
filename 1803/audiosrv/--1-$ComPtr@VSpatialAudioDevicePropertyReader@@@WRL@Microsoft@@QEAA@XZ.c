/*
 * XREFs of ??1?$ComPtr@VSpatialAudioDevicePropertyReader@@@WRL@Microsoft@@QEAA@XZ @ 0x180099F34
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_SpatialAudioDevicePropertyReader_SpatialAudioDevicePropertyReader_unsigned_short_const_____ptr64_&___ptr64_IPropertyStore_____ptr64_&___ptr64__::_1_::dtor$1 @ 0x180066BB5 (_Microsoft--WRL--Details--MakeAndInitialize_SpatialAudioDevicePropertyReader_Spatia_ea_180066BB5.c)
 *     _CEndpointCharacteristics::GetVirtualSurroundEffectMode_::_1_::dtor$0 @ 0x180068084 (_CEndpointCharacteristics--GetVirtualSurroundEffectMode_--_1_--dtor$0.c)
 *     _CEndpointCharacteristics::GetSpatialRenderingMode_::_1_::dtor$0 @ 0x1800EBEAD (_CEndpointCharacteristics--GetSpatialRenderingMode_--_1_--dtor$0.c)
 *     _SpatialAudioMetadataDictionary::LoadDictionary_::_1_::dtor$2 @ 0x18010735A (_SpatialAudioMetadataDictionary--LoadDictionary_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<SpatialAudioDevicePropertyReader>::~ComPtr<SpatialAudioDevicePropertyReader>(
        __int64 *a1)
{
  return Microsoft::WRL::ComPtr<ISpatialAudioDevicePropertyReader>::InternalRelease(a1);
}
