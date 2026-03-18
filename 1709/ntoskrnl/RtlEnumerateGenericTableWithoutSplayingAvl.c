/*
 * XREFs of RtlEnumerateGenericTableWithoutSplayingAvl @ 0x1400DF640
 * Callers:
 *     RtlEnumerateGenericTableAvl @ 0x14012ABB0 (RtlEnumerateGenericTableAvl.c)
 * Callees:
 *     RealSuccessor @ 0x1400DF69C (RealSuccessor.c)
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
