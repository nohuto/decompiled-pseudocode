/*
 * XREFs of RtlCutoverTimeToSystemTime @ 0x180065640
 * Callers:
 *     <none>
 * Callees:
 *     RtlTimeFieldsToTime @ 0x1800657F0 (RtlTimeFieldsToTime.c)
 *     RtlTimeToTimeFields @ 0x180065A10 (RtlTimeToTimeFields.c)
 */

BOOLEAN __cdecl RtlCutoverTimeToSystemTime(
        PTIME_FIELDS CutoverTime,
        PLARGE_INTEGER SystemTime,
        PLARGE_INTEGER CurrentSystemTime,
        BOOLEAN ThisYear)
{
  PTIME_FIELDS v5; // r15
  __int16 Day; // r12
  bool v9; // zf
  CSHORT Month; // ax
  bool v11; // r13
  CSHORT Year; // di
  CSHORT v13; // si
  CSHORT v14; // r14
  __int16 i; // r15
  CSHORT Weekday; // [rsp+20h] [rbp-40h]
  LARGE_INTEGER Time; // [rsp+28h] [rbp-38h] BYREF
  _TIME_FIELDS v19; // [rsp+30h] [rbp-30h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+40h] [rbp-20h] BYREF
  _TIME_FIELDS v21; // [rsp+50h] [rbp-10h] BYREF

  v5 = CutoverTime;
  RtlTimeToTimeFields(CurrentSystemTime, &TimeFields);
  if ( !v5->Year )
  {
    Day = v5->Day;
    if ( Day <= 5 && Day )
    {
      Weekday = v5->Weekday;
      v9 = ThisYear == 0;
      Month = v5->Month;
      v11 = 0;
      Year = TimeFields.Year;
      if ( v9 )
      {
        if ( Month >= TimeFields.Month )
          v11 = Month <= TimeFields.Month;
        else
          Year = TimeFields.Year + 1;
      }
      v19.Month = v5->Month;
      v19.Weekday = 0;
      while ( 1 )
      {
        v19.Hour = v5->Hour;
        v13 = 1;
        v19.Minute = v5->Minute;
        v19.Second = v5->Second;
        v19.Milliseconds = v5->Milliseconds;
        v19.Year = Year;
        v19.Day = 1;
        if ( !RtlTimeFieldsToTime(&v19, &Time) )
          return 0;
        RtlTimeToTimeFields(&Time, &v21);
        if ( v21.Weekday > Weekday )
          break;
        v14 = 1;
        if ( v21.Weekday < Weekday )
        {
          v13 = Weekday - v21.Weekday + 1;
          goto LABEL_9;
        }
LABEL_10:
        if ( Day > 1 )
        {
          for ( i = 1; i < Day; ++i )
          {
            v13 += 7;
            v19.Day = v13;
            if ( !RtlTimeFieldsToTime(&v19, &Time) )
              break;
            RtlTimeToTimeFields(&Time, &v21);
            v14 = v21.Day;
          }
          v5 = CutoverTime;
        }
        v19.Day = v14;
        if ( !RtlTimeFieldsToTime(&v19, &Time) )
          return 0;
        if ( !v11 || v14 >= TimeFields.Day && (v14 != TimeFields.Day || Time.QuadPart >= CurrentSystemTime->QuadPart) )
        {
          *SystemTime = Time;
          return 1;
        }
        v11 = 0;
        ++Year;
      }
      v13 = Weekday - v21.Weekday + 8;
LABEL_9:
      v14 = v13;
      goto LABEL_10;
    }
    return 0;
  }
  return RtlTimeFieldsToTime(v5, SystemTime) && (ThisYear || SystemTime->QuadPart >= CurrentSystemTime->QuadPart);
}
