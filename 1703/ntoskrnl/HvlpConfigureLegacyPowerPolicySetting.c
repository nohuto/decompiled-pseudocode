/*
 * XREFs of HvlpConfigureLegacyPowerPolicySetting @ 0x1401E986C
 * Callers:
 *     HvlpLegacyPowerPolicySettingCallback @ 0x1401E99C0 (HvlpLegacyPowerPolicySettingCallback.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140130000 (HvcallpNoHypervisorPresent.c)
 *     HvlpAcquireHypercallPage @ 0x1401E5364 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401E5D98 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlpConfigureLegacyPowerPolicySetting(_QWORD *a1)
{
  unsigned int v1; // edi
  __int64 v3; // rax
  PHYSICAL_ADDRESS v5[3]; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0;
  v3 = HvlpAcquireHypercallPage(v5, 1, 0LL, 40LL);
  *(_QWORD *)(v3 + 8) = *a1;
  *(_DWORD *)v3 = 2;
  if ( (unsigned __int16)HvcallCodeVa() )
    v1 = -1073741823;
  HvlpReleaseHypercallPage((__int64)v5);
  return v1;
}
