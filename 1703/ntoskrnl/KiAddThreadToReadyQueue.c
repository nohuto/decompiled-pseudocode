/*
 * XREFs of KiAddThreadToReadyQueue @ 0x140203C24
 * Callers:
 *     KiSelectNextThread @ 0x140113E30 (KiSelectNextThread.c)
 * Callees:
 *     KiGetThreadEffectiveRankNonZero @ 0x140113960 (KiGetThreadEffectiveRankNonZero.c)
 *     KiAddThreadToScbQueue @ 0x140113C3C (KiAddThreadToScbQueue.c)
 *     KiAddThreadToPrcbQueue @ 0x14011F700 (KiAddThreadToPrcbQueue.c)
 */

__int64 __fastcall KiAddThreadToReadyQueue(__int64 a1, __int64 a2, __int64 a3, char a4, int a5)
{
  char v5; // bl
  __int64 v7; // r10
  __int64 v9; // r10
  char v11; // [rsp+58h] [rbp+20h] BYREF

  v5 = 0;
  v7 = a2;
  if ( !a4 )
    *(_DWORD *)(a3 + 436) = MEMORY[0xFFFFF78000000320];
  if ( !a2 )
  {
    v7 = *(_QWORD *)(a3 + 104);
    if ( v7 )
      v7 += *(unsigned int *)(a1 + 216);
  }
  *(_BYTE *)(a3 + 388) = 1;
  v11 = 0;
  if ( v7 && (*(_DWORD *)(a3 + 120) & 0x600) == 0 )
  {
    if ( (unsigned int)KiGetThreadEffectiveRankNonZero(a3, v7, a3, 0, (bool *)&v11) )
      return KiAddThreadToScbQueue(a1, v9, a3, a5);
    v5 = v11;
  }
  return KiAddThreadToPrcbQueue(a1, a3, *(char *)(a3 + 195), a5, v5);
}
