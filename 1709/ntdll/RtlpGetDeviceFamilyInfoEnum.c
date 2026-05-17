/*
 * XREFs of RtlpGetDeviceFamilyInfoEnum @ 0x1800500B0
 * Callers:
 *     RtlGetDeviceFamilyInfoEnum @ 0x1800500A0 (RtlGetDeviceFamilyInfoEnum.c)
 *     RtlConvertDeviceFamilyInfoToString @ 0x180082E80 (RtlConvertDeviceFamilyInfoToString.c)
 * Callees:
 *     RtlGetVersion @ 0x180007C00 (RtlGetVersion.c)
 *     RtlInitUnicodeString @ 0x180052680 (RtlInitUnicodeString.c)
 *     ReadUlongFromKey @ 0x180083960 (ReadUlongFromKey.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     NtOpenKey @ 0x1800A0300 (NtOpenKey.c)
 *     ZwQueryLicenseValue @ 0x1800A29D0 (ZwQueryLicenseValue.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

void __fastcall RtlpGetDeviceFamilyInfoEnum(_QWORD *a1, unsigned int *a2, unsigned int *a3)
{
  __int64 v6; // r14
  unsigned int v7; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  int v10; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v11[5]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v12[16]; // [rsp+80h] [rbp-80h] BYREF
  int v13[72]; // [rsp+90h] [rbp-70h] BYREF

  if ( a1 )
  {
    memset(v11, 0, sizeof(v11));
    Handle = 0LL;
    v7 = 0;
    v6 = 0LL;
    *(_QWORD *)&DestinationString.Length = 0LL;
    DestinationString.Buffer = 0LL;
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion");
    v11[0] = 0LL;
    v11[1] = &DestinationString;
    v10 = 48;
    LODWORD(v11[2]) = 64;
    *(_OWORD *)&v11[3] = 0LL;
    if ( (int)NtOpenKey(&Handle, 131353LL, &v10) >= 0 )
    {
      if ( (int)ReadUlongFromKey(Handle, L"UBR", &v7) >= 0 )
        v6 = v7;
      NtClose(Handle);
    }
    v13[0] = 284;
    RtlGetVersion(v13);
    *a1 = v6
        + (((unsigned int)v13[3] + (((unsigned int)v13[2] + ((unsigned __int64)(unsigned int)v13[1] << 16)) << 16)) << 16);
  }
  if ( a2 )
  {
    v7 = 3;
    *(_QWORD *)&DestinationString.Length = 0LL;
    DestinationString.Buffer = 0LL;
    RtlInitUnicodeString(&DestinationString, L"Kernel-OneCore-DeviceFamilyID");
    ZwQueryLicenseValue(&DestinationString, &Handle, &v7, 4LL, v12);
    *a2 = v7;
  }
  if ( a3 )
  {
    memset(v11, 0, sizeof(v11));
    Handle = 0LL;
    v7 = 0;
    *a3 = 0;
    *(_QWORD *)&DestinationString.Length = 0LL;
    DestinationString.Buffer = 0LL;
    RtlInitUnicodeString(
      &DestinationString,
      L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\OEM");
    v11[0] = 0LL;
    v11[1] = &DestinationString;
    v10 = 48;
    LODWORD(v11[2]) = 64;
    *(_OWORD *)&v11[3] = 0LL;
    if ( (int)NtOpenKey(&Handle, 131353LL, &v10) >= 0 )
    {
      if ( (int)ReadUlongFromKey(Handle, L"DeviceForm", &v7) >= 0 )
        *a3 = v7;
      NtClose(Handle);
    }
  }
}
