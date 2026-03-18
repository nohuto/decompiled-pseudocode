/*
 * XREFs of CmpLockIXLockExclusive @ 0x1404984A8
 * Callers:
 *     CmpSetKeySecurity @ 0x1400633D0 (CmpSetKeySecurity.c)
 *     CmDeleteValueKey @ 0x14049B18C (CmDeleteValueKey.c)
 *     CmDeleteKey @ 0x14049FF78 (CmDeleteKey.c)
 *     CmSetValueKey @ 0x1404A4924 (CmSetValueKey.c)
 *     CmpCreateChild @ 0x140514170 (CmpCreateChild.c)
 *     CmpUndoDeleteKeyForTrans @ 0x1405C1A44 (CmpUndoDeleteKeyForTrans.c)
 *     CmRenameKey @ 0x1406F1120 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x1406F1FB8 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1406F2444 (CmSetLastWriteTimeKey.c)
 * Callees:
 *     CmEqualTrans @ 0x140498AE0 (CmEqualTrans.c)
 */

bool __fastcall CmpLockIXLockExclusive(__int64 a1, _QWORD *a2, int a3)
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
        a2[3] = a1;
    }
    else
    {
      a2[2] = a1;
    }
    return 1;
  }
  if ( v3 < 0 )
    return (unsigned __int8)CmEqualTrans(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL), a2[7]) != 0;
  if ( v3 == 1 && (unsigned __int8)CmEqualTrans(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL), a2[7]) )
  {
    *(_DWORD *)a1 |= 0x80000000;
    return 1;
  }
  return 0;
}
