/*
 * XREFs of ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180033188
 * Callers:
 *     ??0AudioEffectsWatcher@@QEAA@XZ @ 0x18000C344 (--0AudioEffectsWatcher@@QEAA@XZ.c)
 *     ??0CDeviceGraphObjectsStore@@QEAA@XZ @ 0x18000E858 (--0CDeviceGraphObjectsStore@@QEAA@XZ.c)
 *     ??0CPolicyConfig@@QEAA@XZ @ 0x180060C4C (--0CPolicyConfig@@QEAA@XZ.c)
 *     ??0CEndpointCharacteristics@@QEAA@XZ @ 0x1800AF8A0 (--0CEndpointCharacteristics@@QEAA@XZ.c)
 *     ??0PhoneCallAudio@@IEAA@XZ @ 0x1800C7818 (--0PhoneCallAudio@@IEAA@XZ.c)
 * Callees:
 *     ?__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z @ 0x180032D04 (-__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
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
