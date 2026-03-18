/*
 * XREFs of HvlpSetupSchedulerAssist @ 0x1401EB53C
 * Callers:
 *     HvlEnlightenProcessor @ 0x140139EB4 (HvlEnlightenProcessor.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1400BBFC0 (MmGetPhysicalAddress.c)
 *     HvcallpNoHypervisorPresent @ 0x140132F60 (HvcallpNoHypervisorPresent.c)
 *     HvlpReleaseHypercallPage @ 0x140140F8C (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x140140FC4 (HvlpAcquireHypercallPage.c)
 */

void __fastcall HvlpSetupSchedulerAssist(__int64 a1)
{
  _DWORD *v1; // rdi
  PHYSICAL_ADDRESS *v2; // rbx
  PHYSICAL_ADDRESS v3[3]; // [rsp+20h] [rbp-28h] BYREF

  v1 = *(_DWORD **)(a1 + 25016);
  if ( v1 )
  {
    v1[1] = 0;
    *v1 = 8;
    v2 = (PHYSICAL_ADDRESS *)HvlpAcquireHypercallPage(v3, 1, 0LL, 16LL);
    v2->LowPart = 1;
    v2->HighPart = 1;
    v2[1] = MmGetPhysicalAddress(v1);
    HvcallCodeVa();
    HvlpReleaseHypercallPage((__int64)v3);
  }
}
