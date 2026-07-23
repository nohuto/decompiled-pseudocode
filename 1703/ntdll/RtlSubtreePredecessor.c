/*
 * XREFs of RtlSubtreePredecessor @ 0x1800661D0
 * Callers:
 *     RtlDelete @ 0x180065F60 (RtlDelete.c)
 *     RtlDeleteNoSplay @ 0x180066000 (RtlDeleteNoSplay.c)
 * Callees:
 *     <none>
 */

PRTL_SPLAY_LINKS __cdecl RtlSubtreePredecessor(PRTL_SPLAY_LINKS Links)
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
