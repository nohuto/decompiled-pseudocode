/*
 * XREFs of ArbpGetRegistryValue @ 0x1C0095638
 * Callers:
 *     ArbAddInaccessibleAllocationRange @ 0x1C00930D0 (ArbAddInaccessibleAllocationRange.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x1C00932C0 (ArbAddMmConfigRangeAsBootReserved.c)
 *     ArbBuildAssignmentOrdering @ 0x1C0093B00 (ArbBuildAssignmentOrdering.c)
 * Callees:
 *     RtlInitUnicodeString_0 @ 0x1C0003F6D (RtlInitUnicodeString_0.c)
 *     ZwQueryValueKey_0 @ 0x1C0003FFE (ZwQueryValueKey_0.c)
 */

__int64 __fastcall ArbpGetRegistryValue(HANDLE KeyHandle, const WCHAR *a2, _QWORD *a3)
{
  NTSTATUS v5; // eax
  PVOID PoolWithTag; // rax
  void *v8; // rbx
  NTSTATUS v9; // edi
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  ULONG ResultLength; // [rsp+68h] [rbp+20h] BYREF

  RtlInitUnicodeString_0(&DestinationString, a2);
  v5 = ZwQueryValueKey_0(KeyHandle, &DestinationString, KeyValueFullInformationAlign64, 0LL, 0, &ResultLength);
  if ( v5 != -2147483643 && v5 != -1073741789 )
    return 3221225473LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, ResultLength, 0x4D627241u);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  v9 = ZwQueryValueKey_0(
         KeyHandle,
         &DestinationString,
         KeyValueFullInformationAlign64,
         PoolWithTag,
         ResultLength,
         &ResultLength);
  if ( v9 >= 0 )
  {
    *a3 = v8;
    return 0LL;
  }
  else
  {
    ExFreePoolWithTag(v8, 0);
    return (unsigned int)v9;
  }
}
