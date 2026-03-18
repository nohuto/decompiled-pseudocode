/*
 * XREFs of EtwpGetReserveTraceBufferStatus @ 0x14014D0B8
 * Callers:
 *     EtwpTraceMessageVa @ 0x140061BC0 (EtwpTraceMessageVa.c)
 *     EtwpEventWriteFull @ 0x1400EFAB0 (EtwpEventWriteFull.c)
 *     EtwTraceEvent @ 0x1402AD70C (EtwTraceEvent.c)
 *     EtwTraceRaw @ 0x1402ADB24 (EtwTraceRaw.c)
 *     EtwpWriteUserEvent @ 0x1404D3060 (EtwpWriteUserEvent.c)
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
