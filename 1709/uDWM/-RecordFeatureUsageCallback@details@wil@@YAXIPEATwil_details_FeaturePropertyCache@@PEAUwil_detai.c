/*
 * XREFs of ?RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x180033F10
 * Callers:
 *     <none>
 * Callees:
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x1800316F4 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     ?EnsureSubscribedToUsageFlush@EnabledStateManager@details@wil@@QEAAXP6AXPEAX@Z@Z @ 0x18003FCDC (-EnsureSubscribedToUsageFlush@EnabledStateManager@details@wil@@QEAAXP6AXPEAX@Z@Z.c)
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIAEATwil_details_FeaturePropertyCache@@@Z @ 0x18003FE5C (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIAEATwil_details_FeaturePro.c)
 */

void __fastcall wil::details::RecordFeatureUsageCallback(
        wil::details *this,
        union wil_details_FeaturePropertyCache *a2,
        union wil_details_FeaturePropertyCache *a3,
        struct wil_details_RecordUsageResult *a4)
{
  unsigned int v5; // edi
  __int64 v6; // r8

  v5 = (unsigned int)this;
  if ( a2 )
  {
    if ( *(_DWORD *)a3 )
      wil::details::EnabledStateManager::QueueBackgroundUsageReporting(
        &wil::details::g_enabledStateManager,
        (unsigned int)this,
        a2);
    v6 = *((unsigned int *)a3 + 1);
    if ( (_DWORD)v6 )
      wil::details::WilApi_RecordFeatureUsage((wil::details *)v5, *((unsigned int *)a3 + 2), v6);
    if ( !*((_DWORD *)a3 + 4) )
      wil::details::EnabledStateManager::EnsureSubscribedToUsageFlush(
        (wil::details::EnabledStateManager *)&wil::details::g_enabledStateManager,
        lambda_87c8d85798ea78242f0953b15d7cc197_::_lambda_invoker_cdecl_);
  }
  else
  {
    wil::details::WilApi_RecordFeatureUsage(this, *((unsigned int *)a3 + 2), 0LL);
  }
}
