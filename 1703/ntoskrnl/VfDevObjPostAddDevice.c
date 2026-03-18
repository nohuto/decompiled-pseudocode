/*
 * XREFs of VfDevObjPostAddDevice @ 0x1407723F8
 * Callers:
 *     PpvUtilCallAddDevice @ 0x1401631B8 (PpvUtilCallAddDevice.c)
 * Callees:
 *     MmIsDriverVerifying @ 0x140038B30 (MmIsDriverVerifying.c)
 *     VfFilterAttach @ 0x140780888 (VfFilterAttach.c)
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
