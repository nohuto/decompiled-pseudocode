/*
 * XREFs of PopEsPublishState @ 0x1405D5204
 * Callers:
 *     PopEsWorker @ 0x140583CC0 (PopEsWorker.c)
 *     PopEsUpdateState @ 0x140583DF4 (PopEsUpdateState.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x140181740 (ZwUpdateWnfStateData.c)
 *     PopSetPowerSettingValueAcDc @ 0x1404C72B8 (PopSetPowerSettingValueAcDc.c)
 */

__int64 PopEsPublishState()
{
  int v0; // eax
  int v2; // [rsp+50h] [rbp+8h] BYREF
  int v3; // [rsp+54h] [rbp+Ch]

  v0 = 0;
  v2 = 0;
  v3 = -1;
  if ( PopEsState == 1 )
    v0 = 2;
  v2 = v0 | 1;
  ZwUpdateWnfStateData(&WNF_PO_ENERGY_SAVER_STATE, &v2, 8u, 0LL, 0LL, 0, 0);
  return PopSetPowerSettingValueAcDc(&GUID_POWER_SAVING_STATUS, 4u, &PopEsState);
}
