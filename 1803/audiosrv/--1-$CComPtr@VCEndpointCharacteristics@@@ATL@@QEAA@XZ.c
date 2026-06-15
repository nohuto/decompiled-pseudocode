/*
 * XREFs of ??1?$CComPtr@VCEndpointCharacteristics@@@ATL@@QEAA@XZ @ 0x180098358
 * Callers:
 *     _CPolicyConfig::ProcessPropertyChange_::_1_::dtor$1 @ 0x180067C37 (_CPolicyConfig--ProcessPropertyChange_--_1_--dtor$1.c)
 *     _CVADServer::Initialize_::_1_::dtor$0 @ 0x180069630 (_CVADServer--Initialize_--_1_--dtor$0.c)
 *     _CEndpointCharacteristicsCache::PopulateEndpointCharacteristicsCache_::_1_::dtor$3 @ 0x180069C6A (_CEndpointCharacteristicsCache--PopulateEndpointCharacteristicsCache_--_1_--dtor$3.c)
 *     _CEndpointCharacteristicsCache::PopulateEndpointCharacteristicsCache_::_1_::dtor$6 @ 0x180069C8E (_CEndpointCharacteristicsCache--PopulateEndpointCharacteristicsCache_--_1_--dtor$6.c)
 *     _CEndpointCharacteristicsCache::PopulateEndpointCharacteristicsCache_::_1_::dtor$9 @ 0x180069CB2 (_CEndpointCharacteristicsCache--PopulateEndpointCharacteristicsCache_--_1_--dtor$9.c)
 *     _CEndpointCharacteristicsCache::PopulateEndpointCharacteristicsCache_::_1_::dtor$12 @ 0x180069CD6 (_CEndpointCharacteristicsCache--PopulateEndpointCharacteristicsCache_--_1_--dtor$12.c)
 *     _CEndpointCharacteristicsCache::PopulateEndpointCharacteristicsCache_::_1_::dtor$16 @ 0x180069D06 (_CEndpointCharacteristicsCache--PopulateEndpointCharacteristicsCache_--_1_--dtor$16.c)
 *     _CAudioSrv::ProcessDeviceInternal_::_1_::dtor$8 @ 0x18009DF0B (_CAudioSrv--ProcessDeviceInternal_--_1_--dtor$8.c)
 *     _CPolicyConfig::UpdateRenderingEndpointsSpatialSettings_::_1_::dtor$1 @ 0x1800BF48C (_CPolicyConfig--UpdateRenderingEndpointsSpatialSettings_--_1_--dtor$1.c)
 *     AudioServerIsRawStreamSupported @ 0x1800C5500 (AudioServerIsRawStreamSupported.c)
 *     _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$0 @ 0x1800D13C2 (_CAudioResourceManager--CreateInternalLoopbackStream_--_1_--dtor$0.c)
 *     _CAudioResourceManager::ReevaluateSaDeviceSettings_::_1_::dtor$0 @ 0x1800D245F (_CAudioResourceManager--ReevaluateSaDeviceSettings_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ATL::CComPtr<CEndpointCharacteristics>::~CComPtr<CEndpointCharacteristics>(__int64 *a1)
{
  __int64 v1; // rcx
  unsigned int (__fastcall *v2)(__int64); // rax

  v1 = *a1;
  if ( v1 )
  {
    v2 = *(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL);
    if ( v2 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release(v1);
    else
      v2(v1);
  }
}
