/*
 * XREFs of CmpFreeTransientPoolWithTag @ 0x1400DB880
 * Callers:
 *     CmAddLogForAction @ 0x14042C988 (CmAddLogForAction.c)
 *     CmCallbackReleaseKeyObjectIDEx @ 0x14044D150 (CmCallbackReleaseKeyObjectIDEx.c)
 *     CmpConstructAndCacheName @ 0x140459200 (CmpConstructAndCacheName.c)
 *     CmSetValueKey @ 0x14048F4F0 (CmSetValueKey.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1404910B0 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpFreeKeyControlBlock @ 0x140491410 (CmpFreeKeyControlBlock.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1404BF12C (CmpSetSecurityDescriptorInfo.c)
 *     CmpLinkHiveToMaster @ 0x1404CCCAC (CmpLinkHiveToMaster.c)
 *     CmDeleteValueKey @ 0x1404CEB38 (CmDeleteValueKey.c)
 *     CmLoadDifferencingKey @ 0x1404D48BC (CmLoadDifferencingKey.c)
 *     CmRealKCBToVirtualPath @ 0x1404D8D90 (CmRealKCBToVirtualPath.c)
 *     CmpQueryKeyName @ 0x1404FC190 (CmpQueryKeyName.c)
 *     CmQueryKey @ 0x140500AB0 (CmQueryKey.c)
 *     CmpPublishEventForPcaResolver @ 0x14057CDD4 (CmpPublishEventForPcaResolver.c)
 *     CmEtwRunDown @ 0x140660B64 (CmEtwRunDown.c)
 *     CmpEtwDumpKcb @ 0x140660E60 (CmpEtwDumpKcb.c)
 *     CmpTraceHiveSaveStart @ 0x140661590 (CmpTraceHiveSaveStart.c)
 *     CmpDereferenceNameControlBlockWithLock @ 0x140665AFC (CmpDereferenceNameControlBlockWithLock.c)
 *     CmpDumpKeyBodyList @ 0x140665BB0 (CmpDumpKeyBodyList.c)
 *     CmVirtualKCBToRealPath @ 0x140666C60 (CmVirtualKCBToRealPath.c)
 *     CmpDoAccessCheckOnSubtree @ 0x140668390 (CmpDoAccessCheckOnSubtree.c)
 *     CmpReportAuditVirtualizationEvent @ 0x140668668 (CmpReportAuditVirtualizationEvent.c)
 *     CmpFreeSiloKeyLockEntry @ 0x140668EA0 (CmpFreeSiloKeyLockEntry.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x140668EDC (CmpGlobalUnlockKeyForWrite.c)
 *     CmpCleanupLightWeightUoWData @ 0x1406697FC (CmpCleanupLightWeightUoWData.c)
 *     CmpLoadHiveVolatile @ 0x140672BD8 (CmpLoadHiveVolatile.c)
 *     CmpLightWeightCleanupModifyKeyDataUoW @ 0x140673CA8 (CmpLightWeightCleanupModifyKeyDataUoW.c)
 *     CmpLightWeightCleanupSetValueKeyUoW @ 0x140673CF8 (CmpLightWeightCleanupSetValueKeyUoW.c)
 *     CmpLightWeightCommitDeleteValueKeyUoW @ 0x140674070 (CmpLightWeightCommitDeleteValueKeyUoW.c)
 *     CmpLightWeightCommitSetValueKeyUoW @ 0x14067450C (CmpLightWeightCommitSetValueKeyUoW.c)
 *     CmpLightWeightCreateSetValueData @ 0x14067470C (CmpLightWeightCreateSetValueData.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x140674D18 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x14067546C (CmpLightWeightPrepareSetValueKeyUoW.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall CmpFreeTransientPoolWithTag(PVOID P, ULONG Tag)
{
  ExFreePoolWithTag(P, Tag);
}
