/*
 * XREFs of CmpGetNextActiveHive @ 0x1404E3AA0
 * Callers:
 *     CmpDoFlushAll @ 0x1401E3C7C (CmpDoFlushAll.c)
 *     CmFreezeRegistry @ 0x14044E168 (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x14044F478 (CmThawRegistry.c)
 *     CmpDoFlushNextHive @ 0x1404E3960 (CmpDoFlushNextHive.c)
 *     CmpDoReconcileNextHive @ 0x1404E3D10 (CmpDoReconcileNextHive.c)
 *     CmpTransMgrPrepare @ 0x1405A5024 (CmpTransMgrPrepare.c)
 *     CmpTransMgrCommit @ 0x1405A51A4 (CmpTransMgrCommit.c)
 *     CmpUpdatePhaseAccessBit @ 0x1405EC740 (CmpUpdatePhaseAccessBit.c)
 *     CmEtwRunDown @ 0x140689AF4 (CmEtwRunDown.c)
 *     CmShutdownSystem @ 0x14068BC1C (CmShutdownSystem.c)
 *     CmpFreeAllMemory @ 0x14068C138 (CmpFreeAllMemory.c)
 *     CmpIsHiveAlreadyLoaded @ 0x14068EB9C (CmpIsHiveAlreadyLoaded.c)
 *     CmpBlockTwoHiveWrites @ 0x14068F1A8 (CmpBlockTwoHiveWrites.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
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
    if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)v3 + 6) )
      break;
    v1 = 0LL;
  }
  ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
  if ( a1 )
    ExReleaseRundownProtection_0(a1 + 347);
  return v1;
}
