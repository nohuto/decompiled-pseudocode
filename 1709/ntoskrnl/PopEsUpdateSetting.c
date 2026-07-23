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
  _DWORD Buffer[4]; // [rsp+40h] [rbp-28h] BYREF

  Buffer[0] = PopEsMode;
  Buffer[2] = (unsigned __int8)byte_1403661F5;
  Buffer[1] = dword_1403661F0;
  ZwUpdateWnfStateData(&WNF_PO_ENERGY_SAVER_SETTING, Buffer, 0xCu, 0LL, 0LL, 0, 0);
  return PopTraceEsSetting(v0, dword_1403661F0, byte_1403661F5);
}
