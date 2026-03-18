/*
 * XREFs of HUBHSM_SettingHubConfiguration @ 0x1C0008730
 * Callers:
 *     <none>
 * Callees:
 *     HUBPARENT_SetHubConfiguration @ 0x1C000652C (HUBPARENT_SetHubConfiguration.c)
 */

__int64 __fastcall HUBHSM_SettingHubConfiguration(__int64 a1)
{
  HUBPARENT_SetHubConfiguration(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
