/*
 * XREFs of sub_180024300 @ 0x180024300
 * Callers:
 *     EtwDeliverDataBlock @ 0x180005750 (EtwDeliverDataBlock.c)
 *     sub_1800299E8 @ 0x1800299E8 (sub_1800299E8.c)
 *     sub_180029AF4 @ 0x180029AF4 (sub_180029AF4.c)
 * Callees:
 *     sub_180005DB0 @ 0x180005DB0 (sub_180005DB0.c)
 *     sub_180005F30 @ 0x180005F30 (sub_180005F30.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 */

_QWORD *__fastcall sub_180024300(_QWORD *a1)
{
  unsigned __int64 v2; // rbx
  int v3; // esi
  _QWORD *i; // rdi
  int v5; // eax
  unsigned __int64 v6; // rax
  _QWORD *v7; // rcx
  _QWORD **v8; // rax
  _QWORD *v9; // rcx

  RtlAcquireSRWLockExclusive(&unk_18015D380);
  v2 = qword_18015D360;
  if ( (qword_18015D368 & 1) != 0 && qword_18015D360 )
    v2 = (unsigned __int64)&qword_18015D360 ^ qword_18015D360;
  v3 = qword_18015D368 & 1;
  i = 0LL;
  while ( v2 )
  {
    v5 = sub_180005F30(a1, v2);
    if ( v5 >= 0 )
    {
      if ( v5 > 0 )
      {
        v6 = *(_QWORD *)(v2 + 8);
        goto LABEL_10;
      }
      i = (_QWORD *)v2;
    }
    v6 = *(_QWORD *)v2;
LABEL_10:
    if ( v3 && v6 )
      v2 ^= v6;
    else
      v2 = v6;
  }
  if ( i )
  {
    while ( !sub_180005DB0((__int64)i) )
    {
      v8 = (_QWORD **)i[1];
      if ( v8 )
      {
        v9 = *v8;
        for ( i = (_QWORD *)i[1]; v9; v9 = (_QWORD *)*v9 )
          i = v9;
      }
      else
      {
        while ( 1 )
        {
          i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !i || (_QWORD *)*i == v7 )
            break;
          v7 = i;
        }
      }
      if ( !i || *a1 != i[3] || a1[1] != i[4] )
        goto LABEL_27;
    }
  }
  else
  {
LABEL_27:
    i = 0LL;
  }
  RtlReleaseSRWLockExclusive(&unk_18015D380);
  return i;
}
