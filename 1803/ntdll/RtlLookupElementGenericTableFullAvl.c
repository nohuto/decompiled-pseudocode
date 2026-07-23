/*
 * XREFs of RtlLookupElementGenericTableFullAvl @ 0x18006C990
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 */

PVOID __cdecl RtlLookupElementGenericTableFullAvl(
        PRTL_AVL_TABLE Table,
        PVOID Buffer,
        PVOID *NodeOrParent,
        TABLE_SEARCH_RESULT *SearchResult)
{
  TABLE_SEARCH_RESULT v4; // ebx
  _RTL_BALANCED_LINKS *i; // rdi
  int v10; // eax
  _RTL_BALANCED_LINKS *RightChild; // rax

  v4 = TableEmptyTree;
  if ( !Table->NumberGenericTableElements )
    goto LABEL_7;
  for ( i = Table->BalancedRoot.RightChild; ; i = RightChild )
  {
    v10 = ((__int64 (__fastcall *)(PRTL_AVL_TABLE, PVOID, _RTL_BALANCED_LINKS *))Table->CompareRoutine)(
            Table,
            Buffer,
            &i[1]);
    if ( !v10 )
      break;
    if ( v10 != 1 )
    {
      v4 = TableFoundNode;
      goto LABEL_6;
    }
    RightChild = i->RightChild;
    if ( !RightChild )
    {
      v4 = TableInsertAsRight;
      goto LABEL_6;
    }
LABEL_10:
    ;
  }
  RightChild = i->LeftChild;
  if ( RightChild )
    goto LABEL_10;
  v4 = TableInsertAsLeft;
LABEL_6:
  *NodeOrParent = i;
LABEL_7:
  *SearchResult = v4;
  if ( v4 == TableFoundNode )
    return (char *)*NodeOrParent + 32;
  else
    return 0LL;
}
