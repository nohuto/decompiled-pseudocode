/*
 * XREFs of ?QueueBackgroundSRUMUsageReporting@details@wil@@YAXIII@Z @ 0x1800B2F20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall wil::details::QueueBackgroundSRUMUsageReporting(wil::details *this, unsigned __int16 a2, int a3)
{
  wil::details::FeatureStateManager::QueueBackgroundSRUMUsageReporting(
    &wil::details::g_featureStateManager,
    (int)this,
    a2,
    a3);
}
