/*
 * XREFs of VfDevObjPreAddDevice @ 0x1408213AC
 * Callers:
 *     PpvUtilCallAddDevice @ 0x1401634E8 (PpvUtilCallAddDevice.c)
 * Callees:
 *     MmIsDriverVerifying @ 0x140160C80 (MmIsDriverVerifying.c)
 *     VfFilterAttach @ 0x14082FFB4 (VfFilterAttach.c)
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
