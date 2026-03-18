/*
 * XREFs of CmpCopyName @ 0x1405157EC
 * Callers:
 *     CmpCreateChild @ 0x140514170 (CmpCreateChild.c)
 *     CmpAddValueKeyNew @ 0x1405156B4 (CmpAddValueKeyNew.c)
 *     CmpCreateHiveRootCell @ 0x14064F024 (CmpCreateHiveRootCell.c)
 *     CmRenameKey @ 0x1406F1120 (CmRenameKey.c)
 *     CmpAddValueKeyTombstone @ 0x1406F2834 (CmpAddValueKeyTombstone.c)
 *     CmpCreateEmptyKey @ 0x1406F4C7C (CmpCreateEmptyKey.c)
 *     CmpCreateRootNode @ 0x1408B1290 (CmpCreateRootNode.c)
 * Callees:
 *     memmove @ 0x1401BC900 (memmove.c)
 */

__int64 __fastcall CmpCopyName(_BYTE *a1, const void **a2)
{
  __int64 v3; // rdx
  int v4; // r8d
  unsigned __int16 v5; // r10

  v3 = 0LL;
  v4 = *(unsigned __int16 *)a2;
  if ( (v4 & 0xFFFFFFFE) == 0 )
    return (unsigned __int16)v4 >> 1;
  while ( 1 )
  {
    v5 = *((_WORD *)a2[1] + v3);
    if ( v5 > 0xFFu )
      break;
    a1[v3] = v5;
    v3 = (unsigned int)(v3 + 1);
    LOWORD(v4) = *(_WORD *)a2;
    if ( (unsigned int)v3 >= *(unsigned __int16 *)a2 >> 1 )
      return (unsigned __int16)v4 >> 1;
  }
  memmove(a1, a2[1], (unsigned __int16)v4);
  return *(unsigned __int16 *)a2;
}
