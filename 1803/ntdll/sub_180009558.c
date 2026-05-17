/*
 * XREFs of sub_180009558 @ 0x180009558
 * Callers:
 *     sub_1800096C4 @ 0x1800096C4 (sub_1800096C4.c)
 * Callees:
 *     sub_180009BB4 @ 0x180009BB4 (sub_180009BB4.c)
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009AD00 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x18009ADA0 (ZwQueryValueKey.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

__int64 __fastcall sub_180009558(__int64 a1, __int64 a2, _DWORD *a3)
{
  const WCHAR *Heap; // rsi
  int v5; // ebx
  __int64 v6; // rdi
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  UNICODE_STRING v9; // [rsp+40h] [rbp-40h] BYREF
  _OWORD v10[3]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v11; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v12; // [rsp+A8h] [rbp+28h] BYREF

  v12 = a2;
  v11 = -1LL;
  Heap = (const WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0LL, 4096LL);
  if ( !Heap )
    return 3221225495LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control");
  memset(v10, 0, sizeof(v10));
  *((_QWORD *)&v10[0] + 1) = 0LL;
  *(_QWORD *)&v10[1] = &DestinationString;
  LODWORD(v10[0]) = 48;
  DWORD2(v10[1]) = 64;
  v10[2] = 0LL;
  v5 = ZwOpenKey(&v11, 131097LL, v10);
  if ( v5 >= 0 )
  {
    v6 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0LL, 16LL);
    if ( v6 )
    {
      sub_180009BB4(Heap);
      RtlInitUnicodeString(&v9, Heap);
      v5 = ZwQueryValueKey(v11, &v9, 2LL, v6, 16, &v12);
      if ( v5 >= 0 )
        *a3 = *(_DWORD *)(v6 + 12);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v6);
    }
    else
    {
      v5 = -1073741801;
    }
    ZwClose(v11);
  }
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, Heap);
  return (unsigned int)v5;
}
