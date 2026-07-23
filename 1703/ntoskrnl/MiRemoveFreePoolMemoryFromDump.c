/*
 * XREFs of MiRemoveFreePoolMemoryFromDump @ 0x140217C74
 * Callers:
 *     MmGetDumpRange @ 0x140213238 (MmGetDumpRange.c)
 * Callees:
 *     MiScanNonPagedPoolVa @ 0x1400AC920 (MiScanNonPagedPoolVa.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall MiRemoveFreePoolMemoryFromDump(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // ebx
  _QWORD *v4; // rbx
  _QWORD *v5; // rcx
  int v6[8]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v7; // [rsp+50h] [rbp-28h]
  __int64 v8; // [rsp+58h] [rbp-20h]
  char i; // [rsp+60h] [rbp-18h]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v6[0] = 2;
  v8 = 0LL;
  v3 = 0;
  v7 = a1;
  for ( i = 1; v3 < (unsigned __int16)KeNumberNodes; ++v3 )
  {
    MiScanNonPagedPoolVa((_SLIST_ENTRY *)1, v3, 0LL, (__int64)v6);
    result = (unsigned __int16)KeNumberNodes;
  }
  v4 = (_QWORD *)qword_14036BD20;
  while ( v4 )
  {
    v5 = v4;
    v4 = (_QWORD *)*v4;
    result = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 8))(
               a1,
               (__int64)(v5 + 0xB000000000LL) / 48,
               1LL);
  }
  return result;
}
