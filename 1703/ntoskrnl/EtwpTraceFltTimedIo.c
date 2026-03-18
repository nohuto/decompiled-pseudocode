/*
 * XREFs of EtwpTraceFltTimedIo @ 0x140254CF0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceTimedEvent @ 0x140020870 (EtwTraceTimedEvent.c)
 */

void *__fastcall EtwpTraceFltTimedIo(__int64 a1, int a2, unsigned int a3, __int16 a4, __int64 a5)
{
  return EtwTraceTimedEvent(a4, a3, a1, a2, 4200451, a5);
}
