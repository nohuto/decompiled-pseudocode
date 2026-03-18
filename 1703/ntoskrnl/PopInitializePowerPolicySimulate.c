/*
 * XREFs of PopInitializePowerPolicySimulate @ 0x140585A34
 * Callers:
 *     NtSetSystemPowerState @ 0x140408DF4 (NtSetSystemPowerState.c)
 *     PoInitSystem @ 0x14080B764 (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwOpenKey @ 0x14017E180 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14017E220 (ZwQueryValueKey.c)
 *     ZwCreateKey @ 0x14017E2E0 (ZwCreateKey.c)
 */

NTSTATUS PopInitializePowerPolicySimulate()
{
  NTSTATUS result; // eax
  NTSTATUS v1; // ebx
  NTSTATUS v2; // ebx
  ULONG ResultLength; // [rsp+40h] [rbp-29h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-21h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-11h] BYREF
  ULONG Disposition; // [rsp+68h] [rbp-1h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp+7h] BYREF
  _BYTE KeyValueInformation[8]; // [rsp+A0h] [rbp+37h] BYREF
  int v10; // [rsp+A8h] [rbp+3Fh]
  int v11; // [rsp+ACh] [rbp+43h]

  ObjectAttributes.RootDirectory = 0LL;
  PopSimulate = PopSimulateManual;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = &CmRegistryMachineSystemCurrentControlSet;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"Control\\Session Manager");
    ObjectAttributes.RootDirectory = KeyHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v1 = ZwCreateKey(&Handle, 0x20019u, &ObjectAttributes, 0, 0LL, 0, &Disposition);
    result = ZwClose(KeyHandle);
    if ( v1 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"PowerSimulateHiberBugcheck");
      if ( ZwQueryValueKey(
             Handle,
             &DestinationString,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x14u,
             &ResultLength) >= 0
        && v10 == 4 )
      {
        PopSimulateHiberBugcheck = v11;
      }
      RtlInitUnicodeString(&DestinationString, L"PowerPolicySimulate");
      v2 = ZwQueryValueKey(
             Handle,
             &DestinationString,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x14u,
             &ResultLength);
      result = ZwClose(Handle);
      if ( v2 >= 0 && v10 == 4 )
      {
        result = v11;
        PopSimulate |= v11;
      }
    }
  }
  return result;
}
