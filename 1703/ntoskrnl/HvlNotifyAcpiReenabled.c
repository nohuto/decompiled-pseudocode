/*
 * XREFs of HvlNotifyAcpiReenabled @ 0x1401E948C
 * Callers:
 *     PopHiberCheckResume @ 0x140409FA0 (PopHiberCheckResume.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140130000 (HvcallpNoHypervisorPresent.c)
 *     HvlpAcquireHypercallPage @ 0x1401E5364 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401E5D98 (HvlpReleaseHypercallPage.c)
 */

__int64 HvlNotifyAcpiReenabled()
{
  unsigned int v0; // ebx
  PHYSICAL_ADDRESS v2[3]; // [rsp+20h] [rbp-28h] BYREF

  v0 = 0;
  *(_DWORD *)HvlpAcquireHypercallPage(v2, 1, 0LL, 8LL) = 3;
  if ( (unsigned __int16)HvcallCodeVa() )
    v0 = -1073741823;
  HvlpReleaseHypercallPage((__int64)v2);
  return v0;
}
