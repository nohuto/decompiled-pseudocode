/*
 * XREFs of RtlInsertElementGenericTableFullAvl @ 0x14006D570
 * Callers:
 *     RtlInsertElementGenericTableAvl @ 0x14006D500 (RtlInsertElementGenericTableAvl.c)
 *     PiPnpRtlObjectEventCreate @ 0x140504830 (PiPnpRtlObjectEventCreate.c)
 *     PiDmAddCacheReferenceForObject @ 0x1405D4DD0 (PiDmAddCacheReferenceForObject.c)
 * Callees:
 *     RebalanceNode @ 0x14006D698 (RebalanceNode.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
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
  _RTL_BALANCED_LINKS *i; // rdx
  char v15; // al
  bool v16; // zf
  char Balance; // dl

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
        for ( i = v11->Parent; ; v12 = i )
        {
          v15 = -1;
          v16 = i->LeftChild == v13;
          Balance = v12->Balance;
          if ( !v16 )
            v15 = 1;
          if ( Balance )
            break;
          i = v12->Parent;
          v13 = v12;
          v12->Balance = v15;
        }
        if ( Balance == v15 )
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
