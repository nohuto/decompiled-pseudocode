/*
 * XREFs of RtlQueryRegistryValueWithFallback @ 0x1800E7320
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     ZwQueryValueKey @ 0x18009ADA0 (ZwQueryValueKey.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 */

NTSTATUS __cdecl RtlQueryRegistryValueWithFallback(
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
  ULONG *Heap; // rdi
  ULONG v15; // [rsp+68h] [rbp+20h] BYREF

  v7 = ValueLength + 16;
  Length = -1;
  if ( v7 >= 0x10 )
    Length = v7;
  v12 = v7 < 0x10 ? 0xC0000095 : 0;
  if ( v7 >= 0x10 )
  {
    Heap = (ULONG *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, Length);
    if ( Heap )
    {
      v12 = ZwQueryValueKey(PrimaryHandle, ValueName, KeyValuePartialInformation, Heap, Length, &v15);
      if ( v12 == -1073741772 )
        v12 = ZwQueryValueKey(FallbackHandle, ValueName, KeyValuePartialInformation, Heap, Length, &v15);
      if ( (int)(v12 + 0x80000000) < 0 || v12 == -2147483643 )
      {
        *ResultLength = Heap[2];
        if ( ValueType )
          *ValueType = Heap[1];
        if ( v12 >= 0 )
          memmove(ValueData, Heap + 3, Heap[2]);
      }
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    }
    else
    {
      return -1073741801;
    }
  }
  return v12;
}
