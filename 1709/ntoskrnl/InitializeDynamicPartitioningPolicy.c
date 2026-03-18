/*
 * XREFs of InitializeDynamicPartitioningPolicy @ 0x14084A22C
 * Callers:
 *     InitBootProcessor @ 0x14082FD94 (InitBootProcessor.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     HviIsAnyHypervisorPresent @ 0x140134970 (HviIsAnyHypervisorPresent.c)
 *     ZwQueryLicenseValue @ 0x1401801E0 (ZwQueryLicenseValue.c)
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
    if ( (int)result >= 0 && a1 == 4 && v6 == 4 && v7 )
    {
      result = (unsigned int)HvlpFlags;
      if ( (HvlpFlags & 4) == 0 )
      {
        KeDynamicPartitioningSupported = 1;
        result = MEMORY[0xFFFFF780000002F0] | 0x20u;
        MEMORY[0xFFFFF780000002F0] |= 0x20u;
      }
    }
  }
  return result;
}
