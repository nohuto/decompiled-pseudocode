/*
 * XREFs of ??0CEndpointCharacteristics@@QEAA@XZ @ 0x180050ADC
 * Callers:
 *     ??$MakeAndInitialize@VCEndpointCharacteristics@@V1@AEAPEBGAEAH@Details@WRL@Microsoft@@YAJPEAPEAVCEndpointCharacteristics@@AEAPEBGAEAH@Z @ 0x180050038 (--$MakeAndInitialize@VCEndpointCharacteristics@@V1@AEAPEBGAEAH@Details@WRL@Microsoft@@YAJPEAPEAV.c)
 * Callees:
 *     ??0SystemEffectDescriptor@@QEAA@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180052ED8 (--0SystemEffectDescriptor@@QEAA@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z.c)
 *     ??0CSpatialProperties@@QEAA@XZ @ 0x180054050 (--0CSpatialProperties@@QEAA@XZ.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180060FA8 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=13
CEndpointCharacteristics *__fastcall CEndpointCharacteristics::CEndpointCharacteristics(CEndpointCharacteristics *this)
{
  *((_DWORD *)this + 3) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IEndpointCharacteristics>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CEndpointCharacteristics::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  `eh vector constructor iterator'(
    (char *)this + 64,
    0x10uLL,
    4uLL,
    (void (*)(void *))CAudioSignalProcessingModeArray::CAudioSignalProcessingModeArray,
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::~CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>);
  *((_QWORD *)this + 16) = 0LL;
  *((_DWORD *)this + 34) = 0;
  *((_DWORD *)this + 35) = 0;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_BYTE *)this + 224) = 0;
  SystemEffectDescriptor::SystemEffectDescriptor(
    (CEndpointCharacteristics *)((char *)this + 232),
    eHostProcessConnector);
  SystemEffectDescriptor::SystemEffectDescriptor((CEndpointCharacteristics *)((char *)this + 328), eOffloadConnector);
  SystemEffectDescriptor::SystemEffectDescriptor((CEndpointCharacteristics *)((char *)this + 424), eLoopbackConnector);
  SystemEffectDescriptor::SystemEffectDescriptor(
    (CEndpointCharacteristics *)((char *)this + 520),
    eKeywordDetectorConnector);
  SystemEffectDescriptor::SystemEffectDescriptor(
    (CEndpointCharacteristics *)((char *)this + 616),
    eHostProcessConnector);
  SystemEffectDescriptor::SystemEffectDescriptor((CEndpointCharacteristics *)((char *)this + 712), eOffloadConnector);
  SystemEffectDescriptor::SystemEffectDescriptor((CEndpointCharacteristics *)((char *)this + 808), eLoopbackConnector);
  SystemEffectDescriptor::SystemEffectDescriptor(
    (CEndpointCharacteristics *)((char *)this + 904),
    eKeywordDetectorConnector);
  SystemEffectDescriptor::SystemEffectDescriptor(
    (CEndpointCharacteristics *)((char *)this + 1000),
    eHostProcessConnector);
  SystemEffectDescriptor::SystemEffectDescriptor((CEndpointCharacteristics *)((char *)this + 1096), eOffloadConnector);
  SystemEffectDescriptor::SystemEffectDescriptor((CEndpointCharacteristics *)((char *)this + 1192), eLoopbackConnector);
  SystemEffectDescriptor::SystemEffectDescriptor(
    (CEndpointCharacteristics *)((char *)this + 1288),
    eKeywordDetectorConnector);
  `eh vector constructor iterator'(
    (char *)this + 1400,
    0x18uLL,
    4uLL,
    (void (*)(void *))CAudioSignalProcessingModeMap::CAudioSignalProcessingModeMap,
    (void (*)(void *))CAudioSignalProcessingModeMap::~CAudioSignalProcessingModeMap);
  `eh vector constructor iterator'(
    (char *)this + 1496,
    0x10uLL,
    4uLL,
    (void (*)(void *))CAudioSignalProcessingModeArray::CAudioSignalProcessingModeArray,
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::~CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>);
  `eh vector constructor iterator'(
    (char *)this + 1560,
    0x10uLL,
    4uLL,
    (void (*)(void *))CAudioSignalProcessingModeArray::CAudioSignalProcessingModeArray,
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::~CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>);
  CSpatialProperties::CSpatialProperties((CEndpointCharacteristics *)((char *)this + 1624));
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 8544), 0, 0);
  *((_DWORD *)this + 2146) = 100;
  *((_WORD *)this + 4294) = 0;
  return this;
}
