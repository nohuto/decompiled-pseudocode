/*
 * XREFs of EtwpResetBufferHeader @ 0x140122008
 * Callers:
 *     EtwpDequeueFreeBuffer @ 0x140087AC0 (EtwpDequeueFreeBuffer.c)
 *     EtwpInitializeProviderInfoBuffer @ 0x14054E0CC (EtwpInitializeProviderInfoBuffer.c)
 *     EtwpRealtimeSendEmptyMarker @ 0x140550164 (EtwpRealtimeSendEmptyMarker.c)
 *     EtwpUpdateFileHeader @ 0x14055830C (EtwpUpdateFileHeader.c)
 *     EtwpRealtimeUpdateReferenceTime @ 0x1405D3DAC (EtwpRealtimeUpdateReferenceTime.c)
 *     EtwpPreserveLogger @ 0x140713AB0 (EtwpPreserveLogger.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 */

__int64 __fastcall EtwpResetBufferHeader(__int64 a1, __int16 a2)
{
  bool v3; // zf
  __int64 result; // rax

  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  v3 = (*(_BYTE *)(a1 + 53) & 1) == 0;
  *(_DWORD *)(a1 + 8) = 72;
  *(_WORD *)(a1 + 54) = a2;
  if ( !v3 )
  {
    memset((void *)(a1 + *(unsigned int *)(a1 + 8)), 0, (unsigned int)(*(_DWORD *)a1 - *(_DWORD *)(a1 + 8)));
    result = 65279LL;
    *(_WORD *)(a1 + 52) &= ~0x100u;
  }
  return result;
}
