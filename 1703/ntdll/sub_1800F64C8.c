/*
 * XREFs of sub_1800F64C8 @ 0x1800F64C8
 * Callers:
 *     sub_1800F65B0 @ 0x1800F65B0 (sub_1800F65B0.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     sub_180089EF4 @ 0x180089EF4 (sub_180089EF4.c)
 */

__int64 __fastcall sub_1800F64C8(__int64 a1)
{
  unsigned int v2; // eax
  __int64 v3; // r9
  _QWORD *v5; // rcx
  _QWORD *i; // rax
  __int64 v7; // rbx

  v2 = sub_180089EF4(a1);
  v3 = v2 & 0xF;
  if ( _interlockedbittestandset64(*(volatile signed __int32 **)(qword_18015C3E8 + 8 * v3), 0LL) )
    return 0LL;
  v5 = (_QWORD *)(16LL * v2 + qword_18015C438);
  for ( i = (_QWORD *)*v5; ; i = (_QWORD *)*i )
  {
    if ( i == v5 )
    {
      v7 = 0LL;
      goto LABEL_8;
    }
    if ( i[3] == a1 )
      break;
  }
  v7 = i[4];
  i[3] = 0LL;
LABEL_8:
  RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_18015C3E8 + 8 * v3));
  return v7;
}
