/*
 * XREFs of sub_1801091C0 @ 0x1801091C0
 * Callers:
 *     sub_1801090D0 @ 0x1801090D0 (sub_1801090D0.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_1801090E4 @ 0x1801090E4 (sub_1801090E4.c)
 */

signed __int64 __fastcall sub_1801091C0(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  __int64 v5; // r8
  unsigned __int64 v6; // rcx
  signed __int64 result; // rax

  if ( (*(_BYTE *)a1 & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&qword_180160910, a2, a3, a4);
    v5 = qword_180160928;
    while ( v5 )
    {
      v6 = *(_QWORD *)(v5 - 96);
      if ( v6 < *(_QWORD *)(a1 + 24) )
        goto LABEL_8;
      if ( v6 < *(_QWORD *)(a1 + 24) + (unsigned __int64)*(unsigned int *)(a1 + 32) )
      {
        sub_1801090E4(a1, v5 - 96);
        return RtlReleaseSRWLockExclusive(&qword_180160910);
      }
      if ( v6 >= *(_QWORD *)(a1 + 24) )
        v5 = *(_QWORD *)(v5 + 8);
      else
LABEL_8:
        v5 = *(_QWORD *)(v5 + 16);
    }
    return RtlReleaseSRWLockExclusive(&qword_180160910);
  }
  return result;
}
