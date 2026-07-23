/*
 * XREFs of RtlEnumerateGenericTableWithoutSplayingAvl @ 0x180072F00
 * Callers:
 *     RtlEnumerateGenericTableAvl @ 0x180072EE0 (RtlEnumerateGenericTableAvl.c)
 * Callees:
 *     sub_180072F58 @ 0x180072F58 (sub_180072F58.c)
 */

PVOID __cdecl RtlEnumerateGenericTableWithoutSplayingAvl(PRTL_AVL_TABLE Table, PVOID *RestartKey)
{
  _RTL_BALANCED_LINKS *RightChild; // rax
  _RTL_BALANCED_LINKS **v3; // r8
  _RTL_BALANCED_LINKS *i; // rcx

  if ( !Table->NumberGenericTableElements )
    return 0LL;
  if ( *RestartKey )
  {
    RightChild = (_RTL_BALANCED_LINKS *)sub_180072F58(*RestartKey, RestartKey, RestartKey);
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
