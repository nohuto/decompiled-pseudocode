/*
 * XREFs of CmpFreeTransientPoolWithTag @ 0x14001655C
 * Callers:
 *     CmpCleanupLightWeightPrepare @ 0x14044BA6C (CmpCleanupLightWeightPrepare.c)
 *     CmpLightWeightCommitDeleteValueKeyUoW @ 0x14044BABC (CmpLightWeightCommitDeleteValueKeyUoW.c)
 *     CmpLightWeightCommitSetValueKeyUoW @ 0x14044BF50 (CmpLightWeightCommitSetValueKeyUoW.c)
 *     CmpLightWeightCleanupSetValueKeyUoW @ 0x14044C0A4 (CmpLightWeightCleanupSetValueKeyUoW.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x14044C0DC (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpLightWeightCreateSetValueData @ 0x14044C4B0 (CmpLightWeightCreateSetValueData.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x14044C6E4 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmDeleteValueKey @ 0x140474FC8 (CmDeleteValueKey.c)
 *     CmpSetSecurityDescriptorInfo @ 0x140476DE8 (CmpSetSecurityDescriptorInfo.c)
 *     CmpTraceSecurityChanging @ 0x14047760C (CmpTraceSecurityChanging.c)
 *     CmCallbackReleaseKeyObjectIDEx @ 0x140478180 (CmCallbackReleaseKeyObjectIDEx.c)
 *     CmpDereferenceNameControlBlockWithLock @ 0x140478920 (CmpDereferenceNameControlBlockWithLock.c)
 *     CmpFreeKeyControlBlock @ 0x140478B50 (CmpFreeKeyControlBlock.c)
 *     CmSetValueKey @ 0x14047B690 (CmSetValueKey.c)
 *     CmQueryKey @ 0x1404A7650 (CmQueryKey.c)
 *     CmLoadDifferencingKey @ 0x1404E2048 (CmLoadDifferencingKey.c)
 *     CmpLinkHiveToMaster @ 0x1404E46C4 (CmpLinkHiveToMaster.c)
 *     CmAddLogForAction @ 0x140593D1C (CmAddLogForAction.c)
 *     CmpConstructAndCacheName @ 0x140598A9C (CmpConstructAndCacheName.c)
 *     CmEtwRunDown @ 0x140689AF4 (CmEtwRunDown.c)
 *     CmpEtwDumpKcb @ 0x140689DE4 (CmpEtwDumpKcb.c)
 *     CmpPublishEventForPcaResolver @ 0x14068A228 (CmpPublishEventForPcaResolver.c)
 *     CmpTraceHiveSaveStart @ 0x14068A6EC (CmpTraceHiveSaveStart.c)
 *     CmpFreeExtraParameter @ 0x14068AACC (CmpFreeExtraParameter.c)
 *     CmpDumpKeyBodyList @ 0x14068F5F0 (CmpDumpKeyBodyList.c)
 *     CmRealKCBToVirtualPath @ 0x1406909A4 (CmRealKCBToVirtualPath.c)
 *     CmVirtualKCBToRealPath @ 0x140690D1C (CmVirtualKCBToRealPath.c)
 *     CmpDoAccessCheckOnSubtree @ 0x1406933CC (CmpDoAccessCheckOnSubtree.c)
 *     CmpReportAuditVirtualizationEvent @ 0x1406936A0 (CmpReportAuditVirtualizationEvent.c)
 *     CmpFreeSiloKeyLockEntry @ 0x140693C14 (CmpFreeSiloKeyLockEntry.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x140693C54 (CmpGlobalUnlockKeyForWrite.c)
 *     CmpLoadHiveVolatile @ 0x14069DCAC (CmpLoadHiveVolatile.c)
 *     CmpLightWeightCleanupModifyKeyDataUoW @ 0x14069EC58 (CmpLightWeightCleanupModifyKeyDataUoW.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall CmpFreeTransientPoolWithTag(void *a1, ULONG a2)
{
  ExFreePoolWithTag(a1, a2);
}
