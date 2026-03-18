/*
 * XREFs of ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0044514
 * Callers:
 *     DrvEnumDisplayDevices @ 0x1C0041380 (DrvEnumDisplayDevices.c)
 *     DrvUpdateGraphicsDeviceList @ 0x1C0043750 (DrvUpdateGraphicsDeviceList.c)
 *     DrvChangeDisplaySettings @ 0x1C00563A0 (DrvChangeDisplaySettings.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C005C288 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00F5340 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAU_D3DKMT_GE.c)
 * Callees:
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEAKPEAGKPEAJG@Z @ 0x1C003F8E0 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 */

__int64 __fastcall DrvGetPruneFlag(struct tagGRAPHICS_DEVICE *a1)
{
  unsigned int v1; // ebx
  int v2; // edi
  HANDLE RegistryHandleFromDeviceMap; // rsi
  ULONG Length; // [rsp+40h] [rbp-68h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-60h] BYREF
  _DWORD KeyValueInformation[14]; // [rsp+58h] [rbp-50h] BYREF

  v1 = 0;
  v2 = 1;
  Length = 52;
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
    RtlInitUnicodeString(&DestinationString, L"PruningMode");
    if ( ZwQueryValueKey(
           RegistryHandleFromDeviceMap,
           &DestinationString,
           KeyValueFullInformation,
           KeyValueInformation,
           Length,
           &Length) >= 0 )
      v2 = *(_DWORD *)((char *)KeyValueInformation + KeyValueInformation[2]);
    ZwClose(RegistryHandleFromDeviceMap);
  }
  LOBYTE(v1) = v2 != 0;
  return v1;
}
