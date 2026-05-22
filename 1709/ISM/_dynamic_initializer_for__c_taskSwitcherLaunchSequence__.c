/*
 * XREFs of _dynamic_initializer_for__c_taskSwitcherLaunchSequence__ @ 0x180001470
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Range_construct_or_tidy@PEBU?$pair@G_N@std@@@?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@AEAAXPEBU?$pair@G_N@1@0Uforward_iterator_tag@1@@Z @ 0x180042044 (--$_Range_construct_or_tidy@PEBU-$pair@G_N@std@@@-$vector@U-$pair@G_N@std@@V-$allocator@U-$pair@.c)
 *     atexit @ 0x1800CA61C (atexit.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

int dynamic_initializer_for__c_taskSwitcherLaunchSequence__()
{
  __int16 v1; // [rsp+20h] [rbp-28h] BYREF
  char v2; // [rsp+22h] [rbp-26h]
  __int16 v3; // [rsp+24h] [rbp-24h]
  char v4; // [rsp+26h] [rbp-22h]
  __int16 v5; // [rsp+28h] [rbp-20h]
  char v6; // [rsp+2Ah] [rbp-1Eh]
  __int16 v7; // [rsp+2Ch] [rbp-1Ch]
  char v8; // [rsp+2Eh] [rbp-1Ah]
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF

  v2 = 1;
  v1 = 91;
  v4 = 1;
  v5 = 91;
  v6 = 0;
  v3 = 9;
  v7 = 9;
  v8 = 0;
  std::vector<std::pair<unsigned short,bool>>::_Range_construct_or_tidy<std::pair<unsigned short,bool> const *>(
    91LL,
    &v1,
    v9);
  return atexit(dynamic_atexit_destructor_for__c_taskSwitcherLaunchSequence__);
}
