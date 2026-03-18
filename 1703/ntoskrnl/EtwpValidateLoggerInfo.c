/*
 * XREFs of EtwpValidateLoggerInfo @ 0x140551754
 * Callers:
 *     EtwpStopTrace @ 0x140434854 (EtwpStopTrace.c)
 *     EtwpFlushTrace @ 0x140451AD4 (EtwpFlushTrace.c)
 *     NtTraceControl @ 0x14047FD70 (NtTraceControl.c)
 *     EtwpQueryTrace @ 0x1405515A4 (EtwpQueryTrace.c)
 *     EtwpUpdateTrace @ 0x1405D8AE8 (EtwpUpdateTrace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpValidateLoggerInfo(_DWORD *a1)
{
  if ( !a1 )
    return 3221225485LL;
  if ( *a1 < 0xB0u )
    return 3221225990LL;
  return (a1[11] & 0x20000) == 0 ? 0xC000000D : 0;
}
