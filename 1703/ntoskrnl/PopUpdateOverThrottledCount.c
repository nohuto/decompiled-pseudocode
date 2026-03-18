/*
 * XREFs of PopUpdateOverThrottledCount @ 0x1406CBF70
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x140168960 (PopCheckAndHandleThermalConditions.c)
 *     PopThermalZoneRemove @ 0x1406CBDD0 (PopThermalZoneRemove.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x140181740 (ZwUpdateWnfStateData.c)
 *     PopDiagTraceThermalOverthrottleState @ 0x1402322D0 (PopDiagTraceThermalOverthrottleState.c)
 *     PopReleasePolicyLock @ 0x1404046BC (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1404046F8 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopUpdateOverThrottledCount(__int64 a1, unsigned __int8 a2)
{
  int v4; // [rsp+58h] [rbp+10h] BYREF

  PopDiagTraceThermalOverthrottleState(*(_QWORD *)(a1 + 48), a2);
  PopAcquirePolicyLock();
  if ( a2 )
  {
    if ( ++dword_14034AB38 == 1 )
    {
      v4 = 1;
LABEL_6:
      ZwUpdateWnfStateData((__int64)&WNF_PO_THERMAL_OVERTHROTTLE, (__int64)&v4, 4LL);
    }
  }
  else if ( !--dword_14034AB38 )
  {
    v4 = 0;
    goto LABEL_6;
  }
  return PopReleasePolicyLock();
}
