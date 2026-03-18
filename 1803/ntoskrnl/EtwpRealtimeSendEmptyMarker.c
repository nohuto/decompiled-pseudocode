/*
 * XREFs of EtwpRealtimeSendEmptyMarker @ 0x14058998C
 * Callers:
 *     EtwpFlushActiveBuffers @ 0x140591300 (EtwpFlushActiveBuffers.c)
 * Callees:
 *     EtwpResetBufferHeader @ 0x1400D3A60 (EtwpResetBufferHeader.c)
 *     EtwpInitializeBufferHeader @ 0x1400D3BF4 (EtwpInitializeBufferHeader.c)
 *     EtwpRealtimeDeliverBuffer @ 0x1405923E4 (EtwpRealtimeDeliverBuffer.c)
 */

__int64 __fastcall EtwpRealtimeSendEmptyMarker(__int16 *a1)
{
  _DWORD v3[13]; // [rsp+20h] [rbp-58h] BYREF
  __int16 v4; // [rsp+54h] [rbp-24h]

  EtwpInitializeBufferHeader(a1, v3);
  v4 &= ~0x100u;
  EtwpResetBufferHeader((__int64)v3, 6);
  v3[11] = 3;
  v4 = 1;
  v3[12] = 72;
  return EtwpRealtimeDeliverBuffer(a1, v3);
}
