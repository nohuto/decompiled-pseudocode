/*
 * XREFs of sub_18000983C @ 0x18000983C
 * Callers:
 *     sub_1800096C4 @ 0x1800096C4 (sub_1800096C4.c)
 *     sub_180107B08 @ 0x180107B08 (sub_180107B08.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009AD00 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x18009ADA0 (ZwQueryValueKey.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

__int64 __fastcall sub_18000983C(PCWSTR SourceString, PCWSTR a2, void *a3, ULONG a4)
{
  NTSTATUS v6; // ebx
  unsigned __int64 v7; // rax
  ULONG v8; // eax
  ULONG Length; // ebx
  unsigned int *Heap; // rdi
  HANDLE KeyHandle; // [rsp+38h] [rbp-19h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-11h] BYREF
  _UNICODE_STRING ValueName; // [rsp+50h] [rbp-1h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+Fh] BYREF
  ULONG ResultLength; // [rsp+D0h] [rbp+7Fh] BYREF

  ResultLength = a4;
  RtlInitUnicodeString(&DestinationString, SourceString);
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v6 < 0 )
    return (unsigned int)v6;
  v7 = 2LL * ResultLength;
  if ( v7 <= 0xFFFFFFFF )
  {
    v8 = v7 + 12;
    if ( 2 * ResultLength + 12 >= 2 * ResultLength )
    {
      Length = v8;
      Heap = (unsigned int *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v8);
      if ( Heap )
      {
        RtlInitUnicodeString(&ValueName, a2);
        v6 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, Heap, Length, &ResultLength);
        if ( v6 >= 0 )
          memmove(a3, Heap + 3, Heap[2]);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
      }
      else
      {
        v6 = -1073741801;
      }
      ZwClose(KeyHandle);
      return (unsigned int)v6;
    }
  }
  ZwClose(KeyHandle);
  return 3221225621LL;
}
