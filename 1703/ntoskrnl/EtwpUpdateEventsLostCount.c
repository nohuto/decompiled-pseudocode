/*
 * XREFs of EtwpUpdateEventsLostCount @ 0x140131B10
 * Callers:
 *     EtwpLogSystemEventUnsafe @ 0x14006B670 (EtwpLogSystemEventUnsafe.c)
 *     EtwpReserveTraceBuffer @ 0x140086960 (EtwpReserveTraceBuffer.c)
 *     EtwpLogKernelEvent @ 0x1400F22E0 (EtwpLogKernelEvent.c)
 *     EtwpFailLogging @ 0x1401319A4 (EtwpFailLogging.c)
 *     EtwpCompressBuffer @ 0x140257484 (EtwpCompressBuffer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpUpdateEventsLostCount(__int64 a1)
{
  __int64 result; // rax

  _InterlockedIncrement((volatile signed __int32 *)(a1 + 240));
  result = *(unsigned int *)(a1 + 816);
  if ( (result & 8) != 0 )
    *(_DWORD *)(a1 + 448) = 1;
  return result;
}
