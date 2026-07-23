/*
 * XREFs of RtlCutoverTimeToSystemTime @ 0x180069F00
 * Callers:
 *     <none>
 * Callees:
 *     RtlTimeFieldsToTime @ 0x18006A0A0 (RtlTimeFieldsToTime.c)
 *     RtlTimeToTimeFields @ 0x18006A290 (RtlTimeToTimeFields.c)
 */

BOOLEAN __cdecl RtlCutoverTimeToSystemTime(
        PTIME_FIELDS CutoverTime,
        PLARGE_INTEGER SystemTime,
        PLARGE_INTEGER CurrentSystemTime,
        BOOLEAN ThisYear)
{
  PLARGE_INTEGER v4; // r13
  CSHORT Day; // r12
  CSHORT Weekday; // r15
  CSHORT Month; // ax
  CSHORT Year; // si
  CSHORT v12; // di
  CSHORT v13; // r15
  __int16 i; // r13
  CSHORT v16; // [rsp+20h] [rbp-40h]
  LARGE_INTEGER Time; // [rsp+28h] [rbp-38h] BYREF
  _TIME_FIELDS v18; // [rsp+30h] [rbp-30h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+40h] [rbp-20h] BYREF
  _TIME_FIELDS v20; // [rsp+50h] [rbp-10h] BYREF
  bool v21; // [rsp+A0h] [rbp+40h]

  v4 = SystemTime;
  RtlTimeToTimeFields(CurrentSystemTime, &TimeFields);
  if ( !CutoverTime->Year )
  {
    Day = CutoverTime->Day;
    if ( Day <= 5 && Day )
    {
      Weekday = CutoverTime->Weekday;
      Month = CutoverTime->Month;
      v21 = 0;
      Year = TimeFields.Year;
      v16 = Weekday;
      if ( !ThisYear )
      {
        if ( Month >= TimeFields.Month )
          v21 = Month <= TimeFields.Month;
        else
          Year = TimeFields.Year + 1;
      }
      v18.Month = CutoverTime->Month;
      v18.Weekday = 0;
      while ( 1 )
      {
        v18.Hour = CutoverTime->Hour;
        v12 = 1;
        v18.Minute = CutoverTime->Minute;
        v18.Second = CutoverTime->Second;
        v18.Milliseconds = CutoverTime->Milliseconds;
        v18.Year = Year;
        v18.Day = 1;
        if ( !RtlTimeFieldsToTime(&v18, &Time) )
          break;
        RtlTimeToTimeFields(&Time, &v20);
        if ( v20.Weekday <= Weekday )
        {
          if ( v20.Weekday < Weekday )
            v12 = Weekday - v20.Weekday + 1;
        }
        else
        {
          v12 = Weekday - v20.Weekday + 8;
        }
        v13 = v12;
        if ( Day > 1 )
        {
          for ( i = 1; i < Day; ++i )
          {
            v12 += 7;
            v18.Day = v12;
            if ( !RtlTimeFieldsToTime(&v18, &Time) )
              break;
            RtlTimeToTimeFields(&Time, &v20);
            v13 = v20.Day;
          }
          v4 = SystemTime;
        }
        v18.Day = v13;
        if ( !RtlTimeFieldsToTime(&v18, &Time) )
          break;
        if ( !v21 || v13 >= TimeFields.Day && (v13 != TimeFields.Day || Time.QuadPart >= CurrentSystemTime->QuadPart) )
        {
          *v4 = Time;
          return 1;
        }
        Weekday = v16;
        ++Year;
        v21 = 0;
      }
    }
    return 0;
  }
  return RtlTimeFieldsToTime(CutoverTime, v4) && (ThisYear || v4->QuadPart >= CurrentSystemTime->QuadPart);
}
