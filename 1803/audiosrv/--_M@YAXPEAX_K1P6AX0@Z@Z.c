/*
 * XREFs of ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180060AB8
 * Callers:
 *     _CPolicyConfig::CPolicyConfig_::_1_::dtor$4 @ 0x180066ADC (_CPolicyConfig--CPolicyConfig_--_1_--dtor$4.c)
 *     _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$4 @ 0x1800680CC (_CEndpointCharacteristics--CEndpointCharacteristics_--_1_--dtor$4.c)
 *     _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$12 @ 0x180068133 (_CEndpointCharacteristics--CEndpointCharacteristics_--_1_--dtor$12.c)
 *     _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$17 @ 0x180068164 (_CEndpointCharacteristics--CEndpointCharacteristics_--_1_--dtor$17.c)
 *     _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$22 @ 0x180068195 (_CEndpointCharacteristics--CEndpointCharacteristics_--_1_--dtor$22.c)
 *     _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$23 @ 0x1800681C6 (_CEndpointCharacteristics--CEndpointCharacteristics_--_1_--dtor$23.c)
 *     _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$24 @ 0x1800681F7 (_CEndpointCharacteristics--CEndpointCharacteristics_--_1_--dtor$24.c)
 *     _PhoneCallAudio::PhoneCallAudio_::_1_::dtor$6 @ 0x18006872B (_PhoneCallAudio--PhoneCallAudio_--_1_--dtor$6.c)
 *     _PhoneCallAudio::PhoneCallAudio_::_1_::dtor$7 @ 0x18006875C (_PhoneCallAudio--PhoneCallAudio_--_1_--dtor$7.c)
 *     _dynamic_atexit_destructor_for__ApoDataTemplate__ @ 0x18006B530 (_dynamic_atexit_destructor_for__ApoDataTemplate__.c)
 *     ??1AudioEffectsWatcher@@QEAA@XZ @ 0x1800A73BC (--1AudioEffectsWatcher@@QEAA@XZ.c)
 *     ??1CPolicyConfig@@UEAA@XZ @ 0x1800B826C (--1CPolicyConfig@@UEAA@XZ.c)
 *     _CPolicyConfig::_CPolicyConfig_::_1_::dtor$4 @ 0x1800B8426 (_CPolicyConfig--_CPolicyConfig_--_1_--dtor$4.c)
 *     _CPolicyConfig::_CPolicyConfig_::_1_::dtor$5 @ 0x1800B845A (_CPolicyConfig--_CPolicyConfig_--_1_--dtor$5.c)
 *     ??1CDeviceGraphObjectsStore@@UEAA@XZ @ 0x1800CC360 (--1CDeviceGraphObjectsStore@@UEAA@XZ.c)
 *     ??1CEndpointCharacteristics@@MEAA@XZ @ 0x1800E8EAC (--1CEndpointCharacteristics@@MEAA@XZ.c)
 *     ??1PhoneCallAudio@@MEAA@XZ @ 0x1800F9E30 (--1PhoneCallAudio@@MEAA@XZ.c)
 *     ??1DynamicAudioEndpointManager@@UEAA@XZ @ 0x1800FBA30 (--1DynamicAudioEndpointManager@@UEAA@XZ.c)
 * Callees:
 *     ?__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z @ 0x180060B24 (-__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
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
