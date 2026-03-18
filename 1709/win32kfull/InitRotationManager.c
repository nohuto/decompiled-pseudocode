/*
 * XREFs of InitRotationManager @ 0x1C00E08B0
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C00E1100 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 */

__int64 InitRotationManager()
{
  _QWORD *PoolWithTag; // rax

  wil_details_FeaturePropertyCache_ReportUsageToService(
    &Feature_BrokeredDisplays_RotMgr__private_propertyCache,
    8119317LL,
    &unk_1C02DC954,
    0LL);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x6D747255u);
  if ( PoolWithTag )
  {
    PoolWithTag[1] = 0LL;
    *((_DWORD *)PoolWithTag + 2) = 0;
    *PoolWithTag = &CLegacyRotationMgr::`vftable';
  }
  P = PoolWithTag;
  return PoolWithTag == 0LL ? 0xC0000017 : 0;
}
