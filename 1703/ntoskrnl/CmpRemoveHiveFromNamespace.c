/*
 * XREFs of CmpRemoveHiveFromNamespace @ 0x14007FC2C
 * Callers:
 *     CmpLinkHiveToMaster @ 0x1404CCCAC (CmpLinkHiveToMaster.c)
 *     CmpCompleteUnloadKey @ 0x1404CD454 (CmpCompleteUnloadKey.c)
 * Callees:
 *     CmpLockKcbExclusive @ 0x1404916C8 (CmpLockKcbExclusive.c)
 *     CmpUnlockHiveFlusher @ 0x1404BF104 (CmpUnlockHiveFlusher.c)
 *     CmpLockHiveFlusherShared @ 0x1404C0000 (CmpLockHiveFlusherShared.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x1404D001C (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpDiscardKcb @ 0x1404D00DC (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x1404D0304 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1404D1090 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpFreeKeyByCell @ 0x1404D1394 (CmpFreeKeyByCell.c)
 *     CmpUnlockKcb @ 0x140500590 (CmpUnlockKcb.c)
 *     CmpLogHiveDestroyEvent @ 0x140660F04 (CmpLogHiveDestroyEvent.c)
 */

__int64 __fastcall CmpRemoveHiveFromNamespace(__int64 a1, __int64 a2)
{
  ULONG_PTR *v2; // rbx
  void *v4; // rdi

  v2 = *(ULONG_PTR **)(a2 + 64);
  v4 = (void *)v2[8];
  CmpLockHashEntryExclusiveByKcb((ULONG_PTR)v2);
  CmpLockKcbExclusive(v4);
  CmpLockKcbExclusive(v2);
  CmpLockHiveFlusherShared(v2[3]);
  CmpFreeKeyByCell(v2[3]);
  CmpFlushNotifiesOnKeyBodyList(v2, 1LL);
  CmpMarkKeyUnbacked(v2);
  CmpDiscardKcb((ULONG_PTR)v2);
  if ( (DWORD2(PerfGlobalGroupMask) & 0x1000000) != 0 )
    CmpLogHiveDestroyEvent(a1);
  CmpUnlockHiveFlusher(v2[3]);
  CmpUnlockKcb(v2);
  CmpUnlockKcb(v4);
  return CmpUnlockHashEntryByKcb(v2);
}
