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
  unsigned __int64 Root; // rdi
  int v3; // esi
  _QWORD *v4; // rbx
  int v6; // eax
  unsigned __int64 v7; // rax
  _QWORD *v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rax

  RtlAcquireSRWLockExclusive(&stru_18015C348);
  Root = (unsigned __int64)stru_18015C328.Root;
  v3 = (__int64)stru_18015C328.Min & 1;
  v4 = 0LL;
  while ( Root )
  {
    v6 = memcmp(Buf1, (const void *)(Root + 24), 0x10uLL);
    if ( v6 >= 0 )
    {
      if ( v6 > 0 )
      {
        v7 = *(_QWORD *)(Root + 8);
        goto LABEL_11;
      }
      v4 = (_QWORD *)Root;
    }
    v7 = *(_QWORD *)Root;
LABEL_11:
    if ( v3 && v7 )
      Root ^= v7;
    else
      Root = v7;
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
  RtlReleaseSRWLockExclusive(&stru_18015C348);
  return v4;
}
