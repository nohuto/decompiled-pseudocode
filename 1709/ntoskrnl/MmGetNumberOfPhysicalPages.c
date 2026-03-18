/*
 * XREFs of MmGetNumberOfPhysicalPages @ 0x14056E6E0
 * Callers:
 *     ExpGetSystemEmulationBasicInformation @ 0x140114A74 (ExpGetSystemEmulationBasicInformation.c)
 *     ExpGetSystemBasicInformation @ 0x140114C10 (ExpGetSystemBasicInformation.c)
 *     PopRequestWrite @ 0x140434590 (PopRequestWrite.c)
 *     PopWriteHiberPages @ 0x140435F04 (PopWriteHiberPages.c)
 *     InitializePagedPool @ 0x14082DD0C (InitializePagedPool.c)
 *     InitializePool @ 0x14082DEFC (InitializePool.c)
 *     CmpInitGlobalQuotaAllowed @ 0x14083A4E4 (CmpInitGlobalQuotaAllowed.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetNumberOfPhysicalPages(unsigned __int16 a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_140388AF0 + 8LL * a1) + 5776LL);
}
