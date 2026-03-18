/*
 * XREFs of ExpSplitCacheAlignedAllocation @ 0x1402B9170
 * Callers:
 *     ExAllocateHeapPool @ 0x1402BCFE4 (ExAllocateHeapPool.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpSplitCacheAlignedAllocation(__int64 a1)
{
  unsigned int v2; // ecx
  __int64 v4; // r8
  __int64 v5; // rcx

  *(_BYTE *)(a1 + 3) &= ~4u;
  v2 = (-16 - a1) & (ExpCacheLineSize - 1);
  if ( !v2 )
    return a1;
  v4 = a1 + v2;
  v5 = (__int64)v2 >> 4;
  *(_BYTE *)v4 = v5;
  *(_BYTE *)(v4 + 2) = *(_BYTE *)(a1 + 2) - v5;
  *(_BYTE *)(v4 + 1) = *(_BYTE *)(a1 + 1);
  *(_BYTE *)(v4 + 3) = *(_BYTE *)(a1 + 3) | 4;
  *(_DWORD *)(v4 + 4) = *(_DWORD *)(a1 + 4);
  if ( (unsigned __int8)*(_WORD *)v4 > 1u )
    *(_QWORD *)(a1 + 16) = v4 ^ ExpPoolQuotaCookie;
  return v4;
}
