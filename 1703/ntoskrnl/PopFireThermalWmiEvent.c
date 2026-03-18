/*
 * XREFs of PopFireThermalWmiEvent @ 0x14022F4D4
 * Callers:
 *     PopThermalWorker @ 0x1405D7C20 (PopThermalWorker.c)
 * Callees:
 *     PpmFireWmiEvent @ 0x1402344AC (PpmFireWmiEvent.c)
 */

__int64 __fastcall PopFireThermalWmiEvent(unsigned __int8 a1)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 result; // rax
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = a1;
  v3[1] = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  PpmFireWmiEvent(&KeGetCurrentPrcb()->PowerState.WmiDispatchPtr, &PPM_THERMAL_POLICY_CHANGE_GUID, 16LL, v3);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
