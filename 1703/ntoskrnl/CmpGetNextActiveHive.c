/*
 * XREFs of CmpGetNextActiveHive @ 0x1404D8480
 * Callers:
 *     CmpDoFlushAll @ 0x14013D204 (CmpDoFlushAll.c)
 *     CmpTransMgrPrepare @ 0x14042E724 (CmpTransMgrPrepare.c)
 *     CmpTransMgrCommit @ 0x1404CD8C4 (CmpTransMgrCommit.c)
 *     CmpDoFlushNextHive @ 0x1404D8270 (CmpDoFlushNextHive.c)
 *     CmpBlockTwoHiveWrites @ 0x1404D83B0 (CmpBlockTwoHiveWrites.c)
 *     CmpDoReconcileNextHive @ 0x1404D89C0 (CmpDoReconcileNextHive.c)
 *     CmpUpdatePhaseAccessBit @ 0x1405D1534 (CmpUpdatePhaseAccessBit.c)
 *     CmEtwRunDown @ 0x140660B64 (CmEtwRunDown.c)
 *     CmShutdownSystem @ 0x14066270C (CmShutdownSystem.c)
 *     CmpFreeAllMemory @ 0x140662C0C (CmpFreeAllMemory.c)
 *     CmpIsHiveAlreadyLoaded @ 0x140665298 (CmpIsHiveAlreadyLoaded.c)
 *     CmFreezeRegistry @ 0x1406689BC (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x140668BE4 (CmThawRegistry.c)
 *     CmInitSystem1 @ 0x140807ADC (CmInitSystem1.c)
 * Callees:
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 */

__int64 *__fastcall CmpGetNextActiveHive(struct _EX_RUNDOWN_REF *a1)
{
  __int64 *v1; // rdi
  __int64 *v3; // rsi

  v1 = 0LL;
  v3 = &CmpHiveListHead;
  if ( a1 )
    v3 = (__int64 *)&a1[341];
  ExAcquirePushLockSharedEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
  while ( 1 )
  {
    v3 = (__int64 *)*v3;
    if ( v3 == &CmpHiveListHead )
      break;
    v1 = v3 - 341;
    if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)v3 + 6) )
      break;
    v1 = 0LL;
  }
  ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
  if ( a1 )
    ExReleaseRundownProtection(a1 + 347);
  return v1;
}
