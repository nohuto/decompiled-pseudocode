/*
 * XREFs of PpvUtilCallAddDevice @ 0x1401634E8
 * Callers:
 *     PnpCallAddDevice @ 0x140604510 (PnpCallAddDevice.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     VfDevObjPostAddDevice @ 0x140821358 (VfDevObjPostAddDevice.c)
 *     VfDevObjPreAddDevice @ 0x1408213AC (VfDevObjPreAddDevice.c)
 */

__int64 __fastcall PpvUtilCallAddDevice(
        struct _DEVICE_OBJECT *a1,
        struct _DRIVER_OBJECT *a2,
        __int64 (__fastcall *a3)(struct _DRIVER_OBJECT *, struct _DEVICE_OBJECT *))
{
  unsigned int v7; // ebx

  if ( !PpvUtilVerifierEnabled )
    return a3(a2, a1);
  VfDevObjPreAddDevice(a1, a2);
  v7 = a3(a2, a1);
  VfDevObjPostAddDevice(a1, a2, v7);
  return v7;
}
