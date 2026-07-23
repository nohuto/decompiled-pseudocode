/*
 * XREFs of sub_1800E6F44 @ 0x1800E6F44
 * Callers:
 *     RtlCreateBootStatusDataFile @ 0x1800E6A70 (RtlCreateBootStatusDataFile.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     ZwOpenKey @ 0x18009AD00 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x18009ADA0 (ZwQueryValueKey.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 */

__int64 __fastcall sub_1800E6F44(_QWORD *a1)
{
  NTSTATUS v2; // ebx
  NTSTATUS v3; // eax
  unsigned int *Heap; // rdi
  PVOID v5; // rax
  PVOID v6; // rsi
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG ResultLength; // [rsp+A8h] [rbp+38h] BYREF
  ULONG v11; // [rsp+B0h] [rbp+40h] BYREF
  HANDLE KeyHandle; // [rsp+B8h] [rbp+48h] BYREF

  RtlInitUnicodeString(&DestinationString, L"\\REGISTRY\\MACHINE\\SYSTEM\\CurrentControlSet\\Control");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v2 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v2 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"OsBootstatPath");
    v3 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, 0LL, 0, &ResultLength);
    v2 = v3;
    if ( v3 == -1073741789 )
    {
      Heap = (unsigned int *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, ResultLength);
      if ( Heap )
      {
        v2 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, Heap, ResultLength, &v11);
        if ( v2 >= 0 )
        {
          v5 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, Heap[2]);
          v6 = v5;
          if ( v5 )
          {
            memmove(v5, Heap + 3, Heap[2]);
            *a1 = v6;
          }
          else
          {
            v2 = -1073741801;
          }
        }
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
    else if ( v3 >= 0 )
    {
      return (unsigned int)-1073741823;
    }
  }
  return (unsigned int)v2;
}
