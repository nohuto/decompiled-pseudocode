/*
 * XREFs of ?DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0092450
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00F63C4 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C001F380 (UserIsCurrentProcessDwm.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEAKPEAGKPEAJG@Z @ 0x1C00406A0 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 */

__int64 __fastcall DrvGetDriverAccelerationsLevel(struct tagGRAPHICS_DEVICE *a1, __int64 a2)
{
  unsigned int v2; // edi
  unsigned int v3; // ebx
  int v5; // eax
  HANDLE RegistryHandleFromDeviceMap; // rsi
  ULONG Length; // [rsp+40h] [rbp-59h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-51h] BYREF
  _DWORD KeyValueInformation[20]; // [rsp+60h] [rbp-39h] BYREF
  WCHAR SourceString[20]; // [rsp+B0h] [rbp+17h] BYREF

  v2 = -1;
  v3 = 0;
  Length = 66;
  wcscpy(SourceString, L"Acceleration.Level");
  if ( a1 != (struct tagGRAPHICS_DEVICE *)-4LL )
  {
    v5 = *((_DWORD *)a1 + 40);
    if ( (v5 & 0x800000) == 0
      && ((v5 & 0x4000000) == 0
       || (unsigned __int16)(gProtocolType - 1) > 0xFFFDu
       || !Object
       || (PVOID)PsGetCurrentProcess(65533LL, a2) == gpepCSRSS
       || UserIsCurrentProcessDwm()) )
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
          v2 = *(_DWORD *)((char *)KeyValueInformation + KeyValueInformation[2]);
        ZwClose(RegistryHandleFromDeviceMap);
        if ( v2 != -1 )
        {
          if ( v2 > 5 )
            return 5;
          return v2;
        }
      }
    }
  }
  return v3;
}
