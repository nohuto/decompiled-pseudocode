/*
 * XREFs of ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x1800492A8
 * Callers:
 *     ??0CDeviceGraphObjectsStore@@QEAA@XZ @ 0x18000B42C (--0CDeviceGraphObjectsStore@@QEAA@XZ.c)
 *     ??0CPolicyConfig@@QEAA@XZ @ 0x1800342C0 (--0CPolicyConfig@@QEAA@XZ.c)
 *     ??0CEndpointCharacteristics@@QEAA@XZ @ 0x180041C3C (--0CEndpointCharacteristics@@QEAA@XZ.c)
 *     ??0AudioEffectsWatcher@@QEAA@XZ @ 0x180088CDC (--0AudioEffectsWatcher@@QEAA@XZ.c)
 * Callees:
 *     ?__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z @ 0x180048E24 (-__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
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
