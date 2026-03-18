/*
 * XREFs of KiAddThreadToReadyQueue @ 0x14020A110
 * Callers:
 *     KiSelectNextThread @ 0x1400A89A0 (KiSelectNextThread.c)
 * Callees:
 *     KiGetThreadEffectiveRankNonZero @ 0x1400ABA00 (KiGetThreadEffectiveRankNonZero.c)
 *     KiAddThreadToPrcbQueue @ 0x1400D2720 (KiAddThreadToPrcbQueue.c)
 *     KiAddThreadToScbQueue @ 0x1400D2AE0 (KiAddThreadToScbQueue.c)
 */

__int64 __fastcall KiAddThreadToReadyQueue(__int64 a1, __int64 a2, __int64 a3, char a4, int a5)
{
  char v5; // bl
  __int64 v7; // rdi
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
    *(_BYTE *)(v9 + 8) = 0;
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
