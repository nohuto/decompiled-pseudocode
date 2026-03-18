/*
 * XREFs of EtwpUpdateEventsLostCount @ 0x1400CF900
 * Callers:
 *     EtwpFailLogging @ 0x1400CF814 (EtwpFailLogging.c)
 *     EtwpReserveTraceBuffer @ 0x1400F0B50 (EtwpReserveTraceBuffer.c)
 *     EtwpLogKernelEvent @ 0x1401080D0 (EtwpLogKernelEvent.c)
 *     EtwpLogSystemEventUnsafe @ 0x140172664 (EtwpLogSystemEventUnsafe.c)
 *     EtwpCompressBuffer @ 0x1402B3178 (EtwpCompressBuffer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpUpdateEventsLostCount(__int64 a1)
{
  __int64 result; // rax

  _InterlockedIncrement((volatile signed __int32 *)(a1 + 256));
  result = *(unsigned int *)(a1 + 832);
  if ( (result & 8) != 0 )
    *(_DWORD *)(a1 + 464) = 1;
  return result;
}
