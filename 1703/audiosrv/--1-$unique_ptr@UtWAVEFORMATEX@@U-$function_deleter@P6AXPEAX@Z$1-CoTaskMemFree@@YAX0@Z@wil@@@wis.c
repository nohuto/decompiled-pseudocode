/*
 * XREFs of ??1?$unique_ptr@UtWAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x18007B154
 * Callers:
 *     _DerivePeriodicityForStream_::_1_::dtor$0 @ 0x180058F70 (_DerivePeriodicityForStream_--_1_--dtor$0.c)
 *     _DerivePeriodicityForStream_::_1_::dtor$1 @ 0x180058F7C (_DerivePeriodicityForStream_--_1_--dtor$1.c)
 *     _DerivePeriodicityForStream_::_1_::dtor$2 @ 0x180058F88 (_DerivePeriodicityForStream_--_1_--dtor$2.c)
 *     _DerivePeriodicityForStream_::_1_::dtor$3 @ 0x180058F94 (_DerivePeriodicityForStream_--_1_--dtor$3.c)
 *     _DerivePeriodicityForStream_::_1_::dtor$4 @ 0x180058FA0 (_DerivePeriodicityForStream_--_1_--dtor$4.c)
 *     _DeriveStreamGroupParametersForStream_::_1_::dtor$1 @ 0x1800598DC (_DeriveStreamGroupParametersForStream_--_1_--dtor$1.c)
 *     _CProcessSubmixProxy::_CProcessSubmixProxy_::_1_::dtor$6 @ 0x180059A0D (_CProcessSubmixProxy--_CProcessSubmixProxy_--_1_--dtor$6.c)
 *     _InitializeStreamAndModeDescriptors_::_1_::dtor$1 @ 0x18005A2CC (_InitializeStreamAndModeDescriptors_--_1_--dtor$1.c)
 *     _InitializeStreamAndModeDescriptors_::_1_::dtor$2 @ 0x18005A2D8 (_InitializeStreamAndModeDescriptors_--_1_--dtor$2.c)
 *     _InitializeStreamAndModeDescriptors_::_1_::dtor$3 @ 0x18005A2E4 (_InitializeStreamAndModeDescriptors_--_1_--dtor$3.c)
 *     _InitializeStreamAndModeDescriptors_::_1_::dtor$6 @ 0x18005A32C (_InitializeStreamAndModeDescriptors_--_1_--dtor$6.c)
 *     _InitializeStreamAndModeDescriptors_::_1_::dtor$7 @ 0x18005A338 (_InitializeStreamAndModeDescriptors_--_1_--dtor$7.c)
 *     _InitializeStreamAndModeDescriptors_::_1_::dtor$13 @ 0x18005A380 (_InitializeStreamAndModeDescriptors_--_1_--dtor$13.c)
 *     _CEndpointCharacteristics::RefreshDefaultConnectorFormats_::_1_::dtor$0 @ 0x1800BE8D6 (_CEndpointCharacteristics--RefreshDefaultConnectorFormats_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall wistd::unique_ptr<tWAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<tWAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    CoTaskMemFree(v1);
}
