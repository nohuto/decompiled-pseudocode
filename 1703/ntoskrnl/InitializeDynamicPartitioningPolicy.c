/*
 * XREFs of InitializeDynamicPartitioningPolicy @ 0x1408259C0
 * Callers:
 *     InitBootProcessor @ 0x140809FC8 (InitBootProcessor.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     HviIsAnyHypervisorPresent @ 0x14014A450 (HviIsAnyHypervisorPresent.c)
 *     ZwQueryLicenseValue @ 0x140180800 (ZwQueryLicenseValue.c)
 */

int __fastcall InitializeDynamicPartitioningPolicy(__int64 a1)
{
  int result; // eax
  bool IsAnyHypervisorPresent; // al
  const WCHAR *v3; // rdx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  __int64 ResultDataSize; // [rsp+50h] [rbp+8h] BYREF
  ULONG Type; // [rsp+58h] [rbp+10h] BYREF
  int Data; // [rsp+60h] [rbp+18h] BYREF

  ResultDataSize = a1;
  result = HvlpFlags;
  if ( (HvlpFlags & 2) == 0 )
  {
    IsAnyHypervisorPresent = HviIsAnyHypervisorPresent();
    v3 = L"Kernel-VirtualDynamicPartitioningSupported";
    if ( !IsAnyHypervisorPresent )
      v3 = L"Kernel-DynamicPartitioningSupported";
    RtlInitUnicodeString(&DestinationString, v3);
    result = ZwQueryLicenseValue(&DestinationString, &Type, &Data, 4u, (PULONG)&ResultDataSize);
    if ( result >= 0 && Data && (_DWORD)ResultDataSize == 4 && Type == 4 )
    {
      result = ~((unsigned int)HvlpFlags >> 2);
      if ( (result & 1) != 0 )
      {
        KeDynamicPartitioningSupported = 1;
        result = MEMORY[0xFFFFF780000002F0] | 0x20;
        MEMORY[0xFFFFF780000002F0] |= 0x20u;
      }
    }
  }
  return result;
}
