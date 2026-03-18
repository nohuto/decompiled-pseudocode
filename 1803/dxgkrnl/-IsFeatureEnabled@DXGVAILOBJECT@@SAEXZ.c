/*
 * XREFs of ?IsFeatureEnabled@DXGVAILOBJECT@@SAEXZ @ 0x1C01E6BC0
 * Callers:
 *     DxgkDeviceIoctl @ 0x1C00309C0 (DxgkDeviceIoctl.c)
 *     ?DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z @ 0x1C00CF8C0 (-DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z.c)
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C00E03F0 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 *     DxgkGetScanLine @ 0x1C010BDD0 (DxgkGetScanLine.c)
 *     ?InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAX@Z @ 0x1C01B71A0 (-InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAX@Z.c)
 *     NtDxgkRegisterVailProcess @ 0x1C01E8AD0 (NtDxgkRegisterVailProcess.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000276C (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 */

bool DXGVAILOBJECT::IsFeatureEnabled(void)
{
  bool v0; // zf
  bool v1; // sf
  int v3; // [rsp+20h] [rbp-18h]

  v0 = g_IsVailEnabled == 0;
  v1 = g_IsVailEnabled < 0;
  if ( g_IsVailEnabled < 0 )
  {
    wil_details_FeaturePropertyCache_ReportUsageToService(
      (__int64)&Feature_Vail__private_propertyCache,
      8554091LL,
      (const struct FEATURE_LOGGED_TRAITS *)&unk_1C005EED8,
      0,
      v3);
    _InterlockedCompareExchange(&g_IsVailEnabled, 0, -1);
    v0 = g_IsVailEnabled == 0;
    v1 = g_IsVailEnabled < 0;
  }
  return !v1 && !v0;
}
