/*
 * XREFs of sub_180005BC4 @ 0x180005BC4
 * Callers:
 *     EtwDeliverDataBlock @ 0x180005750 (EtwDeliverDataBlock.c)
 * Callees:
 *     sub_1800242B4 @ 0x1800242B4 (sub_1800242B4.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     RtlTryAcquireSRWLockShared @ 0x180074F10 (RtlTryAcquireSRWLockShared.c)
 */

_QWORD *__fastcall sub_180005BC4(__int64 a1, __int16 a2)
{
  unsigned __int64 v2; // rbx
  int v3; // esi
  _QWORD *i; // rdi
  int v5; // eax
  unsigned __int64 v6; // rax
  _QWORD **v7; // rax
  _QWORD *v8; // rcx
  _QWORD *v9; // rcx
  __int64 v11; // [rsp+20h] [rbp-18h] BYREF
  __int16 v12; // [rsp+28h] [rbp-10h]

  v11 = a1;
  v12 = a2;
  RtlAcquireSRWLockExclusive(&unk_18015D380);
  v2 = qword_18015D370;
  if ( (qword_18015D378 & 1) != 0 && qword_18015D370 )
    v2 = (unsigned __int64)&qword_18015D370 ^ qword_18015D370;
  v3 = qword_18015D378 & 1;
  i = 0LL;
  while ( v2 )
  {
    v5 = sub_1800242B4(&v11, v2);
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
    while ( !(unsigned __int8)RtlTryAcquireSRWLockShared(i + 9) )
    {
      v7 = (_QWORD **)i[1];
      v8 = i;
      if ( v7 )
      {
        v9 = *v7;
        for ( i = (_QWORD *)i[1]; v9; v9 = (_QWORD *)*v9 )
          i = v9;
      }
      else
      {
        while ( 1 )
        {
          i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !i || (_QWORD *)*i == v8 )
            break;
          v8 = i;
        }
      }
      if ( !i || (unsigned int)sub_1800242B4(&v11, i) )
        goto LABEL_26;
    }
  }
  else
  {
LABEL_26:
    i = 0LL;
  }
  RtlReleaseSRWLockExclusive(&unk_18015D380);
  return i;
}
