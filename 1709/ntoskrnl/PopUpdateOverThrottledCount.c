/*
 * XREFs of PopUpdateOverThrottledCount @ 0x1407009C0
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x1402436CC (PopCheckAndHandleThermalConditions.c)
 *     PopThermalZoneRemove @ 0x140700820 (PopThermalZoneRemove.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x140181140 (ZwUpdateWnfStateData.c)
 *     PopDiagTraceThermalOverthrottleState @ 0x1402470F4 (PopDiagTraceThermalOverthrottleState.c)
 *     PopReleasePolicyLock @ 0x1404242E4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140424608 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopUpdateOverThrottledCount(__int64 a1, unsigned __int8 a2)
{
  int v4; // [rsp+58h] [rbp+10h] BYREF

  PopDiagTraceThermalOverthrottleState(*(_QWORD *)(a1 + 48), a2);
  PopAcquirePolicyLock();
  if ( a2 )
  {
    if ( ++dword_140365218 == 1 )
    {
      v4 = 1;
LABEL_6:
      ZwUpdateWnfStateData((__int64)&WNF_PO_THERMAL_OVERTHROTTLE, (__int64)&v4, 4LL);
    }
  }
  else if ( !--dword_140365218 )
  {
    v4 = 0;
    goto LABEL_6;
  }
  return PopReleasePolicyLock();
}
