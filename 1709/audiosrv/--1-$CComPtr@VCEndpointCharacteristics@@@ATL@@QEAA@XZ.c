/*
 * XREFs of ??1?$CComPtr@VCEndpointCharacteristics@@@ATL@@QEAA@XZ @ 0x18005B8BC
 * Callers:
 *     _CPolicyConfig::ProcessPropertyChange_::_1_::dtor$1 @ 0x180037BF0 (_CPolicyConfig--ProcessPropertyChange_--_1_--dtor$1.c)
 *     _CVADServer::Initialize_::_1_::dtor$0 @ 0x1800399DC (_CVADServer--Initialize_--_1_--dtor$0.c)
 *     _CAudioSrv::ProcessDeviceInternal_::_1_::dtor$7 @ 0x180062E2D (_CAudioSrv--ProcessDeviceInternal_--_1_--dtor$7.c)
 *     _CPolicyConfig::SetDeviceFormatInternal_::_1_::dtor$1 @ 0x180087E14 (_CPolicyConfig--SetDeviceFormatInternal_--_1_--dtor$1.c)
 *     _CPolicyConfig::UpdateRenderingEndpointsSpatialSettings_::_1_::dtor$1 @ 0x1800895CC (_CPolicyConfig--UpdateRenderingEndpointsSpatialSettings_--_1_--dtor$1.c)
 *     AudioServerIsRawStreamSupported @ 0x1800900C0 (AudioServerIsRawStreamSupported.c)
 *     _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$0 @ 0x18009A62B (_CAudioResourceManager--CreateInternalLoopbackStream_--_1_--dtor$0.c)
 *     _CAudioResourceManager::ReevaluateSaDeviceSettings_::_1_::dtor$0 @ 0x18009B435 (_CAudioResourceManager--ReevaluateSaDeviceSettings_--_1_--dtor$0.c)
 *     _CEndpointCharacteristicsCache::PopulateEndpointCharacteristicsCache_::_1_::dtor$3 @ 0x1800B7490 (_CEndpointCharacteristicsCache--PopulateEndpointCharacteristicsCache_--_1_--dtor$3.c)
 *     _CEndpointCharacteristicsCache::PopulateEndpointCharacteristicsCache_::_1_::dtor$6 @ 0x1800B74B4 (_CEndpointCharacteristicsCache--PopulateEndpointCharacteristicsCache_--_1_--dtor$6.c)
 *     _CEndpointCharacteristicsCache::PopulateEndpointCharacteristicsCache_::_1_::dtor$9 @ 0x1800B74D8 (_CEndpointCharacteristicsCache--PopulateEndpointCharacteristicsCache_--_1_--dtor$9.c)
 *     _CEndpointCharacteristicsCache::PopulateEndpointCharacteristicsCache_::_1_::dtor$12 @ 0x1800B74FC (_CEndpointCharacteristicsCache--PopulateEndpointCharacteristicsCache_--_1_--dtor$12.c)
 *     _CEndpointCharacteristicsCache::PopulateEndpointCharacteristicsCache_::_1_::dtor$16 @ 0x1800B752C (_CEndpointCharacteristicsCache--PopulateEndpointCharacteristicsCache_--_1_--dtor$16.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ATL::CComPtr<CEndpointCharacteristics>::~CComPtr<CEndpointCharacteristics>(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *v1; // rcx
  void (*v2)(void); // rax

  v1 = *a1;
  if ( v1 )
  {
    v2 = *(void (**)(void))(*(_QWORD *)v1 + 16LL);
    if ( (char *)v2 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release(v1);
    else
      v2();
  }
}
