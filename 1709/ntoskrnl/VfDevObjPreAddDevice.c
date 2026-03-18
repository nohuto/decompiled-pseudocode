/*
 * XREFs of VfDevObjPreAddDevice @ 0x1407B41FC
 * Callers:
 *     PpvUtilCallAddDevice @ 0x1400FB850 (PpvUtilCallAddDevice.c)
 * Callees:
 *     MmIsDriverVerifying @ 0x14012E440 (MmIsDriverVerifying.c)
 *     VfFilterAttach @ 0x1407C2A44 (VfFilterAttach.c)
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
