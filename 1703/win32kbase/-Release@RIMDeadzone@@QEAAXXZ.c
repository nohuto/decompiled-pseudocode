/*
 * XREFs of ?Release@RIMDeadzone@@QEAAXXZ @ 0x1C00076F4
 * Callers:
 *     rimDestroyDeadzone @ 0x1C0007424 (rimDestroyDeadzone.c)
 *     RIMInitializeDeadzone @ 0x1C00074E8 (RIMInitializeDeadzone.c)
 *     ?_InitializeLeftHandedDeadzone@RIMDeadzone@@AEAAJXZ @ 0x1C00075F8 (-_InitializeLeftHandedDeadzone@RIMDeadzone@@AEAAJXZ.c)
 *     ?Initialize@RIMDeadzone@@QEAAJXZ @ 0x1C000769C (-Initialize@RIMDeadzone@@QEAAJXZ.c)
 *     RIMFreeSpecificDevWorker @ 0x1C0008734 (RIMFreeSpecificDevWorker.c)
 *     RIMDestroyPointerDeviceDeadzone @ 0x1C0105040 (RIMDestroyPointerDeviceDeadzone.c)
 *     ?Initialize@RIMDeadzone@@QEAAJPEBUtagRIMDEADZONE@@@Z @ 0x1C0116134 (-Initialize@RIMDeadzone@@QEAAJPEBUtagRIMDEADZONE@@@Z.c)
 *     ?_InitializeRightHandedDeadzone@RIMDeadzone@@AEAAJXZ @ 0x1C0116830 (-_InitializeRightHandedDeadzone@RIMDeadzone@@AEAAJXZ.c)
 * Callees:
 *     ?_ClearDeadzoneAreas@RIMDeadzone@@AEAAXXZ @ 0x1C0007584 (-_ClearDeadzoneAreas@RIMDeadzone@@AEAAXXZ.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     ?ClearSession@DeadzonePalmTelemetry@@QEAAXXZ @ 0x1C0116D90 (-ClearSession@DeadzonePalmTelemetry@@QEAAXXZ.c)
 */

void __fastcall RIMDeadzone::Release(DeadzonePalmTelemetry **this)
{
  DeadzonePalmTelemetry *v3; // rcx

  if ( (*((_DWORD *)this + 1))-- == 1 )
  {
    RIMDeadzone::_ClearDeadzoneAreas((RIMDeadzone *)this);
    v3 = this[7];
    if ( v3 )
    {
      DeadzonePalmTelemetry::ClearSession(v3);
      Win32FreePool(this[7]);
    }
  }
}
