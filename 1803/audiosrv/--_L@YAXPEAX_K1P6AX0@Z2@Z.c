/*
 * XREFs of ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180060FA8
 * Callers:
 *     ??0CDeviceGraphObjectsStore@@QEAA@XZ @ 0x18001B864 (--0CDeviceGraphObjectsStore@@QEAA@XZ.c)
 *     ??0CPolicyConfig@@QEAA@XZ @ 0x18004A7BC (--0CPolicyConfig@@QEAA@XZ.c)
 *     ??0CEndpointCharacteristics@@QEAA@XZ @ 0x180050ADC (--0CEndpointCharacteristics@@QEAA@XZ.c)
 *     ??0PhoneCallAudio@@IEAA@XZ @ 0x180055B74 (--0PhoneCallAudio@@IEAA@XZ.c)
 *     ??0DynamicAudioEndpointManager@@IEAA@XZ @ 0x180059D60 (--0DynamicAudioEndpointManager@@IEAA@XZ.c)
 *     ??0AudioEffectsWatcher@@QEAA@XZ @ 0x1800A726C (--0AudioEffectsWatcher@@QEAA@XZ.c)
 * Callees:
 *     ?__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z @ 0x180060B24 (-__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall `eh vector constructor iterator'(char *a1, __int64 a2, __int64 a3, void (*a4)(void *))
{
  __int64 i; // rbx

  for ( i = 0LL; i != a3; ++i )
  {
    _guard_dispatch_icall_fptr();
    a1 += a2;
  }
}
