/*
 * XREFs of RtlEnumerateGenericTableWithoutSplayingAvl @ 0x14004C740
 * Callers:
 *     RtlEnumerateGenericTableAvl @ 0x14004C720 (RtlEnumerateGenericTableAvl.c)
 * Callees:
 *     RealSuccessor @ 0x14004C79C (RealSuccessor.c)
 */

PVOID __stdcall RtlEnumerateGenericTableWithoutSplayingAvl(PRTL_AVL_TABLE Table, PVOID *RestartKey)
{
  _RTL_BALANCED_LINKS *RightChild; // rax
  _RTL_BALANCED_LINKS **v3; // r8
  _RTL_BALANCED_LINKS *i; // rcx

  if ( !Table->NumberGenericTableElements )
    return 0LL;
  if ( *RestartKey )
  {
    RightChild = (_RTL_BALANCED_LINKS *)RealSuccessor(*RestartKey);
    if ( RightChild )
      *v3 = RightChild;
  }
  else
  {
    RightChild = Table->BalancedRoot.RightChild;
    for ( i = RightChild->LeftChild; i; i = i->LeftChild )
      RightChild = i;
    *RestartKey = RightChild;
  }
  return (PVOID)((unsigned __int64)&RightChild[1] & -(__int64)(RightChild != 0LL));
}
