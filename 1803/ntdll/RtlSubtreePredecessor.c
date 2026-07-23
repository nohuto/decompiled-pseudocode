/*
 * XREFs of RtlSubtreePredecessor @ 0x180066E80
 * Callers:
 *     RtlDelete @ 0x180066C00 (RtlDelete.c)
 *     RtlDeleteNoSplay @ 0x180066CA0 (RtlDeleteNoSplay.c)
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
