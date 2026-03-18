/*
 * XREFs of MmIsDriverVerifying @ 0x140160C80
 * Callers:
 *     VfIsVerificationEnabled @ 0x14016E140 (VfIsVerificationEnabled.c)
 *     VfXdvDriverCaptureIoCallbacks @ 0x14080EE78 (VfXdvDriverCaptureIoCallbacks.c)
 *     VfGetPristineDispatchRoutine @ 0x14081D31C (VfGetPristineDispatchRoutine.c)
 *     VfGetPristineDriverInit @ 0x14081D36C (VfGetPristineDriverInit.c)
 *     VfDevObjPostAddDevice @ 0x140821358 (VfDevObjPostAddDevice.c)
 *     VfDevObjPreAddDevice @ 0x1408213AC (VfDevObjPreAddDevice.c)
 *     IovUtilIsVerifiedDeviceStack @ 0x140822928 (IovUtilIsVerifiedDeviceStack.c)
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
