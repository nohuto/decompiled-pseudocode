/*
 * XREFs of RIMEnableMonitorMappingForDevice @ 0x1C01015C0
 * Callers:
 *     NtRIMEnableMonitorMappingForDevice @ 0x1C00FFDD0 (NtRIMEnableMonitorMappingForDevice.c)
 * Callees:
 *     RIMSetDeviceOutputConfig @ 0x1C000CB48 (RIMSetDeviceOutputConfig.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C000CCBC (rimFindMonitorForDigitizerWithQDCData.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C000D6B0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RIMGetDeviceObjectPointer @ 0x1C000E444 (RIMGetDeviceObjectPointer.c)
 *     RIMGetContainerId @ 0x1C000EB54 (RIMGetContainerId.c)
 *     RIMFreeQDCActivePathsData @ 0x1C000EDD0 (RIMFreeQDCActivePathsData.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C001802C (WPP_RECORDER_SF_d.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0019000 (RawInputManagerObjectResolveHandle.c)
 *     RIMGetQDCActivePathsData @ 0x1C006436C (RIMGetQDCActivePathsData.c)
 *     RIMReadDigitizerToMonitorMappings @ 0x1C0098660 (RIMReadDigitizerToMonitorMappings.c)
 *     RIMGetHMonitor @ 0x1C0106078 (RIMGetHMonitor.c)
 */

__int64 __fastcall RIMEnableMonitorMappingForDevice(char *a1, char *a2, char a3, _QWORD *a4)
{
  int v7; // r14d
  _BYTE *v8; // r15
  __int64 v9; // rdx
  __int64 v10; // r8
  PVOID v11; // r13
  char *v12; // rsi
  struct _DEVICE_OBJECT *v13; // rbx
  _QWORD *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rax
  PVOID v18; // rbx
  __int64 v20; // [rsp+28h] [rbp-60h]
  PVOID Object; // [rsp+30h] [rbp-58h] BYREF
  PVOID v22; // [rsp+38h] [rbp-50h]
  PVOID v23; // [rsp+40h] [rbp-48h] BYREF
  PVOID v24; // [rsp+48h] [rbp-40h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-38h] BYREF
  PVOID v26; // [rsp+58h] [rbp-30h] BYREF
  __int64 v27; // [rsp+60h] [rbp-28h] BYREF

  Handle = 0LL;
  v26 = 0LL;
  Object = 0LL;
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x8Cu,
    (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids);
  v7 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &v23);
  if ( v7 >= 0 )
  {
    v8 = v23;
    RIMLockExclusive((__int64)v23 + 96);
    if ( v8[73] )
    {
      v7 = -1073741637;
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x12u,
        0x8Fu,
        (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids);
      goto LABEL_25;
    }
    v7 = RawInputManagerDeviceObjectResolveHandle(a2, 3u, 1, &v24);
    if ( v7 < 0 )
    {
LABEL_25:
      *((_QWORD *)v8 + 13) = 0LL;
      ExReleasePushLockExclusiveEx(v8 + 96, 0LL);
      KeLeaveCriticalRegion();
      ObfDereferenceObject(v8);
      goto LABEL_26;
    }
    v11 = v24;
    if ( v24 )
      v12 = (char *)v24 + 64;
    else
      v12 = 0LL;
    if ( v12[48] != 2
      || (*((_DWORD *)v12 + 50) & 0x80u) != 0
      || (*((_DWORD *)v12 + 46) & 0x1000) != 0
      || *((_DWORD *)v12 + 194) )
    {
      v7 = -1073741811;
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x12u,
        0x8Du,
        (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids);
      goto LABEL_23;
    }
    v7 = RIMGetDeviceObjectPointer(
           (struct _UNICODE_STRING *)v12 + 13,
           v9,
           v10,
           &Handle,
           &v26,
           (PDEVICE_OBJECT *)&Object);
    if ( v7 < 0 )
    {
LABEL_23:
      ObfDereferenceObject(v11);
      goto LABEL_25;
    }
    v13 = (struct _DEVICE_OBJECT *)Object;
    v22 = Object;
    ObfReferenceObject(Object);
    *((_DWORD *)v12 + 192) = 2;
    v7 = RIMGetContainerId(v13, v12 + 1528, (_DWORD *)v12 + 192);
    if ( v7 < 0 )
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x12u,
        0x8Eu,
        (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids);
      v7 = 0;
    }
    *((_DWORD *)v12 + 194) = 1;
    RIMReadDigitizerToMonitorMappings((__int64)v12);
    v14 = RIMGetQDCActivePathsData(&v27);
    rimFindMonitorForDigitizerWithQDCData((__int64)v12, (__int64)v14, 0LL);
    RIMSetDeviceOutputConfig((struct RIMDEV *)v12, 0LL, 0, (__int64)v14);
    RIMFreeQDCActivePathsData(v14, v15, v16);
    if ( a4 )
    {
      v17 = RIMGetHMonitor(v12);
      if ( a3 )
      {
        if ( (unsigned __int64)a4 >= MmUserProbeAddress )
          a4 = (_QWORD *)MmUserProbeAddress;
        *a4 = v17;
        v18 = v22;
        goto LABEL_21;
      }
      *a4 = v17;
    }
    v18 = v22;
LABEL_21:
    ZwClose(Handle);
    ObfDereferenceObject(v26);
    ObfDereferenceObject(v18);
    goto LABEL_23;
  }
LABEL_26:
  LODWORD(v20) = v7;
  WPP_RECORDER_SF_d(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x90u,
    (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids,
    v20);
  return (unsigned int)v7;
}
