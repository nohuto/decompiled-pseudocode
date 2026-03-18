/*
 * XREFs of MmGetNumberOfPhysicalPages @ 0x140437454
 * Callers:
 *     ExpGetSystemEmulationBasicInformation @ 0x14001D704 (ExpGetSystemEmulationBasicInformation.c)
 *     ExpGetSystemBasicInformation @ 0x14001D8A0 (ExpGetSystemBasicInformation.c)
 *     CcInitializePartition @ 0x140161450 (CcInitializePartition.c)
 *     PopWriteHiberPages @ 0x140405508 (PopWriteHiberPages.c)
 *     PopRequestWrite @ 0x140406CAC (PopRequestWrite.c)
 *     CcInitializeCacheManager @ 0x1407FE20C (CcInitializeCacheManager.c)
 *     InitializePool @ 0x140814AC0 (InitializePool.c)
 *     InitializePagedPool @ 0x140814FA8 (InitializePagedPool.c)
 *     CmpInitGlobalQuotaAllowed @ 0x140824C74 (CmpInitGlobalQuotaAllowed.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetNumberOfPhysicalPages(unsigned __int16 a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_14036C8F8 + 8LL * a1) + 5584LL);
}
