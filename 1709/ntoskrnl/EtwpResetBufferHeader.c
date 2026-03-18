/*
 * XREFs of EtwpResetBufferHeader @ 0x14011E224
 * Callers:
 *     EtwpDequeueFreeBuffer @ 0x1400E0608 (EtwpDequeueFreeBuffer.c)
 *     EtwpRealtimeSendEmptyMarker @ 0x140577670 (EtwpRealtimeSendEmptyMarker.c)
 *     EtwpInitializeProviderInfoBuffer @ 0x140577CD4 (EtwpInitializeProviderInfoBuffer.c)
 *     EtwpUpdateFileHeader @ 0x140578090 (EtwpUpdateFileHeader.c)
 *     EtwpRealtimeUpdateReferenceTime @ 0x1405D9F78 (EtwpRealtimeUpdateReferenceTime.c)
 *     EtwpPreserveLogger @ 0x140752C2C (EtwpPreserveLogger.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 */

__int64 __fastcall EtwpResetBufferHeader(__int64 a1, __int16 a2)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)(a1 + 8) = 72;
  *(_WORD *)(a1 + 54) = a2;
  if ( (*(_WORD *)(a1 + 52) & 0x100) != 0 )
  {
    memset((void *)(a1 + *(unsigned int *)(a1 + 8)), 0, (unsigned int)(*(_DWORD *)a1 - *(_DWORD *)(a1 + 8)));
    result = 65279LL;
    *(_WORD *)(a1 + 52) &= ~0x100u;
  }
  return result;
}
