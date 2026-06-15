/*
 * XREFs of ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180032C98
 * Callers:
 *     ??1AudioEffectsWatcher@@QEAA@XZ @ 0x18000BB44 (--1AudioEffectsWatcher@@QEAA@XZ.c)
 *     _AudioEffectsWatcher::_AudioEffectsWatcher_::_1_::dtor$1 @ 0x180037F10 (_AudioEffectsWatcher--_AudioEffectsWatcher_--_1_--dtor$1.c)
 *     _dynamic_atexit_destructor_for__ApoDataTemplate__ @ 0x18003A4D0 (_dynamic_atexit_destructor_for__ApoDataTemplate__.c)
 *     _CPolicyConfig::CPolicyConfig_::_1_::dtor$4 @ 0x180060D54 (_CPolicyConfig--CPolicyConfig_--_1_--dtor$4.c)
 *     ??1CPolicyConfig@@UEAA@XZ @ 0x18007F5A0 (--1CPolicyConfig@@UEAA@XZ.c)
 *     _CPolicyConfig::_CPolicyConfig_::_1_::dtor$4 @ 0x18007F747 (_CPolicyConfig--_CPolicyConfig_--_1_--dtor$4.c)
 *     _CPolicyConfig::_CPolicyConfig_::_1_::dtor$5 @ 0x18007F778 (_CPolicyConfig--_CPolicyConfig_--_1_--dtor$5.c)
 *     ??_ECDeviceGraphObjectsStore@@UEAAPEAXI@Z @ 0x1800965F0 (--_ECDeviceGraphObjectsStore@@UEAAPEAXI@Z.c)
 *     _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$4 @ 0x1800AFACC (_CEndpointCharacteristics--CEndpointCharacteristics_--_1_--dtor$4.c)
 *     _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$12 @ 0x1800AFB33 (_CEndpointCharacteristics--CEndpointCharacteristics_--_1_--dtor$12.c)
 *     _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$17 @ 0x1800AFB64 (_CEndpointCharacteristics--CEndpointCharacteristics_--_1_--dtor$17.c)
 *     _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$22 @ 0x1800AFB95 (_CEndpointCharacteristics--CEndpointCharacteristics_--_1_--dtor$22.c)
 *     _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$23 @ 0x1800AFBC6 (_CEndpointCharacteristics--CEndpointCharacteristics_--_1_--dtor$23.c)
 *     ??1CEndpointCharacteristics@@MEAA@XZ @ 0x1800AFDCC (--1CEndpointCharacteristics@@MEAA@XZ.c)
 *     _PhoneCallAudio::PhoneCallAudio_::_1_::dtor$4 @ 0x1800C790F (_PhoneCallAudio--PhoneCallAudio_--_1_--dtor$4.c)
 *     ??1PhoneCallAudio@@MEAA@XZ @ 0x1800C7948 (--1PhoneCallAudio@@MEAA@XZ.c)
 *     _PhoneCallAudio::_PhoneCallAudio_::_1_::dtor$4 @ 0x1800C7A78 (_PhoneCallAudio--_PhoneCallAudio_--_1_--dtor$4.c)
 * Callees:
 *     ?__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z @ 0x180032D04 (-__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
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
