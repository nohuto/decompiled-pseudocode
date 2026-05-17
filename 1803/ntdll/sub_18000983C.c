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

__int64 __fastcall sub_18000983C(PCWSTR SourceString, PCWSTR a2, void *a3, unsigned int a4)
{
  int v6; // ebx
  unsigned __int64 v7; // rax
  unsigned int v8; // eax
  unsigned int v9; // ebx
  __int64 Heap; // rdi
  __int64 v12; // [rsp+38h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-11h] BYREF
  UNICODE_STRING v14; // [rsp+50h] [rbp-1h] BYREF
  _OWORD v15[3]; // [rsp+60h] [rbp+Fh] BYREF
  unsigned int v16; // [rsp+D0h] [rbp+7Fh] BYREF

  v16 = a4;
  RtlInitUnicodeString(&DestinationString, SourceString);
  memset(v15, 0, sizeof(v15));
  *((_QWORD *)&v15[0] + 1) = 0LL;
  *(_QWORD *)&v15[1] = &DestinationString;
  LODWORD(v15[0]) = 48;
  DWORD2(v15[1]) = 64;
  v15[2] = 0LL;
  v6 = ZwOpenKey(&v12, 131097LL, v15);
  if ( v6 < 0 )
    return (unsigned int)v6;
  v7 = 2LL * v16;
  if ( v7 <= 0xFFFFFFFF )
  {
    v8 = v7 + 12;
    if ( 2 * v16 + 12 >= 2 * v16 )
    {
      v9 = v8;
      Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8LL, v8);
      if ( Heap )
      {
        RtlInitUnicodeString(&v14, a2);
        v6 = ZwQueryValueKey(v12, &v14, 2LL, Heap, v9, &v16);
        if ( v6 >= 0 )
          memmove(a3, (const void *)(Heap + 12), *(unsigned int *)(Heap + 8));
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, Heap);
      }
      else
      {
        v6 = -1073741801;
      }
      ZwClose(v12);
      return (unsigned int)v6;
    }
  }
  ZwClose(v12);
  return 3221225621LL;
}
