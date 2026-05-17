/*
 * XREFs of sub_180054448 @ 0x180054448
 * Callers:
 *     LdrFindEntryForAddress @ 0x180054400 (LdrFindEntryForAddress.c)
 *     sub_1800D3C0C @ 0x1800D3C0C (sub_1800D3C0C.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall sub_180054448(unsigned __int64 a1, unsigned __int64 *a2, unsigned __int64 *a3, __int64 a4)
{
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  __int64 v11; // rax

  RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015D070, (unsigned __int64)a2, a3, a4);
  v7 = qword_18015D228;
  if ( (qword_18015D230 & 1) != 0 && qword_18015D228 )
    v7 = (unsigned __int64)&qword_18015D228 ^ qword_18015D228;
  while ( v7 )
  {
    v8 = *(_QWORD *)(v7 - 152);
    if ( a1 < v8 )
    {
      v9 = *(_QWORD *)v7;
    }
    else
    {
      if ( a1 < v8 + *(unsigned int *)(v7 - 136) )
      {
        v10 = v7 - 200;
        v11 = *(_QWORD *)(v7 - 200 + 152);
        if ( *(_DWORD *)(v11 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v11 - 56LL) & 0x20) == 0 )
          _InterlockedIncrement((volatile signed __int32 *)(v10 + 276));
        *a2 = v10;
        if ( a3 )
          *(_DWORD *)a3 = *(_DWORD *)(*(_QWORD *)(v10 + 152) + 56LL);
        break;
      }
      v9 = *(_QWORD *)(v7 + 8);
    }
    if ( (qword_18015D230 & 1) != 0 && v9 )
      v7 ^= v9;
    else
      v7 = v9;
  }
  RtlReleaseSRWLockExclusive(&qword_18015D070);
  return v7 == 0 ? 0xC0000135 : 0;
}
