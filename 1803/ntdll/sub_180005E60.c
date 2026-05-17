/*
 * XREFs of sub_180005E60 @ 0x180005E60
 * Callers:
 *     sub_180005DF4 @ 0x180005DF4 (sub_180005DF4.c)
 * Callees:
 *     sub_180005F30 @ 0x180005F30 (sub_180005F30.c)
 *     RtlRbInsertNodeEx @ 0x180021C90 (RtlRbInsertNodeEx.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall sub_180005E60(__int64 a1)
{
  __int64 v2; // r8
  unsigned __int64 v3; // rdi
  char v4; // bl
  int v5; // esi
  unsigned __int64 v6; // rax

  RtlAcquireSRWLockExclusive(&unk_18015D380);
  v3 = qword_18015D360;
  v4 = 0;
  if ( (qword_18015D368 & 1) != 0 )
  {
    if ( qword_18015D360 )
      v3 = (unsigned __int64)&qword_18015D360 ^ qword_18015D360;
    else
      v3 = 0LL;
  }
  v5 = qword_18015D368 & 1;
  if ( v3 )
  {
    while ( 1 )
    {
      if ( (int)sub_180005F30(a1 + 24, v3) < 0 )
      {
        v6 = *(_QWORD *)v3;
        if ( v5 )
        {
          if ( !v6 )
            break;
          v6 ^= v3;
        }
        if ( !v6 )
          break;
      }
      else
      {
        v6 = *(_QWORD *)(v3 + 8);
        if ( v5 )
        {
          if ( !v6 )
            goto LABEL_11;
          v6 ^= v3;
        }
        if ( !v6 )
        {
LABEL_11:
          v4 = 1;
          break;
        }
      }
      v3 = v6;
    }
  }
  LOBYTE(v2) = v4;
  RtlRbInsertNodeEx(&qword_18015D360, v3, v2, a1);
  return RtlReleaseSRWLockExclusive(&unk_18015D380);
}
