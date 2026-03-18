/*
 * XREFs of KiIntSteerEventTraceControlCallback @ 0x1405F2F70
 * Callers:
 *     <none>
 * Callees:
 *     KiIntSteerLogStatus @ 0x14020BA1C (KiIntSteerLogStatus.c)
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
