/*
 * XREFs of EtwpGetReserveTraceBufferStatus @ 0x14027EEAC
 * Callers:
 *     EtwpEventWriteFull @ 0x140087F40 (EtwpEventWriteFull.c)
 *     EtwpTraceMessageVa @ 0x140092350 (EtwpTraceMessageVa.c)
 *     EtwTraceEvent @ 0x14015331C (EtwTraceEvent.c)
 *     EtwTraceRaw @ 0x14027A94C (EtwTraceRaw.c)
 *     EtwpWriteUserEvent @ 0x1404CC5B0 (EtwpWriteUserEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpGetReserveTraceBufferStatus(__int64 a1, unsigned int a2)
{
  if ( a2 <= 0xFFF8 )
    return *(_DWORD *)(a1 + 8) < a2 ? -2147483643 : -1073741801;
  else
    return 3221225621LL;
}
