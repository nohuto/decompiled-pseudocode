/*
 * XREFs of RtlTimeFieldsToTime @ 0x18006A0A0
 * Callers:
 *     RtlCutoverTimeToSystemTime @ 0x180069F00 (RtlCutoverTimeToSystemTime.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlTimeFieldsToTime(PTIME_FIELDS TimeFields, PLARGE_INTEGER Time)
{
  int Day; // r13d
  __int64 v3; // r9
  unsigned int Year; // r8d
  unsigned int Hour; // edi
  unsigned int Minute; // r14d
  unsigned int Second; // r15d
  unsigned int Milliseconds; // esi
  __int16 *v10; // r10
  int v11; // edx
  __int64 v12; // rbx
  int v13; // eax
  BOOLEAN result; // al

  Day = TimeFields->Day;
  v3 = (unsigned int)(TimeFields->Month - 1);
  Year = TimeFields->Year;
  Hour = TimeFields->Hour;
  Minute = TimeFields->Minute;
  Second = TimeFields->Second;
  Milliseconds = TimeFields->Milliseconds;
  if ( TimeFields->Month < 1 || TimeFields->Day < 1 || Year - 1601 > 0x722A || (unsigned int)v3 > 0xB )
    return 0;
  v10 = NormalYearDaysPrecedingMonth;
  if ( Year != 400 * (Year / 0x190) && (Year == 100 * (Year / 0x64) || (Year & 3) != 0) )
  {
    v11 = NormalYearDaysPrecedingMonth[TimeFields->Month];
    v12 = v3;
    v13 = NormalYearDaysPrecedingMonth[v3];
  }
  else
  {
    v11 = LeapYearDaysPrecedingMonth[TimeFields->Month];
    v12 = v3;
    v13 = LeapYearDaysPrecedingMonth[v3];
  }
  if ( (__int16)(Day - 1) >= v11 - v13 || Hour > 0x17 || Minute > 0x3B || Second > 0x3B || Milliseconds > 0x3E7 )
    return 0;
  if ( Year - 1600 == 400 * ((Year - 1600) / 0x190) || Year - 1600 != 100 * ((Year - 1600) / 0x64) && (Year & 3) == 0 )
    v10 = LeapYearDaysPrecedingMonth;
  result = 1;
  Time->QuadPart = 10000
                 * (Milliseconds
                  + 1000 * (Second + 60 * (Minute + 60 * Hour))
                  + 86400000LL
                  * (int)(Day
                        + v10[v12]
                        + 365 * (Year - 1601)
                        + (Year - 1601) / 0x190
                        - (Year - 1601) / 0x64
                        + ((Year - 1601) >> 2)
                        - 1));
  return result;
}
