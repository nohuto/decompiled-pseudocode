/*
 * XREFs of sub_180005A98 @ 0x180005A98
 * Callers:
 *     sub_180002524 @ 0x180002524 (sub_180002524.c)
 *     EtwDeliverDataBlock @ 0x180005750 (EtwDeliverDataBlock.c)
 *     EtwEnumerateProcessRegGuids @ 0x180106590 (EtwEnumerateProcessRegGuids.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180010990 (RtlReleaseSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     RtlTryAcquireSRWLockShared @ 0x180074F10 (RtlTryAcquireSRWLockShared.c)
 */

__int64 __fastcall sub_180005A98(unsigned __int64 a1)
{
  char v2; // si
  unsigned __int64 v3; // rbp
  unsigned __int64 j; // rbx
  unsigned __int64 v5; // rax
  _QWORD *v6; // rcx
  __int64 i; // rbx
  _QWORD **v8; // rax
  unsigned __int64 v9; // rcx
  _QWORD *v10; // rcx

  v2 = 0;
  v3 = 0LL;
  RtlAcquireSRWLockExclusive(&unk_18015D380);
  if ( a1 )
  {
    j = *(_QWORD *)(a1 + 8);
    v5 = a1;
    if ( j )
    {
      v6 = *(_QWORD **)j;
      if ( *(_QWORD *)j )
      {
        do
        {
          j = (unsigned __int64)v6;
          v6 = (_QWORD *)*v6;
        }
        while ( v6 );
      }
    }
    else
    {
      for ( i = *(_QWORD *)(a1 + 16); ; i = *(_QWORD *)(j + 16) )
      {
        j = i & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !j || *(_QWORD *)j == v5 )
          break;
        v5 = j;
      }
    }
  }
  else if ( (qword_18015D378 & 1) != 0 )
  {
    if ( qword_18015D378 == 1 )
      j = 0LL;
    else
      j = qword_18015D378 ^ ((unsigned __int64)&qword_18015D370 + 1);
  }
  else
  {
    j = qword_18015D378;
  }
  while ( j )
  {
    v3 = j;
    if ( (unsigned __int8)RtlTryAcquireSRWLockShared(j + 72) )
    {
      v2 = 1;
      break;
    }
    v8 = *(_QWORD ***)(j + 8);
    v9 = j;
    if ( v8 )
    {
      v10 = *v8;
      for ( j = *(_QWORD *)(j + 8); v10; v10 = (_QWORD *)*v10 )
        j = (unsigned __int64)v10;
    }
    else
    {
      while ( 1 )
      {
        j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !j || *(_QWORD *)j == v9 )
          break;
        v9 = j;
      }
    }
  }
  RtlReleaseSRWLockExclusive(&unk_18015D380);
  if ( a1 )
    RtlReleaseSRWLockShared(a1 + 72);
  return v3 & -(__int64)(v2 != 0);
}
