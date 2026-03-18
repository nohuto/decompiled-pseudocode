/*
 * XREFs of CmpRemoveHiveFromNamespace @ 0x1400A1E60
 * Callers:
 *     CmpCompleteUnloadKey @ 0x14054D8E8 (CmpCompleteUnloadKey.c)
 *     CmpLinkHiveToMaster @ 0x140557540 (CmpLinkHiveToMaster.c)
 * Callees:
 *     CmpDiscardKcb @ 0x14049AB30 (CmpDiscardKcb.c)
 *     CmpLockKcbExclusive @ 0x14049D0D8 (CmpLockKcbExclusive.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x1404A8AD0 (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpUnlockKcb @ 0x1404AA790 (CmpUnlockKcb.c)
 *     HvLockHiveFlusherShared @ 0x1404E15C8 (HvLockHiveFlusherShared.c)
 *     HvUnlockHiveFlusherShared @ 0x1404E1E18 (HvUnlockHiveFlusherShared.c)
 *     CmpFreeKeyByCell @ 0x1405150FC (CmpFreeKeyByCell.c)
 *     CmpUnlockHashEntryByKcb @ 0x14054DE30 (CmpUnlockHashEntryByKcb.c)
 *     CmpMarkKeyUnbacked @ 0x14054DED8 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14054DF64 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpLogHiveDestroyEvent @ 0x1406EE28C (CmpLogHiveDestroyEvent.c)
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
  HvLockHiveFlusherShared(*(_QWORD *)(v2 + 24));
  CmpFreeKeyByCell(*(_QWORD *)(v2 + 24), *(unsigned int *)(v2 + 32));
  CmpFlushNotifiesOnKeyBodyList(v2, 1LL);
  CmpMarkKeyUnbacked(v2);
  CmpDiscardKcb(v2);
  if ( (DWORD2(PerfGlobalGroupMask) & 0x1000000) != 0 )
    CmpLogHiveDestroyEvent(a1);
  HvUnlockHiveFlusherShared(*(_QWORD *)(v2 + 24));
  CmpUnlockKcb(v2);
  CmpUnlockKcb(v4);
  return CmpUnlockHashEntryByKcb(v2);
}
