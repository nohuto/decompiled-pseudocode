/*
 * XREFs of TtmpTraceLoggingCallback @ 0x1404F1980
 * Callers:
 *     <none>
 * Callees:
 *     TtmiSessionsRundown @ 0x14070FA28 (TtmiSessionsRundown.c)
 */

void __fastcall TtmpTraceLoggingCallback(
        LPCGUID SourceId,
        __int64 ControlCode,
        __int64 Level,
        ULONGLONG MatchAnyKeyword)
{
  if ( (_DWORD)ControlCode == 2 )
    TtmiSessionsRundown(SourceId, ControlCode, Level, MatchAnyKeyword);
}
