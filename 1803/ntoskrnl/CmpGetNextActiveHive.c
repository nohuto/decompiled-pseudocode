/*
 * XREFs of CmpGetNextActiveHive @ 0x14049BA70
 * Callers:
 *     CmpDoReconcileNextHive @ 0x14049A6D0 (CmpDoReconcileNextHive.c)
 *     CmpDoFlushNextHive @ 0x14049B930 (CmpDoFlushNextHive.c)
 *     CmpBlockTwoHiveWrites @ 0x1405C041C (CmpBlockTwoHiveWrites.c)
 *     CmpTransMgrPrepare @ 0x1405DEE1C (CmpTransMgrPrepare.c)
 *     CmpTransMgrCommit @ 0x1405DEFD8 (CmpTransMgrCommit.c)
 *     CmpHandlePageFileOpenNotification @ 0x1406329A0 (CmpHandlePageFileOpenNotification.c)
 *     CmpUpdatePhaseAccessBit @ 0x14065063C (CmpUpdatePhaseAccessBit.c)
 *     CmEtwRunDown @ 0x1406EDEF0 (CmEtwRunDown.c)
 *     CmShutdownSystem @ 0x1406EFFE4 (CmShutdownSystem.c)
 *     CmpFreeAllMemory @ 0x1406F052C (CmpFreeAllMemory.c)
 *     CmpIsHiveAlreadyLoaded @ 0x1406F2D58 (CmpIsHiveAlreadyLoaded.c)
 *     CmFreezeRegistry @ 0x1406F68BC (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x1406F6B0C (CmThawRegistry.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 */

__int64 *__fastcall CmpGetNextActiveHive(struct _EX_RUNDOWN_REF *a1)
{
  __int64 *v1; // rdi
  __int64 *v3; // rsi
  __int64 v4; // r8
  __int64 v5; // r9

  v1 = 0LL;
  v3 = &CmpHiveListHead;
  if ( a1 )
    v3 = (__int64 *)&a1[200];
  ExAcquirePushLockSharedEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
  while ( 1 )
  {
    v3 = (__int64 *)*v3;
    if ( v3 == &CmpHiveListHead )
      break;
    v1 = v3 - 200;
    if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)v3 + 4) )
      break;
    v1 = 0LL;
  }
  ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL, v4, v5);
  if ( a1 )
    ExReleaseRundownProtection(a1 + 204);
  return v1;
}
