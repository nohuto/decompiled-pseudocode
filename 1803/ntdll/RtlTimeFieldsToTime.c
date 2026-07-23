/*
 * XREFs of RtlTimeFieldsToTime @ 0x1800657F0
 * Callers:
 *     RtlCutoverTimeToSystemTime @ 0x180065640 (RtlCutoverTimeToSystemTime.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlTimeFieldsToTime(PTIME_FIELDS TimeFields, PLARGE_INTEGER Time)
{
  int Month; // r10d
  int Day; // r15d
  unsigned int Year; // r9d
  unsigned int Hour; // ebx
  __int64 v6; // r8
  unsigned int Minute; // esi
  unsigned int Second; // ebp
  unsigned int Milliseconds; // edi
  int v11; // eax
  int v12; // ecx
  __int16 v13; // ax
  int v14; // ecx
  BOOLEAN result; // al

  Month = TimeFields->Month;
  Day = TimeFields->Day;
  Year = TimeFields->Year;
  Hour = TimeFields->Hour;
  v6 = (unsigned int)(Month - 1);
  Minute = TimeFields->Minute;
  Second = TimeFields->Second;
  Milliseconds = TimeFields->Milliseconds;
  if ( TimeFields->Month < 1 || TimeFields->Day < 1 || Year - 1601 > 0x722A || (unsigned int)v6 > 0xB )
    return 0;
  if ( Year == 400 * (Year / 0x190) || Year != 100 * (Year / 0x64) && (Year & 3) == 0 )
  {
    v11 = word_180120A18[v6];
    v12 = word_180120A18[Month];
  }
  else
  {
    v11 = word_180120D50[v6];
    v12 = word_180120D50[Month];
  }
  if ( (__int16)(Day - 1) >= v12 - v11 || Hour > 0x17 || Minute > 0x3B || Second > 0x3B || Milliseconds > 0x3E7 )
    return 0;
  if ( Year - 1600 != 400 * ((Year - 1600) / 0x190) && (Year - 1600 == 100 * ((Year - 1600) / 0x64) || (Year & 3) != 0) )
    v13 = word_180120D50[(unsigned int)v6];
  else
    v13 = word_180120A18[(unsigned int)v6];
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
