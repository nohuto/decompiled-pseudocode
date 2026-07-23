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
  unsigned int Data; // [rsp+30h] [rbp-D0h] BYREF
  ULONG Type[2]; // [rsp+38h] [rbp-C8h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  ULONG ResultDataSize[4]; // [rsp+80h] [rbp-80h] BYREF
  _OSVERSIONINFOEXW VersionInformation; // [rsp+90h] [rbp-70h] BYREF

  if ( a1 )
  {
    memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
    *(_QWORD *)Type = 0LL;
    Data = 0;
    v6 = 0LL;
    *(_QWORD *)&DestinationString.Length = 0LL;
    DestinationString.Buffer = 0LL;
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey((PHANDLE)Type, 0x20119u, &ObjectAttributes) >= 0 )
    {
      if ( (int)sub_1800758D4(*(HANDLE *)Type) >= 0 )
        v6 = Data;
      ZwClose(*(HANDLE *)Type);
    }
    VersionInformation.dwOSVersionInfoSize = 284;
    RtlGetVersion(&VersionInformation);
    *a1 = v6
        + ((VersionInformation.dwBuildNumber
          + ((VersionInformation.dwMinorVersion + ((unsigned __int64)VersionInformation.dwMajorVersion << 16)) << 16)) << 16);
  }
  if ( a2 )
  {
    Data = 3;
    *(_QWORD *)&DestinationString.Length = 0LL;
    DestinationString.Buffer = 0LL;
    RtlInitUnicodeString(&DestinationString, L"Kernel-OneCore-DeviceFamilyID");
    ZwQueryLicenseValue(&DestinationString, Type, &Data, 4u, ResultDataSize);
    *a2 = Data;
  }
  if ( a3 )
  {
    memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
    *(_QWORD *)Type = 0LL;
    Data = 0;
    *a3 = 0;
    *(_QWORD *)&DestinationString.Length = 0LL;
    DestinationString.Buffer = 0LL;
    RtlInitUnicodeString(
      &DestinationString,
      L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\OEM");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey((PHANDLE)Type, 0x20119u, &ObjectAttributes) >= 0 )
    {
      if ( (int)sub_1800758D4(*(HANDLE *)Type) >= 0 )
        *a3 = Data;
      ZwClose(*(HANDLE *)Type);
    }
  }
}
