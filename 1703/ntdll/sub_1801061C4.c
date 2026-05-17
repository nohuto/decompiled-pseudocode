/*
 * XREFs of sub_1801061C4 @ 0x1801061C4
 * Callers:
 *     sub_1801060E0 @ 0x1801060E0 (sub_1801060E0.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     sub_1801060F4 @ 0x1801060F4 (sub_1801060F4.c)
 */

signed __int64 __fastcall sub_1801061C4(__int64 a1)
{
  __int64 v2; // r8
  unsigned __int64 v3; // rcx
  signed __int64 result; // rax

  if ( (*(_BYTE *)a1 & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive(&qword_18015C7E8);
    v2 = qword_18015C7F0;
    while ( v2 )
    {
      v3 = *(_QWORD *)(v2 - 96);
      if ( v3 < *(_QWORD *)(a1 + 24) )
        goto LABEL_8;
      if ( v3 < *(_QWORD *)(a1 + 24) + (unsigned __int64)*(unsigned int *)(a1 + 32) )
      {
        sub_1801060F4(a1, v2 - 96);
        return RtlReleaseSRWLockExclusive(&qword_18015C7E8);
      }
      if ( v3 >= *(_QWORD *)(a1 + 24) )
        v2 = *(_QWORD *)(v2 + 8);
      else
LABEL_8:
        v2 = *(_QWORD *)(v2 + 16);
    }
    return RtlReleaseSRWLockExclusive(&qword_18015C7E8);
  }
  return result;
}
