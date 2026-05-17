/*
 * XREFs of sub_180108FC8 @ 0x180108FC8
 * Callers:
 *     sub_1801090D0 @ 0x1801090D0 (sub_1801090D0.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x180011530 (RtlFreeUnicodeString.c)
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_1800484B8 @ 0x1800484B8 (sub_1800484B8.c)
 *     RtlDelete @ 0x180066C00 (RtlDelete.c)
 */

signed __int64 __fastcall sub_180108FC8(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 *v6; // rcx
  unsigned __int64 *v7; // r14
  unsigned __int64 *v8; // rdi
  unsigned __int64 v9; // rdx
  signed __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // [rsp+20h] [rbp-18h]

  v5 = 0LL;
  RtlAcquireSRWLockExclusive((unsigned __int64)&qword_180160910, a2, a3, a4);
  v6 = (unsigned __int64 *)qword_180160928;
  while ( 1 )
  {
    v7 = v6;
    if ( !v6 )
      break;
    v8 = v6 - 12;
    v9 = *(v6 - 12);
    if ( v9 < *(_QWORD *)(a1 + 24) )
      goto LABEL_7;
    if ( v9 >= *(_QWORD *)(a1 + 24) + (unsigned __int64)*(unsigned int *)(a1 + 32) )
    {
      if ( v9 >= *(_QWORD *)(a1 + 24) )
        v6 = (unsigned __int64 *)v6[1];
      else
LABEL_7:
        v6 = (unsigned __int64 *)v6[2];
    }
    else
    {
      v6 = RtlDelete(v6);
      qword_180160928 = (__int64)v6;
      *v7 = v5;
      v5 = (unsigned __int64)v8;
    }
  }
  result = RtlReleaseSRWLockExclusive(&qword_180160910);
  while ( v5 )
  {
    v14 = *(_QWORD *)(v5 + 96);
    sub_1800484B8(*(_QWORD *)(v5 + 80), v11, v12, v13);
    RtlFreeUnicodeString((PUNICODE_STRING)(v5 + 128));
    result = RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v5);
    v5 = v14;
  }
  return result;
}
