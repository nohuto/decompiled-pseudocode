/*
 * XREFs of PiDevCfgCheckDeviceNeedsUpdate @ 0x1406C4CA0
 * Callers:
 *     PiDevCfgProcessDeviceCallback @ 0x1405D62D0 (PiDevCfgProcessDeviceCallback.c)
 *     PiDevCfgInitDeviceCallback @ 0x1406C6210 (PiDevCfgInitDeviceCallback.c)
 *     PpDevCfgCheckDeviceNeedsUpdate @ 0x1406C9CD8 (PpDevCfgCheckDeviceNeedsUpdate.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     swscanf_s @ 0x140164B90 (swscanf_s.c)
 *     memset @ 0x140192F40 (memset.c)
 *     RtlEqualUnicodeString @ 0x140483080 (RtlEqualUnicodeString.c)
 *     _CmGetDeviceRegProp @ 0x140520DD0 (_CmGetDeviceRegProp.c)
 *     RtlFreeUnicodeString @ 0x14053F140 (RtlFreeUnicodeString.c)
 *     PiDevCfgQueryObjectProperties @ 0x14058ABD0 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgFreeDriverNode @ 0x1405A1298 (PiDevCfgFreeDriverNode.c)
 *     PiDevCfgFindDeviceDriver @ 0x1405A13E0 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgGetDriverPackageId @ 0x1405A1FC8 (PiDevCfgGetDriverPackageId.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x1405A20B0 (PiDevCfgQueryDriverConfiguration.c)
 */

__int64 __fastcall PiDevCfgCheckDeviceNeedsUpdate(__int64 a1, int *a2)
{
  int v4; // esi
  int DeviceDriver; // eax
  __int64 v6; // rdi
  int ObjectProperties; // r14d
  __int64 v8; // r8
  __int64 v9; // rdx
  void *v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rbx
  int DriverConfiguration; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  int v17; // [rsp+40h] [rbp-C0h] BYREF
  int v18; // [rsp+44h] [rbp-BCh] BYREF
  int v19; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-98h] BYREF
  __int64 v23; // [rsp+78h] [rbp-88h] BYREF
  __int64 v24; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING v25; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v26[16]; // [rsp+A0h] [rbp-60h] BYREF

  v19 = 1;
  *a2 = 0;
  v18 = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0LL;
  v4 = 0;
  *(_DWORD *)&UnicodeString.Length = 0;
  UnicodeString.Buffer = 0LL;
  v23 = 0LL;
  v17 = 0;
  *(_DWORD *)&v25.Length = 0;
  v25.Buffer = 0LL;
  DeviceDriver = PiDevCfgFindDeviceDriver(a1, 0LL, &v23);
  v6 = v23;
  ObjectProperties = DeviceDriver;
  if ( (int)(DeviceDriver + 0x80000000) < 0 || DeviceDriver == -1073740656 )
  {
    v8 = *(_QWORD *)(a1 + 16);
    v9 = *(_QWORD *)(a1 + 8);
    v17 = 4;
    if ( (int)CmGetDeviceRegProp(*(__int64 *)&PiPnpRtlCtx, v9, v8, 11, (__int64)&v19, (__int64)&v18, (__int64)&v17, 0) < 0
      || v19 != 4
      || v17 != 4 )
    {
      v18 = 0;
    }
    memset(v26, 0, 0x78uLL);
    v10 = *(void **)(a1 + 16);
    v26[0] = &DEVPKEY_Device_DriverInfPath;
    LODWORD(v26[1]) = 18;
    v26[2] = &DestinationString;
    v26[5] = &DEVPKEY_Device_DriverDate;
    v26[7] = &v24;
    LODWORD(v26[11]) = 18;
    v26[10] = &DEVPKEY_Device_DriverVersion;
    v11 = *(_QWORD *)(a1 + 8);
    v26[12] = &UnicodeString;
    HIDWORD(v26[3]) = 6;
    LODWORD(v26[6]) = 16;
    LODWORD(v26[8]) = 8;
    HIDWORD(v26[13]) = 6;
    ObjectProperties = PiDevCfgQueryObjectProperties(6LL, v11, 1u, v10, (__int64)v26, 3u);
    if ( ObjectProperties >= 0 )
    {
      if ( SLODWORD(v26[4]) < 0 )
        RtlInitUnicodeString(&DestinationString, 0LL);
      if ( SLODWORD(v26[9]) < 0 )
        v24 = 0LL;
      if ( SLODWORD(v26[14]) < 0 )
        RtlInitUnicodeString(&UnicodeString, 0LL);
      if ( UnicodeString.Buffer
        && swscanf_s(
             UnicodeString.Buffer,
             L"%hu.%hu.%hu.%hu",
             (char *)&v20 + 6,
             (char *)&v20 + 4,
             (char *)&v20 + 2,
             &v20) == 4 )
      {
        v12 = v20;
      }
      else
      {
        v12 = 0LL;
        v20 = 0LL;
      }
      if ( (v18 & 0x40) != 0 || !DestinationString.Buffer )
      {
        if ( !v6 )
          goto LABEL_21;
      }
      else if ( v6 && RtlEqualUnicodeString((PCUNICODE_STRING)(v6 + 40), &DestinationString, 1u) )
      {
        if ( *(_QWORD *)(v6 + 112) == v24 && *(_QWORD *)(v6 + 120) == v12 )
        {
          if ( !PnpBootMode )
          {
LABEL_39:
            *a2 = v4;
            goto LABEL_40;
          }
          v4 = 0x40000;
LABEL_21:
          if ( PnpBootMode && v6 && (v4 & 0x20) != 0 )
          {
            DriverConfiguration = PiDevCfgQueryDriverConfiguration(v6);
            ObjectProperties = DriverConfiguration;
            if ( DriverConfiguration == -1073740653 )
            {
              ObjectProperties = 0;
              v4 = 0x40000;
            }
            else if ( DriverConfiguration < 0 )
            {
              goto LABEL_40;
            }
          }
          goto LABEL_39;
        }
      }
      else if ( PnpBootMode && (PiDevCfgFlags & 2) != 0 )
      {
        v4 = 0x40000;
        if ( v6 && (int)PiDevCfgGetDriverPackageId((__int64)DestinationString.Buffer, (__int64)&v25) < 0 )
          v4 = 262176;
        goto LABEL_21;
      }
      v4 = 32;
      goto LABEL_21;
    }
  }
LABEL_40:
  RtlFreeUnicodeString(&DestinationString);
  RtlFreeUnicodeString(&UnicodeString);
  RtlFreeUnicodeString(&v25);
  if ( v6 )
    PiDevCfgFreeDriverNode(v6, v14, v15);
  return (unsigned int)ObjectProperties;
}
