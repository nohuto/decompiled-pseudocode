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

void __fastcall sub_180089DC4(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rdi
  char v5; // si
  unsigned int v6; // eax
  __int64 v7; // rbp
  __int64 v8; // rbx
  __int64 v9; // rbx
  _QWORD *i; // rcx
  void *v11; // rcx
  __int64 v12; // rdx
  _QWORD *v13; // rax

  v4 = 0LL;
  v5 = 0;
  v6 = sub_180089EF4(a2);
  v7 = v6 & 0xF;
  v8 = v6;
  RtlAcquireSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_18015C3E8 + 8 * v7));
  v9 = 2 * v8;
  for ( i = *(_QWORD **)(qword_18015C438 + 8 * v9); i != (_QWORD *)(qword_18015C438 + 8 * v9); i = (_QWORD *)*i )
  {
    v4 = i;
    if ( i[3] == a2 && i[2] == a1 )
    {
      v12 = *i;
      v13 = (_QWORD *)i[1];
      if ( *(_QWORD **)(*i + 8LL) != i || (_QWORD *)*v13 != i )
        __fastfail(3u);
      *v13 = v12;
      v5 = 1;
      *(_QWORD *)(v12 + 8) = v13;
      break;
    }
  }
  RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_18015C3E8 + 8 * v7));
  if ( v5 )
  {
    v11 = (void *)v4[4];
    if ( v11 )
    {
      sub_180089E88(v11);
      v4[4] = 0LL;
    }
    RtlFreeHeap(qword_18015C450, 0, v4);
  }
}
