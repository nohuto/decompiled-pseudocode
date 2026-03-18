/*
 * XREFs of CmpNameSize @ 0x140491A5C
 * Callers:
 *     CmpAddValueKeyNew @ 0x1404918D4 (CmpAddValueKeyNew.c)
 *     CmpCreateChild @ 0x1404D0388 (CmpCreateChild.c)
 *     CmpCreateHiveRootCell @ 0x1405D06F4 (CmpCreateHiveRootCell.c)
 *     CmRenameKey @ 0x140663778 (CmRenameKey.c)
 *     CmpAddValueKeyTombstone @ 0x140664DD4 (CmpAddValueKeyTombstone.c)
 *     CmpCreateEmptyKey @ 0x140666F54 (CmpCreateEmptyKey.c)
 *     CmpCreateRootNode @ 0x140808720 (CmpCreateRootNode.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CmpNameSize(unsigned __int16 *a1)
{
  unsigned __int64 v1; // r8
  __int64 v2; // rdx
  unsigned int v3; // r9d

  v1 = *a1;
  v2 = 0LL;
  v3 = *a1 >> 1;
  if ( !v3 )
    return v1 >> 1;
  while ( *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * v2) <= 0xFFu )
  {
    v2 = (unsigned int)(v2 + 1);
    if ( (unsigned int)v2 >= v3 )
      return v1 >> 1;
  }
  return (unsigned __int16)v1;
}
