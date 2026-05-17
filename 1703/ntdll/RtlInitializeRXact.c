/*
 * XREFs of RtlInitializeRXact @ 0x18008E7F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     RtlpNtQueryValueKey @ 0x180080B00 (RtlpNtQueryValueKey.c)
 *     RtlAbortRXact @ 0x180087C90 (RtlAbortRXact.c)
 *     sub_180087CD0 @ 0x180087CD0 (sub_180087CD0.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1800A55E0 (ZwQueryValueKey.c)
 *     ZwCreateKey @ 0x1800A56A0 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1800A5EF0 (ZwSetValueKey.c)
 *     ZwDeleteKey @ 0x1800A6C50 (ZwDeleteKey.c)
 *     ZwDeleteValueKey @ 0x1800A6CB0 (ZwDeleteValueKey.c)
 */

__int64 __fastcall RtlInitializeRXact(__int64 a1, char a2, __int64 *a3)
{
  __int64 result; // rax
  __int64 Heap; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // ebx
  unsigned __int64 v11; // rbx
  int v12; // esi
  __int64 v13; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v14; // [rsp+48h] [rbp-B8h] BYREF
  int v15; // [rsp+4Ch] [rbp-B4h] BYREF
  int v16; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING v17; // [rsp+58h] [rbp-A8h] BYREF
  int v18; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING v19; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  int v21; // [rsp+98h] [rbp-68h] BYREF
  __int64 v22; // [rsp+A0h] [rbp-60h]
  UNICODE_STRING *v23; // [rsp+A8h] [rbp-58h]
  int v24; // [rsp+B0h] [rbp-50h]
  __int128 v25; // [rsp+B8h] [rbp-48h]
  _DWORD v26[6]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v27[128]; // [rsp+E0h] [rbp-20h] BYREF

  v15 = 12;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&v19, L"RXACT");
  v21 = 48;
  v23 = &v19;
  v22 = a1;
  v24 = 192;
  v25 = 0LL;
  result = ZwCreateKey(&v13, 196639LL, &v21, 0LL, 0LL, 0, &v16);
  if ( (int)result < 0 )
    return result;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 32LL);
  *a3 = Heap;
  v8 = Heap;
  if ( !Heap )
  {
    ZwDeleteKey(v13);
    ZwClose(v13);
    return 3221225495LL;
  }
  v9 = v13;
  *(_QWORD *)(v8 + 24) = 0LL;
  *(_QWORD *)(v8 + 8) = v9;
  *(_QWORD *)v8 = a1;
  *(_BYTE *)(v8 + 16) = 1;
  if ( v16 == 1 )
  {
    v26[0] = 1;
    v10 = ZwSetValueKey(v13, &DestinationString, 0LL, 0LL, v26, 12);
    if ( v10 >= 0 )
      return 1073741828LL;
    ZwDeleteKey(v13);
    goto LABEL_15;
  }
  v10 = RtlpNtQueryValueKey(v13, &v18, v26, &v15);
  if ( v10 < 0 )
  {
LABEL_15:
    ZwClose(v13);
    goto LABEL_17;
  }
  if ( v15 != 12 || v26[0] != 1 )
  {
    v10 = -1073741736;
    goto LABEL_15;
  }
  RtlInitUnicodeString(&v17, L"Log");
  if ( (int)ZwQueryValueKey(v13, &v17, 0LL, v27, 128, &v14) < 0 )
    return 0LL;
  if ( !a2 )
    return 2147483672LL;
  result = ZwQueryValueKey(v13, &v17, 1LL, 0LL, 0, &v14);
  if ( (_DWORD)result == -1073741789 )
  {
    v11 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v14);
    if ( v11 )
    {
      v12 = ZwQueryValueKey(v13, &v17, 1LL, v11, v14, &v14);
      if ( v12 >= 0 )
      {
        *(_QWORD *)(*a3 + 24) = v11 + *(unsigned int *)(v11 + 8);
        *(_BYTE *)(*a3 + 16) = 0;
        v12 = sub_180087CD0(*a3);
        if ( v12 >= 0 )
        {
          ZwDeleteValueKey(v13, &v17);
          *(_QWORD *)(*a3 + 24) = v11;
          return RtlAbortRXact(*a3);
        }
      }
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v11);
      v10 = v12;
LABEL_17:
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, *a3);
      return (unsigned int)v10;
    }
    return 3221225495LL;
  }
  return result;
}
