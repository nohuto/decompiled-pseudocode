/*
 * XREFs of EtwpValidateLoggerInfo @ 0x1404EDB3C
 * Callers:
 *     EtwpUpdateTrace @ 0x140450B18 (EtwpUpdateTrace.c)
 *     NtTraceControl @ 0x14049AB40 (NtTraceControl.c)
 *     EtwpQueryTrace @ 0x1404ED7B8 (EtwpQueryTrace.c)
 *     EtwpStopTrace @ 0x1404F0484 (EtwpStopTrace.c)
 *     EtwpFlushTrace @ 0x1405959E0 (EtwpFlushTrace.c)
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
