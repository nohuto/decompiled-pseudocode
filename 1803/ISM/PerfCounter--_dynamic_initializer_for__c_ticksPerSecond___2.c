/*
 * XREFs of PerfCounter::_dynamic_initializer_for__c_ticksPerSecond___2 @ 0x180001720
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LARGE_INTEGER PerfCounter::_dynamic_initializer_for__c_ticksPerSecond___2()
{
  LARGE_INTEGER result; // rax
  LARGE_INTEGER Frequency; // [rsp+30h] [rbp+8h] BYREF

  QueryPerformanceFrequency(&Frequency);
  result = Frequency;
  qword_180136738 = Frequency.QuadPart;
  return result;
}
