/*
 * XREFs of MmGetNumberOfPhysicalPages @ 0x1405587B8
 * Callers:
 *     ExpGetSystemEmulationBasicInformation @ 0x1400B2608 (ExpGetSystemEmulationBasicInformation.c)
 *     ExpGetSystemBasicInformation @ 0x1400B27A8 (ExpGetSystemBasicInformation.c)
 *     PopWriteHiberPages @ 0x140473A24 (PopWriteHiberPages.c)
 *     PopRequestWrite @ 0x1404743B4 (PopRequestWrite.c)
 *     InitializePool @ 0x1408ACB14 (InitializePool.c)
 *     InitializePagedPool @ 0x1408ACF98 (InitializePagedPool.c)
 *     CmpInitGlobalQuotaAllowed @ 0x1408C83DC (CmpInitGlobalQuotaAllowed.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetNumberOfPhysicalPages(unsigned __int16 a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_1403CBD88 + 8LL * a1) + 6864LL);
}
