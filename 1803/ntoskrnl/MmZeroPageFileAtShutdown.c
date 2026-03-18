/*
 * XREFs of MmZeroPageFileAtShutdown @ 0x14074A344
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x1404714E0 (PopTransitionSystemPowerStateEx.c)
 *     PopGracefulShutdown @ 0x140485D40 (PopGracefulShutdown.c)
 *     PopEnableHiberFile @ 0x140624E34 (PopEnableHiberFile.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwOpenKey @ 0x1401A7700 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1401A77A0 (ZwQueryValueKey.c)
 *     ObCloseHandle @ 0x1404B5DD0 (ObCloseHandle.c)
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
  byte_1403CBDA2 = 1;
  return 1LL;
}
