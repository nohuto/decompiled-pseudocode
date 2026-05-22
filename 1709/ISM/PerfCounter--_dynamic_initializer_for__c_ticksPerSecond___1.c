/*
 * XREFs of PerfCounter::_dynamic_initializer_for__c_ticksPerSecond___1 @ 0x180001600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LARGE_INTEGER PerfCounter::_dynamic_initializer_for__c_ticksPerSecond___1()
{
  LARGE_INTEGER result; // rax
  LARGE_INTEGER Frequency; // [rsp+30h] [rbp+8h] BYREF

  QueryPerformanceFrequency(&Frequency);
  result = Frequency;
  qword_18010F2B8 = Frequency.QuadPart;
  return result;
}
