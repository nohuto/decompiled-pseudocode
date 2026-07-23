/*
 * XREFs of sub_180103A40 @ 0x180103A40
 * Callers:
 *     sub_180103988 @ 0x180103988 (sub_180103988.c)
 *     sub_180103A40 @ 0x180103A40 (sub_180103A40.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     sub_1801039D4 @ 0x1801039D4 (sub_1801039D4.c)
 *     sub_180103A40 @ 0x180103A40 (sub_180103A40.c)
 */

void __fastcall sub_180103A40(__int64 a1, unsigned int a2)
{
  int v3; // esi
  __int64 v5; // rcx
  __int64 v6; // rbp
  __int64 v7; // rsi
  int v8; // [rsp+38h] [rbp+10h]

  v3 = a2 & 1;
  v8 = v3;
  if ( (a2 & 1) == 0 )
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 16));
  sub_1801039D4(a1, (_RTL_SRWLOCK **)(a1 + 24), a2);
  sub_1801039D4(v5, (_RTL_SRWLOCK **)(a1 + 40), a2);
  if ( (*(_BYTE *)a1 & 1) != 0 )
  {
    v6 = *(unsigned __int8 *)(a1 + 2);
    if ( v3 )
    {
      if ( (a2 & 2) != 0 )
        *(_QWORD *)(a1 + 80) = 1LL;
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 80));
    }
    else
    {
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 80));
    }
    if ( (_DWORD)v6 )
    {
      v7 = 0LL;
      do
      {
        sub_180103A40(*(_QWORD *)(*(_QWORD *)(a1 + 104) + v7), a2);
        v7 += 8LL;
        --v6;
      }
      while ( v6 );
      v3 = v8;
    }
  }
  if ( v3 )
  {
    if ( (a2 & 2) != 0 )
      *(_QWORD *)(a1 + 16) = 1LL;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 16));
  }
}
