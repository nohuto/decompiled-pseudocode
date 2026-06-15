/*
 * XREFs of ??1?$out_param_t@V?$unique_ptr@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x18005BBD0
 * Callers:
 *     _CreateSaDevice_::_1_::dtor$9 @ 0x180037DEC (_CreateSaDevice_--_1_--dtor$9.c)
 *     _CreateSaDevice_::_1_::dtor$10 @ 0x180037DF8 (_CreateSaDevice_--_1_--dtor$10.c)
 *     _InitializeStreamAndModeDescriptors_::_1_::dtor$5 @ 0x180037E7C (_InitializeStreamAndModeDescriptors_--_1_--dtor$5.c)
 *     _InitializeStreamAndModeDescriptors_::_1_::dtor$10 @ 0x180037EB8 (_InitializeStreamAndModeDescriptors_--_1_--dtor$10.c)
 *     _InitializeStreamAndModeDescriptors_::_1_::dtor$11 @ 0x180037EC4 (_InitializeStreamAndModeDescriptors_--_1_--dtor$11.c)
 *     _InitializeStreamAndModeDescriptors_::_1_::dtor$15 @ 0x180037EF4 (_InitializeStreamAndModeDescriptors_--_1_--dtor$15.c)
 *     _DerivePeriodicityForStream_::_1_::dtor$6 @ 0x18003A199 (_DerivePeriodicityForStream_--_1_--dtor$6.c)
 *     _DerivePeriodicityForStream_::_1_::dtor$7 @ 0x18003A1A5 (_DerivePeriodicityForStream_--_1_--dtor$7.c)
 *     _DerivePeriodicityForStream_::_1_::dtor$8 @ 0x18003A1B1 (_DerivePeriodicityForStream_--_1_--dtor$8.c)
 *     _DerivePeriodicityForStream_::_1_::dtor$9 @ 0x18003A1BD (_DerivePeriodicityForStream_--_1_--dtor$9.c)
 *     _DerivePeriodicityForStream_::_1_::dtor$10 @ 0x18003A1C9 (_DerivePeriodicityForStream_--_1_--dtor$10.c)
 *     _CVolumeStrip::RuntimeClassInitialize_::_1_::dtor$5 @ 0x18006E0EA (_CVolumeStrip--RuntimeClassInitialize_--_1_--dtor$5.c)
 *     _CPolicyConfig::SetDeviceFormat_::_1_::dtor$2 @ 0x180087A87 (_CPolicyConfig--SetDeviceFormat_--_1_--dtor$2.c)
 *     _CEndpointCharacteristics::RefreshDefaultConnectorFormats_::_1_::dtor$1 @ 0x1800B78CD (_CEndpointCharacteristics--RefreshDefaultConnectorFormats_--_1_--dtor$1.c)
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$12 @ 0x1800DCDFB (_FillAPOInitSystemEffectsStructure_--_1_--dtor$12.c)
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$17 @ 0x1800DCE2B (_FillAPOInitSystemEffectsStructure_--_1_--dtor$17.c)
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
