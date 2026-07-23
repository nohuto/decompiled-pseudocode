/*
 * XREFs of KiAbEntryUpdateOwnerTreePosition @ 0x1400A9504
 * Callers:
 *     KiAbProcessContextSwitch @ 0x14006F610 (KiAbProcessContextSwitch.c)
 *     KiAbProcessThreadLocks @ 0x1400A7650 (KiAbProcessThreadLocks.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x14005E640 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x14005EF60 (RtlRbRemoveNode.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x1400A95A0 (KiAbOwnerComputeCpuPriorityKey.c)
 */

BOOLEAN __fastcall KiAbEntryUpdateOwnerTreePosition(PRTL_BALANCED_NODE Node)
{
  BOOLEAN result; // al
  _RTL_RB_TREE *v3; // r9
  _RTL_RB_TREE *v4; // rdi
  BOOLEAN v5; // cl
  _RTL_BALANCED_NODE *Root; // rdx
  _RTL_BALANCED_NODE *v7; // rax

  result = KiAbOwnerComputeCpuPriorityKey(Node);
  if ( LOBYTE(Node[2].Children[0]) == result )
    return result;
  v4 = v3 + 3;
  LOBYTE(Node[2].Children[0]) = result;
  RtlRbRemoveNode(v3 + 3, Node);
  v5 = 0;
  Root = v4->Root;
  if ( !v4->Root )
    return RtlRbInsertNodeEx(v4, Root, v5, Node);
  while ( 1 )
  {
    if ( SLOBYTE(Root[2].Children[0]) > SLOBYTE(Node[2].Children[0]) )
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
      goto LABEL_10;
    }
    v7 = Root->Children[1];
    if ( (*(_BYTE *)&v4->0 & 1) != 0 )
      break;
LABEL_6:
    if ( !v7 )
      goto LABEL_7;
LABEL_10:
    Root = v7;
  }
  if ( v7 )
  {
    v7 = (_RTL_BALANCED_NODE *)((unsigned __int64)Root ^ (unsigned __int64)v7);
    goto LABEL_6;
  }
LABEL_7:
  v5 = 1;
  return RtlRbInsertNodeEx(v4, Root, v5, Node);
}
