/*
 * XREFs of ?DrvSetDisconnectedGraphicsDevice@@YAHH@Z @ 0x1C0044268
 * Callers:
 *     DrvUpdateGraphicsDeviceList @ 0x1C0043750 (DrvUpdateGraphicsDeviceList.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C003F7F8 (PALLOCMEM2.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEAKPEAGKPEAJG@Z @ 0x1C003F8E0 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     ?DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z @ 0x1C0060FF8 (-DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z.c)
 *     DrvCleanupOneGraphicsDevice @ 0x1C0068860 (DrvCleanupOneGraphicsDevice.c)
 *     ?DrvAddAdapterLuid@@YAJU_LUID@@@Z @ 0x1C0068910 (-DrvAddAdapterLuid@@YAJU_LUID@@@Z.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 */

__int64 __fastcall DrvSetDisconnectedGraphicsDevice(int a1)
{
  unsigned int v1; // r12d
  char *v4; // rbx
  WCHAR v5; // ax
  const WCHAR *RegistryHandleFromDeviceMap; // rax
  int v7; // esi
  WCHAR *v8; // r14
  unsigned __int16 *v9; // rax
  HANDLE v10; // rax
  NTSTATUS v11; // [rsp+40h] [rbp-40h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-38h] BYREF
  WCHAR ValueName[16]; // [rsp+58h] [rbp-28h] BYREF

  v1 = 0;
  wcscpy(ValueName, L"\\Device\\Disc");
  if ( a1 )
  {
    if ( gpLocalDiscGraphicsDevice )
      return 1LL;
  }
  else if ( gpRemoteDiscGraphicsDevice )
  {
    return 1LL;
  }
  v4 = (char *)PALLOCMEM2(0x140uLL, 1986291527LL, 1);
  if ( !v4 )
    return v1;
  RtlInitUnicodeString(&DestinationString, L"\\REGISTRY\\Machine\\System\\CurrentControlSet\\Services\\TSDDD\\Device0");
  RtlWriteRegistryValue(4u, L"VIDEO", ValueName, 1u, DestinationString.Buffer, DestinationString.Length + 2);
  *(_OWORD *)v4 = *(_OWORD *)ValueName;
  *((_QWORD *)v4 + 2) = *(_QWORD *)&ValueName[8];
  v5 = ValueName[12];
  *((_DWORD *)v4 + 56) = 0;
  *((_QWORD *)v4 + 29) = 0LL;
  *((_DWORD *)v4 + 40) |= 0x2000000u;
  *((_WORD *)v4 + 12) = v5;
  *((_WORD *)v4 + 124) = -1;
  RegistryHandleFromDeviceMap = (const WCHAR *)DrvGetRegistryHandleFromDeviceMap(
                                                 (unsigned __int16 *)v4,
                                                 0,
                                                 0LL,
                                                 0LL,
                                                 0,
                                                 &v11,
                                                 0xFFFFu);
  v7 = v11;
  v8 = (WCHAR *)RegistryHandleFromDeviceMap;
  if ( v11 >= 0 )
  {
    if ( RegistryHandleFromDeviceMap )
    {
      DrvGetDeviceConfigurationInformation(v4, RegistryHandleFromDeviceMap, 0);
      ZwClose(v8);
      v1 = 1;
    }
    if ( !*((_QWORD *)v4 + 27) )
    {
      v9 = (unsigned __int16 *)PALLOCMEM2(0x20uLL, 1936876615LL, 0);
      *((_QWORD *)v4 + 27) = v9;
      if ( v9 )
      {
        v10 = DrvGetRegistryHandleFromDeviceMap((unsigned __int16 *)v4, 0, 0LL, v9, 0x10u, &v11, 0xFFFFu);
        if ( v10 )
          ZwClose(v10);
        v7 = v11;
      }
      else
      {
        v7 = -1073741670;
      }
    }
    if ( v7 >= 0 )
    {
      swprintf_s((wchar_t *)v4 + 32, 0x20uLL, L"WinDisc");
      *((_QWORD *)v4 + 17) = 0LL;
      if ( gpGraphicsDeviceList )
        *((_QWORD *)gpGraphicsDeviceListLast + 16) = v4;
      else
        gpGraphicsDeviceList = (wchar_t *)v4;
      gpGraphicsDeviceListLast = (struct tagGRAPHICS_DEVICE *)v4;
      if ( a1 )
        gpLocalDiscGraphicsDevice = (struct tagGRAPHICS_DEVICE *)v4;
      else
        gpRemoteDiscGraphicsDevice = (struct tagGRAPHICS_DEVICE *)v4;
      if ( (*((_DWORD *)v4 + 40) & 0x800000) != 0 )
        DrvAddAdapterLuid(*(struct _LUID *)(v4 + 264));
      return v1;
    }
  }
  DrvCleanupOneGraphicsDevice(v4);
  return 0LL;
}
