/*
 * XREFs of VrpGetNextToken @ 0x1406A9810
 * Callers:
 *     VrpCreateNamespaceNode @ 0x1406A56CC (VrpCreateNamespaceNode.c)
 *     VrpPreLoadKey @ 0x1406A6F7C (VrpPreLoadKey.c)
 *     VrpTranslatePath @ 0x1406A831C (VrpTranslatePath.c)
 *     VrpComparePath @ 0x1406A96C8 (VrpComparePath.c)
 *     VrpCountPathComponents @ 0x1406A97B0 (VrpCountPathComponents.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall VrpGetNextToken(unsigned __int16 *a1, __int64 *a2, __int64 a3)
{
  __int64 v4; // rcx
  unsigned __int64 i; // rcx
  unsigned __int64 j; // rcx
  __int64 v7; // rcx
  unsigned __int64 result; // rax

  *(_WORD *)a3 = 0;
  if ( 2 * *a2 < (unsigned __int64)*a1 )
  {
    do
    {
      v4 = *a2;
      if ( *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * *a2) != 92 )
        break;
      *a2 = v4 + 1;
    }
    while ( 2 * (v4 + 1) < (unsigned __int64)*a1 );
  }
  *(_QWORD *)(a3 + 8) = *((_QWORD *)a1 + 1) + 2 * *a2;
  for ( i = 2 * *a2; i < *a1 && *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * *a2) != 92; i = 2 * *a2 )
  {
    *(_WORD *)a3 += 2;
    ++*a2;
  }
  for ( j = 2 * *a2; ; j = 2 * (v7 + 1) )
  {
    result = *a1;
    if ( j >= result )
      break;
    v7 = *a2;
    result = *((_QWORD *)a1 + 1);
    if ( *(_WORD *)(result + 2 * *a2) != 92 )
      break;
    *a2 = v7 + 1;
  }
  return result;
}
