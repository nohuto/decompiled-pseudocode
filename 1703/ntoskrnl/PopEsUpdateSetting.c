/*
 * XREFs of PopEsUpdateSetting @ 0x1405D3C7C
 * Callers:
 *     PopEsWorker @ 0x140583CC0 (PopEsWorker.c)
 * Callees:
 *     PopTraceEsSetting @ 0x14016774C (PopTraceEsSetting.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x140181740 (ZwUpdateWnfStateData.c)
 */

TLG_STATUS PopEsUpdateSetting()
{
  __int64 v0; // rcx
  _DWORD v2[4]; // [rsp+40h] [rbp-28h] BYREF

  v2[0] = PopEsMode;
  v2[2] = (unsigned __int8)byte_14034BB75;
  v2[1] = dword_14034BB70;
  ZwUpdateWnfStateData((__int64)&WNF_PO_ENERGY_SAVER_SETTING, (__int64)v2, 12LL);
  return PopTraceEsSetting(v0, dword_14034BB70, byte_14034BB75);
}
