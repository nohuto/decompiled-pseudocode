/*
 * XREFs of ??1?$out_param_t@V?$unique_ptr@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x18009889C
 * Callers:
 *     _CVolumeStrip::RuntimeClassInitialize_::_1_::dtor$5 @ 0x180066994 (_CVolumeStrip--RuntimeClassInitialize_--_1_--dtor$5.c)
 *     _InitializeStreamAndModeDescriptors_::_1_::dtor$5 @ 0x180067464 (_InitializeStreamAndModeDescriptors_--_1_--dtor$5.c)
 *     _InitializeStreamAndModeDescriptors_::_1_::dtor$10 @ 0x1800674A0 (_InitializeStreamAndModeDescriptors_--_1_--dtor$10.c)
 *     _InitializeStreamAndModeDescriptors_::_1_::dtor$11 @ 0x1800674AC (_InitializeStreamAndModeDescriptors_--_1_--dtor$11.c)
 *     _InitializeStreamAndModeDescriptors_::_1_::dtor$15 @ 0x1800675B4 (_InitializeStreamAndModeDescriptors_--_1_--dtor$15.c)
 *     _CEndpointCharacteristics::DiscoverProcessingModeCapabilities_::_1_::dtor$1 @ 0x180068324 (_CEndpointCharacteristics--DiscoverProcessingModeCapabilities_--_1_--dtor$1.c)
 *     _CEndpointCharacteristics::DiscoverProcessingModeCapabilities_::_1_::dtor$2 @ 0x180068330 (_CEndpointCharacteristics--DiscoverProcessingModeCapabilities_--_1_--dtor$2.c)
 *     _CEndpointCharacteristics::DiscoverProcessingModeCapabilities_::_1_::dtor$3 @ 0x18006833C (_CEndpointCharacteristics--DiscoverProcessingModeCapabilities_--_1_--dtor$3.c)
 *     _CEndpointCharacteristics::DiscoverProcessingModeCapabilities_::_1_::dtor$7 @ 0x18006836C (_CEndpointCharacteristics--DiscoverProcessingModeCapabilities_--_1_--dtor$7.c)
 *     _CEndpointCharacteristics::DiscoverProcessingModeCapabilities_::_1_::dtor$8 @ 0x180068378 (_CEndpointCharacteristics--DiscoverProcessingModeCapabilities_--_1_--dtor$8.c)
 *     _CEndpointCharacteristics::DiscoverProcessingModeCapabilities_::_1_::dtor$9 @ 0x180068384 (_CEndpointCharacteristics--DiscoverProcessingModeCapabilities_--_1_--dtor$9.c)
 *     _CEndpointCharacteristics::DiscoverProcessingModeCapabilities_::_1_::dtor$12 @ 0x1800683A8 (_CEndpointCharacteristics--DiscoverProcessingModeCapabilities_--_1_--dtor$12.c)
 *     _CEndpointCharacteristics::DiscoverProcessingModeCapabilities_::_1_::dtor$13 @ 0x1800683B4 (_CEndpointCharacteristics--DiscoverProcessingModeCapabilities_--_1_--dtor$13.c)
 *     _CEndpointCharacteristics::DiscoverProcessingModeCapabilities_::_1_::dtor$16 @ 0x1800683D8 (_CEndpointCharacteristics--DiscoverProcessingModeCapabilities_--_1_--dtor$16.c)
 *     _CEndpointCharacteristics::DiscoverProcessingModeCapabilities_::_1_::dtor$17 @ 0x1800683E4 (_CEndpointCharacteristics--DiscoverProcessingModeCapabilities_--_1_--dtor$17.c)
 *     _DerivePeriodicityForStream_::_1_::dtor$6 @ 0x18006AB18 (_DerivePeriodicityForStream_--_1_--dtor$6.c)
 *     _DerivePeriodicityForStream_::_1_::dtor$7 @ 0x18006AB24 (_DerivePeriodicityForStream_--_1_--dtor$7.c)
 *     _DerivePeriodicityForStream_::_1_::dtor$8 @ 0x18006AB30 (_DerivePeriodicityForStream_--_1_--dtor$8.c)
 *     _DerivePeriodicityForStream_::_1_::dtor$9 @ 0x18006AB3C (_DerivePeriodicityForStream_--_1_--dtor$9.c)
 *     _DerivePeriodicityForStream_::_1_::dtor$10 @ 0x18006AB48 (_DerivePeriodicityForStream_--_1_--dtor$10.c)
 *     _CreateSaDevice_::_1_::dtor$9 @ 0x18006AF68 (_CreateSaDevice_--_1_--dtor$9.c)
 *     _CreateSaDevice_::_1_::dtor$10 @ 0x18006AF74 (_CreateSaDevice_--_1_--dtor$10.c)
 *     _CPolicyConfig::SetDeviceFormat_::_1_::dtor$2 @ 0x1800BDBAC (_CPolicyConfig--SetDeviceFormat_--_1_--dtor$2.c)
 *     _CEndpointCharacteristics::RefreshDefaultConnectorFormats_::_1_::dtor$1 @ 0x1800ECDFD (_CEndpointCharacteristics--RefreshDefaultConnectorFormats_--_1_--dtor$1.c)
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$12 @ 0x18010AFEA (_FillAPOInitSystemEffectsStructure_--_1_--dtor$12.c)
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$17 @ 0x18010B01A (_FillAPOInitSystemEffectsStructure_--_1_--dtor$17.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(
        void ***a1)
{
  void **v1; // rbx
  void **v2; // rdi
  void **v3; // rcx

  if ( *((_BYTE *)a1 + 16) )
  {
    v1 = a1[1];
    v2 = *a1;
    v3 = (void **)**a1;
    if ( v1 != v3 )
    {
      if ( v3 )
        CoTaskMemFree(v3);
      *v2 = v1;
    }
  }
}
