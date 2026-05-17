/*
 * XREFs of RtlpHpVsChunkCompare @ 0x18003E830
 * Callers:
 *     RtlpHpVsContextAllocate @ 0x18004C21C (RtlpHpVsContextAllocate.c)
 *     RtlpHpVsFreeChunkInsert @ 0x180071FAC (RtlpHpVsFreeChunkInsert.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpVsChunkCompare(unsigned int a1, __int64 a2)
{
  unsigned int v2; // eax

  v2 = (a2 - 8) ^ RtlpHeapKey ^ *(_DWORD *)(a2 - 8);
  if ( a1 < v2 )
    return 0xFFFFFFFFLL;
  else
    return a1 > v2;
}
