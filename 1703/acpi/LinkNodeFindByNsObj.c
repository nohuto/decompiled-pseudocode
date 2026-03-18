/*
 * XREFs of LinkNodeFindByNsObj @ 0x1C00A5550
 * Callers:
 *     LinkNodeCrackPrt @ 0x1C001B96C (LinkNodeCrackPrt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LinkNodeFindByNsObj(__int64 a1, __int64 *a2)
{
  __int64 i; // rax

  for ( i = LinkNodeListHead - 56; ; i = *(_QWORD *)(i + 56) - 56LL )
  {
    if ( &LinkNodeListHead == (__int64 *)(i + 56) )
      return 3221226021LL;
    if ( *(_QWORD *)(i + 552) == a1 )
      break;
  }
  *a2 = i;
  return 0LL;
}
