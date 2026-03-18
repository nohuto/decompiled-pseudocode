/*
 * XREFs of VfDevObjPreAddDevice @ 0x14077244C
 * Callers:
 *     PpvUtilCallAddDevice @ 0x1401631B8 (PpvUtilCallAddDevice.c)
 * Callees:
 *     MmIsDriverVerifying @ 0x140038B30 (MmIsDriverVerifying.c)
 *     VfFilterAttach @ 0x140780888 (VfFilterAttach.c)
 */

LOGICAL __fastcall VfDevObjPreAddDevice(PDEVICE_OBJECT TargetDevice, struct _DRIVER_OBJECT *DriverObject)
{
  LOGICAL result; // eax

  result = MmIsDriverVerifying(DriverObject);
  if ( result )
  {
    result = MmVerifierData;
    if ( (MmVerifierData & 0x10) != 0 )
      return VfFilterAttach(TargetDevice);
  }
  return result;
}
