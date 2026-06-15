/*
 * XREFs of ??1?$MakeAllocator@VCAPOWrapperClient@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18007C34C
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CAPOWrapperClient_IAudioProcessingObject_unsigned_short_const_____ptr64_&___ptr64_enum_APO_TYPE_&___ptr64__GUID_const_&___ptr64__::_1_::dtor$1 @ 0x18005A48C (_Microsoft--WRL--Details--MakeAndInitialize_CAPOWrapperClient_IAudioProcessingObjec_ea_18005A48C.c)
 *     _CAudioStream::_CAudioStream_::_1_::dtor$3 @ 0x18005A7F0 (_CAudioStream--_CAudioStream_--_1_--dtor$3.c)
 *     _CAudioStream::_CAudioStream_::_1_::dtor$4 @ 0x18005A800 (_CAudioStream--_CAudioStream_--_1_--dtor$4.c)
 *     _CAudioStream::CAudioStream_::_1_::dtor$3 @ 0x18005A940 (_CAudioStream--CAudioStream_--_1_--dtor$3.c)
 *     _CAudioStream::CAudioStream_::_1_::dtor$4 @ 0x18005A950 (_CAudioStream--CAudioStream_--_1_--dtor$4.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_SpatialAudioConfigureDevice_SpatialAudioConfigureDevice_unsigned_short_const_____ptr64_&___ptr64__::_1_::dtor$1 @ 0x18005C5B7 (_Microsoft--WRL--Details--MakeAndInitialize_SpatialAudioConfigureDevice_SpatialAudi_ea_18005C5B7.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_SpatialAudioDevicePropertyWriter_SpatialAudioDevicePropertyWriter_unsigned_short_const_____ptr64_&___ptr64__::_1_::dtor$1 @ 0x18005C5CF (_Microsoft--WRL--Details--MakeAndInitialize_SpatialAudioDevicePropertyWriter_Spatia_ea_18005C5CF.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_SpatialAudioEncoderProperties_SpatialAudioEncoderProperties__GUID_const_&___ptr64_int_&___ptr64__::_1_::dtor$1 @ 0x1800CAAEF (_Microsoft--WRL--Details--MakeAndInitialize_SpatialAudioEncoderProperties_SpatialAu_ea_1800CAAEF.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180025860 (--3@YAXPEAX@Z.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAllocator<CAPOWrapperClient>::~MakeAllocator<CAPOWrapperClient>(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
