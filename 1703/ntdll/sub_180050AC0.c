/*
 * XREFs of sub_180050AC0 @ 0x180050AC0
 * Callers:
 *     sub_180050924 @ 0x180050924 (sub_180050924.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwOpenKey @ 0x1800A5540 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1800A55E0 (ZwQueryValueKey.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 __fastcall sub_180050AC0(__int64 a1, void *a2, void *a3)
{
  NTSTATUS v4; // edi
  unsigned __int64 v5; // rcx
  ULONG Length; // edi
  unsigned int *Heap; // rbx
  ULONG ResultLength; // [rsp+38h] [rbp-9h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-1h] BYREF
  _UNICODE_STRING ValueName; // [rsp+50h] [rbp+Fh] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+1Fh] BYREF
  HANDLE KeyHandle; // [rsp+B0h] [rbp+6Fh] BYREF

  KeyHandle = a2;
  ResultLength = 260;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion");
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v4 < 0 )
    return (unsigned int)v4;
  v5 = 2LL * ResultLength;
  if ( v5 <= 0xFFFFFFFF && (int)v5 + 12 >= (unsigned int)v5 )
  {
    Length = v5 + 12;
    Heap = (unsigned int *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)(v5 + 12));
    if ( Heap )
    {
      RtlInitUnicodeString(&ValueName, L"BuildLabEx");
      v4 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, Heap, Length, &ResultLength);
      if ( v4 >= 0 )
        memmove(a3, Heap + 3, Heap[2]);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    }
    else
    {
      v4 = -1073741801;
    }
    ZwClose(KeyHandle);
    return (unsigned int)v4;
  }
  ZwClose(KeyHandle);
  return 3221225621LL;
}
