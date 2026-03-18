/*
 * XREFs of RtlTimeFieldsToTime @ 0x14011C830
 * Callers:
 *     ExUpdateSystemTimeFromCmos @ 0x14043A854 (ExUpdateSystemTimeFromCmos.c)
 *     ExpRefreshSystemTime @ 0x1405C1F1C (ExpRefreshSystemTime.c)
 *     ExpRefreshTimeZoneInformation @ 0x1405C1FB4 (ExpRefreshTimeZoneInformation.c)
 *     RtlCutoverTimeToSystemTime @ 0x1405C2488 (RtlCutoverTimeToSystemTime.c)
 *     ExGetExpirationDate @ 0x1405C2C4C (ExGetExpirationDate.c)
 *     NtSetSystemTime @ 0x14075653C (NtSetSystemTime.c)
 *     GetBootSystemTime @ 0x140828B94 (GetBootSystemTime.c)
 *     Phase1InitializationDiscard @ 0x140830A1C (Phase1InitializationDiscard.c)
 *     SeMakeSystemToken @ 0x14084AF38 (SeMakeSystemToken.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x14084B488 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeAnonymousLogonToken @ 0x14084B6C4 (SeMakeAnonymousLogonToken.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlTimeFieldsToTime(PTIME_FIELDS TimeFields, PLARGE_INTEGER Time)
{
  int Day; // r10d
  unsigned int Year; // r8d
  unsigned int Hour; // edi
  __int64 v6; // r9
  unsigned int Minute; // r14d
  int v8; // r13d
  unsigned int Second; // r15d
  __int16 v10; // bp
  unsigned int Milliseconds; // esi
  __int16 *v12; // r10
  int v13; // edx
  __int64 v14; // rbx
  int v15; // eax
  BOOLEAN result; // al

  Day = TimeFields->Day;
  Year = TimeFields->Year;
  Hour = TimeFields->Hour;
  v6 = (unsigned int)(TimeFields->Month - 1);
  Minute = TimeFields->Minute;
  v8 = Day;
  Second = TimeFields->Second;
  v10 = Day - 1;
  Milliseconds = TimeFields->Milliseconds;
  if ( TimeFields->Month < 1 || (__int16)Day < 1 || Year - 1601 > 0x722A || (unsigned int)v6 > 0xB )
    return 0;
  v12 = NormalYearDaysPrecedingMonth;
  if ( Year != 400 * (Year / 0x190) && (Year == 100 * (Year / 0x64) || (Year & 3) != 0) )
  {
    v13 = NormalYearDaysPrecedingMonth[TimeFields->Month];
    v14 = v6;
    v15 = NormalYearDaysPrecedingMonth[v6];
  }
  else
  {
    v13 = LeapYearDaysPrecedingMonth[TimeFields->Month];
    v14 = v6;
    v15 = LeapYearDaysPrecedingMonth[v6];
  }
  if ( v10 >= v13 - v15 || Hour > 0x17 || Minute > 0x3B || Second > 0x3B || Milliseconds > 0x3E7 )
    return 0;
  if ( Year - 1600 == 400 * ((Year - 1600) / 0x190) || Year - 1600 != 100 * ((Year - 1600) / 0x64) && (Year & 3) == 0 )
    v12 = LeapYearDaysPrecedingMonth;
  result = 1;
  Time->QuadPart = 10000
                 * (Milliseconds
                  + 1000 * (Second + 60 * (Minute + 60 * Hour))
                  + 86400000LL
                  * (int)(v8
                        + v12[v14]
                        + 365 * (Year - 1601)
                        + (Year - 1601) / 0x190
                        - (Year - 1601) / 0x64
                        + ((Year - 1601) >> 2)
                        - 1));
  return result;
}
