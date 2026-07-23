/*
 * XREFs of sub_180005E60 @ 0x180005E60
 * Callers:
 *     sub_180005DF4 @ 0x180005DF4 (sub_180005DF4.c)
 * Callees:
 *     sub_180005F30 @ 0x180005F30 (sub_180005F30.c)
 *     RtlRbInsertNodeEx @ 0x180021C90 (RtlRbInsertNodeEx.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall sub_180005E60(PRTL_BALANCED_NODE Node)
{
  unsigned __int64 Root; // rdi
  BOOLEAN v3; // bl
  int v4; // esi
  unsigned __int64 v5; // rax

  RtlAcquireSRWLockExclusive(&stru_18015D380);
  Root = (unsigned __int64)Parent.Root;
  v3 = 0;
  if ( ((__int64)Parent.Min & 1) != 0 )
  {
    if ( Parent.Root )
      Root = (unsigned __int64)&Parent ^ (unsigned __int64)Parent.Root;
    else
      Root = 0LL;
  }
  v4 = (__int64)Parent.Min & 1;
  if ( Root )
  {
    while ( 1 )
    {
      if ( (int)sub_180005F30(&Node[1], Root) < 0 )
      {
        v5 = *(_QWORD *)Root;
        if ( v4 )
        {
          if ( !v5 )
            break;
          v5 ^= Root;
        }
        if ( !v5 )
          break;
      }
      else
      {
        v5 = *(_QWORD *)(Root + 8);
        if ( v4 )
        {
          if ( !v5 )
            goto LABEL_11;
          v5 ^= Root;
        }
        if ( !v5 )
        {
LABEL_11:
          v3 = 1;
          break;
        }
      }
      Root = v5;
    }
  }
  RtlRbInsertNodeEx(&Parent, (PRTL_BALANCED_NODE)Root, v3, Node);
  RtlReleaseSRWLockExclusive(&stru_18015D380);
}
