/*
 * XREFs of EtwpGetReserveTraceBufferStatus @ 0x140131B2C
 * Callers:
 *     EtwpEventWriteFull @ 0x140085400 (EtwpEventWriteFull.c)
 *     EtwpTraceMessageVa @ 0x140087260 (EtwpTraceMessageVa.c)
 *     EtwTraceEvent @ 0x140150C60 (EtwTraceEvent.c)
 *     EtwTraceRaw @ 0x140252FC0 (EtwTraceRaw.c)
 *     EtwpWriteUserEvent @ 0x1404F0990 (EtwpWriteUserEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpGetReserveTraceBufferStatus(__int64 a1, unsigned int a2)
{
  if ( a2 > 0xFFF8 )
    return 3221225621LL;
  else
    return *(_DWORD *)(a1 + 8) < a2 ? -2147483643 : -1073741801;
}
