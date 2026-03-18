/*
 * XREFs of RtlInsertElementGenericTableFullAvl @ 0x1400DFD30
 * Callers:
 *     RtlInsertElementGenericTableAvl @ 0x1400DFCC0 (RtlInsertElementGenericTableAvl.c)
 *     PiDmAddCacheReferenceForObject @ 0x140518534 (PiDmAddCacheReferenceForObject.c)
 *     PiPnpRtlObjectEventCreate @ 0x140522FC4 (PiPnpRtlObjectEventCreate.c)
 * Callees:
 *     RebalanceNode @ 0x1400DFE58 (RebalanceNode.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 */

PVOID __stdcall RtlInsertElementGenericTableFullAvl(
        PRTL_AVL_TABLE Table,
        PVOID Buffer,
        CLONG BufferSize,
        PBOOLEAN NewElement,
        PVOID NodeOrParent,
        TABLE_SEARCH_RESULT SearchResult)
{
  size_t v7; // rsi
  _RTL_BALANCED_LINKS *v10; // rax
  _RTL_BALANCED_LINKS *v11; // rbx
  _RTL_BALANCED_LINKS *v12; // rcx
  _RTL_BALANCED_LINKS *v13; // r8
  char v14; // dl
  char Balance; // al

  v7 = BufferSize;
  if ( SearchResult == TableFoundNode )
  {
    v11 = (_RTL_BALANCED_LINKS *)NodeOrParent;
LABEL_16:
    if ( NewElement )
      *NewElement = SearchResult != TableFoundNode;
    return &v11[1];
  }
  if ( BufferSize + 32 >= BufferSize )
  {
    v10 = (_RTL_BALANCED_LINKS *)((__int64 (*)(void))Table->AllocateRoutine)();
    v11 = v10;
    if ( v10 )
    {
      memset(v10, 0, sizeof(_RTL_BALANCED_LINKS));
      ++Table->NumberGenericTableElements;
      if ( SearchResult )
      {
        v12 = (_RTL_BALANCED_LINKS *)NodeOrParent;
        v13 = v11;
        if ( SearchResult == TableInsertAsLeft )
          *((_QWORD *)NodeOrParent + 1) = v11;
        else
          *((_QWORD *)NodeOrParent + 2) = v11;
        v11->Parent = (_RTL_BALANCED_LINKS *)NodeOrParent;
        Table->BalancedRoot.Balance = -1;
        while ( 1 )
        {
          v14 = -1;
          Balance = v12->Balance;
          if ( v13->Parent->LeftChild != v13 )
            v14 = 1;
          if ( Balance )
            break;
          v12->Balance = v14;
          v13 = v12;
          v12 = v12->Parent;
        }
        if ( Balance == v14 )
        {
          RebalanceNode(v12);
        }
        else
        {
          v12->Balance = 0;
          if ( !Table->BalancedRoot.Balance )
            ++Table->DepthOfTree;
        }
      }
      else
      {
        Table->BalancedRoot.RightChild = v11;
        v11->Parent = &Table->BalancedRoot;
        Table->DepthOfTree = 1;
      }
      memmove(&v11[1], Buffer, v7);
      goto LABEL_16;
    }
  }
  if ( NewElement )
    *NewElement = 0;
  return 0LL;
}
