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

void __fastcall RtlpHpLfhOwnerLockUnlock(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  unsigned int v4; // edi
  int v5; // esi
  __int64 v7; // rcx
  __int64 v8; // r9
  unsigned __int64 v9; // rdx
  unsigned __int64 *v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbp
  __int64 v13; // rsi
  int v14; // [rsp+38h] [rbp+10h]

  v4 = a2;
  v5 = a2 & 1;
  v14 = v5;
  if ( (a2 & 1) == 0 )
    RtlAcquireSRWLockExclusive(a1 + 16, a2, a3, a4);
  RtlpHpLfhOwnerListLockUnlock(a1, (_QWORD *)(a1 + 24), (unsigned __int64 *)v4, a4);
  RtlpHpLfhOwnerListLockUnlock(v7, (_QWORD *)(a1 + 40), (unsigned __int64 *)v4, v8);
  if ( (*(_BYTE *)a1 & 1) != 0 )
  {
    v12 = *(unsigned __int8 *)(a1 + 2);
    if ( v5 )
    {
      if ( (v4 & 2) != 0 )
        *(_QWORD *)(a1 + 80) = 1LL;
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 80));
    }
    else
    {
      RtlAcquireSRWLockExclusive(a1 + 80, v9, v10, v11);
    }
    if ( (_DWORD)v12 )
    {
      v13 = 0LL;
      do
      {
        RtlpHpLfhOwnerLockUnlock(*(_QWORD *)(v13 + *(_QWORD *)(a1 + 96)), v4);
        v13 += 8LL;
        --v12;
      }
      while ( v12 );
      v5 = v14;
    }
  }
  if ( v5 )
  {
    if ( (v4 & 2) != 0 )
      *(_QWORD *)(a1 + 16) = 1LL;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 16));
  }
}
