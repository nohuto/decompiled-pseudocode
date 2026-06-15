/*
 * XREFs of ??1?$MakeAllocator@VCAPOWrapperClient@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180098708
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_SpatialAudioDevicePropertyWriter_SpatialAudioDevicePropertyWriter_unsigned_short_const_____ptr64_&___ptr64_IPropertyStore_____ptr64_&___ptr64__::_1_::dtor$0 @ 0x180066B49 (_Microsoft--WRL--Details--MakeAndInitialize_SpatialAudioDevicePropertyWriter_SpatialAudioDeviceP.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_SpatialAudioDeviceStateWriter_SpatialAudioDeviceStateWriter_unsigned_short_const_____ptr64_&___ptr64_IPropertyStore_____ptr64_&___ptr64__::_1_::dtor$0 @ 0x180066B61 (_Microsoft--WRL--Details--MakeAndInitialize_SpatialAudioDeviceStateWriter_SpatialAudioDeviceStat.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_SpatialAudioDevicePropertyReader_SpatialAudioDevicePropertyReader_unsigned_short_const_____ptr64_&___ptr64_IPropertyStore_____ptr64_&___ptr64__::_1_::dtor$0 @ 0x180066BA9 (_Microsoft--WRL--Details--MakeAndInitialize_SpatialAudioDevicePropertyReader_SpatialAudioDeviceP.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_SpatialAudioDeviceStateReader_SpatialAudioDeviceStateReader_unsigned_short_const_____ptr64_&___ptr64_IPropertyStore_____ptr64_&___ptr64__::_1_::dtor$0 @ 0x180066BCD (_Microsoft--WRL--Details--MakeAndInitialize_SpatialAudioDeviceStateReader_SpatialAudioDeviceStat.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CAPOWrapperClient_IAudioProcessingObject_unsigned_short_const_____ptr64_&___ptr64_enum_APO_TYPE_&___ptr64__GUID_const_&___ptr64__::_1_::dtor$0 @ 0x180069F00 (_Microsoft--WRL--Details--MakeAndInitialize_CAPOWrapperClient_IAudioProcessingObject_unsigned_sh.c)
 *     _CAudioStream::CAudioStream_::_1_::dtor$3 @ 0x18006A070 (_CAudioStream--CAudioStream_--_1_--dtor$3.c)
 *     _CAudioStream::CAudioStream_::_1_::dtor$4 @ 0x18006A080 (_CAudioStream--CAudioStream_--_1_--dtor$4.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_SpatialAudioEncoderProperties_SpatialAudioEncoderProperties__GUID_const_&___ptr64_int_&___ptr64__::_1_::dtor$0 @ 0x180104696 (_Microsoft--WRL--Details--MakeAndInitialize_SpatialAudioEncoderProperties_SpatialAudioEncoderPro.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_SpatialAudioMetadataDictionary_SpatialAudioMetadataDictionary_enum_DictionaryLoadKind__GUID_const_&___ptr64_unsigned_short_&___ptr64_std::nullptr_t_unsigned_char_____ptr64_&___ptr64_unsigned_int_&___ptr64__::_1_::dtor$0 @ 0x1801064EF (_Microsoft--WRL--Details--MakeAndInitialize_SpatialAudioMetadataDictionary_SpatialAudioMetadataD.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000B360 (--3@YAXPEAX@Z.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAllocator<CAPOWrapperClient>::~MakeAllocator<CAPOWrapperClient>(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
