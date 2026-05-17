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

__int64 __fastcall sub_180050AC0(__int64 a1, __int64 a2, void *a3)
{
  int v4; // edi
  unsigned __int64 v5; // rcx
  int v6; // edi
  unsigned __int64 Heap; // rbx
  unsigned int v9; // [rsp+38h] [rbp-9h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-1h] BYREF
  UNICODE_STRING v11; // [rsp+50h] [rbp+Fh] BYREF
  _OWORD v12[3]; // [rsp+60h] [rbp+1Fh] BYREF
  __int64 v13; // [rsp+B0h] [rbp+6Fh] BYREF

  v13 = a2;
  v9 = 260;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion");
  memset(v12, 0, sizeof(v12));
  *((_QWORD *)&v12[0] + 1) = 0LL;
  *(_QWORD *)&v12[1] = &DestinationString;
  LODWORD(v12[0]) = 48;
  DWORD2(v12[1]) = 64;
  v12[2] = 0LL;
  v4 = ZwOpenKey(&v13, 131097LL, v12);
  if ( v4 < 0 )
    return (unsigned int)v4;
  v5 = 2LL * v9;
  if ( v5 <= 0xFFFFFFFF && (int)v5 + 12 >= (unsigned int)v5 )
  {
    v6 = v5 + 12;
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)(v5 + 12));
    if ( Heap )
    {
      RtlInitUnicodeString(&v11, L"BuildLabEx");
      v4 = ZwQueryValueKey(v13, &v11, 2LL, Heap, v6, &v9);
      if ( v4 >= 0 )
        memmove(a3, (const void *)(Heap + 12), *(unsigned int *)(Heap + 8));
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
    }
    else
    {
      v4 = -1073741801;
    }
    ZwClose(v13);
    return (unsigned int)v4;
  }
  ZwClose(v13);
  return 3221225621LL;
}
