/*
 * XREFs of RtlRealSuccessor @ 0x180066260
 * Callers:
 *     RtlEnumerateGenericTable @ 0x1800659B0 (RtlEnumerateGenericTable.c)
 *     RtlEnumerateGenericTableWithoutSplaying @ 0x180066200 (RtlEnumerateGenericTableWithoutSplaying.c)
 * Callees:
 *     <none>
 */

PRTL_SPLAY_LINKS __cdecl RtlRealSuccessor(PRTL_SPLAY_LINKS Links)
{
  PRTL_SPLAY_LINKS v1; // rax
  _RTL_SPLAY_LINKS *v2; // rdx
  _RTL_SPLAY_LINKS *RightChild; // rcx
  PRTL_SPLAY_LINKS j; // rcx
  _RTL_SPLAY_LINKS *i; // rax

  v1 = Links;
  v2 = 0LL;
  RightChild = Links->RightChild;
  if ( RightChild )
  {
    for ( i = RightChild->LeftChild; i; i = i->LeftChild )
      RightChild = i;
    return RightChild;
  }
  else
  {
    for ( j = v1->Parent; j->RightChild == v1; j = j->Parent )
      v1 = j;
    if ( v1->Parent->LeftChild == v1 )
      return v1->Parent;
    return v2;
  }
}
