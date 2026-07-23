/*
 * XREFs of RtlTimeFieldsToTime @ 0x1800664E0
 * Callers:
 *     RtlCutoverTimeToSystemTime @ 0x180066340 (RtlCutoverTimeToSystemTime.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlTimeFieldsToTime(PTIME_FIELDS TimeFields, PLARGE_INTEGER Time)
{
  __int64 v2; // r8
  unsigned int Year; // r9d
  int v4; // ebx
  unsigned int Hour; // edi
  unsigned int Minute; // ebp
  unsigned int Second; // r14d
  unsigned int Milliseconds; // esi
  int v10; // edx
  __int64 v11; // r11
  int v12; // eax
  __int16 v13; // r8
  BOOLEAN result; // al

  v2 = (unsigned int)(TimeFields->Month - 1);
  Year = TimeFields->Year;
  v4 = TimeFields->Day - 1;
  Hour = TimeFields->Hour;
  Minute = TimeFields->Minute;
  Second = TimeFields->Second;
  Milliseconds = TimeFields->Milliseconds;
  if ( TimeFields->Month < 1 || TimeFields->Day < 1 || Year - 1601 > 0x722A || (unsigned int)v2 > 0xB )
    return 0;
  if ( Year != 400 * (Year / 0x190) && (Year == 100 * (Year / 0x64) || (Year & 3) != 0) )
  {
    v10 = word_180120F80[TimeFields->Month];
    v11 = v2;
    v12 = word_180120F80[v2];
  }
  else
  {
    v10 = word_180120C48[TimeFields->Month];
    v11 = v2;
    v12 = word_180120C48[v2];
  }
  if ( (__int16)v4 >= v10 - v12 || Hour > 0x17 || Minute > 0x3B || Second > 0x3B || Milliseconds > 0x3E7 )
    return 0;
  if ( Year - 1600 == 400 * ((Year - 1600) / 0x190) || (Year - 1600) % 0x64 && (Year & 3) == 0 )
    v13 = word_180120C48[v11];
  else
    v13 = word_180120F80[v11];
  result = 1;
  Time->QuadPart = 10000
                 * (Milliseconds
                  + 1000 * (Second + 60 * (Minute + 60 * Hour))
                  + 86400000LL
                  * (int)(v4
                        + ((Year - 1601) >> 2)
                        + (Year - 1601) / 0x190
                        - (Year - 1601) / 0x64
                        + 365 * (Year - 1601)
                        + v13));
  return result;
}
