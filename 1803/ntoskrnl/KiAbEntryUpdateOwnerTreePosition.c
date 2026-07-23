/*
 * XREFs of KiAbEntryUpdateOwnerTreePosition @ 0x140063D78
 * Callers:
 *     KiAbProcessThreadLocks @ 0x1400640E0 (KiAbProcessThreadLocks.c)
 *     KiAbProcessContextSwitch @ 0x1400F83C0 (KiAbProcessContextSwitch.c)
 * Callees:
 *     KiAbOwnerComputeCpuPriorityKey @ 0x140064D30 (KiAbOwnerComputeCpuPriorityKey.c)
 *     RtlRbInsertNodeEx @ 0x1400E84C0 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x1400E9770 (RtlRbRemoveNode.c)
 */

BOOLEAN __fastcall KiAbEntryUpdateOwnerTreePosition(PRTL_BALANCED_NODE Node, _RTL_RB_TREE *a2)
{
  BOOLEAN result; // al
  _RTL_RB_TREE *v5; // rbx
  _RTL_BALANCED_NODE *Min; // rax
  BOOLEAN v7; // cl
  unsigned __int64 Root; // rdx
  int v9; // r8d
  _RTL_BALANCED_NODE *v10; // rax

  result = KiAbOwnerComputeCpuPriorityKey();
  if ( LOBYTE(Node[2].Children[0]) != result )
  {
    v5 = a2 + 3;
    LOBYTE(Node[2].Children[0]) = result;
    RtlRbRemoveNode(v5, Node);
    Min = v5->Min;
    v7 = 0;
    Root = (unsigned __int64)v5->Root;
    if ( ((unsigned __int8)Min & 1) != 0 )
    {
      if ( Root )
        Root ^= (unsigned __int64)v5;
      else
        Root = 0LL;
    }
    v9 = (unsigned __int8)Min & 1;
    if ( Root )
    {
      while ( 1 )
      {
        if ( *(_BYTE *)(Root + 48) <= SLOBYTE(Node[2].Children[0]) )
        {
          v10 = *(_RTL_BALANCED_NODE **)(Root + 8);
          if ( v9 )
          {
            if ( !v10 )
              goto LABEL_18;
            v10 = (_RTL_BALANCED_NODE *)(Root ^ (unsigned __int64)v10);
          }
          if ( !v10 )
          {
LABEL_18:
            v7 = 1;
            return RtlRbInsertNodeEx(v5, (PRTL_BALANCED_NODE)Root, v7, Node);
          }
        }
        else
        {
          v10 = *(_RTL_BALANCED_NODE **)Root;
          if ( v9 )
          {
            if ( !v10 )
              return RtlRbInsertNodeEx(v5, (PRTL_BALANCED_NODE)Root, v7, Node);
            v10 = (_RTL_BALANCED_NODE *)(Root ^ (unsigned __int64)v10);
          }
          if ( !v10 )
            return RtlRbInsertNodeEx(v5, (PRTL_BALANCED_NODE)Root, v7, Node);
        }
        Root = (unsigned __int64)v10;
      }
    }
    return RtlRbInsertNodeEx(v5, (PRTL_BALANCED_NODE)Root, v7, Node);
  }
  return result;
}
