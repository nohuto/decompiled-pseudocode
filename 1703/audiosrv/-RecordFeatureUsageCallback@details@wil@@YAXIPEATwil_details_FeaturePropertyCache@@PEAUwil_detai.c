/*
 * XREFs of ?RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x1800286E0
 * Callers:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x180001CF8 (-wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeatureProperty.c)
 *     ?RegistryGates@CSpatialAudioTechnologies@@SAXXZ @ 0x18003CB48 (-RegistryGates@CSpatialAudioTechnologies@@SAXXZ.c)
 * Callees:
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIAEATwil_details_FeaturePropertyCache@@@Z @ 0x180028C78 (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIAEATwil_details_FeaturePro.c)
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x180028D1C (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 */

void __fastcall wil::details::RecordFeatureUsageCallback(
        wil::details *this,
        union wil_details_FeaturePropertyCache *a2,
        union wil_details_FeaturePropertyCache *a3,
        struct wil_details_RecordUsageResult *a4)
{
  unsigned int v5; // edi
  unsigned int v6; // r8d
  const char *v7; // [rsp+20h] [rbp-8h]

  v5 = (unsigned int)this;
  if ( !a2 )
  {
    v6 = 0;
    goto LABEL_7;
  }
  if ( *(_DWORD *)a3 )
    wil::details::EnabledStateManager::QueueBackgroundUsageReporting(
      &wil::details::g_enabledStateManager,
      (unsigned int)this,
      a2);
  v6 = *((_DWORD *)a3 + 1);
  if ( v6 )
  {
    this = (wil::details *)v5;
LABEL_7:
    wil::details::WilApi_RecordFeatureUsage(this, *((_DWORD *)a3 + 2), v6, (unsigned int)a4, v7);
  }
}
