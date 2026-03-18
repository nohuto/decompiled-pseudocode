/*
 * XREFs of IopLiveDumpTracingControlCallback @ 0x1401FC330
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall IopLiveDumpTracingControlCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  _InterlockedExchange(&IopLiveDumpEtwEnabled, ControlCode != 0);
}
