/*
 * XREFs of MmIsDriverVerifying @ 0x140038B30
 * Callers:
 *     VfIsVerificationEnabled @ 0x14014AAB0 (VfIsVerificationEnabled.c)
 *     VfXdvDriverCaptureIoCallbacks @ 0x140761D60 (VfXdvDriverCaptureIoCallbacks.c)
 *     VfGetPristineDispatchRoutine @ 0x14076E4AC (VfGetPristineDispatchRoutine.c)
 *     VfGetPristineDriverInit @ 0x14076E4FC (VfGetPristineDriverInit.c)
 *     VfDevObjPostAddDevice @ 0x1407723F8 (VfDevObjPostAddDevice.c)
 *     VfDevObjPreAddDevice @ 0x14077244C (VfDevObjPreAddDevice.c)
 *     IovUtilIsVerifiedDeviceStack @ 0x140772E70 (IovUtilIsVerifiedDeviceStack.c)
 * Callees:
 *     <none>
 */

LOGICAL __stdcall MmIsDriverVerifying(struct _DRIVER_OBJECT *DriverObject)
{
  _DWORD *DriverSection; // rax

  DriverSection = DriverObject->DriverSection;
  if ( DriverSection )
    LODWORD(DriverSection) = (DriverSection[26] >> 25) & 1;
  return (unsigned int)DriverSection;
}
