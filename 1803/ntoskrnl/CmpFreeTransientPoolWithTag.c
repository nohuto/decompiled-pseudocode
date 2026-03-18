/*
 * XREFs of CmpFreeTransientPoolWithTag @ 0x140009034
 * Callers:
 *     CmDeleteValueKey @ 0x14049B18C (CmDeleteValueKey.c)
 *     CmLoadDifferencingKey @ 0x14049ED68 (CmLoadDifferencingKey.c)
 *     CmSetValueKey @ 0x1404A4924 (CmSetValueKey.c)
 *     CmpFreeKeyControlBlock @ 0x1404A82B0 (CmpFreeKeyControlBlock.c)
 *     CmpDereferenceNameControlBlockWithLock @ 0x1404AB680 (CmpDereferenceNameControlBlockWithLock.c)
 *     CmQueryKey @ 0x1404AE2E0 (CmQueryKey.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1404E1604 (CmpSetSecurityDescriptorInfo.c)
 *     CmpTraceSecurityChanging @ 0x1404E1C30 (CmpTraceSecurityChanging.c)
 *     CmpCleanupLightWeightPrepare @ 0x14054EBE4 (CmpCleanupLightWeightPrepare.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x14054F244 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpLightWeightCommitSetValueKeyUoW @ 0x14054F694 (CmpLightWeightCommitSetValueKeyUoW.c)
 *     CmpLightWeightCleanupSetValueKeyUoW @ 0x14054F7E4 (CmpLightWeightCleanupSetValueKeyUoW.c)
 *     CmpLightWeightCreateSetValueData @ 0x14054F81C (CmpLightWeightCreateSetValueData.c)
 *     CmpLinkHiveToMaster @ 0x140557540 (CmpLinkHiveToMaster.c)
 *     CmCallbackReleaseKeyObjectIDEx @ 0x140574030 (CmCallbackReleaseKeyObjectIDEx.c)
 *     CmAddLogForAction @ 0x140576A18 (CmAddLogForAction.c)
 *     CmpConstructAndCacheName @ 0x14057FA5C (CmpConstructAndCacheName.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x140583DF4 (CmpLogTransactionAbortedWithChildName.c)
 *     CmRealKCBToVirtualPath @ 0x1405C06B0 (CmRealKCBToVirtualPath.c)
 *     CmpDumpKeyBodyList @ 0x1405ED2C0 (CmpDumpKeyBodyList.c)
 *     CmEtwRunDown @ 0x1406EDEF0 (CmEtwRunDown.c)
 *     CmpEtwDumpKcb @ 0x1406EE1C0 (CmpEtwDumpKcb.c)
 *     CmpPublishEventForPcaResolver @ 0x1406EE62C (CmpPublishEventForPcaResolver.c)
 *     CmpTraceHiveSaveStart @ 0x1406EEB08 (CmpTraceHiveSaveStart.c)
 *     CmpFreeExtraParameter @ 0x1406EEEF8 (CmpFreeExtraParameter.c)
 *     CmVirtualKCBToRealPath @ 0x1406F456C (CmVirtualKCBToRealPath.c)
 *     CmpDoAccessCheckOnSubtree @ 0x1406F62BC (CmpDoAccessCheckOnSubtree.c)
 *     CmpReportAuditVirtualizationEvent @ 0x1406F6578 (CmpReportAuditVirtualizationEvent.c)
 *     CmpFreeSiloKeyLockEntry @ 0x1406F6E04 (CmpFreeSiloKeyLockEntry.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x1406F6E44 (CmpGlobalUnlockKeyForWrite.c)
 *     CmpLoadHiveVolatile @ 0x140702BD0 (CmpLoadHiveVolatile.c)
 *     CmpLightWeightCleanupModifyKeyDataUoW @ 0x140703F30 (CmpLightWeightCleanupModifyKeyDataUoW.c)
 *     CmpLightWeightCommitDeleteValueKeyUoW @ 0x1407042E8 (CmpLightWeightCommitDeleteValueKeyUoW.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x140704D74 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall CmpFreeTransientPoolWithTag(void *a1, ULONG a2)
{
  ExFreePoolWithTag(a1, a2);
}
