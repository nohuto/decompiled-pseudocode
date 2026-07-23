/*
 * XREFs of sub_180041624 @ 0x180041624
 * Callers:
 *     sub_180041510 @ 0x180041510 (sub_180041510.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     sub_180081384 @ 0x180081384 (sub_180081384.c)
 *     ZwOpenKey @ 0x18009AD00 (ZwOpenKey.c)
 */

bool sub_180041624()
{
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-19h] BYREF
  _UNICODE_STRING ValueName; // [rsp+40h] [rbp-9h] BYREF
  _UNICODE_STRING v4; // [rsp+50h] [rbp+7h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+17h] BYREF
  __int64 v6; // [rsp+B8h] [rbp+6Fh] BYREF
  HANDLE KeyHandle; // [rsp+C8h] [rbp+7Fh] BYREF

  if ( dword_180159718 != 2 )
    return dword_180159718 == 0;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\SOFTWARE\\Policies\\Microsoft\\WindowsStore");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 64;
  KeyHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    LODWORD(v6) = 4;
    RtlInitUnicodeString(&ValueName, L"AutoDownload");
    sub_180081384(KeyHandle, &ValueName, (__int64)&v6);
    LODWORD(v6) = 4;
    RtlInitUnicodeString(&v4, L"DisableStoreApps");
    sub_180081384(KeyHandle, &v4, (__int64)&v6);
  }
  _InterlockedCompareExchange(&dword_180159718, 1, 2);
  return dword_180159718 == 0;
}
