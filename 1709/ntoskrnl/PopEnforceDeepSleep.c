/*
 * XREFs of PopEnforceDeepSleep @ 0x140706A34
 * Callers:
 *     PopEnforceResiliencyScenarios @ 0x140706AE4 (PopEnforceResiliencyScenarios.c)
 * Callees:
 *     PopDeepSleepClearDisengageReason @ 0x1400AEF7C (PopDeepSleepClearDisengageReason.c)
 *     PopDeepSleepSetDisengageReason @ 0x1400AF04C (PopDeepSleepSetDisengageReason.c)
 *     PopDeepSleepEnabled @ 0x1400B0B30 (PopDeepSleepEnabled.c)
 *     KeSetMaxDynamicTickDuration @ 0x140203A7C (KeSetMaxDynamicTickDuration.c)
 */

char PopEnforceDeepSleep()
{
  char result; // al
  int v1; // ecx
  char v2; // r8

  _InterlockedCompareExchange64(&PopMaxDynamicTickDurationOriginalValue, KiMaxDynamicTickDuration, 0LL);
  result = PopDeepSleepEnabled();
  if ( result && PopPdcIdleResiliency )
    v2 = 1;
  if ( v1 )
  {
    if ( !v2 )
    {
      if ( !PopDeepSleepEnforced )
      {
        KeSetMaxDynamicTickDuration((unsigned int)(10000000 * v1));
        PopDeepSleepEnforced = 1;
        PopDeepSleepClearDisengageReason(0);
        return PopDeepSleepClearDisengageReason(1);
      }
      return result;
    }
  }
  else if ( !v2 )
  {
    return result;
  }
  if ( PopDeepSleepEnforced )
  {
    KeSetMaxDynamicTickDuration(PopMaxDynamicTickDurationOriginalValue);
    PopDeepSleepEnforced = 0;
    result = PopDeepSleepSetDisengageReason(0);
    if ( !byte_140366314 )
      return PopDeepSleepSetDisengageReason(1);
  }
  return result;
}
