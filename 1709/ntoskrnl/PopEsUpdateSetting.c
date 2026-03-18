/*
 * XREFs of PopEsUpdateSetting @ 0x1405E3034
 * Callers:
 *     PopEsWorker @ 0x1405E2D50 (PopEsWorker.c)
 * Callees:
 *     PopTraceEsSetting @ 0x140156C44 (PopTraceEsSetting.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x140181140 (ZwUpdateWnfStateData.c)
 */

TLG_STATUS PopEsUpdateSetting()
{
  __int64 v0; // rcx
  _DWORD v2[4]; // [rsp+40h] [rbp-28h] BYREF

  v2[0] = PopEsMode;
  v2[2] = (unsigned __int8)byte_1403661F5;
  v2[1] = dword_1403661F0;
  ZwUpdateWnfStateData((__int64)&WNF_PO_ENERGY_SAVER_SETTING, (__int64)v2, 12LL);
  return PopTraceEsSetting(v0, dword_1403661F0, byte_1403661F5);
}
