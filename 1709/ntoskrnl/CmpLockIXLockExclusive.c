/*
 * XREFs of CmpLockIXLockExclusive @ 0x140569108
 * Callers:
 *     CmpSetKeySecurity @ 0x1400161F0 (CmpSetKeySecurity.c)
 *     CmpUndoDeleteKeyForTrans @ 0x14045005C (CmpUndoDeleteKeyForTrans.c)
 *     CmDeleteKey @ 0x140472480 (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x140474FC8 (CmDeleteValueKey.c)
 *     CmpCreateChild @ 0x140475B90 (CmpCreateChild.c)
 *     CmSetValueKey @ 0x14047B690 (CmSetValueKey.c)
 *     CmRenameKey @ 0x14068CE58 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x14068DC84 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x14068E12C (CmSetLastWriteTimeKey.c)
 * Callees:
 *     CmEqualTrans @ 0x14056959C (CmEqualTrans.c)
 */

bool __fastcall CmpLockIXLockExclusive(__int64 a1, __int64 a2, int a3)
{
  int v3; // eax

  v3 = *(_DWORD *)a1;
  if ( !*(_DWORD *)a1 )
  {
    *(_DWORD *)a1 = -2147483647;
    *(_QWORD *)(a1 + 8) = a2;
    if ( a3 )
    {
      if ( a3 == 1 )
        *(_QWORD *)(a2 + 24) = a1;
    }
    else
    {
      *(_QWORD *)(a2 + 16) = a1;
    }
    return 1;
  }
  if ( v3 < 0 )
    return (unsigned __int8)CmEqualTrans(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL)) != 0;
  if ( v3 == 1 && (unsigned __int8)CmEqualTrans(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL)) )
  {
    *(_DWORD *)a1 |= 0x80000000;
    return 1;
  }
  return 0;
}
