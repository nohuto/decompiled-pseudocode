/*
 * XREFs of EtwpInitializeBufferHeader @ 0x140122198
 * Callers:
 *     EtwpAllocateFreeBuffers @ 0x140122058 (EtwpAllocateFreeBuffers.c)
 *     EtwpInitializeProviderInfoBuffer @ 0x14054E0CC (EtwpInitializeProviderInfoBuffer.c)
 *     EtwpRealtimeSendEmptyMarker @ 0x140550164 (EtwpRealtimeSendEmptyMarker.c)
 *     EtwpUpdateFileHeader @ 0x14055830C (EtwpUpdateFileHeader.c)
 *     EtwpRealtimeUpdateReferenceTime @ 0x1405D3DAC (EtwpRealtimeUpdateReferenceTime.c)
 *     EtwpPreserveLogger @ 0x140713AB0 (EtwpPreserveLogger.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 */

__int64 __fastcall EtwpInitializeBufferHeader(__int16 *a1, _DWORD *a2)
{
  __int16 v4; // ax
  __int64 result; // rax

  memset(a2, 0, 0x48uLL);
  a2[2] = 72;
  a2[12] = a2[2];
  *a2 = *((_DWORD *)a1 + 1);
  v4 = *a1;
  *((_WORD *)a2 + 21) = *a1;
  if ( !v4 )
    *((_WORD *)a2 + 21) = -1;
  result = 256LL;
  *((_WORD *)a2 + 26) |= 0x100u;
  return result;
}
