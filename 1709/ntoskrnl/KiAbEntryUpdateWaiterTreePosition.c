/*
 * XREFs of KiAbEntryUpdateWaiterTreePosition @ 0x1400AA8CC
 * Callers:
 *     KiAbProcessThreadLocks @ 0x1400A7650 (KiAbProcessThreadLocks.c)
 *     KiAbForceProcessLockEntry @ 0x14013F9F0 (KiAbForceProcessLockEntry.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x14005E640 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x14005EF60 (RtlRbRemoveNode.c)
 */

char __fastcall KiAbEntryUpdateWaiterTreePosition(PRTL_BALANCED_NODE Node, _RTL_RB_TREE *a2)
{
  char result; // al
  _RTL_RB_TREE *v4; // rdi
  BOOLEAN v5; // cl
  _RTL_BALANCED_NODE *Root; // rdx
  _RTL_BALANCED_NODE *v7; // rax

  result = ((_BYTE *)&Node[8].Left - (unsigned __int16)(16 * LOBYTE(Node[1].Children[0])))[3];
  if ( result > 15 )
    result = 15;
  if ( LOBYTE(Node[2].Children[0]) == result )
    return result;
  v4 = a2 + 4;
  LOBYTE(Node[2].Children[0]) = result;
  RtlRbRemoveNode(a2 + 4, Node);
  v5 = 0;
  Root = v4->Root;
  if ( !v4->Root )
    return RtlRbInsertNodeEx(v4, Root, v5, Node);
  while ( 1 )
  {
    if ( SLOBYTE(Root[2].Children[0]) < SLOBYTE(Node[2].Children[0]) )
    {
      v7 = Root->Children[0];
      if ( (*(_BYTE *)&v4->0 & 1) != 0 )
      {
        if ( !v7 )
          return RtlRbInsertNodeEx(v4, Root, v5, Node);
        v7 = (_RTL_BALANCED_NODE *)((unsigned __int64)Root ^ (unsigned __int64)v7);
      }
      if ( !v7 )
        return RtlRbInsertNodeEx(v4, Root, v5, Node);
      goto LABEL_13;
    }
    v7 = Root->Children[1];
    if ( (*(_BYTE *)&v4->0 & 1) != 0 )
      break;
LABEL_7:
    if ( !v7 )
      goto LABEL_8;
LABEL_13:
    Root = v7;
  }
  if ( v7 )
  {
    v7 = (_RTL_BALANCED_NODE *)((unsigned __int64)Root ^ (unsigned __int64)v7);
    goto LABEL_7;
  }
LABEL_8:
  v5 = 1;
  return RtlRbInsertNodeEx(v4, Root, v5, Node);
}
