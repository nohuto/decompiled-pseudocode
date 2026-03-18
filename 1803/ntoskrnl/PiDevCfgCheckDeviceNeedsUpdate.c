/*
 * XREFs of PiDevCfgCheckDeviceNeedsUpdate @ 0x14072B048
 * Callers:
 *     PiDevCfgProcessDeviceCallback @ 0x1406433E0 (PiDevCfgProcessDeviceCallback.c)
 *     PiDevCfgInitDeviceCallback @ 0x14072CA60 (PiDevCfgInitDeviceCallback.c)
 *     PpDevCfgCheckDeviceNeedsUpdate @ 0x140730CF8 (PpDevCfgCheckDeviceNeedsUpdate.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     swscanf_s @ 0x14018EAF0 (swscanf_s.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     RtlEqualUnicodeString @ 0x1404C91A0 (RtlEqualUnicodeString.c)
 *     _PnpOpenObjectRegKey @ 0x1405038FC (_PnpOpenObjectRegKey.c)
 *     _CmGetDeviceRegProp @ 0x140504CD4 (_CmGetDeviceRegProp.c)
 *     _CmIsRootEnumeratedDevice @ 0x14050CE64 (_CmIsRootEnumeratedDevice.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x1405D6820 (PiDevCfgQueryDriverConfiguration.c)
 *     PiDevCfgFindDeviceDriver @ 0x1405D749C (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgGetDriverPackageId @ 0x1405D7FF4 (PiDevCfgGetDriverPackageId.c)
 *     PiDevCfgQueryObjectProperties @ 0x1405D91A0 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgFreeDriverNode @ 0x1405D9EBC (PiDevCfgFreeDriverNode.c)
 */

