/*
 * XREFs of sub_180052B08 @ 0x180052B08
 * Callers:
 *     sub_180052A9C @ 0x180052A9C (sub_180052A9C.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x18001E790 (RtlRbInsertNodeEx.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     memcmp @ 0x180099A70 (memcmp.c)
 */

void __fastcall sub_180052B08(PRTL_BALANCED_NODE Node)
{
  BOOLEAN v2; // bl
  PRTL_BALANCED_NODE Root; // rdi
  int v4; // esi
  _RTL_BALANCED_NODE *v5; // rax

  RtlAcquireSRWLockExclusive(&stru_18015C348);
  v2 = 0;
  Root = stru_18015C328.Root;
  v4 = (__int64)stru_18015C328.Min & 1;
  if ( stru_18015C328.Root )
  {
    while ( 1 )
    {
      if ( memcmp(&Node[1], &Root[1], 0x10uLL) < 0 )
      {
        v5 = Root->Children[0];
        if ( v4 )
        {
          if ( !v5 )
            break;
          v5 = (_RTL_BALANCED_NODE *)((unsigned __int64)Root ^ (unsigned __int64)v5);
        }
        if ( !v5 )
          break;
      }
      else
      {
        v5 = Root->Children[1];
        if ( v4 )
        {
          if ( !v5 )
          {
LABEL_9:
            v2 = 1;
            break;
          }
          v5 = (_RTL_BALANCED_NODE *)((unsigned __int64)Root ^ (unsigned __int64)v5);
        }
        if ( !v5 )
          goto LABEL_9;
      }
      Root = v5;
    }
  }
  RtlRbInsertNodeEx(&stru_18015C328, Root, v2, Node);
  RtlReleaseSRWLockExclusive(&stru_18015C348);
}
