/*
 * XREFs of MmIsDriverVerifying @ 0x14012E440
 * Callers:
 *     VfIsVerificationEnabled @ 0x140159AC0 (VfIsVerificationEnabled.c)
 *     VfXdvDriverCaptureIoCallbacks @ 0x1407A21FC (VfXdvDriverCaptureIoCallbacks.c)
 *     VfGetPristineDispatchRoutine @ 0x1407B016C (VfGetPristineDispatchRoutine.c)
 *     VfGetPristineDriverInit @ 0x1407B01BC (VfGetPristineDriverInit.c)
 *     VfDevObjPostAddDevice @ 0x1407B41A8 (VfDevObjPostAddDevice.c)
 *     VfDevObjPreAddDevice @ 0x1407B41FC (VfDevObjPreAddDevice.c)
 *     IovUtilIsVerifiedDeviceStack @ 0x1407B4C30 (IovUtilIsVerifiedDeviceStack.c)
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
