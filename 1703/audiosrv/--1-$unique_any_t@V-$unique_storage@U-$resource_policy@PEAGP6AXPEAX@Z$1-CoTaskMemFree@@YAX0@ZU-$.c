/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18002F1EC
 * Callers:
 *     __lambda_667eb01a999704ac1c933d543c16abf4_::operator()_::_1_::dtor$0 @ 0x18004C845 (__lambda_667eb01a999704ac1c933d543c16abf4_--operator()_--_1_--dtor$0.c)
 *     _VerifyCriticalProcessing_::_1_::dtor$0 @ 0x180058E64 (_VerifyCriticalProcessing_--_1_--dtor$0.c)
 *     _EnableSpatialOnSpeakerEndpoint_::_1_::dtor$1 @ 0x180058EC4 (_EnableSpatialOnSpeakerEndpoint_--_1_--dtor$1.c)
 *     _SpatialPolicy::DetectComboEndpoint_::_1_::dtor$1 @ 0x180058EDC (_SpatialPolicy--DetectComboEndpoint_--_1_--dtor$1.c)
 *     _SpatialPolicy::OnPropertyChange_::_1_::dtor$1 @ 0x180058F64 (_SpatialPolicy--OnPropertyChange_--_1_--dtor$1.c)
 *     _CEndpointCharacteristics::AugmentOEMSpeechProcessingSupport_::_1_::dtor$4 @ 0x180059780 (_CEndpointCharacteristics--AugmentOEMSpeechProcessingSupport_--_1_--dtor$4.c)
 *     _DeriveStreamGroupParametersForStream_::_1_::dtor$0 @ 0x1800598D0 (_DeriveStreamGroupParametersForStream_--_1_--dtor$0.c)
 *     _CProcessSubmixProxy::_CProcessSubmixProxy_::_1_::dtor$3 @ 0x1800599D7 (_CProcessSubmixProxy--_CProcessSubmixProxy_--_1_--dtor$3.c)
 *     _CSaDeviceProxy::_CSaDeviceProxy_::_1_::dtor$4 @ 0x180059C3C (_CSaDeviceProxy--_CSaDeviceProxy_--_1_--dtor$4.c)
 *     _CAudioResourceManager::RetryGetSaDeviceForExclusive_::_1_::dtor$0 @ 0x1800ACAED (_CAudioResourceManager--RetryGetSaDeviceForExclusive_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    CoTaskMemFree(v1);
}
