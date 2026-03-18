/*
 * XREFs of PiAuDoesClientHaveAccess @ 0x1404E4EB0
 * Callers:
 *     PiCMOpenClassKey @ 0x14043DC08 (PiCMOpenClassKey.c)
 *     PiCMOpenDeviceKey @ 0x14043DDA0 (PiCMOpenDeviceKey.c)
 *     PiCMOpenObjectKey @ 0x14043DF64 (PiCMOpenObjectKey.c)
 *     PiCMSetObjectProperty @ 0x14045A4C0 (PiCMSetObjectProperty.c)
 *     PiSwDispatch @ 0x14045FBB0 (PiSwDispatch.c)
 *     PiCMValidateDeviceInstance @ 0x1404E6C28 (PiCMValidateDeviceInstance.c)
 *     PiDqIrpPropertySet @ 0x1405959E0 (PiDqIrpPropertySet.c)
 *     PiCMQueryRemove @ 0x140597828 (PiCMQueryRemove.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x14059AAF8 (PiCMOpenDeviceInterfaceKey.c)
 *     PiCMCreateDevice @ 0x1406A3D38 (PiCMCreateDevice.c)
 *     PiCMCreateObject @ 0x1406A44AC (PiCMCreateObject.c)
 *     PiCMDeleteClassKey @ 0x1406A4604 (PiCMDeleteClassKey.c)
 *     PiCMDeleteDevice @ 0x1406A46F0 (PiCMDeleteDevice.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x1406A4A2C (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMDeleteDeviceKey @ 0x1406A4B08 (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x1406A4D28 (PiCMDeleteObject.c)
 *     PiCMDeviceAction @ 0x1406A4EA8 (PiCMDeviceAction.c)
 *     PiCMRegisterDeviceInterface @ 0x1406A595C (PiCMRegisterDeviceInterface.c)
 *     PiCMSetDeviceProblem @ 0x1406A5BF4 (PiCMSetDeviceProblem.c)
 *     PiCMSetRegistryProperty @ 0x1406A5DC8 (PiCMSetRegistryProperty.c)
 *     PiCMUnregisterDeviceInterface @ 0x1406A5F64 (PiCMUnregisterDeviceInterface.c)
 * Callees:
 *     PiAuVerifyAccessToObject @ 0x1404E4EF4 (PiAuVerifyAccessToObject.c)
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
              (__int64)&v3) >= 0 )
    return v3;
  return v1;
}
