/*
 * XREFs of EtwpValidateLoggerInfo @ 0x14058B828
 * Callers:
 *     EtwpFlushTrace @ 0x140580054 (EtwpFlushTrace.c)
 *     EtwpStopTrace @ 0x140589108 (EtwpStopTrace.c)
 *     EtwpQueryTrace @ 0x14058B85C (EtwpQueryTrace.c)
 *     NtTraceControl @ 0x14058F8F0 (NtTraceControl.c)
 *     EtwpUpdateTrace @ 0x140629C7C (EtwpUpdateTrace.c)
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
