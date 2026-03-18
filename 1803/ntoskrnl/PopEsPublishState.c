/*
 * XREFs of PopEsPublishState @ 0x140654C34
 * Callers:
 *     PopEsWorker @ 0x140611F50 (PopEsWorker.c)
 *     PopEsUpdateState @ 0x140612084 (PopEsUpdateState.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x1401AAD80 (ZwUpdateWnfStateData.c)
 *     PopSetPowerSettingValueAcDc @ 0x14051D68C (PopSetPowerSettingValueAcDc.c)
 */

__int64 PopEsPublishState()
{
  int v0; // eax
  unsigned __int64 v2; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0xFFFFFFFF00000000uLL;
  v0 = 1;
  if ( PopEsState == 1 )
    v0 = 3;
  LODWORD(v2) = v0;
  ZwUpdateWnfStateData((__int64)&WNF_PO_ENERGY_SAVER_STATE, (__int64)&v2, 8LL);
  return PopSetPowerSettingValueAcDc(&GUID_POWER_SAVING_STATUS, 4u, &PopEsState);
}
