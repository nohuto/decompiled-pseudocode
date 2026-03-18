/*
 * XREFs of TtmpTraceLoggingCallback @ 0x14048BF60
 * Callers:
 *     <none>
 * Callees:
 *     TtmiSessionsRundown @ 0x140773298 (TtmiSessionsRundown.c)
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
