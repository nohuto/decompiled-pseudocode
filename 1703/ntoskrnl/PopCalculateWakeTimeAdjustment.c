/*
 * XREFs of PopCalculateWakeTimeAdjustment @ 0x1406C963C
 * Callers:
 *     PopValidateRTCWake @ 0x14040A380 (PopValidateRTCWake.c)
 * Callees:
 *     PopPowerTransitionTimesInMs @ 0x140138970 (PopPowerTransitionTimesInMs.c)
 */

unsigned __int64 PopCalculateWakeTimeAdjustment()
{
  unsigned __int64 result; // rax
  unsigned int v1; // [rsp+40h] [rbp+8h] BYREF

  result = 0LL;
  v1 = 0;
  if ( dword_14034B1A0 == 4 )
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
  return qword_14034B6E8 / (unsigned __int64)qword_14034B6B0;
}
