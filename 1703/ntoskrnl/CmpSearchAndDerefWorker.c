/*
 * XREFs of CmpSearchAndDerefWorker @ 0x1406661E0
 * Callers:
 *     <none>
 * Callees:
 *     CmpDiscardKcb @ 0x1404D00DC (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x1404D0304 (CmpMarkKeyUnbacked.c)
 *     CmpCleanUpSubKeyInfo @ 0x1404D0ED8 (CmpCleanUpSubKeyInfo.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1404D1090 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpSnapshotTxOwnerArray @ 0x14067355C (CmpSnapshotTxOwnerArray.c)
 */

__int64 __fastcall CmpSearchAndDerefWorker(ULONG_PTR a1, __int64 a2)
{
  int *v3; // rdi
  _DWORD *v4; // rcx
  int v5; // eax

  v3 = *(int **)(a2 + 16);
  if ( (*(_DWORD *)(a1 + 4) & 0x80u) != 0 )
  {
    ++*(_DWORD *)(a2 + 8);
LABEL_8:
    v5 = 0;
    goto LABEL_9;
  }
  v4 = (_DWORD *)(a1 + 240);
  if ( !*v4 )
  {
    v4 = (_DWORD *)(a1 + 256);
    if ( !*(_DWORD *)(a1 + 256) )
    {
      CmpFlushNotifiesOnKeyBodyList(a1, 1LL, 1);
      CmpCleanUpSubKeyInfo(*(_QWORD *)(a1 + 64));
      CmpMarkKeyUnbacked(a1);
      CmpDiscardKcb(a1);
      goto LABEL_8;
    }
  }
  ++*(_DWORD *)(a2 + 8);
  v5 = CmpSnapshotTxOwnerArray(v4, v3 + 1, v3 + 2);
  if ( v5 >= 0 )
    v5 = -1073741267;
LABEL_9:
  *v3 = v5;
  return (unsigned int)v5 >> 31;
}
