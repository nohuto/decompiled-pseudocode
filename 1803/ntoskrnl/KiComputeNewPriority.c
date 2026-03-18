/*
 * XREFs of KiComputeNewPriority @ 0x1400EB8C0
 * Callers:
 *     NtYieldExecution @ 0x140040000 (NtYieldExecution.c)
 *     KeSetBasePriorityThread @ 0x14006AEA0 (KeSetBasePriorityThread.c)
 *     KiQuantumEnd @ 0x1400EBA30 (KiQuantumEnd.c)
 *     KiQueueReadyThread @ 0x1400EC480 (KiQueueReadyThread.c)
 *     KiDeferredReadyThread @ 0x1400FBA30 (KiDeferredReadyThread.c)
 *     KeDelayExecutionThread @ 0x140104BA0 (KeDelayExecutionThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiComputeNewPriority(__int64 a1, char a2)
{
  __int64 result; // rax
  unsigned __int8 v3; // r9
  char v4; // al
  unsigned __int8 v5; // dl
  unsigned int v6; // eax
  int v7; // r8d

  result = *(unsigned __int8 *)(a1 + 195);
  if ( (char)result < 16 )
  {
    v3 = *(_BYTE *)(a1 + 564);
    v4 = result - (v3 >> 4) - (v3 & 0xF) - a2;
    v5 = *(_BYTE *)(a1 + 563);
    if ( v4 >= (char)v5 )
      v5 = v4;
    if ( v3 )
    {
      if ( (v3 & 0xF) != 0 )
        *(_DWORD *)(a1 + 1424) = MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(a1 + 564) = 0;
    }
    v6 = *(_DWORD *)(a1 + 1408);
    if ( v6 )
    {
      _BitScanReverse((unsigned int *)&v7, v6);
      if ( (char)v5 < v7 )
        return (unsigned __int8)v7;
    }
    return v5;
  }
  return result;
}
