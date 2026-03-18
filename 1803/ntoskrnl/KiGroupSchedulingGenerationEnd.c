/*
 * XREFs of KiGroupSchedulingGenerationEnd @ 0x1400A8540
 * Callers:
 *     KiGroupSchedulingQuantumEnd @ 0x1400EABEC (KiGroupSchedulingQuantumEnd.c)
 *     KeTransitionProcessorParkState @ 0x14024BF2C (KeTransitionProcessorParkState.c)
 * Callees:
 *     KiIsThreadRankNonZero @ 0x14003A860 (KiIsThreadRankNonZero.c)
 *     KiEndThreadCycleAccumulation @ 0x140060730 (KiEndThreadCycleAccumulation.c)
 *     KiStartThreadCycleAccumulation @ 0x140060940 (KiStartThreadCycleAccumulation.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x1400A87B0 (KiTransitionSchedulingGroupGeneration.c)
 *     KiAddThreadToPrcbQueue @ 0x1400A8C4C (KiAddThreadToPrcbQueue.c)
 *     KiSetProcessorIdle @ 0x1400A9678 (KiSetProcessorIdle.c)
 *     KiSelectReadyThread @ 0x1400F8040 (KiSelectReadyThread.c)
 */

__int64 __fastcall KiGroupSchedulingGenerationEnd(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  char v4; // di
  __int64 v5; // r14
  __int64 result; // rax
  __int64 v9; // rdi
  int v10; // ebp
  __int64 v11; // rcx
  __int64 ready; // rax
  __int64 v13; // rdi
  __int64 v14; // rax
  char v15; // cl
  int *v16; // rdx
  int v17; // r8d
  int v18; // ecx
  __int64 v19; // rax
  bool v20; // al
  bool IsThreadRankNonZero; // al
  __int64 v22; // r8
  __int64 v23; // rdx
  int v24; // eax

  v3 = *(_QWORD *)(a1 + 8);
  v4 = a3;
  v5 = *(_QWORD *)(a1 + 24);
  if ( !(_BYTE)a3 )
  {
    _disable();
    KiEndThreadCycleAccumulation(a1, *(_QWORD *)(a1 + 8), 0LL);
    _enable();
  }
  LOBYTE(a3) = v4;
  result = KiTransitionSchedulingGroupGeneration(a1, a2, a3);
  if ( !v4 )
  {
    v9 = *(_QWORD *)(a1 + 16);
    v10 = 0;
    if ( v9 )
    {
      if ( v9 == *(_QWORD *)(a1 + 24) )
        goto LABEL_9;
      *(_QWORD *)(a1 + 16) = 0LL;
      if ( (*(_BYTE *)(v3 + 2) & 4) != 0 )
      {
        IsThreadRankNonZero = KiIsThreadRankNonZero(v3, (struct _KPRCB *)a1);
        v15 = 1;
        if ( !IsThreadRankNonZero )
          v15 = *(_BYTE *)(v3 + 195);
      }
      else
      {
        v15 = *(_BYTE *)(v3 + 195);
      }
      **(_BYTE **)(a1 + 56) = v15;
      v16 = *(int **)(a1 + 25016);
      if ( v16 )
      {
        v24 = KiVpThreadSystemWorkPriority;
        if ( v3 != *(_QWORD *)(a1 + 24) )
          v24 = v15;
        *v16 = v24;
      }
      *(_BYTE *)(v9 + 388) = 1;
      v17 = *(char *)(v9 + 195);
      *(_DWORD *)(v9 + 436) = MEMORY[0xFFFFF78000000320];
      KiAddThreadToPrcbQueue(a1, v9, v17, 1, 0);
      v10 = 1;
    }
    if ( v9 == *(_QWORD *)(a1 + 24) )
      goto LABEL_9;
    if ( v3 == v5 )
    {
      v11 = 0LL;
    }
    else
    {
      v11 = (unsigned int)(*(char *)(v3 + 195) + 1);
      if ( (int)v11 > 31 )
        goto LABEL_9;
    }
    ready = KiSelectReadyThread(v11, a1);
    v13 = ready;
    if ( ready )
    {
      if ( (*(_BYTE *)(ready + 2) & 4) != 0 )
      {
        v20 = KiIsThreadRankNonZero(ready, (struct _KPRCB *)a1);
        LOBYTE(v18) = 1;
        if ( !v20 )
          LOBYTE(v18) = *(_BYTE *)(v13 + 195);
      }
      else
      {
        LOBYTE(v18) = *(_BYTE *)(ready + 195);
      }
      **(_BYTE **)(a1 + 56) = v18;
      v19 = *(_QWORD *)(a1 + 25016);
      if ( v19 )
      {
        if ( v13 == *(_QWORD *)(a1 + 24) )
          v18 = KiVpThreadSystemWorkPriority;
        else
          v18 = (char)v18;
        *(_DWORD *)v19 = v18;
        v19 = *(_QWORD *)(a1 + 25016);
      }
      *(_QWORD *)(a1 + 16) = v13;
      if ( v19 )
        *(_BYTE *)(v19 + 24) = v13 == *(_QWORD *)(a1 + 24);
      if ( *(_BYTE *)(v13 + 388) == 1 )
        *(_DWORD *)(v13 + 132) = *(_DWORD *)(v13 + 132) - *(_DWORD *)(v13 + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(v13 + 388) = 3;
      --v10;
    }
LABEL_9:
    if ( v3 != v5 )
    {
LABEL_10:
      _disable();
      result = KiStartThreadCycleAccumulation(a1, v3, v3 == v5);
      _enable();
      return result;
    }
    if ( v10 > 0 )
    {
      if ( (*(_BYTE *)(a1 + 35) & 1) != 0 )
      {
        v22 = 1LL;
        v23 = 1LL;
LABEL_40:
        KiSetProcessorIdle(a1, v23, v22);
      }
    }
    else if ( v10 < 0 && (*(_BYTE *)(a1 + 35) & 1) == 0 )
    {
      v22 = 0LL;
      v23 = 0LL;
      goto LABEL_40;
    }
    v14 = *(_QWORD *)(a1 + 16);
    if ( !v14 || v14 == *(_QWORD *)(a1 + 24) )
    {
      if ( (*(_BYTE *)(a1 + 35) & 1) != 0 )
        __fastfail(0x1Eu);
    }
    else if ( (*(_BYTE *)(a1 + 35) & 1) == 0 )
    {
      __fastfail(0x1Eu);
    }
    goto LABEL_10;
  }
  return result;
}
