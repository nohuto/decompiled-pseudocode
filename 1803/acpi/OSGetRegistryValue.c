/*
 * XREFs of OSGetRegistryValue @ 0x1C0082248
 * Callers:
 *     IsHypervisorCpcCapable @ 0x1C0088390 (IsHypervisorCpcCapable.c)
 *     PcisuppGetRoutingInfo @ 0x1C008C4EC (PcisuppGetRoutingInfo.c)
 *     IrqPolicyGetDevicePolicy @ 0x1C008DA58 (IrqPolicyGetDevicePolicy.c)
 *     ACPIInitGetPlatformOverrides @ 0x1C00999E8 (ACPIInitGetPlatformOverrides.c)
 *     OSReadAcpiConfigurationData @ 0x1C009B124 (OSReadAcpiConfigurationData.c)
 *     IrqPolicyConfigure @ 0x1C009CB20 (IrqPolicyConfigure.c)
 *     IrqPolicyGetDistributionDisposition @ 0x1C009CBF4 (IrqPolicyGetDistributionDisposition.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall OSGetRegistryValue(HANDLE KeyHandle, const WCHAR *a2, _QWORD *a3)
{
  NTSTATUS result; // eax
  PVOID PoolWithTag; // rax
  void *v7; // rbx
  NTSTATUS v8; // edi
  struct _UNICODE_STRING ValueName; // [rsp+30h] [rbp-18h] BYREF
  ULONG ResultLength; // [rsp+68h] [rbp+20h] BYREF

  ResultLength = 0;
  RtlInitUnicodeString(&ValueName, a2);
  result = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformationAlign64, 0LL, 0, &ResultLength);
  if ( result >= 0 )
    return -1073741823;
  if ( result == -2147483643 || result == -1073741789 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, ResultLength, 0x53706341u);
    v7 = PoolWithTag;
    if ( PoolWithTag )
    {
      v8 = ZwQueryValueKey(
             KeyHandle,
             &ValueName,
             KeyValuePartialInformationAlign64,
             PoolWithTag,
             ResultLength,
             &ResultLength);
      if ( v8 >= 0 )
      {
        *a3 = v7;
        return 0;
      }
      else
      {
        ExFreePoolWithTag(v7, 0);
        return v8;
      }
    }
    else
    {
      return -1073741670;
    }
  }
  return result;
}
