/*
 * XREFs of InitializeDynamicPartitioningPolicy @ 0x1408259C0
 * Callers:
 *     InitBootProcessor @ 0x140809FC8 (InitBootProcessor.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     HviIsAnyHypervisorPresent @ 0x14014A450 (HviIsAnyHypervisorPresent.c)
 *     ZwQueryLicenseValue @ 0x140180800 (ZwQueryLicenseValue.c)
 */

__int64 __fastcall InitializeDynamicPartitioningPolicy(int a1)
{
  __int64 result; // rax
  bool IsAnyHypervisorPresent; // al
  const WCHAR *v3; // rdx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  int v6; // [rsp+58h] [rbp+10h] BYREF
  int v7; // [rsp+60h] [rbp+18h] BYREF

  result = (unsigned int)HvlpFlags;
  if ( (HvlpFlags & 2) == 0 )
  {
    IsAnyHypervisorPresent = HviIsAnyHypervisorPresent();
    v3 = L"Kernel-VirtualDynamicPartitioningSupported";
    if ( !IsAnyHypervisorPresent )
      v3 = L"Kernel-DynamicPartitioningSupported";
    RtlInitUnicodeString(&DestinationString, v3);
    result = ZwQueryLicenseValue((__int64)&DestinationString, (__int64)&v6, (__int64)&v7);
    if ( (int)result >= 0 && v7 && a1 == 4 && v6 == 4 )
    {
      result = ~((unsigned int)HvlpFlags >> 2);
      if ( (result & 1) != 0 )
      {
        KeDynamicPartitioningSupported = 1;
        result = MEMORY[0xFFFFF780000002F0] | 0x20u;
        MEMORY[0xFFFFF780000002F0] |= 0x20u;
      }
    }
  }
  return result;
}
