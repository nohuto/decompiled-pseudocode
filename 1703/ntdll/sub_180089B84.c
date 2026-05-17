/*
 * XREFs of sub_180089B84 @ 0x180089B84
 * Callers:
 *     sub_180095910 @ 0x180095910 (sub_180095910.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     sub_180089C50 @ 0x180089C50 (sub_180089C50.c)
 *     sub_180089EF4 @ 0x180089EF4 (sub_180089EF4.c)
 */

signed __int64 __fastcall sub_180089B84(__int64 a1, __int64 a2)
{
  signed __int64 result; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rax

  result = RtlAllocateHeap(qword_18015C450, 0, 40LL);
  v5 = (_QWORD *)result;
  if ( result )
  {
    v6 = (unsigned int)sub_180089EF4(a2);
    v5[2] = a1;
    v5[3] = a2;
    v7 = sub_180089C50();
    v5[4] = v7;
    if ( v7 )
    {
      v8 = v6 & 0xF;
      RtlAcquireSRWLockExclusive(*(volatile signed __int64 **)(qword_18015C3E8 + 8 * v8));
      v9 = qword_18015C438 + 16 * v6;
      v10 = *(_QWORD *)v9;
      if ( *(_QWORD *)(*(_QWORD *)v9 + 8LL) != v9 )
        __fastfail(3u);
      *v5 = v10;
      v5[1] = v9;
      *(_QWORD *)(v10 + 8) = v5;
      *(_QWORD *)v9 = v5;
      return RtlReleaseSRWLockExclusive(*(volatile signed __int64 **)(qword_18015C3E8 + 8 * v8));
    }
    else
    {
      return RtlFreeHeap(qword_18015C450, 0, (unsigned __int64)v5);
    }
  }
  return result;
}
