/*
 * XREFs of UsbhExtPropDescSemaphorePresent @ 0x1C003F1FC
 * Callers:
 *     UsbhInstallMsOs20RegistryProperties @ 0x1C003FB5C (UsbhInstallMsOs20RegistryProperties.c)
 *     UsbhInstallMsOsExtendedProperties @ 0x1C003FC28 (UsbhInstallMsOsExtendedProperties.c)
 * Callees:
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     UsbhGetPdoRegistryParameter @ 0x1C001F424 (UsbhGetPdoRegistryParameter.c)
 *     UsbhSetPdoRegistryParameter @ 0x1C0026110 (UsbhSetPdoRegistryParameter.c)
 *     __security_check_cookie @ 0x1C00283F0 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_d @ 0x1C003BE5C (WPP_RECORDER_SF_d.c)
 */

bool __fastcall UsbhExtPropDescSemaphorePresent(PDEVICE_OBJECT DeviceObject)
{
  _DWORD *v2; // rdi
  int PdoRegistryParameter; // eax
  __int64 v5; // [rsp+28h] [rbp-31h]
  ULONG v6; // [rsp+30h] [rbp-29h]
  ULONG v7; // [rsp+30h] [rbp-29h]
  int v8; // [rsp+40h] [rbp-19h] BYREF
  int Data; // [rsp+44h] [rbp-15h] BYREF
  WCHAR v10[12]; // [rsp+48h] [rbp-11h] BYREF
  WCHAR SourceString[24]; // [rsp+60h] [rbp+7h] BYREF

  wcscpy(SourceString, L"ExtPropDescSemaphore");
  Data = 0;
  wcscpy(v10, L"RevisionId");
  v8 = 0;
  LOBYTE(v6) = 1;
  v2 = PdoExt((__int64)DeviceObject);
  PdoRegistryParameter = UsbhGetPdoRegistryParameter(DeviceObject, v10, &v8, 4u, 0LL, 0LL, v6);
  if ( (int)(PdoRegistryParameter + 0x80000000) >= 0
    && PdoRegistryParameter != -1073741772
    && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v5) = PdoRegistryParameter;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xAu,
      (__int64)&WPP_a16cd9a861f636b13128a91f090c0018_Traceguids,
      v5);
  }
  LOBYTE(v7) = 1;
  if ( (int)UsbhGetPdoRegistryParameter(DeviceObject, SourceString, &Data, 4u, 0LL, 0LL, v7) >= 0
    && v8 == *((unsigned __int16 *)v2 + 702) )
  {
    return 1;
  }
  Data = 1;
  if ( (int)UsbhSetPdoRegistryParameter(DeviceObject, SourceString, 4u, &Data, 4u) < 0 )
    return 1;
  v8 = *((unsigned __int16 *)v2 + 702);
  return (int)UsbhSetPdoRegistryParameter(DeviceObject, v10, 4u, &v8, 4u) < 0;
}
