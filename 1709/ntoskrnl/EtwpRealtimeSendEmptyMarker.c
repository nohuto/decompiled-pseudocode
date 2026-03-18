/*
 * XREFs of EtwpRealtimeSendEmptyMarker @ 0x140577670
 * Callers:
 *     EtwpFlushActiveBuffers @ 0x1405322C8 (EtwpFlushActiveBuffers.c)
 * Callees:
 *     EtwpInitializeBufferHeader @ 0x1400E028C (EtwpInitializeBufferHeader.c)
 *     EtwpResetBufferHeader @ 0x14011E224 (EtwpResetBufferHeader.c)
 *     EtwpRealtimeDeliverBuffer @ 0x140532CB4 (EtwpRealtimeDeliverBuffer.c)
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
  return EtwpRealtimeDeliverBuffer((__int64)a1, (__int64)v3);
}
