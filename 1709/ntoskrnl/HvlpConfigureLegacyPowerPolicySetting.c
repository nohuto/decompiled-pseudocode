/*
 * XREFs of HvlpConfigureLegacyPowerPolicySetting @ 0x1401EE964
 * Callers:
 *     HvlpLegacyPowerPolicySettingCallback @ 0x1401EEAA0 (HvlpLegacyPowerPolicySettingCallback.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140132F60 (HvcallpNoHypervisorPresent.c)
 *     HvlpReleaseHypercallPage @ 0x140140F8C (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x140140FC4 (HvlpAcquireHypercallPage.c)
 */

__int64 __fastcall HvlpConfigureLegacyPowerPolicySetting(_QWORD *a1)
{
  __int64 v2; // rax
  PHYSICAL_ADDRESS v4[3]; // [rsp+20h] [rbp-28h] BYREF

  v2 = HvlpAcquireHypercallPage(v4, 1, 0LL, 40LL);
  *(_QWORD *)(v2 + 8) = *a1;
  *(_DWORD *)v2 = 2;
  LODWORD(a1) = (unsigned __int16)HvcallCodeVa() != 0 ? 0xC0000001 : 0;
  HvlpReleaseHypercallPage((__int64)v4);
  return (unsigned int)a1;
}
