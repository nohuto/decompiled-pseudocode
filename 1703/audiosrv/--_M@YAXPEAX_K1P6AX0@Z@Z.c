/*
 * XREFs of ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180048DB8
 * Callers:
 *     _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$4 @ 0x1800595C6 (_CEndpointCharacteristics--CEndpointCharacteristics_--_1_--dtor$4.c)
 *     _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$12 @ 0x18005962D (_CEndpointCharacteristics--CEndpointCharacteristics_--_1_--dtor$12.c)
 *     _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$17 @ 0x18005965E (_CEndpointCharacteristics--CEndpointCharacteristics_--_1_--dtor$17.c)
 *     _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$22 @ 0x18005968F (_CEndpointCharacteristics--CEndpointCharacteristics_--_1_--dtor$22.c)
 *     _CPolicyConfig::CPolicyConfig_::_1_::dtor$4 @ 0x18005C060 (_CPolicyConfig--CPolicyConfig_--_1_--dtor$4.c)
 *     _dynamic_atexit_destructor_for__ApoDataTemplate__ @ 0x18005C7C0 (_dynamic_atexit_destructor_for__ApoDataTemplate__.c)
 *     ??1AudioEffectsWatcher@@QEAA@XZ @ 0x180088E20 (--1AudioEffectsWatcher@@QEAA@XZ.c)
 *     _AudioEffectsWatcher::_AudioEffectsWatcher_::_1_::dtor$1 @ 0x180088EEF (_AudioEffectsWatcher--_AudioEffectsWatcher_--_1_--dtor$1.c)
 *     ??1CPolicyConfig@@UEAA@XZ @ 0x180098850 (--1CPolicyConfig@@UEAA@XZ.c)
 *     _CPolicyConfig::_CPolicyConfig_::_1_::dtor$4 @ 0x1800989F7 (_CPolicyConfig--_CPolicyConfig_--_1_--dtor$4.c)
 *     _CPolicyConfig::_CPolicyConfig_::_1_::dtor$5 @ 0x180098A28 (_CPolicyConfig--_CPolicyConfig_--_1_--dtor$5.c)
 *     ??_ECDeviceGraphObjectsStore@@UEAAPEAXI@Z @ 0x1800A89E0 (--_ECDeviceGraphObjectsStore@@UEAAPEAXI@Z.c)
 *     ??1CEndpointCharacteristics@@MEAA@XZ @ 0x1800BB67C (--1CEndpointCharacteristics@@MEAA@XZ.c)
 * Callees:
 *     ?__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z @ 0x180048E24 (-__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall `eh vector destructor iterator'(char *a1, __int64 a2, __int64 a3, void (*a4)(void *))
{
  __int64 v4; // rbx
  char *v6; // rdi

  v4 = a3;
  v6 = &a1[a3 * a2];
  while ( v4-- )
  {
    v6 -= a2;
    _guard_dispatch_icall_fptr();
  }
}
