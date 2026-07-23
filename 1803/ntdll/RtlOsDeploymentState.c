/*
 * XREFs of RtlOsDeploymentState @ 0x1800F7160
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009AD00 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x18009ADA0 (ZwQueryValueKey.c)
 */

OS_DEPLOYEMENT_STATE_VALUES __cdecl RtlOsDeploymentState(DWORD Flags)
{
  OS_DEPLOYEMENT_STATE_VALUES v1; // ebx
  HANDLE KeyHandle; // [rsp+30h] [rbp-88h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-80h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-78h] BYREF
  _UNICODE_STRING ValueName; // [rsp+50h] [rbp-68h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-58h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+90h] [rbp-28h] BYREF
  int v9; // [rsp+94h] [rbp-24h]
  int v10; // [rsp+98h] [rbp-20h]
  int v11; // [rsp+9Ch] [rbp-1Ch]

  KeyHandle = 0LL;
  v1 = OS_DEPLOYMENT_STANDARD;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\Setup");
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    RtlInitUnicodeString(&ValueName, L"Compact");
    if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength) >= 0
      && v9 == 4
      && v10 == 4
      && v11 )
    {
      v1 = OS_DEPLOYMENT_COMPACT;
    }
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v1;
}
