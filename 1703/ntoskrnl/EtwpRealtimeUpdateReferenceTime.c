/*
 * XREFs of EtwpRealtimeUpdateReferenceTime @ 0x1405D3DAC
 * Callers:
 *     EtwpRealtimeCreateLogfile @ 0x14054FF60 (EtwpRealtimeCreateLogfile.c)
 *     EtwpRealtimeResetReferenceTime @ 0x1407135A8 (EtwpRealtimeResetReferenceTime.c)
 * Callees:
 *     EtwpResetBufferHeader @ 0x140122008 (EtwpResetBufferHeader.c)
 *     EtwpInitializeBufferHeader @ 0x140122198 (EtwpInitializeBufferHeader.c)
 *     EtwpRealtimeDeliverBuffer @ 0x140550360 (EtwpRealtimeDeliverBuffer.c)
 *     EtwpRealtimeSaveBuffer @ 0x140550854 (EtwpRealtimeSaveBuffer.c)
 */

__int64 __fastcall EtwpRealtimeUpdateReferenceTime(__int64 a1, __int128 *a2)
{
  bool v4; // zf
  __int128 v5; // xmm0
  unsigned int v7[13]; // [rsp+20h] [rbp-58h] BYREF
  __int16 v8; // [rsp+54h] [rbp-24h]
  __int128 v9; // [rsp+58h] [rbp-20h]

  EtwpInitializeBufferHeader((__int16 *)a1, v7);
  v8 &= ~0x100u;
  EtwpResetBufferHeader((__int64)v7, 3);
  v4 = *(_DWORD *)(a1 + 424) == 0;
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
