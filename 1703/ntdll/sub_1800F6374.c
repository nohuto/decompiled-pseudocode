/*
 * XREFs of sub_1800F6374 @ 0x1800F6374
 * Callers:
 *     sub_1800F65B0 @ 0x1800F65B0 (sub_1800F65B0.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     sub_1800F679C @ 0x1800F679C (sub_1800F679C.c)
 */

char sub_1800F6374()
{
  int v0; // r15d
  __int64 v1; // r9
  __int64 v2; // rcx
  unsigned int v3; // ebx
  __int64 v4; // r14
  __int64 v5; // rbp
  __int64 *v6; // rdi
  size_t v7; // rcx
  __int64 v9; // [rsp+28h] [rbp-20h]

  v0 = 0;
  if ( !qword_18015C7A8 )
    return 0;
  v1 = 0LL;
  for ( *((_DWORD *)qword_18015C7A8 + 16) = dword_18015C0D0;
        (unsigned int)v1 < dword_18015C470;
        *((_QWORD *)qword_18015C7A8 + 10) += *(_QWORD *)(v2 + 24) )
  {
    *((_QWORD *)qword_18015C7A8 + 9) += *(_QWORD *)(*(_QWORD *)(qword_18015C458 + 8 * v1) + 16LL);
    v2 = *(_QWORD *)(qword_18015C458 + 8 * v1);
    v1 = (unsigned int)(v1 + 1);
  }
  v3 = 0;
  v4 = 0LL;
  while ( 2 )
  {
    v5 = v3 & 0xF;
    v6 = *(__int64 **)(v4 + qword_18015C440);
    if ( _interlockedbittestandset64(*(volatile signed __int32 **)(qword_18015C3F0 + 8 * v5), 0LL) )
      return 0;
    while ( v6 != (__int64 *)(qword_18015C440 + 16LL * v3) )
    {
      ++v0;
      v9 = 8LL * *((unsigned __int16 *)v6 + 8);
      v7 = 8 * (unsigned int)*((unsigned __int16 *)v6 + 8) + 24;
      *((_DWORD *)v6 + 5) = v0;
      if ( !(unsigned __int8)sub_1800F679C(v7, v6 + 3, v9) )
      {
        RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_18015C3F0 + 8LL * (v3 & 0xF)));
        return 0;
      }
      v6 = (__int64 *)*v6;
    }
    RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_18015C3F0 + 8 * v5));
    ++v3;
    v4 += 16LL;
    if ( v3 < 0x1EEF )
      continue;
    break;
  }
  return 1;
}
