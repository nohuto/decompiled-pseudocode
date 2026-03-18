/*
 * XREFs of ?DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C008A6E4
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00F5340 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAU_D3DKMT_GE.c)
 * Callees:
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEAKPEAGKPEAJG@Z @ 0x1C003F8E0 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 */

__int64 __fastcall DrvGetDriverAccelerationsLevel(struct tagGRAPHICS_DEVICE *a1)
{
  unsigned int v2; // edi
  unsigned int v3; // ebx
  HANDLE RegistryHandleFromDeviceMap; // rsi
  ULONG Length; // [rsp+48h] [rbp-59h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-51h] BYREF
  _DWORD KeyValueInformation[20]; // [rsp+68h] [rbp-39h] BYREF
  WCHAR SourceString[20]; // [rsp+B8h] [rbp+17h] BYREF

  Length = 66;
  wcscpy(SourceString, L"Acceleration.Level");
  v2 = 0;
  v3 = -((struct tagGRAPHICS_DEVICE *)((char *)a1 + 4) != 0LL);
  if ( a1 != (struct tagGRAPHICS_DEVICE *)-4LL )
  {
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
             Length,
             &Length) >= 0 )
        v3 = *(_DWORD *)((char *)KeyValueInformation + KeyValueInformation[2]);
      ZwClose(RegistryHandleFromDeviceMap);
    }
  }
  if ( v3 == -1 )
  {
    v3 = 0;
  }
  else if ( v3 > 5 )
  {
    v3 = 5;
  }
  if ( (*((_DWORD *)a1 + 40) & 0x800000) == 0 )
    return v3;
  return v2;
}
