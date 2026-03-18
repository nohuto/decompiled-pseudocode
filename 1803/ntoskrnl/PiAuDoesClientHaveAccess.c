/*
 * XREFs of PiAuDoesClientHaveAccess @ 0x1405C68D0
 * Callers:
 *     PiCMOpenObjectKey @ 0x14050C084 (PiCMOpenObjectKey.c)
 *     PiCMOpenClassKey @ 0x14056AD20 (PiCMOpenClassKey.c)
 *     PiCMOpenDeviceKey @ 0x1405731B0 (PiCMOpenDeviceKey.c)
 *     PiDqIrpPropertySet @ 0x1405C24A0 (PiDqIrpPropertySet.c)
 *     PiSwDispatch @ 0x1405C6040 (PiSwDispatch.c)
 *     PiCMValidateDeviceInstance @ 0x1405C664C (PiCMValidateDeviceInstance.c)
 *     PiCMSetObjectProperty @ 0x14064069C (PiCMSetObjectProperty.c)
 *     PiCMCreateDevice @ 0x140735F78 (PiCMCreateDevice.c)
 *     PiCMCreateObject @ 0x1407366F0 (PiCMCreateObject.c)
 *     PiCMDeleteClassKey @ 0x140736894 (PiCMDeleteClassKey.c)
 *     PiCMDeleteDevice @ 0x140736980 (PiCMDeleteDevice.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x140736CBC (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMDeleteDeviceKey @ 0x140736D98 (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x140736FBC (PiCMDeleteObject.c)
 *     PiCMDeviceAction @ 0x140737184 (PiCMDeviceAction.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x140737C88 (PiCMOpenDeviceInterfaceKey.c)
 *     PiCMQueryRemove @ 0x140737E40 (PiCMQueryRemove.c)
 *     PiCMRegisterDeviceInterface @ 0x14073823C (PiCMRegisterDeviceInterface.c)
 *     PiCMSetDeviceProblem @ 0x1407384E0 (PiCMSetDeviceProblem.c)
 *     PiCMSetRegistryProperty @ 0x1407386B0 (PiCMSetRegistryProperty.c)
 *     PiCMUnregisterDeviceInterface @ 0x14073884C (PiCMUnregisterDeviceInterface.c)
 * Callees:
 *     PiAuVerifyAccessToObject @ 0x14056D570 (PiAuVerifyAccessToObject.c)
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
