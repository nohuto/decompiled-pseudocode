/*
 * XREFs of CmpRemoveHiveFromNamespace @ 0x140015CA8
 * Callers:
 *     CmpCompleteUnloadKey @ 0x14046FBB4 (CmpCompleteUnloadKey.c)
 *     CmpLinkHiveToMaster @ 0x1404E46C4 (CmpLinkHiveToMaster.c)
 * Callees:
 *     CmpUnlockHashEntryByKcb @ 0x140472AB8 (CmpUnlockHashEntryByKcb.c)
 *     CmpDiscardKcb @ 0x140472C60 (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x140472E5C (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x140472EE4 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpFreeKeyByCell @ 0x140475940 (CmpFreeKeyByCell.c)
 *     CmpLockHiveFlusherShared @ 0x140476D5C (CmpLockHiveFlusherShared.c)
 *     CmpUnlockHiveFlusher @ 0x140476DAC (CmpUnlockHiveFlusher.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x140478770 (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpLockKcbExclusive @ 0x140478D48 (CmpLockKcbExclusive.c)
 *     CmpUnlockKcb @ 0x14047F670 (CmpUnlockKcb.c)
 *     CmpLogHiveDestroyEvent @ 0x140689E88 (CmpLogHiveDestroyEvent.c)
 */

__int64 __fastcall CmpRemoveHiveFromNamespace(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rbx
  ULONG_PTR v4; // rdi

  v2 = *(_QWORD *)(a2 + 64);
  v4 = *(_QWORD *)(v2 + 64);
  CmpLockHashEntryExclusiveByKcb(v2);
  CmpLockKcbExclusive(v4);
  CmpLockKcbExclusive(v2);
  CmpLockHiveFlusherShared(*(_QWORD *)(v2 + 24));
  CmpFreeKeyByCell(*(_QWORD *)(v2 + 24));
  CmpFlushNotifiesOnKeyBodyList(v2, 1LL);
  CmpMarkKeyUnbacked(v2);
  CmpDiscardKcb(v2);
  if ( (DWORD2(PerfGlobalGroupMask) & 0x1000000) != 0 )
    CmpLogHiveDestroyEvent(a1);
  CmpUnlockHiveFlusher(*(_QWORD *)(v2 + 24));
  CmpUnlockKcb(v2);
  CmpUnlockKcb(v4);
  return CmpUnlockHashEntryByKcb(v2);
}
