/*
 * XREFs of MmZeroPageFileAtShutdown @ 0x1406DF3D4
 * Callers:
 *     PopGracefulShutdown @ 0x140431740 (PopGracefulShutdown.c)
 *     NtSetSystemPowerState @ 0x140437F10 (NtSetSystemPowerState.c)
 *     PopEnableHiberFile @ 0x1405AD8E0 (PopEnableHiberFile.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwOpenKey @ 0x14017DB00 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14017DBA0 (ZwQueryValueKey.c)
 *     ObCloseHandle @ 0x1404D4BB0 (ObCloseHandle.c)
 */

__int64 MmZeroPageFileAtShutdown()
{
  int v0; // ebx
  HANDLE KeyHandle; // [rsp+30h] [rbp-29h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-21h] BYREF
  int v4; // [rsp+40h] [rbp-19h] BYREF
  const wchar_t *v5; // [rsp+48h] [rbp-11h]
  UNICODE_STRING ValueName; // [rsp+50h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+7h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+90h] [rbp+37h] BYREF
  int v9; // [rsp+94h] [rbp+3Bh]
  int v10; // [rsp+9Ch] [rbp+43h]

  v4 = 11141288;
  v5 = L"\\registry\\machine\\SYSTEM\\CurrentControlSet\\Control\\Session Manager\\Memory Management";
  *(_DWORD *)&ValueName.Length = 3145774;
  ValueName.Buffer = L"ClearPageFileAtShutdown";
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v4;
  v0 = 0;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
    return 0LL;
  if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength) >= 0
    && v9 == 4 )
  {
    v0 = v10;
  }
  ObCloseHandle(KeyHandle, 0);
  if ( !v0 )
    return 0LL;
  byte_140388B0A = 1;
  return 1LL;
}
