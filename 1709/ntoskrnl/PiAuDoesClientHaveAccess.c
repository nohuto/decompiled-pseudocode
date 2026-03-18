/*
 * XREFs of PiAuDoesClientHaveAccess @ 0x140574D38
 * Callers:
 *     PiCMDeviceAction @ 0x14044E39C (PiCMDeviceAction.c)
 *     PiCMValidateDeviceInstance @ 0x140530010 (PiCMValidateDeviceInstance.c)
 *     PiCMOpenClassKey @ 0x140573DB4 (PiCMOpenClassKey.c)
 *     PiCMOpenDeviceKey @ 0x140573F4C (PiCMOpenDeviceKey.c)
 *     PiCMOpenObjectKey @ 0x140574110 (PiCMOpenObjectKey.c)
 *     PiCMQueryRemove @ 0x14057468C (PiCMQueryRemove.c)
 *     PiSwDispatch @ 0x1405749C0 (PiSwDispatch.c)
 *     PiCMSetObjectProperty @ 0x140574AD4 (PiCMSetObjectProperty.c)
 *     PiDqIrpPropertySet @ 0x1406C42C0 (PiDqIrpPropertySet.c)
 *     PiCMCreateDevice @ 0x1406CF00C (PiCMCreateDevice.c)
 *     PiCMCreateObject @ 0x1406CF784 (PiCMCreateObject.c)
 *     PiCMDeleteClassKey @ 0x1406CF8DC (PiCMDeleteClassKey.c)
 *     PiCMDeleteDevice @ 0x1406CF9C8 (PiCMDeleteDevice.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x1406CFD04 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMDeleteDeviceKey @ 0x1406CFDE0 (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x1406D0000 (PiCMDeleteObject.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x1406D085C (PiCMOpenDeviceInterfaceKey.c)
 *     PiCMRegisterDeviceInterface @ 0x1406D0A14 (PiCMRegisterDeviceInterface.c)
 *     PiCMSetDeviceProblem @ 0x1406D0C14 (PiCMSetDeviceProblem.c)
 *     PiCMSetRegistryProperty @ 0x1406D0D00 (PiCMSetRegistryProperty.c)
 *     PiCMUnregisterDeviceInterface @ 0x1406D0E9C (PiCMUnregisterDeviceInterface.c)
 * Callees:
 *     PiAuVerifyAccessToObject @ 0x14052894C (PiAuVerifyAccessToObject.c)
 */

char __fastcall PiAuDoesClientHaveAccess(ACCESS_MASK a1)
{
  char v1; // bl
  __int64 v3; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0;
  LOBYTE(v3) = 0;
  if ( (int)PiAuVerifyAccessToObject(
              a1,
              PiAuSecurityObject,
              (PGENERIC_MAPPING)&PiAuSecurityObjectMapping,
              0LL,
              (BOOLEAN *)&v3) >= 0 )
    return v3;
  return v1;
}