__int64 __fastcall PiDevCfgCheckDeviceNeedsUpdate(__int64 a1, unsigned int *a2)
{
  unsigned int v4; // ebx
  int DeviceDriver; // eax
  __int64 v6; // rdi
  int ObjectProperties; // esi
  __int64 v8; // r8
  __int64 v9; // rdx
  void *v10; // r9
  __int64 v11; // rdx
  void *v12; // r9
  __int64 v13; // rdx
  wchar_t *Buffer; // r14
  __int64 v15; // rax
  wchar_t *v16; // r14
  int DriverConfiguration; // eax
  int v19; // [rsp+40h] [rbp-C0h] BYREF
  int v20; // [rsp+44h] [rbp-BCh] BYREF
  int v21; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING v25; // [rsp+78h] [rbp-88h] BYREF
  __int64 v26; // [rsp+88h] [rbp-78h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp-70h] BYREF
  __int64 v28; // [rsp+98h] [rbp-68h] BYREF
  UNICODE_STRING v29; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v30[16]; // [rsp+B0h] [rbp-50h] BYREF

  v21 = 1;
  *a2 = 0;
  v20 = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0LL;
  v4 = 0;
  *(_DWORD *)&UnicodeString.Length = 0;
  UnicodeString.Buffer = 0LL;
  *(_DWORD *)&v25.Length = 0;
  v25.Buffer = 0LL;
  Handle = 0LL;
  v26 = 0LL;
  v19 = 0;
  *(_DWORD *)&v29.Length = 0;
  v29.Buffer = 0LL;
  DeviceDriver = PiDevCfgFindDeviceDriver(a1, 0LL, &v26);
  v6 = v26;
  ObjectProperties = DeviceDriver;
  if ( (int)(DeviceDriver + 0x80000000) < 0 || DeviceDriver == -1073740656 )
  {
    v8 = *(_QWORD *)(a1 + 16);
    v9 = *(_QWORD *)(a1 + 8);
    v19 = 4;
    if ( (int)CmGetDeviceRegProp(*(__int64 *)&PiPnpRtlCtx, v9, v8, 11, (__int64)&v21, (__int64)&v20, (__int64)&v19, 0) < 0
      || v21 != 4
      || v19 != 4 )
    {
      v20 = 0;
    }
    memset(v30, 0, 0x78uLL);
    v10 = *(void **)(a1 + 16);
    v30[0] = &DEVPKEY_Device_DriverInfPath;
    v30[2] = &DestinationString;
    v30[5] = &DEVPKEY_Device_DriverDate;
    v30[7] = &v28;
    HIDWORD(v30[3]) = 6;
    v30[10] = &DEVPKEY_Device_DriverVersion;
    HIDWORD(v30[13]) = 6;
    v11 = *(_QWORD *)(a1 + 8);
    v30[12] = &UnicodeString;
    LODWORD(v30[1]) = 18;
    LODWORD(v30[6]) = 16;
    LODWORD(v30[8]) = 8;
    LODWORD(v30[11]) = 18;
    ObjectProperties = PiDevCfgQueryObjectProperties(18LL, v11, 1u, v10, (__int64)v30, 3u);
    if ( ObjectProperties >= 0 )
    {
      if ( SLODWORD(v30[4]) < 0 )
        RtlInitUnicodeString(&DestinationString, 0LL);
      if ( SLODWORD(v30[9]) < 0 )
        v28 = 0LL;
      if ( SLODWORD(v30[14]) < 0 )
        RtlInitUnicodeString(&UnicodeString, 0LL);
      if ( !UnicodeString.Buffer
        || swscanf_s(
             UnicodeString.Buffer,
             L"%hu.%hu.%hu.%hu",
             (char *)&v22 + 6,
             (char *)&v22 + 4,
             (char *)&v22 + 2,
             &v22) != 4 )
      {
        v22 = 0LL;
      }
      if ( CmIsRootEnumeratedDevice(*(PCWSTR *)(a1 + 8)) )
      {
        memset(v30, 0, 0x78uLL);
        v12 = *(void **)(a1 + 16);
        v13 = *(_QWORD *)(a1 + 8);
        v30[0] = &DEVPKEY_Device_Owners;
        v30[2] = &v25;
        LODWORD(v30[1]) = 8210;
        HIDWORD(v30[3]) = 6;
        ObjectProperties = PiDevCfgQueryObjectProperties(1LL, v13, 1u, v12, (__int64)v30, 1u);
        if ( ObjectProperties < 0 )
          goto LABEL_53;
        if ( SLODWORD(v30[4]) >= 0 )
        {
          Buffer = v25.Buffer;
          if ( v25.Buffer )
          {
            if ( v25.Length > 2u )
            {
              if ( !*v25.Buffer )
                goto LABEL_29;
              while ( 1 )
              {
                ObjectProperties = PnpOpenObjectRegKey(
                                     *(__int64 *)&PiPnpRtlCtx,
                                     (__int64)Buffer,
                                     9u,
                                     131097,
                                     0,
                                     (__int64)&Handle,
                                     0LL,
                                     0);
                if ( ObjectProperties >= 0 )
                  break;
                ObjectProperties = 0;
                v15 = -1LL;
                do
                  ++v15;
                while ( Buffer[v15] );
                Buffer += v15 + 1;
                if ( !*Buffer )
                  goto LABEL_29;
              }
              ZwClose(Handle);
              if ( !*Buffer )
              {
LABEL_29:
                if ( !v6 )
                  v4 = PnpBootMode != 0 ? 0x40000 : 2;
              }
            }
          }
        }
      }
      if ( (v20 & 0x40) != 0 || (v16 = DestinationString.Buffer) == 0LL )
      {
        if ( !v6 )
          goto LABEL_46;
      }
      else if ( v6 && RtlEqualUnicodeString((PCUNICODE_STRING)(v6 + 40), &DestinationString, 1u) )
      {
        if ( *(_QWORD *)(v6 + 112) == v28 && *(_QWORD *)(v6 + 120) == v22 )
        {
          if ( !PnpBootMode )
          {
LABEL_52:
            *a2 = v4;
            goto LABEL_53;
          }
          v4 |= 0x40000u;
LABEL_46:
          if ( PnpBootMode && v6 && (v4 & 0x20) != 0 )
          {
            DriverConfiguration = PiDevCfgQueryDriverConfiguration(v6);
            ObjectProperties = DriverConfiguration;
            if ( DriverConfiguration == -1073740653 )
            {
              ObjectProperties = 0;
              v4 = v4 & 0xFFFBFFDF | 0x40000;
            }
            else if ( DriverConfiguration < 0 )
            {
              goto LABEL_53;
            }
          }
          goto LABEL_52;
        }
      }
      else if ( PnpBootMode )
      {
        if ( (PiDevCfgFlags & 2) != 0 )
        {
          v4 |= 0x40000u;
          if ( !v6 || (int)PiDevCfgGetDriverPackageId((__int64)v16, (__int64)&v29) >= 0 )
            goto LABEL_46;
        }
      }
      v4 |= 0x20u;
      goto LABEL_46;
    }
  }
LABEL_53:
  RtlFreeAnsiString(&DestinationString);
  RtlFreeAnsiString(&UnicodeString);
  RtlFreeAnsiString(&v29);
  RtlFreeAnsiString(&v25);
  if ( v6 )
    PiDevCfgFreeDriverNode(v6);
  return (unsigned int)ObjectProperties;
}
