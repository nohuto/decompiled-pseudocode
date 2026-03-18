/*
 * XREFs of ?Feature_DxgkrnlPrereleaseDiagnostic__private_IsEnabled@@YAHXZ @ 0x1C0011AA0
 * Callers:
 *     DriverEntry @ 0x1C01EB008 (DriverEntry.c)
 * Callees:
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1C0010498 (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 *     wil_details_ModifyFeatureData @ 0x1C0010658 (wil_details_ModifyFeatureData.c)
 *     wil_details_GetCurrentFeatureEnabledState @ 0x1C00125A0 (wil_details_GetCurrentFeatureEnabledState.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Feature_DxgkrnlPrereleaseDiagnostic__private_IsEnabled(int a1, int a2, int a3, int a4)
{
  unsigned int v4; // edi
  __int64 CurrentFeatureEnabledState; // rbx
  __int64 v6; // r8
  __int64 (__fastcall *v7)(volatile signed __int32 *, __int64); // rdx
  int v9; // [rsp+20h] [rbp-18h]
  unsigned int v10; // [rsp+40h] [rbp+8h]

  v4 = 0;
  LODWORD(CurrentFeatureEnabledState) = Feature_DxgkrnlPrereleaseDiagnostic__private_propertyCache & 3;
  if ( (Feature_DxgkrnlPrereleaseDiagnostic__private_propertyCache & 3) == 0 )
  {
    CurrentFeatureEnabledState = (unsigned int)wil_details_GetCurrentFeatureEnabledState(a1, a2, a3, a4);
    if ( g_wil_details_featurePropertyCacheChangeNotification )
    {
      g_wil_details_featurePropertyCacheChangeNotification(
        &Feature_DxgkrnlPrereleaseDiagnostic__private_propertyCache,
        0LL);
      v7 = (__int64 (__fastcall *)(volatile signed __int32 *, __int64))wil_details_SetEnabledAndHasNotificationStateCallback;
      v6 = CurrentFeatureEnabledState | (v10 << 8);
    }
    else
    {
      v6 = v10;
      v7 = (__int64 (__fastcall *)(volatile signed __int32 *, __int64))wil_details_SetHasNotificationStateCallback;
    }
    wil_details_ModifyFeatureData(
      (volatile signed __int32 *)&Feature_DxgkrnlPrereleaseDiagnostic__private_propertyCache,
      v7,
      v6);
  }
  LOBYTE(v4) = (_DWORD)CurrentFeatureEnabledState == 2;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&Feature_DxgkrnlPrereleaseDiagnostic__private_propertyCache,
    9011807LL,
    (__int64)&DeviceObject.DeviceQueue.1 + 4,
    v4,
    v9);
  return v4;
}
