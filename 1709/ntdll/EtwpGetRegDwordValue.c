/*
 * XREFs of EtwpGetRegDwordValue @ 0x180065958
 * Callers:
 *     EtwpQueryPartitionRegistryInformationUm @ 0x180065B00 (EtwpQueryPartitionRegistryInformationUm.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlInitUnicodeString @ 0x180052680 (RtlInitUnicodeString.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     NtOpenKey @ 0x1800A0300 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x1800A03A0 (NtQueryValueKey.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

__int64 __fastcall EtwpGetRegDwordValue(__int64 a1, __int64 a2, _DWORD *a3)
{
  WCHAR *Heap; // rdi
  NTSTATUS v5; // ebx
  _DWORD *v6; // rsi
  __int64 v7; // r9
  WCHAR *v8; // rdx
  WCHAR v9; // cx
  WCHAR *v10; // rax
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  _UNICODE_STRING ValueName; // [rsp+40h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+B0h] [rbp+30h] BYREF
  __int64 ResultLength; // [rsp+B8h] [rbp+38h] BYREF

  ResultLength = a2;
  KeyHandle = (HANDLE)-1LL;
  Heap = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x1000uLL);
  if ( !Heap )
    return 3221225495LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control");
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v5 = NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v5 >= 0 )
  {
    v6 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x10uLL);
    if ( v6 )
    {
      v7 = 2048LL;
      v8 = Heap;
      do
      {
        if ( v7 == -2147481598 )
          break;
        v9 = *(WCHAR *)((char *)v8 + (char *)L"ContainerType" - (char *)Heap);
        if ( !v9 )
          break;
        *v8++ = v9;
        --v7;
      }
      while ( v7 );
      v10 = v8 - 1;
      if ( v7 )
        v10 = v8;
      *v10 = 0;
      RtlInitUnicodeString(&ValueName, Heap);
      v5 = NtQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, v6, 0x10u, (PULONG)&ResultLength);
      if ( v5 >= 0 )
        *a3 = v6[3];
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
    }
    else
    {
      v5 = -1073741801;
    }
    NtClose(KeyHandle);
  }
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  return (unsigned int)v5;
}
