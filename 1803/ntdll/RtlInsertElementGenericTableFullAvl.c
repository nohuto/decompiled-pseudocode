/*
 * XREFs of RtlInsertElementGenericTableFullAvl @ 0x180067030
 * Callers:
 *     RtlInsertElementGenericTableAvl @ 0x180066FC0 (RtlInsertElementGenericTableAvl.c)
 * Callees:
 *     sub_1800673DC @ 0x1800673DC (sub_1800673DC.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

PVOID __cdecl RtlInsertElementGenericTableFullAvl(
        PRTL_AVL_TABLE Table,
        PVOID Buffer,
        CLONG BufferSize,
        PBOOLEAN NewElement,
        PVOID NodeOrParent,
        TABLE_SEARCH_RESULT SearchResult)
{
  size_t v6; // r14
  _RTL_BALANCED_LINKS *v10; // rax
  _RTL_BALANCED_LINKS *v11; // rbx
  _RTL_BALANCED_LINKS *v12; // r8
  _RTL_BALANCED_LINKS *v13; // rcx
  _RTL_BALANCED_LINKS *i; // rdx
  char v15; // al

  v6 = BufferSize;
  if ( SearchResult == TableFoundNode )
  {
    v11 = (_RTL_BALANCED_LINKS *)NodeOrParent;
LABEL_15:
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
        v12 = v11;
        v13 = (_RTL_BALANCED_LINKS *)NodeOrParent;
        if ( SearchResult == TableInsertAsLeft )
          *((_QWORD *)NodeOrParent + 1) = v11;
        else
          *((_QWORD *)NodeOrParent + 2) = v11;
        v11->Parent = (_RTL_BALANCED_LINKS *)NodeOrParent;
        Table->BalancedRoot.Balance = -1;
        for ( i = v11->Parent; ; v13 = i )
        {
          v15 = -1;
          if ( i->LeftChild != v12 )
            v15 = 1;
          if ( v13->Balance )
            break;
          i = v13->Parent;
          v12 = v13;
          v13->Balance = v15;
        }
        if ( v13->Balance == v15 )
        {
          sub_1800673DC();
        }
        else
        {
          v13->Balance = 0;
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
      memmove(&v11[1], Buffer, v6);
      goto LABEL_15;
    }
  }
  if ( NewElement )
    *NewElement = 0;
  return 0LL;
}
