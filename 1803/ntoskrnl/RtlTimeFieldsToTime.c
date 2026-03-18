/*
 * XREFs of RtlTimeFieldsToTime @ 0x1400C0BA0
 * Callers:
 *     ExUpdateSystemTimeFromCmos @ 0x14047140C (ExUpdateSystemTimeFromCmos.c)
 *     ExpRefreshSystemTime @ 0x14062FA00 (ExpRefreshSystemTime.c)
 *     ExpRefreshTimeZoneInformation @ 0x14062FA98 (ExpRefreshTimeZoneInformation.c)
 *     RtlCutoverTimeToSystemTime @ 0x14062FF6C (RtlCutoverTimeToSystemTime.c)
 *     ExGetExpirationDate @ 0x14063071C (ExGetExpirationDate.c)
 *     NtSetSystemTime @ 0x1407BD00C (NtSetSystemTime.c)
 *     GetBootSystemTime @ 0x1408A5360 (GetBootSystemTime.c)
 *     Phase1InitializationDiscard @ 0x1408A6E00 (Phase1InitializationDiscard.c)
 *     SeMakeSystemToken @ 0x1408BCBA0 (SeMakeSystemToken.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x1408BD0F0 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeAnonymousLogonToken @ 0x1408BD32C (SeMakeAnonymousLogonToken.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlTimeFieldsToTime(PTIME_FIELDS TimeFields, PLARGE_INTEGER Time)
{
  int Day; // r8d
  unsigned int Year; // r9d
  unsigned int Hour; // ebx
  unsigned int Minute; // esi
  unsigned int v6; // r10d
  unsigned int Second; // ebp
  unsigned int Milliseconds; // edi
  BOOL v9; // eax
  __int64 Month; // rcx
  int v11; // eax
  int v12; // ecx
  __int16 v13; // ax
  int v14; // ecx
  BOOLEAN result; // al

  Day = TimeFields->Day;
  Year = TimeFields->Year;
  Hour = TimeFields->Hour;
  Minute = TimeFields->Minute;
  v6 = TimeFields->Month - 1;
  Second = TimeFields->Second;
  Milliseconds = TimeFields->Milliseconds;
  if ( TimeFields->Month < 1 || (__int16)Day < 1 || Year - 1601 > 0x722A || v6 > 0xB )
    return 0;
  v9 = Year == 400 * (Year / 0x190) || Year != 100 * (Year / 0x64) && (Year & 3) == 0;
  Month = (unsigned int)TimeFields->Month;
  if ( v9 )
  {
    v11 = LeapYearDaysPrecedingMonth[v6];
    v12 = LeapYearDaysPrecedingMonth[Month];
  }
  else
  {
    v11 = NormalYearDaysPrecedingMonth[v6];
    v12 = NormalYearDaysPrecedingMonth[Month];
  }
  if ( (__int16)(Day - 1) >= v12 - v11 || Hour > 0x17 || Minute > 0x3B || Second > 0x3B || Milliseconds > 0x3E7 )
    return 0;
  if ( Year - 1600 != 400 * ((Year - 1600) / 0x190) && (Year - 1600 == 100 * ((Year - 1600) / 0x64) || (Year & 3) != 0) )
    v13 = NormalYearDaysPrecedingMonth[v6];
  else
    v13 = LeapYearDaysPrecedingMonth[v6];
  v14 = v13;
  result = 1;
  Time->QuadPart = 10000
                 * (Milliseconds
                  + 1000 * (Second + 60 * (Minute + 60 * Hour))
                  + 86400000LL
                  * (int)(Day
                        + ((Year - 1601) >> 2)
                        + (Year - 1601) / 0x190
                        - ((4 * ((Year - 1601) / 0x190)) & 0x7FFFFFF)
                        + 365 * (Year - 1601)
                        + v14
                        - 1));
  return result;
}
