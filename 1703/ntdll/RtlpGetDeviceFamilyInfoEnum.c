/*
 * XREFs of RtlpGetDeviceFamilyInfoEnum @ 0x1800795F0
 * Callers:
 *     RtlConvertDeviceFamilyInfoToString @ 0x180079500 (RtlConvertDeviceFamilyInfoToString.c)
 *     RtlGetDeviceFamilyInfoEnum @ 0x1800795E0 (RtlGetDeviceFamilyInfoEnum.c)
 * Callees:
 *     RtlGetVersion @ 0x1800396A0 (RtlGetVersion.c)
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     sub_180079820 @ 0x180079820 (sub_180079820.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwOpenKey @ 0x1800A5540 (ZwOpenKey.c)
 *     ZwQueryLicenseValue @ 0x1800A7BB0 (ZwQueryLicenseValue.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

void __fastcall RtlpGetDeviceFamilyInfoEnum(_QWORD *a1, unsigned int *a2, unsigned int *a3)
{
  __int64 v6; // r14
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v11; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  int v13; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v14[5]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v15[16]; // [rsp+80h] [rbp-80h] BYREF
  int v16[72]; // [rsp+90h] [rbp-70h] BYREF

  if ( a1 )
  {
    memset(v14, 0, sizeof(v14));
    v11 = 0LL;
    v10 = 0;
    v6 = 0LL;
    *(_QWORD *)&DestinationString.Length = 0LL;
    DestinationString.Buffer = 0LL;
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion");
    v14[0] = 0LL;
    v14[1] = &DestinationString;
    v13 = 48;
    LODWORD(v14[2]) = 64;
    *(_OWORD *)&v14[3] = 0LL;
    if ( (int)ZwOpenKey(&v11, 131353LL, &v13) >= 0 )
    {
      if ( (int)sub_180079820(v11, L"UBR", &v10) >= 0 )
        v6 = v10;
      ZwClose(v11);
    }
    v16[0] = 284;
    RtlGetVersion(v16, v7, v8, v9);
    *a1 = v6
        + (((unsigned int)v16[3] + (((unsigned int)v16[2] + ((unsigned __int64)(unsigned int)v16[1] << 16)) << 16)) << 16);
  }
  if ( a2 )
  {
    v10 = 3;
    *(_QWORD *)&DestinationString.Length = 0LL;
    DestinationString.Buffer = 0LL;
    RtlInitUnicodeString(&DestinationString, L"Kernel-OneCore-DeviceFamilyID");
    ZwQueryLicenseValue(&DestinationString, &v11, &v10, 4LL, v15);
    *a2 = v10;
  }
  if ( a3 )
  {
    memset(v14, 0, sizeof(v14));
    v11 = 0LL;
    v10 = 0;
    *a3 = 0;
    *(_QWORD *)&DestinationString.Length = 0LL;
    DestinationString.Buffer = 0LL;
    RtlInitUnicodeString(
      &DestinationString,
      L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\OEM");
    v14[0] = 0LL;
    v14[1] = &DestinationString;
    v13 = 48;
    LODWORD(v14[2]) = 64;
    *(_OWORD *)&v14[3] = 0LL;
    if ( (int)ZwOpenKey(&v11, 131353LL, &v13) >= 0 )
    {
      if ( (int)sub_180079820(v11, L"DeviceForm", &v10) >= 0 )
        *a3 = v10;
      ZwClose(v11);
    }
  }
}
