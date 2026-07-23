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
  __int64 Root; // rbx
  int v3; // esi
  _QWORD *i; // rdi
  int v5; // eax
  __int64 v6; // rax
  _QWORD *v7; // rcx
  _QWORD **v8; // rax
  _QWORD *v9; // rcx

  RtlAcquireSRWLockExclusive(&stru_18015D380);
  Root = (__int64)Parent.Root;
  if ( ((__int64)Parent.Min & 1) != 0 && Parent.Root )
    Root = (unsigned __int64)&Parent ^ (unsigned __int64)Parent.Root;
  v3 = (__int64)Parent.Min & 1;
  i = 0LL;
  while ( Root )
  {
    v5 = sub_180005F30(a1, Root);
    if ( v5 >= 0 )
    {
      if ( v5 > 0 )
      {
        v6 = *(_QWORD *)(Root + 8);
        goto LABEL_10;
      }
      i = (_QWORD *)Root;
    }
    v6 = *(_QWORD *)Root;
LABEL_10:
    if ( v3 && v6 )
      Root ^= v6;
    else
      Root = v6;
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
  RtlReleaseSRWLockExclusive(&stru_18015D380);
  return i;
}
