/*
 * XREFs of RtlpHpLfhOwnerLockUnlock @ 0x180106FC8
 * Callers:
 *     RtlpHpLfhContextLockUnlock @ 0x180106F14 (RtlpHpLfhContextLockUnlock.c)
 *     RtlpHpLfhOwnerLockUnlock @ 0x180106FC8 (RtlpHpLfhOwnerLockUnlock.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpLfhOwnerListLockUnlock @ 0x180106F5C (RtlpHpLfhOwnerListLockUnlock.c)
 *     RtlpHpLfhOwnerLockUnlock @ 0x180106FC8 (RtlpHpLfhOwnerLockUnlock.c)
 */

void __fastcall RtlpHpLfhOwnerLockUnlock(__int64 a1, unsigned int a2)
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
  RtlpHpLfhOwnerListLockUnlock(a1, (_RTL_SRWLOCK **)(a1 + 24), a2);
  RtlpHpLfhOwnerListLockUnlock(v5, (_RTL_SRWLOCK **)(a1 + 40), a2);
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
        RtlpHpLfhOwnerLockUnlock(*(_QWORD *)(v7 + *(_QWORD *)(a1 + 96)), a2);
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
