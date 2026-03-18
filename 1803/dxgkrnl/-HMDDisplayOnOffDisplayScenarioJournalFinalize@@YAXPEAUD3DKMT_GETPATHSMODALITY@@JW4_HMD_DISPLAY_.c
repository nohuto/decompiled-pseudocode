/*
 * XREFs of ?HMDDisplayOnOffDisplayScenarioJournalFinalize@@YAXPEAUD3DKMT_GETPATHSMODALITY@@JW4_HMD_DISPLAY_ON_OFF_FAILURE_STAGE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C5BA4
 * Callers:
 *     ?HMDDisplayOnOff@@YAJPEAVDXGADAPTER@@IW4_HMD_POWER_REQUEST@@@Z @ 0x1C01C5780 (-HMDDisplayOnOff@@YAJPEAVDXGADAPTER@@IW4_HMD_POWER_REQUEST@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 */

__int64 __fastcall HMDDisplayOnOffDisplayScenarioJournalFinalize(__int64 a1, int a2, int a3, __int64 a4)
{
  char v8; // [rsp+20h] [rbp-58h]
  char v9; // [rsp+28h] [rbp-50h]
  _DWORD v10[4]; // [rsp+40h] [rbp-38h] BYREF

  if ( a1 )
    DisplayScenarioJournalSetActualPathModality(
      272 * (unsigned int)*(unsigned __int16 *)(a1 + 20),
      *(unsigned __int16 *)(a1 + 20),
      a1 + 48);
  v10[0] = 1;
  v10[1] = 16;
  v10[2] = a2;
  v10[3] = a3;
  DisplayScenarioJournalSetSpecializedData(v10);
  v9 = 0;
  v8 = 0;
  return DisplayScenarioJournalFinalize(0LL, 0LL, 0LL, 0LL, v8, v9, 0, a4);
}
