/*
 * XREFs of KiIntSteerEventTraceControlCallback @ 0x1405D6550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall KiIntSteerEventTraceControlCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  if ( (ControlCode & 0xFFFFFFFD) == 0 )
    KiIntSteerLogStatus(1);
}
