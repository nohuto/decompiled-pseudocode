/*
 * XREFs of ?Release@RIMDeadzone@@QEAAXXZ @ 0x1C0097144
 * Callers:
 *     RIMFreeSpecificDevWorker @ 0x1C000E7F0 (RIMFreeSpecificDevWorker.c)
 *     RIMInitializeDeadzone @ 0x1C0096ED4 (RIMInitializeDeadzone.c)
 *     rimDestroyDeadzone @ 0x1C0096F70 (rimDestroyDeadzone.c)
 *     ?_InitializeLeftHandedDeadzone@RIMDeadzone@@AEAAJXZ @ 0x1C0097048 (-_InitializeLeftHandedDeadzone@RIMDeadzone@@AEAAJXZ.c)
 *     ?Initialize@RIMDeadzone@@QEAAJXZ @ 0x1C00970EC (-Initialize@RIMDeadzone@@QEAAJXZ.c)
 *     RIMDestroyPointerDeviceDeadzone @ 0x1C0104E70 (RIMDestroyPointerDeviceDeadzone.c)
 *     ?Initialize@RIMDeadzone@@QEAAJPEBUtagRIMDEADZONE@@@Z @ 0x1C0114CA4 (-Initialize@RIMDeadzone@@QEAAJPEBUtagRIMDEADZONE@@@Z.c)
 *     ?_InitializeRightHandedDeadzone@RIMDeadzone@@AEAAJXZ @ 0x1C01153A0 (-_InitializeRightHandedDeadzone@RIMDeadzone@@AEAAJXZ.c)
 * Callees:
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     ?_ClearDeadzoneAreas@RIMDeadzone@@AEAAXXZ @ 0x1C0096FD4 (-_ClearDeadzoneAreas@RIMDeadzone@@AEAAXXZ.c)
 *     ?ClearSession@DeadzonePalmTelemetry@@QEAAXXZ @ 0x1C0115C88 (-ClearSession@DeadzonePalmTelemetry@@QEAAXXZ.c)
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
      Win32FreePool((__int64)this[7]);
    }
  }
}
