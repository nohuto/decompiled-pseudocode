/*
 * XREFs of sub_180105FE8 @ 0x180105FE8
 * Callers:
 *     sub_1801060E0 @ 0x1801060E0 (sub_1801060E0.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x18001F9F0 (RtlFreeUnicodeString.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     RtlDelete @ 0x180065F60 (RtlDelete.c)
 *     sub_180086D90 @ 0x180086D90 (sub_180086D90.c)
 */

signed __int64 __fastcall sub_180105FE8(__int64 a1)
{
  unsigned __int64 v2; // rbx
  __int64 *v3; // rcx
  __int64 *v4; // rdi
  unsigned __int64 v5; // rdx
  signed __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // [rsp+20h] [rbp-18h]

  v2 = 0LL;
  RtlAcquireSRWLockExclusive(&qword_18015C7E8);
  v3 = (__int64 *)qword_18015C7F0;
  while ( v3 )
  {
    v4 = v3 - 12;
    v5 = *(v3 - 12);
    if ( v5 < *(_QWORD *)(a1 + 24) )
      goto LABEL_7;
    if ( v5 >= *(_QWORD *)(a1 + 24) + (unsigned __int64)*(unsigned int *)(a1 + 32) )
    {
      if ( v5 >= *(_QWORD *)(a1 + 24) )
        v3 = (__int64 *)v3[1];
      else
LABEL_7:
        v3 = (__int64 *)v3[2];
    }
    else
    {
      v3 = RtlDelete(v3);
      qword_18015C7F0 = (__int64)v3;
      v4[12] = v2;
      v2 = (unsigned __int64)v4;
    }
  }
  result = RtlReleaseSRWLockExclusive(&qword_18015C7E8);
  while ( v2 )
  {
    v10 = *(_QWORD *)(v2 + 96);
    sub_180086D90(*(_QWORD *)(v2 + 80), v7, v8, v9);
    RtlFreeUnicodeString((PUNICODE_STRING)(v2 + 128));
    result = RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v2);
    v2 = v10;
  }
  return result;
}
