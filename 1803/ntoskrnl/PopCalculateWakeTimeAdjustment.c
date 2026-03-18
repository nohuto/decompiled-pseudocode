/*
 * XREFs of PopCalculateWakeTimeAdjustment @ 0x14076205C
 * Callers:
 *     PopValidateRTCWake @ 0x140470FB8 (PopValidateRTCWake.c)
 * Callees:
 *     PopPowerTransitionTimesInMs @ 0x14014E0B4 (PopPowerTransitionTimesInMs.c)
 */

unsigned __int64 PopCalculateWakeTimeAdjustment()
{
  unsigned __int64 result; // rax
  unsigned int v1; // [rsp+40h] [rbp+8h] BYREF

  result = 0LL;
  v1 = 0;
  if ( dword_1403AA080 == 4 )
  {
    if ( !PoResumeFromHibernate )
    {
      PopPowerTransitionTimesInMs(0LL, 0LL, 0LL, 0LL, (__int64)&v1);
      return v1;
    }
  }
  else if ( !PoResumeFromHibernate )
  {
    return result;
  }
  return qword_1403AA608 / (unsigned __int64)qword_1403AA5D0;
}
