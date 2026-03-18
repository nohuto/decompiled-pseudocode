/*
 * XREFs of KiGroupSchedulingGenerationEnd @ 0x1400428E0
 * Callers:
 *     KiGroupSchedulingQuantumEnd @ 0x140042440 (KiGroupSchedulingQuantumEnd.c)
 *     KeTransitionProcessorParkState @ 0x14020739C (KeTransitionProcessorParkState.c)
 * Callees:
 *     KiSetProcessorIdle @ 0x140034028 (KiSetProcessorIdle.c)
 *     KiStartThreadCycleAccumulation @ 0x140043CC0 (KiStartThreadCycleAccumulation.c)
 *     KiEndThreadCycleAccumulation @ 0x140043D60 (KiEndThreadCycleAccumulation.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x140043F10 (KiTransitionSchedulingGroupGeneration.c)
 *     KiSelectReadyThread @ 0x1400EC0C0 (KiSelectReadyThread.c)
 *     KiIsThreadRankNonZero @ 0x1401138D0 (KiIsThreadRankNonZero.c)
 *     KiAddThreadToPrcbQueue @ 0x14011F700 (KiAddThreadToPrcbQueue.c)
 */

__int64 __fastcall KiGroupSchedulingGenerationEnd(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v3; // rsi
  bool v5; // di
  __int64 result; // rax
  __int64 v9; // r14
  int v10; // ebp
  int v11; // r15d
  __int64 ready; // rax
  __int64 v13; // rbp
  char v14; // r8
  int v15; // edx
  char v16; // cl
  char v17; // cl
  int v18; // r8d

  v3 = *(_QWORD *)(a1 + 8);
  v5 = v3 == *(_QWORD *)(a1 + 24);
  if ( !a3 )
  {
    _disable();
    KiEndThreadCycleAccumulation(a1, *(_QWORD *)(a1 + 8), 0LL);
    _enable();
  }
  result = KiTransitionSchedulingGroupGeneration(a1, a2, a3);
  if ( !a3 )
  {
    v9 = *(_QWORD *)(a1 + 16);
    v10 = 0;
    v11 = 0;
    if ( v9 )
    {
      if ( v9 == *(_QWORD *)(a1 + 24) )
        goto LABEL_9;
      *(_QWORD *)(a1 + 16) = 0LL;
      if ( (*(_BYTE *)(v3 + 2) & 4) != 0 )
      {
        if ( (unsigned __int8)KiIsThreadRankNonZero(v3, a1) )
          v17 = 1;
        else
          v17 = *(_BYTE *)(v3 + 195);
      }
      else
      {
        v17 = *(_BYTE *)(v3 + 195);
      }
      **(_BYTE **)(a1 + 56) = v17;
      *(_BYTE *)(v9 + 388) = 1;
      v18 = *(char *)(v9 + 195);
      *(_DWORD *)(v9 + 436) = MEMORY[0xFFFFF78000000320];
      KiAddThreadToPrcbQueue(a1, v9, v18, 1, 0);
      v11 = 1;
    }
    if ( v9 != *(_QWORD *)(a1 + 24) )
    {
      if ( !v5 )
      {
        v10 = *(char *)(v3 + 195) + 1;
        if ( v10 > 31 )
          goto LABEL_10;
      }
      ready = KiSelectReadyThread((unsigned int)v10, a1);
      v13 = ready;
      if ( ready )
      {
        if ( (*(_BYTE *)(ready + 2) & 4) != 0 )
        {
          if ( (unsigned __int8)KiIsThreadRankNonZero(ready, a1) )
            v16 = 1;
          else
            v16 = *(_BYTE *)(v13 + 195);
        }
        else
        {
          v16 = *(_BYTE *)(ready + 195);
        }
        **(_BYTE **)(a1 + 56) = v16;
        *(_QWORD *)(a1 + 16) = v13;
        if ( *(_BYTE *)(v13 + 388) == 1 )
          *(_DWORD *)(v13 + 132) = *(_DWORD *)(v13 + 132) - *(_DWORD *)(v13 + 436) + MEMORY[0xFFFFF78000000320];
        *(_BYTE *)(v13 + 388) = 3;
        --v11;
      }
    }
LABEL_9:
    if ( !v5 )
    {
LABEL_10:
      _disable();
      result = KiStartThreadCycleAccumulation(a1, v3, v5);
      _enable();
      return result;
    }
    if ( v11 > 0 )
    {
      if ( (*(_BYTE *)(a1 + 35) & 1) == 0 )
        goto LABEL_10;
      v14 = 1;
      v15 = 1;
    }
    else
    {
      if ( v11 >= 0 || (*(_BYTE *)(a1 + 35) & 1) != 0 )
        goto LABEL_10;
      v14 = 0;
      v15 = 0;
    }
    KiSetProcessorIdle(a1, v15, v14);
    goto LABEL_10;
  }
  return result;
}
