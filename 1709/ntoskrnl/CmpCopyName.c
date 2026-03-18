/*
 * XREFs of CmpCopyName @ 0x140477D28
 * Callers:
 *     CmpCreateHiveRootCell @ 0x14046F4A4 (CmpCreateHiveRootCell.c)
 *     CmpCreateChild @ 0x140475B90 (CmpCreateChild.c)
 *     CmpAddValueKeyNew @ 0x140477BF0 (CmpAddValueKeyNew.c)
 *     CmRenameKey @ 0x14068CE58 (CmRenameKey.c)
 *     CmpAddValueKeyTombstone @ 0x14068E56C (CmpAddValueKeyTombstone.c)
 *     CmpCreateEmptyKey @ 0x140691474 (CmpCreateEmptyKey.c)
 *     CmpCreateRootNode @ 0x14083CC6C (CmpCreateRootNode.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 */

__int16 __fastcall CmpCopyName(_BYTE *a1, const void **a2)
{
  __int64 v3; // rdx
  _WORD *v4; // rax

  v3 = 0LL;
  if ( (*(_WORD *)a2 & 0xFFFE) == 0 )
    return *(_WORD *)a2 >> 1;
  while ( 1 )
  {
    v4 = a2[1];
    if ( v4[v3] > 0xFFu )
      break;
    a1[v3] = v4[v3];
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= *(unsigned __int16 *)a2 >> 1 )
      return *(_WORD *)a2 >> 1;
  }
  memmove(a1, a2[1], *(unsigned __int16 *)a2);
  return *(_WORD *)a2;
}
