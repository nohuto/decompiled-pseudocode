/*
 * XREFs of RtlTimeFieldsToTime @ 0x140026E40
 * Callers:
 *     ExUpdateSystemTimeFromCmos @ 0x140409AF8 (ExUpdateSystemTimeFromCmos.c)
 *     ExpRefreshSystemTime @ 0x1405A57F4 (ExpRefreshSystemTime.c)
 *     ExpRefreshTimeZoneInformation @ 0x1405A588C (ExpRefreshTimeZoneInformation.c)
 *     RtlCutoverTimeToSystemTime @ 0x1405A5D50 (RtlCutoverTimeToSystemTime.c)
 *     ExGetExpirationDate @ 0x1405A651C (ExGetExpirationDate.c)
 *     NtSetSystemTime @ 0x140716E0C (NtSetSystemTime.c)
 *     Phase1InitializationDiscard @ 0x14080AC64 (Phase1InitializationDiscard.c)
 *     GetBootSystemTime @ 0x140811A90 (GetBootSystemTime.c)
 *     SeMakeSystemToken @ 0x14081A5B4 (SeMakeSystemToken.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x14081AB04 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeAnonymousLogonToken @ 0x14081AD40 (SeMakeAnonymousLogonToken.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlTimeFieldsToTime(PTIME_FIELDS TimeFields, PLARGE_INTEGER Time)
{
  unsigned int Year; // r9d
  unsigned int Hour; // edi
  __int64 v4; // r8
  unsigned int Minute; // ebp
  int v6; // ebx
  unsigned int Second; // r14d
  unsigned int Milliseconds; // esi
  int v10; // edx
  __int64 v11; // r11
  int v12; // eax
  __int16 v13; // r8
  BOOLEAN result; // al

  Year = TimeFields->Year;
  Hour = TimeFields->Hour;
  v4 = (unsigned int)(TimeFields->Month - 1);
  Minute = TimeFields->Minute;
  v6 = TimeFields->Day - 1;
  Second = TimeFields->Second;
  Milliseconds = TimeFields->Milliseconds;
  if ( TimeFields->Month < 1 || TimeFields->Day < 1 || Year - 1601 > 0x722A || (unsigned int)v4 > 0xB )
    return 0;
  if ( Year != 400 * (Year / 0x190) && (Year == 100 * (Year / 0x64) || (Year & 3) != 0) )
  {
    v10 = NormalYearDaysPrecedingMonth[TimeFields->Month];
    v11 = v4;
    v12 = NormalYearDaysPrecedingMonth[v4];
  }
  else
  {
    v10 = LeapYearDaysPrecedingMonth[TimeFields->Month];
    v11 = v4;
    v12 = LeapYearDaysPrecedingMonth[v4];
  }
  if ( (__int16)v6 >= v10 - v12 || Hour > 0x17 || Minute > 0x3B || Second > 0x3B || Milliseconds > 0x3E7 )
    return 0;
  if ( Year - 1600 == 400 * ((Year - 1600) / 0x190) || (Year - 1600) % 0x64 && (Year & 3) == 0 )
    v13 = LeapYearDaysPrecedingMonth[v11];
  else
    v13 = NormalYearDaysPrecedingMonth[v11];
  result = 1;
  Time->QuadPart = 10000
                 * (Milliseconds
                  + 1000 * (Second + 60 * (Minute + 60 * Hour))
                  + 86400000LL
                  * (int)(v6
                        + ((Year - 1601) >> 2)
                        + (Year - 1601) / 0x190
                        - (Year - 1601) / 0x64
                        + 365 * (Year - 1601)
                        + v13));
  return result;
}
