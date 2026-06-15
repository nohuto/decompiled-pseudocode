/*
 * XREFs of ??1?$CComPtr@VCEndpointCharacteristics@@@ATL@@QEAA@XZ @ 0x18007C1B0
 * Callers:
 *     _CPolicyConfig::ProcessPropertyChange_::_1_::dtor$1 @ 0x180058F4C (_CPolicyConfig--ProcessPropertyChange_--_1_--dtor$1.c)
 *     _CVADServer::Initialize_::_1_::dtor$0 @ 0x18005AA50 (_CVADServer--Initialize_--_1_--dtor$0.c)
 *     _CEndpointCharacteristicsCache::PopulateEndpointCharacteristicsCache_::_1_::dtor$3 @ 0x18005C2FA (_CEndpointCharacteristicsCache--PopulateEndpointCharacteristicsCache_--_1_--dtor$3.c)
 *     _CEndpointCharacteristicsCache::PopulateEndpointCharacteristicsCache_::_1_::dtor$6 @ 0x18005C31E (_CEndpointCharacteristicsCache--PopulateEndpointCharacteristicsCache_--_1_--dtor$6.c)
 *     _CEndpointCharacteristicsCache::PopulateEndpointCharacteristicsCache_::_1_::dtor$9 @ 0x18005C342 (_CEndpointCharacteristicsCache--PopulateEndpointCharacteristicsCache_--_1_--dtor$9.c)
 *     _CEndpointCharacteristicsCache::PopulateEndpointCharacteristicsCache_::_1_::dtor$12 @ 0x18005C366 (_CEndpointCharacteristicsCache--PopulateEndpointCharacteristicsCache_--_1_--dtor$12.c)
 *     _CEndpointCharacteristicsCache::PopulateEndpointCharacteristicsCache_::_1_::dtor$16 @ 0x18005C396 (_CEndpointCharacteristicsCache--PopulateEndpointCharacteristicsCache_--_1_--dtor$16.c)
 *     _CAudioSrv::ProcessDeviceInternal_::_1_::dtor$7 @ 0x1800817CA (_CAudioSrv--ProcessDeviceInternal_--_1_--dtor$7.c)
 *     _CPolicyConfig::SetDeviceFormat_::_1_::dtor$3 @ 0x18009DDF2 (_CPolicyConfig--SetDeviceFormat_--_1_--dtor$3.c)
 *     _CPolicyConfig::SetDeviceFormatInternal_::_1_::dtor$1 @ 0x18009E12F (_CPolicyConfig--SetDeviceFormatInternal_--_1_--dtor$1.c)
 *     _CPolicyConfig::UpdateRenderingEndpointsSpatialSettings_::_1_::dtor$1 @ 0x18009F49E (_CPolicyConfig--UpdateRenderingEndpointsSpatialSettings_--_1_--dtor$1.c)
 *     AudioServerIsRawStreamSupported @ 0x1800A3810 (AudioServerIsRawStreamSupported.c)
 *     _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$0 @ 0x1800AB7F2 (_CAudioResourceManager--CreateInternalLoopbackStream_--_1_--dtor$0.c)
 *     _CAudioResourceManager::ReevaluateSaDeviceSettings_::_1_::dtor$0 @ 0x1800AC608 (_CAudioResourceManager--ReevaluateSaDeviceSettings_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
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
    if ( (char *)v2 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IEndpointCharacteristics,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IEndpointCharacteristics,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v1);
    else
      v2();
  }
}
