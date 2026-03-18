/*
 * XREFs of HvlNotifyAcpiReenabled @ 0x1401EE5E8
 * Callers:
 *     PopHiberCheckResume @ 0x1404335B0 (PopHiberCheckResume.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140132F60 (HvcallpNoHypervisorPresent.c)
 *     HvlpReleaseHypercallPage @ 0x140140F8C (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x140140FC4 (HvlpAcquireHypercallPage.c)
 */

__int64 HvlNotifyAcpiReenabled()
{
  unsigned int v0; // ebx
  PHYSICAL_ADDRESS v2[3]; // [rsp+20h] [rbp-28h] BYREF

  *(_DWORD *)HvlpAcquireHypercallPage(v2, 1, 0LL, 8LL) = 3;
  v0 = (unsigned __int16)HvcallCodeVa() != 0 ? 0xC0000001 : 0;
  HvlpReleaseHypercallPage((__int64)v2);
  return v0;
}
