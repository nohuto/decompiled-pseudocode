/*
 * XREFs of PopConfigureHeteroPolicies @ 0x1405C0808
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x1405C0604 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwOpenKey @ 0x14017E180 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14017E220 (ZwQueryValueKey.c)
 */

__int64 __fastcall PopConfigureHeteroPolicies(int a1)
{
  wchar_t **v2; // rbx
  __int64 v3; // rdi
  int v4; // r9d
  __int64 result; // rax
  bool v6; // dl
  char v7; // cl
  HANDLE Handle; // [rsp+38h] [rbp-29h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-21h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-11h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-1h] BYREF
  UNICODE_STRING ValueName; // [rsp+90h] [rbp+2Fh] BYREF
  _DWORD KeyValueInformation[4]; // [rsp+A0h] [rbp+3Fh] BYREF

  if ( (unsigned int)(a1 - 3) <= 1 )
  {
    KiDefaultDynamicHeteroCpuPolicy = 4;
    KiDynamicHeteroCpuPolicyImportantShort = 4;
  }
  else
  {
    KiDefaultDynamicHeteroCpuPolicy = 3;
    KiDynamicHeteroCpuPolicyImportantShort = 3;
  }
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\MACHINE\\SYSTEM\\CurrentControlSet\\Control");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 8u, &ObjectAttributes) >= 0 )
  {
    v2 = &off_14074BD38;
    ObjectAttributes.RootDirectory = KeyHandle;
    v3 = 7LL;
    do
    {
      RtlInitUnicodeString(&DestinationString, *(v2 - 1));
      if ( ZwOpenKey(&Handle, 1u, &ObjectAttributes) >= 0 )
      {
        RtlInitUnicodeString(&ValueName, *v2);
        if ( ZwQueryValueKey(
               Handle,
               &ValueName,
               KeyValuePartialInformationAlign64,
               KeyValueInformation,
               0x10u,
               &ResultLength) >= 0
          && KeyValueInformation[0] == 4 )
        {
          *(_DWORD *)v2[1] = KeyValueInformation[2];
        }
        ZwClose(Handle);
      }
      v2 += 3;
      --v3;
    }
    while ( v3 );
    ZwClose(KeyHandle);
  }
  if ( PpmPerfBootHeteroPolicyOverrideEnabled )
  {
    v4 = 4;
    KiDynamicHeteroCpuPolicyImportantShort = 4;
  }
  else
  {
    v4 = KiDynamicHeteroCpuPolicyImportantShort;
  }
  result = (unsigned int)(a1 - 1);
  if ( (unsigned int)result > 1 )
    goto LABEL_13;
  v6 = 0;
  v7 = 0;
  switch ( KiDesiredHeteroCpuPolicy )
  {
    case 0:
      goto LABEL_39;
    case 2:
      goto LABEL_43;
    case 4:
LABEL_37:
      PpmHeteroParkBias = 3;
      return result;
  }
  if ( KiDesiredHeteroCpuPolicy != 5 )
  {
LABEL_42:
    PpmHeteroParkBias = 0;
    return result;
  }
  if ( KiDefaultDynamicHeteroCpuPolicy )
  {
    if ( KiDefaultDynamicHeteroCpuPolicy == 2 )
      v7 = 1;
    else
      v6 = KiDefaultDynamicHeteroCpuPolicy == 4;
  }
  else
  {
    v6 = 1;
    v7 = 1;
  }
  result = (unsigned int)KiDynamicHeteroCpuPolicyImportant;
  if ( KiDynamicHeteroCpuPolicyImportant )
  {
    if ( KiDynamicHeteroCpuPolicyImportant == 2 )
    {
      v7 = 1;
    }
    else if ( KiDynamicHeteroCpuPolicyImportant == 4 )
    {
      v6 = 1;
    }
  }
  else
  {
    v6 = 1;
    v7 = 1;
  }
  if ( v4 )
  {
    if ( v4 == 2 )
    {
      v7 = 1;
    }
    else if ( v4 == 4 )
    {
      goto LABEL_36;
    }
  }
  else
  {
LABEL_39:
    v6 = 1;
    v7 = 1;
  }
  if ( v6 )
  {
LABEL_36:
    if ( v7 )
    {
LABEL_13:
      PpmHeteroParkBias = 1;
      return result;
    }
    goto LABEL_37;
  }
  if ( !v7 )
    goto LABEL_42;
LABEL_43:
  PpmHeteroParkBias = 2;
  return result;
}
