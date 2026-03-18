/*
 * XREFs of CmpNameSize @ 0x1405750F8
 * Callers:
 *     CmpCreateHiveRootCell @ 0x14046F4A4 (CmpCreateHiveRootCell.c)
 *     CmpCreateChild @ 0x140475B90 (CmpCreateChild.c)
 *     CmpAddValueKeyNew @ 0x140477BF0 (CmpAddValueKeyNew.c)
 *     CmRenameKey @ 0x14068CE58 (CmRenameKey.c)
 *     CmpAddValueKeyTombstone @ 0x14068E56C (CmpAddValueKeyTombstone.c)
 *     CmpCreateEmptyKey @ 0x140691474 (CmpCreateEmptyKey.c)
 *     CmpCreateRootNode @ 0x14083CC6C (CmpCreateRootNode.c)
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
