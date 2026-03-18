/*
 * XREFs of HvlpSetupSchedulerAssist @ 0x1402285B0
 * Callers:
 *     HvlEnlightenProcessor @ 0x140171EBC (HvlEnlightenProcessor.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14003C3D0 (MmGetPhysicalAddress.c)
 *     HvcallpNoHypervisorPresent @ 0x140140870 (HvcallpNoHypervisorPresent.c)
 *     HvlpReleaseHypercallPage @ 0x140159B9C (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x140159BD4 (HvlpAcquireHypercallPage.c)
 */

void __fastcall HvlpSetupSchedulerAssist(__int64 a1)
{
  _DWORD *v1; // rdi
  PHYSICAL_ADDRESS *v2; // rbx
  PHYSICAL_ADDRESS v3[3]; // [rsp+20h] [rbp-28h] BYREF

  v1 = *(_DWORD **)(a1 + 25016);
  if ( v1 )
  {
    v1[2] = 0;
    v1[1] = 8;
    *v1 = 8;
    v2 = (PHYSICAL_ADDRESS *)HvlpAcquireHypercallPage(v3, 1, 0LL, 16LL);
    v2->LowPart = 2;
    v2->HighPart = 1;
    v2[1] = MmGetPhysicalAddress(v1);
    HvcallCodeVa();
    HvlpReleaseHypercallPage((__int64)v3);
  }
}
