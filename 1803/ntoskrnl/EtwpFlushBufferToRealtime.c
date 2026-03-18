/*
 * XREFs of EtwpFlushBufferToRealtime @ 0x140592094
 * Callers:
 *     EtwpFlushBuffer @ 0x140591F1C (EtwpFlushBuffer.c)
 * Callees:
 *     EtwpRealtimeDeliverBuffer @ 0x1405923E4 (EtwpRealtimeDeliverBuffer.c)
 *     EtwpRealtimeSaveBuffer @ 0x1405E6708 (EtwpRealtimeSaveBuffer.c)
 */

__int64 __fastcall EtwpFlushBufferToRealtime(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax

  result = 3221225473LL;
  if ( !*(_DWORD *)(a1 + 360) || *(_DWORD *)(a1 + 440) || (result = EtwpRealtimeDeliverBuffer(a1, a2), (int)result < 0) )
  {
    if ( !a3 )
      return EtwpRealtimeSaveBuffer(a1, a2);
  }
  else if ( !a3 )
  {
    return result;
  }
  if ( !*(_DWORD *)(a1 + 360) || *(_DWORD *)(a1 + 440) )
    return 0LL;
  return result;
}
