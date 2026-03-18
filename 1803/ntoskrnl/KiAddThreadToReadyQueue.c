/*
 * XREFs of KiAddThreadToReadyQueue @ 0x140247D94
 * Callers:
 *     KiSelectNextThread @ 0x1400A70C0 (KiSelectNextThread.c)
 * Callees:
 *     KiGetThreadEffectiveRankNonZero @ 0x14003A8F0 (KiGetThreadEffectiveRankNonZero.c)
 *     KiAddThreadToPrcbQueue @ 0x1400A8C4C (KiAddThreadToPrcbQueue.c)
 *     KiAddThreadToScbQueue @ 0x1400A930C (KiAddThreadToScbQueue.c)
 */

__int64 __fastcall KiAddThreadToReadyQueue(__int64 a1, __int64 a2, __int64 a3, char a4, int a5)
{
  char v5; // r10
  __int64 v7; // rbx
  __int64 v9; // rax
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
  v9 = *(_QWORD *)(a1 + 25016);
  if ( v9 )
    *(_BYTE *)(v9 + 24) = 0;
  *(_BYTE *)(a3 + 388) = 1;
  v11 = 0;
  if ( v7 && (*(_DWORD *)(a3 + 120) & 0xC00) == 0 )
  {
    if ( (unsigned int)KiGetThreadEffectiveRankNonZero(a3, v7, a3, 0, (bool *)&v11) )
      return KiAddThreadToScbQueue(a1, v7, a3, a5);
    v5 = v11;
  }
  return KiAddThreadToPrcbQueue(a1, a3, *(char *)(a3 + 195), a5, v5);
}
