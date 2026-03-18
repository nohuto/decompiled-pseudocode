/*
 * XREFs of CmpGetRegistryValue @ 0x1407F66B0
 * Callers:
 *     CmpSetSystemBiosInformation @ 0x1407F75EC (CmpSetSystemBiosInformation.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     ZwQueryValueKey @ 0x14017E220 (ZwQueryValueKey.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall CmpGetRegistryValue(HANDLE KeyHandle, const WCHAR *a2, _QWORD *a3)
{
  NTSTATUS result; // eax
  PVOID PoolWithTag; // rax
  void *v7; // rbx
  NTSTATUS v8; // edi
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  ULONG ResultLength; // [rsp+68h] [rbp+20h] BYREF

  RtlInitUnicodeString(&DestinationString, a2);
  result = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, 0LL, 0, &ResultLength);
  if ( result >= 0 || result == -2147483643 || result == -1073741789 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, ResultLength, 0x49504341u);
    v7 = PoolWithTag;
    if ( PoolWithTag )
    {
      v8 = ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
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
