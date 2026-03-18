/*
 * XREFs of RtlQueryRegistryValueWithFallback @ 0x140786710
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryValueKey @ 0x1401A77A0 (ZwQueryValueKey.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __stdcall RtlQueryRegistryValueWithFallback(
        HANDLE PrimaryHandle,
        HANDLE FallbackHandle,
        PUNICODE_STRING ValueName,
        ULONG ValueLength,
        PULONG ValueType,
        PVOID ValueData,
        PULONG ResultLength)
{
  ULONG v7; // r9d
  ULONG Length; // esi
  signed int v12; // ebx
  ULONG *PoolWithTag; // rdi
  ULONG v15; // [rsp+68h] [rbp+20h] BYREF

  v7 = ValueLength + 16;
  Length = -1;
  if ( v7 >= 0x10 )
    Length = v7;
  v12 = v7 < 0x10 ? 0xC0000095 : 0;
  if ( v7 >= 0x10 )
  {
    PoolWithTag = (ULONG *)ExAllocatePoolWithTag(PagedPool, Length, 0x6D6C7472u);
    if ( PoolWithTag )
    {
      v12 = ZwQueryValueKey(PrimaryHandle, ValueName, KeyValuePartialInformation, PoolWithTag, Length, &v15);
      if ( v12 == -1073741772 )
        v12 = ZwQueryValueKey(FallbackHandle, ValueName, KeyValuePartialInformation, PoolWithTag, Length, &v15);
      if ( (int)(v12 + 0x80000000) < 0 || v12 == -2147483643 )
      {
        *ResultLength = PoolWithTag[2];
        if ( ValueType )
          *ValueType = PoolWithTag[1];
        if ( v12 >= 0 )
          memmove(ValueData, PoolWithTag + 3, PoolWithTag[2]);
      }
      ExFreePoolWithTag(PoolWithTag, 0);
    }
    else
    {
      return -1073741801;
    }
  }
  return v12;
}
