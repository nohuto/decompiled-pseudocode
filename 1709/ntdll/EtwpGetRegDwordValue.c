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
  const WCHAR *Heap; // rdi
  int v5; // ebx
  unsigned __int64 v6; // rsi
  __int64 v7; // r9
  WCHAR *v8; // rdx
  WCHAR v9; // cx
  WCHAR *v10; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  UNICODE_STRING v13; // [rsp+40h] [rbp-40h] BYREF
  _OWORD v14[3]; // [rsp+50h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v16; // [rsp+B8h] [rbp+38h] BYREF

  v16 = a2;
  Handle = (HANDLE)-1LL;
  Heap = (const WCHAR *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 4096LL);
  if ( !Heap )
    return 3221225495LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control");
  memset(v14, 0, sizeof(v14));
  LODWORD(v14[0]) = 48;
  *(_QWORD *)&v14[1] = &DestinationString;
  *((_QWORD *)&v14[0] + 1) = 0LL;
  DWORD2(v14[1]) = 64;
  v14[2] = 0LL;
  v5 = NtOpenKey(&Handle, 131097LL, v14);
  if ( v5 >= 0 )
  {
    v6 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 16LL);
    if ( v6 )
    {
      v7 = 2048LL;
      v8 = (WCHAR *)Heap;
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
      RtlInitUnicodeString(&v13, Heap);
      v5 = NtQueryValueKey(Handle, &v13, 2LL, v6, 16, &v16);
      if ( v5 >= 0 )
        *a3 = *(_DWORD *)(v6 + 12);
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v6);
    }
    else
    {
      v5 = -1073741801;
    }
    NtClose(Handle);
  }
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)Heap);
  return (unsigned int)v5;
}
