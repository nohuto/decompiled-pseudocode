/*
 * XREFs of ??1?$MakeAllocator@VCAPOWrapperClient@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18005BB78
 * Callers:
 *     _CAudioStream::_CAudioStream_::_1_::dtor$3 @ 0x180039370 (_CAudioStream--_CAudioStream_--_1_--dtor$3.c)
 *     _CAudioStream::_CAudioStream_::_1_::dtor$4 @ 0x180039380 (_CAudioStream--_CAudioStream_--_1_--dtor$4.c)
 *     _CAudioStream::CAudioStream_::_1_::dtor$3 @ 0x18003948A (_CAudioStream--CAudioStream_--_1_--dtor$3.c)
 *     _CAudioStream::CAudioStream_::_1_::dtor$4 @ 0x18003949A (_CAudioStream--CAudioStream_--_1_--dtor$4.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CAPOWrapperClient_IAudioProcessingObject_unsigned_short_const_____ptr64_&___ptr64_enum_APO_TYPE_&___ptr64__GUID_const_&___ptr64__::_1_::dtor$0 @ 0x180039610 (_Microsoft--WRL--Details--MakeAndInitialize_CAPOWrapperClient_IAudioProcessingObject_unsigned_sh.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_SpatialAudioDeviceStateReader_SpatialAudioDeviceStateReader_unsigned_short_const_____ptr64_&___ptr64_IPropertyStore_____ptr64_&___ptr64__::_1_::dtor$0 @ 0x180039B17 (_Microsoft--WRL--Details--MakeAndInitialize_SpatialAudioDeviceStateReader_SpatialAudioDeviceStat.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_SpatialAudioDevicePropertyReader_SpatialAudioDevicePropertyReader_unsigned_short_const_____ptr64_&___ptr64_IPropertyStore_____ptr64_&___ptr64__::_1_::dtor$0 @ 0x180039B2F (_Microsoft--WRL--Details--MakeAndInitialize_SpatialAudioDevicePropertyReader_SpatialAudioDeviceP.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_SpatialAudioDevicePropertyWriter_SpatialAudioDevicePropertyWriter_unsigned_short_const_____ptr64_&___ptr64_IPropertyStore_____ptr64_&___ptr64__::_1_::dtor$0 @ 0x1800CF9CC (_Microsoft--WRL--Details--MakeAndInitialize_SpatialAudioDevicePropertyWriter_SpatialAudioDeviceP.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_SpatialAudioDeviceStateWriter_SpatialAudioDeviceStateWriter_unsigned_short_const_____ptr64_&___ptr64_IPropertyStore_____ptr64_&___ptr64__::_1_::dtor$0 @ 0x1800D3920 (_Microsoft--WRL--Details--MakeAndInitialize_SpatialAudioDeviceStateWriter_SpatialAudioDeviceStat.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_SpatialAudioEncoderProperties_SpatialAudioEncoderProperties__GUID_const_&___ptr64_int_&___ptr64__::_1_::dtor$0 @ 0x1800D63B6 (_Microsoft--WRL--Details--MakeAndInitialize_SpatialAudioEncoderProperties_SpatialAudioEncoderPro.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_SpatialAudioMetadataDictionary_SpatialAudioMetadataDictionary_enum_DictionaryLoadKind__GUID_const_&___ptr64_unsigned_short_&___ptr64_std::nullptr_t_unsigned_char_____ptr64_&___ptr64_unsigned_int_&___ptr64__::_1_::dtor$0 @ 0x1800D82D7 (_Microsoft--WRL--Details--MakeAndInitialize_SpatialAudioMetadataDictionary_SpatialAudioMetadataD.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180028D50 (--3@YAXPEAX@Z.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAllocator<CAPOWrapperClient>::~MakeAllocator<CAPOWrapperClient>(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
