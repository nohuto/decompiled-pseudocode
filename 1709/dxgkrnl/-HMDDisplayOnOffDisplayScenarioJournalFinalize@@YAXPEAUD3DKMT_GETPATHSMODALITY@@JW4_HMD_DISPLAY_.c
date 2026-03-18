/*
 * XREFs of ?HMDDisplayOnOffDisplayScenarioJournalFinalize@@YAXPEAUD3DKMT_GETPATHSMODALITY@@JW4_HMD_DISPLAY_ON_OFF_FAILURE_STAGE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F9D70
 * Callers:
 *     ?HMDDisplayOnOff@@YAJAEBU_LUID@@IW4_HMD_POWER_REQUEST@@@Z @ 0x1C00F9C30 (-HMDDisplayOnOff@@YAJAEBU_LUID@@IW4_HMD_POWER_REQUEST@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 */

__int64 __fastcall HMDDisplayOnOffDisplayScenarioJournalFinalize(__int64 a1, int a2, int a3, __int64 a4)
{
  char v8; // [rsp+20h] [rbp-58h]
  _DWORD v9[4]; // [rsp+40h] [rbp-38h] BYREF

  if ( a1 )
    DisplayScenarioJournalSetActualPathModality(
      264 * (unsigned int)*(unsigned __int16 *)(a1 + 20),
      *(unsigned __int16 *)(a1 + 20),
      a1 + 48);
  v9[0] = 1;
  v9[1] = 16;
  v9[2] = a2;
  v9[3] = a3;
  DisplayScenarioJournalSetSpecializedData(v9);
  v8 = 0;
  return DisplayScenarioJournalFinalize(0LL, 0LL, 0LL, 0LL, v8, 0, a4);
}
