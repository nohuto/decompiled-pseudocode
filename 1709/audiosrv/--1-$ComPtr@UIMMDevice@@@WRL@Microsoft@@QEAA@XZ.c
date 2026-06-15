/*
 * XREFs of ??1?$ComPtr@UIMMDevice@@@WRL@Microsoft@@QEAA@XZ @ 0x18005C6B0
 * Callers:
 *     _DeriveDeviceGraphFormatsForStream_::_1_::dtor$5 @ 0x180037D11 (_DeriveDeviceGraphFormatsForStream_--_1_--dtor$5.c)
 *     _SpatialAudioDevicePropertyReader::LoadDeviceProperties_::_1_::dtor$0 @ 0x180039747 (_SpatialAudioDevicePropertyReader--LoadDeviceProperties_--_1_--dtor$0.c)
 *     _SpatialAudioIO::Initialize_::_1_::dtor$0 @ 0x180039AFF (_SpatialAudioIO--Initialize_--_1_--dtor$0.c)
 *     _SpatialAudioIO::Initialize_::_1_::dtor$1 @ 0x180039B0B (_SpatialAudioIO--Initialize_--_1_--dtor$1.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_SpatialAudioDevicePropertyReader_SpatialAudioDevicePropertyReader_unsigned_short_const_____ptr64_&___ptr64_IPropertyStore_____ptr64_&___ptr64__::_1_::dtor$1 @ 0x180039B3B (_Microsoft--WRL--Details--MakeAndInitialize_SpatialAudioDevicePropertyReader_Spatia_ea_180039B3B.c)
 *     _CEndpointCharacteristics::GetSpatialRenderingMode_::_1_::dtor$0 @ 0x1800B62A5 (_CEndpointCharacteristics--GetSpatialRenderingMode_--_1_--dtor$0.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_SpatialAudioDevicePropertyWriter_SpatialAudioDevicePropertyWriter_unsigned_short_const_____ptr64_&___ptr64_IPropertyStore_____ptr64_&___ptr64__::_1_::dtor$1 @ 0x1800CF9D8 (_Microsoft--WRL--Details--MakeAndInitialize_SpatialAudioDevicePropertyWriter_Spatia_ea_1800CF9D8.c)
 *     _SpatialAudioDevicePropertyWriter::RuntimeClassInitialize_::_1_::dtor$0 @ 0x1800D09E5 (_SpatialAudioDevicePropertyWriter--RuntimeClassInitialize_--_1_--dtor$0.c)
 *     _SpatialAudioDevicePropertyWriter::RuntimeClassInitialize_::_1_::dtor$1 @ 0x1800D09F1 (_SpatialAudioDevicePropertyWriter--RuntimeClassInitialize_--_1_--dtor$1.c)
 *     _SpatialAudioDevicePropertyReader::CreateMetadataDictionary_::_1_::dtor$0 @ 0x1800D1A52 (_SpatialAudioDevicePropertyReader--CreateMetadataDictionary_--_1_--dtor$0.c)
 *     _SpatialAudioConfigureDevice::ConfigureDolbyAtmosHeadphonesEncoder_::_1_::dtor$0 @ 0x1800D46E8 (_SpatialAudioConfigureDevice--ConfigureDolbyAtmosHeadphonesEncoder_--_1_--dtor$0.c)
 *     _SpatialAudioConfigureDevice::ConfigureDolbyAtmosMATEncoder_::_1_::dtor$0 @ 0x1800D4B4F (_SpatialAudioConfigureDevice--ConfigureDolbyAtmosMATEncoder_--_1_--dtor$0.c)
 *     _SpatialAudioConfigureDevice::ConfigureDolbyAtmosTwoSpeaker_::_1_::dtor$0 @ 0x1800D4FB7 (_SpatialAudioConfigureDevice--ConfigureDolbyAtmosTwoSpeaker_--_1_--dtor$0.c)
 *     _SpatialAudioConfigureDevice::ConfigureForSpatialAudioEncoder_::_1_::dtor$0 @ 0x1800D5250 (_SpatialAudioConfigureDevice--ConfigureForSpatialAudioEncoder_--_1_--dtor$0.c)
 *     _SpatialAudioConfigureDevice::ConfigureForSpatialAudioEncoderSettings_::_1_::dtor$1 @ 0x1800D58B3 (_SpatialAudioConfigureDevice--ConfigureForSpatialAudioEncoderSettings_--_1_--dtor$1.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_SpatialAudioEncoderProperties_SpatialAudioEncoderProperties__GUID_const_&___ptr64_int_&___ptr64__::_1_::dtor$1 @ 0x1800D63C2 (_Microsoft--WRL--Details--MakeAndInitialize_SpatialAudioEncoderProperties_SpatialAu_ea_1800D63C2.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_SpatialAudioMetadataDictionary_SpatialAudioMetadataDictionary_enum_DictionaryLoadKind__GUID_const_&___ptr64_unsigned_short_&___ptr64_std::nullptr_t_unsigned_char_____ptr64_&___ptr64_unsigned_int_&___ptr64__::_1_::dtor$1 @ 0x1800D82E3 (_Microsoft--WRL--Details--MakeAndInitialize_SpatialAudioMetadataDictionary_SpatialA_ea_1800D82E3.c)
 *     _SpatialAudioMetadataDictionary::LoadDictionary_::_1_::dtor$0 @ 0x1800D9082 (_SpatialAudioMetadataDictionary--LoadDictionary_--_1_--dtor$0.c)
 *     _SpatialAudioMetadataDictionary::LoadDictionary_::_1_::dtor$2 @ 0x1800D908E (_SpatialAudioMetadataDictionary--LoadDictionary_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<IMMDevice>::~ComPtr<IMMDevice>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(a1);
}
