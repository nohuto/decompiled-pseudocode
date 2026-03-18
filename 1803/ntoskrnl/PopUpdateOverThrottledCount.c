/*
 * XREFs of PopUpdateOverThrottledCount @ 0x140763400
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x140180F10 (PopCheckAndHandleThermalConditions.c)
 *     PopThermalZoneRemove @ 0x140763260 (PopThermalZoneRemove.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x1401AAD80 (ZwUpdateWnfStateData.c)
 *     PopDiagTraceThermalOverthrottleState @ 0x14027D894 (PopDiagTraceThermalOverthrottleState.c)
 *     PopReleasePolicyLock @ 0x14046FA70 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14046FD90 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopUpdateOverThrottledCount(__int64 a1, unsigned __int8 a2)
{
  int v4; // [rsp+58h] [rbp+10h] BYREF

  PopDiagTraceThermalOverthrottleState(*(_QWORD *)(a1 + 48), a2);
  PopAcquirePolicyLock();
  if ( a2 )
  {
    if ( ++dword_1403A9CB8 == 1 )
    {
      v4 = 1;
LABEL_6:
      ZwUpdateWnfStateData((__int64)&WNF_PO_THERMAL_OVERTHROTTLE, (__int64)&v4, 4LL);
    }
  }
  else if ( !--dword_1403A9CB8 )
  {
    v4 = 0;
    goto LABEL_6;
  }
  return PopReleasePolicyLock();
}
