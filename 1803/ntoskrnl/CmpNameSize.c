/*
 * XREFs of CmpNameSize @ 0x140560BD4
 * Callers:
 *     CmpCreateChild @ 0x140514170 (CmpCreateChild.c)
 *     CmpAddValueKeyNew @ 0x1405156B4 (CmpAddValueKeyNew.c)
 *     CmpCreateHiveRootCell @ 0x14064F024 (CmpCreateHiveRootCell.c)
 *     CmRenameKey @ 0x1406F1120 (CmRenameKey.c)
 *     CmpAddValueKeyTombstone @ 0x1406F2834 (CmpAddValueKeyTombstone.c)
 *     CmpCreateEmptyKey @ 0x1406F4C7C (CmpCreateEmptyKey.c)
 *     CmpCreateRootNode @ 0x1408B1290 (CmpCreateRootNode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpNameSize(unsigned __int16 *a1)
{
  unsigned __int16 v1; // dx
  __int64 v2; // r8
  unsigned int v3; // r9d

  v1 = *a1;
  v2 = 0LL;
  v3 = *a1 >> 1;
  if ( v3 )
  {
    while ( *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * v2) <= 0xFFu )
    {
      v2 = (unsigned int)(v2 + 1);
      if ( (unsigned int)v2 >= v3 )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    v1 >>= 1;
  }
  return v1;
}
