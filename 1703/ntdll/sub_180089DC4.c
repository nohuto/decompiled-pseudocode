/*
 * XREFs of sub_180089DC4 @ 0x180089DC4
 * Callers:
 *     sub_180095910 @ 0x180095910 (sub_180095910.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     sub_180089E88 @ 0x180089E88 (sub_180089E88.c)
 *     sub_180089EF4 @ 0x180089EF4 (sub_180089EF4.c)
 */

signed __int64 __fastcall sub_180089DC4(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rdi
  char v5; // si
  unsigned int v6; // eax
  __int64 v7; // rbp
  __int64 v8; // rbx
  __int64 v9; // rbx
  _QWORD *i; // rcx
  signed __int64 result; // rax
  _QWORD *v12; // rdx
  _QWORD *v13; // rax

  v4 = 0LL;
  v5 = 0;
  v6 = sub_180089EF4(a2);
  v7 = v6 & 0xF;
  v8 = v6;
  RtlAcquireSRWLockExclusive(*(volatile signed __int64 **)(qword_18015C3E8 + 8 * v7));
  v9 = 2 * v8;
  for ( i = *(_QWORD **)(qword_18015C438 + 8 * v9); i != (_QWORD *)(qword_18015C438 + 8 * v9); i = (_QWORD *)*i )
  {
    v4 = (unsigned __int64)i;
    if ( i[3] == a2 && i[2] == a1 )
    {
      v12 = (_QWORD *)*i;
      v13 = (_QWORD *)i[1];
      if ( *(_QWORD **)(*i + 8LL) != i || (_QWORD *)*v13 != i )
        __fastfail(3u);
      *v13 = v12;
      v5 = 1;
      v12[1] = v13;
      break;
    }
  }
  result = RtlReleaseSRWLockExclusive(*(volatile signed __int64 **)(qword_18015C3E8 + 8 * v7));
  if ( v5 )
  {
    if ( *(_QWORD *)(v4 + 32) )
    {
      sub_180089E88();
      *(_QWORD *)(v4 + 32) = 0LL;
    }
    return RtlFreeHeap(qword_18015C450, 0, v4);
  }
  return result;
}
