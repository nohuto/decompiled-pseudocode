/*
 * XREFs of sub_18001B870 @ 0x18001B870
 * Callers:
 *     sub_18001AF94 @ 0x18001AF94 (sub_18001AF94.c)
 *     sub_18001B710 @ 0x18001B710 (sub_18001B710.c)
 *     EtwDeliverDataBlock @ 0x1800523B0 (EtwDeliverDataBlock.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     sub_180052928 @ 0x180052928 (sub_180052928.c)
 *     memcmp @ 0x180099A70 (memcmp.c)
 */

_QWORD *__fastcall sub_18001B870(_QWORD *Buf1)
{
  __int64 v2; // rdi
  int v3; // esi
  _QWORD *v4; // rbx
  int v6; // eax
  __int64 v7; // rax
  _QWORD *v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rax

  RtlAcquireSRWLockExclusive(&unk_18015C348);
  v2 = qword_18015C328;
  v3 = byte_18015C330 & 1;
  v4 = 0LL;
  while ( v2 )
  {
    v6 = memcmp(Buf1, (const void *)(v2 + 24), 0x10uLL);
    if ( v6 >= 0 )
    {
      if ( v6 > 0 )
      {
        v7 = *(_QWORD *)(v2 + 8);
        goto LABEL_11;
      }
      v4 = (_QWORD *)v2;
    }
    v7 = *(_QWORD *)v2;
LABEL_11:
    if ( v3 && v7 )
      v2 ^= v7;
    else
      v2 = v7;
  }
  if ( v4 )
  {
    while ( !(unsigned __int8)sub_180052928(v4) )
    {
      v9 = (_QWORD *)v4[1];
      if ( v9 )
      {
        do
        {
          v4 = v9;
          v9 = (_QWORD *)*v9;
        }
        while ( v9 );
      }
      else
      {
        while ( 1 )
        {
          v4 = (_QWORD *)(v4[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v4 || (_QWORD *)*v4 == v8 )
            break;
          v8 = v4;
        }
      }
      if ( v4 )
      {
        v10 = *Buf1 - v4[3];
        if ( *Buf1 == v4[3] )
          v10 = Buf1[1] - v4[4];
        if ( !v10 )
          continue;
      }
      goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    v4 = 0LL;
  }
  RtlReleaseSRWLockExclusive(&unk_18015C348);
  return v4;
}
