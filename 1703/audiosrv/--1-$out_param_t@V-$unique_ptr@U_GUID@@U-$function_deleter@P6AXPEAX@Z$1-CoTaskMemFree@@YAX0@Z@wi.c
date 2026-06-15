/*
 * XREFs of ??1?$out_param_t@V?$unique_ptr@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x18007CEA8
 * Callers:
 *     _DerivePeriodicityForStream_::_1_::dtor$5 @ 0x180058FAC (_DerivePeriodicityForStream_--_1_--dtor$5.c)
 *     _DerivePeriodicityForStream_::_1_::dtor$6 @ 0x180058FB8 (_DerivePeriodicityForStream_--_1_--dtor$6.c)
 *     _DerivePeriodicityForStream_::_1_::dtor$7 @ 0x180058FC4 (_DerivePeriodicityForStream_--_1_--dtor$7.c)
 *     _DerivePeriodicityForStream_::_1_::dtor$8 @ 0x180058FD0 (_DerivePeriodicityForStream_--_1_--dtor$8.c)
 *     _DerivePeriodicityForStream_::_1_::dtor$9 @ 0x180058FDC (_DerivePeriodicityForStream_--_1_--dtor$9.c)
 *     _InitializeStreamAndModeDescriptors_::_1_::dtor$5 @ 0x18005A320 (_InitializeStreamAndModeDescriptors_--_1_--dtor$5.c)
 *     _InitializeStreamAndModeDescriptors_::_1_::dtor$10 @ 0x18005A35C (_InitializeStreamAndModeDescriptors_--_1_--dtor$10.c)
 *     _InitializeStreamAndModeDescriptors_::_1_::dtor$11 @ 0x18005A368 (_InitializeStreamAndModeDescriptors_--_1_--dtor$11.c)
 *     _InitializeStreamAndModeDescriptors_::_1_::dtor$15 @ 0x18005A3E0 (_InitializeStreamAndModeDescriptors_--_1_--dtor$15.c)
 *     _CEndpointCharacteristics::RefreshDefaultConnectorFormats_::_1_::dtor$1 @ 0x1800BE8E2 (_CEndpointCharacteristics--RefreshDefaultConnectorFormats_--_1_--dtor$1.c)
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
