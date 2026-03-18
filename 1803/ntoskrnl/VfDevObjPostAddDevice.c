/*
 * XREFs of VfDevObjPostAddDevice @ 0x140821358
 * Callers:
 *     PpvUtilCallAddDevice @ 0x1401634E8 (PpvUtilCallAddDevice.c)
 * Callees:
 *     MmIsDriverVerifying @ 0x140160C80 (MmIsDriverVerifying.c)
 *     VfFilterAttach @ 0x14082FFB4 (VfFilterAttach.c)
 */

void __fastcall VfDevObjPostAddDevice(
        PDEVICE_OBJECT TargetDevice,
        struct _DRIVER_OBJECT *DriverObject,
        __int64 a3,
        __int64 a4,
        int a5)
{
  if ( a5 >= 0 && (MmVerifierData & 0x10) != 0 )
  {
    if ( MmIsDriverVerifying(DriverObject) )
      VfFilterAttach(TargetDevice);
  }
}
