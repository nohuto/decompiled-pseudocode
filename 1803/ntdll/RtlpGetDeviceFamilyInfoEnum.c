/*
 * XREFs of RtlpGetDeviceFamilyInfoEnum @ 0x180075690
 * Callers:
 *     RtlConvertDeviceFamilyInfoToString @ 0x1800755A0 (RtlConvertDeviceFamilyInfoToString.c)
 *     RtlGetDeviceFamilyInfoEnum @ 0x180075680 (RtlGetDeviceFamilyInfoEnum.c)
 * Callees:
 *     RtlGetVersion @ 0x18002DAB0 (RtlGetVersion.c)
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     sub_1800758D4 @ 0x1800758D4 (sub_1800758D4.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009AD00 (ZwOpenKey.c)
 *     ZwQueryLicenseValue @ 0x18009D410 (ZwQueryLicenseValue.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

void __fastcall RtlpGetDeviceFamilyInfoEnum(_QWORD *a1, unsigned int *a2, unsigned int *a3)
{
  __int64 v6; // r14
  unsigned int v7; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v8; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD v10[3]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v11[16]; // [rsp+80h] [rbp-80h] BYREF
  int v12[72]; // [rsp+90h] [rbp-70h] BYREF

  if ( a1 )
  {
    memset(v10, 0, sizeof(v10));
    v8 = 0LL;
    v7 = 0;
    v6 = 0LL;
    *(_QWORD *)&DestinationString.Length = 0LL;
    DestinationString.Buffer = 0LL;
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion");
    *((_QWORD *)&v10[0] + 1) = 0LL;
    *(_QWORD *)&v10[1] = &DestinationString;
    LODWORD(v10[0]) = 48;
    DWORD2(v10[1]) = 64;
    v10[2] = 0LL;
    if ( (int)ZwOpenKey(&v8, 131353LL, v10) >= 0 )
    {
      if ( (int)sub_1800758D4(v8, L"UBR", &v7) >= 0 )
        v6 = v7;
      ZwClose(v8);
    }
    v12[0] = 284;
    RtlGetVersion(v12);
    *a1 = v6
        + (((unsigned int)v12[3] + (((unsigned int)v12[2] + ((unsigned __int64)(unsigned int)v12[1] << 16)) << 16)) << 16);
  }
  if ( a2 )
  {
    v7 = 3;
    *(_QWORD *)&DestinationString.Length = 0LL;
    DestinationString.Buffer = 0LL;
    RtlInitUnicodeString(&DestinationString, L"Kernel-OneCore-DeviceFamilyID");
    ZwQueryLicenseValue(&DestinationString, &v8, &v7, 4LL, v11);
    *a2 = v7;
  }
  if ( a3 )
  {
    memset(v10, 0, sizeof(v10));
    v8 = 0LL;
    v7 = 0;
    *a3 = 0;
    *(_QWORD *)&DestinationString.Length = 0LL;
    DestinationString.Buffer = 0LL;
    RtlInitUnicodeString(
      &DestinationString,
      L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\OEM");
    *((_QWORD *)&v10[0] + 1) = 0LL;
    *(_QWORD *)&v10[1] = &DestinationString;
    LODWORD(v10[0]) = 48;
    DWORD2(v10[1]) = 64;
    v10[2] = 0LL;
    if ( (int)ZwOpenKey(&v8, 131353LL, v10) >= 0 )
    {
      if ( (int)sub_1800758D4(v8, L"DeviceForm", &v7) >= 0 )
        *a3 = v7;
      ZwClose(v8);
    }
  }
}
