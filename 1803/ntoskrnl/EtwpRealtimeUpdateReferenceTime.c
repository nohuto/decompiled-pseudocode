/*
 * XREFs of EtwpRealtimeUpdateReferenceTime @ 0x140651B5C
 * Callers:
 *     EtwpRealtimeCreateLogfile @ 0x14058E69C (EtwpRealtimeCreateLogfile.c)
 *     EtwpRealtimeResetReferenceTime @ 0x1407B3060 (EtwpRealtimeResetReferenceTime.c)
 * Callees:
 *     EtwpResetBufferHeader @ 0x1400D3A60 (EtwpResetBufferHeader.c)
 *     EtwpInitializeBufferHeader @ 0x1400D3BF4 (EtwpInitializeBufferHeader.c)
 *     EtwpRealtimeDeliverBuffer @ 0x1405923E4 (EtwpRealtimeDeliverBuffer.c)
 *     EtwpRealtimeSaveBuffer @ 0x1405E6708 (EtwpRealtimeSaveBuffer.c)
 */

__int64 __fastcall EtwpRealtimeUpdateReferenceTime(__int64 a1, __int128 *a2)
{
  bool v4; // zf
  __int128 v5; // xmm0
  ULONG v7[13]; // [rsp+20h] [rbp-58h] BYREF
  __int16 v8; // [rsp+54h] [rbp-24h]
  __int128 v9; // [rsp+58h] [rbp-20h]

  EtwpInitializeBufferHeader((__int16 *)a1, v7);
  v8 &= ~0x100u;
  EtwpResetBufferHeader((__int64)v7, 3);
  v4 = *(_DWORD *)(a1 + 440) == 0;
  v5 = *a2;
  v7[11] = 3;
  v7[12] = 72;
  v9 = v5;
  v8 = 1;
  if ( v4 )
    return EtwpRealtimeDeliverBuffer(a1, (__int64)v7);
  else
    return EtwpRealtimeSaveBuffer(a1, v7);
}
