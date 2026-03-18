/*
 * XREFs of ?DrvGetDriverCapableOverRide@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0092598
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00F63C4 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 * Callees:
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEAKPEAGKPEAJG@Z @ 0x1C00406A0 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 */

__int64 __fastcall DrvGetDriverCapableOverRide(struct tagGRAPHICS_DEVICE *a1)
{
  unsigned int v1; // ebx
  HANDLE RegistryHandleFromDeviceMap; // rdi
  ULONG ResultLength; // [rsp+40h] [rbp-49h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-41h] BYREF
  _DWORD KeyValueInformation[20]; // [rsp+60h] [rbp-29h] BYREF
  WCHAR SourceString[20]; // [rsp+B0h] [rbp+27h] BYREF

  v1 = 0;
  wcscpy(SourceString, L"CapabilityOverride");
  if ( a1 == (struct tagGRAPHICS_DEVICE *)-4LL )
    return 0LL;
  RegistryHandleFromDeviceMap = DrvGetRegistryHandleFromDeviceMap(
                                  (unsigned __int16 *)a1,
                                  0,
                                  0LL,
                                  0LL,
                                  0,
                                  0LL,
                                  gProtocolType);
  if ( RegistryHandleFromDeviceMap )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( ZwQueryValueKey(
           RegistryHandleFromDeviceMap,
           &DestinationString,
           KeyValueFullInformation,
           KeyValueInformation,
           0x42u,
           &ResultLength) >= 0 )
      v1 = *(_DWORD *)((char *)KeyValueInformation + KeyValueInformation[2]);
    ZwClose(RegistryHandleFromDeviceMap);
  }
  return v1;
}
