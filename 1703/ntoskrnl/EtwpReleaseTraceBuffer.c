/*
 * XREFs of EtwpReleaseTraceBuffer @ 0x140087070
 * Callers:
 *     EtwpLogSystemEventUnsafe @ 0x14006B670 (EtwpLogSystemEventUnsafe.c)
 *     EtwpEventWriteFull @ 0x140085400 (EtwpEventWriteFull.c)
 *     EtwTraceContextSwap @ 0x140086BB0 (EtwTraceContextSwap.c)
 *     EtwpTraceMessageVa @ 0x140087260 (EtwpTraceMessageVa.c)
 *     EtwpFailLogging @ 0x1401319A4 (EtwpFailLogging.c)
 *     EtwTraceEvent @ 0x140150C60 (EtwTraceEvent.c)
 *     EtwTraceRaw @ 0x140252FC0 (EtwTraceRaw.c)
 *     EtwpWriteUserEvent @ 0x1404F0990 (EtwpWriteUserEvent.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall EtwpReleaseTraceBuffer(signed __int64 *a1)
{
  signed __int64 v1; // r10
  signed __int64 *v2; // r9
  signed __int64 result; // rax
  signed __int64 v4; // rtt

  v1 = *a1;
  v2 = (signed __int64 *)a1[1];
  _m_prefetchw(v2);
  result = *v2;
  if ( (v1 ^ (unsigned __int64)*v2) >= 0xF )
  {
LABEL_4:
    result = *a1;
    _InterlockedDecrement((volatile signed __int32 *)(*a1 + 12));
  }
  else
  {
    while ( 1 )
    {
      v4 = result;
      result = _InterlockedCompareExchange64(v2, result + 1, result);
      if ( v4 == result )
        break;
      if ( (v1 ^ (unsigned __int64)result) >= 0xF )
        goto LABEL_4;
    }
  }
  return result;
}
