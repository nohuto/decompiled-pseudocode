/*
 * XREFs of RtlSubtreePredecessor @ 0x1400B1000
 * Callers:
 *     RtlDelete @ 0x140069CC0 (RtlDelete.c)
 *     RtlDeleteNoSplay @ 0x1400B0DD0 (RtlDeleteNoSplay.c)
 * Callees:
 *     <none>
 */

PRTL_SPLAY_LINKS __stdcall RtlSubtreePredecessor(PRTL_SPLAY_LINKS Links)
{
  PRTL_SPLAY_LINKS result; // rax
  _RTL_SPLAY_LINKS *i; // rcx

  result = Links->LeftChild;
  if ( result )
  {
    for ( i = result->RightChild; i; i = i->RightChild )
      result = i;
  }
  return result;
}
