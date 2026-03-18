/*
 * XREFs of KiGroupSchedulingGenerationEnd @ 0x14008AEE4
 * Callers:
 *     KiGroupSchedulingQuantumEnd @ 0x14008ED50 (KiGroupSchedulingQuantumEnd.c)
 *     KeTransitionProcessorParkState @ 0x14020DD2C (KeTransitionProcessorParkState.c)
 * Callees:
 *     KiSelectReadyThread @ 0x14006F300 (KiSelectReadyThread.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x14008AB70 (KiTransitionSchedulingGroupGeneration.c)
 *     KiStartThreadCycleAccumulation @ 0x14008D5D0 (KiStartThreadCycleAccumulation.c)
 *     KiEndThreadCycleAccumulation @ 0x14008DB10 (KiEndThreadCycleAccumulation.c)
 *     KiIsThreadRankNonZero @ 0x1400AB970 (KiIsThreadRankNonZero.c)
 *     KiAddThreadToPrcbQueue @ 0x1400D2720 (KiAddThreadToPrcbQueue.c)
 *     KiSetProcessorIdle @ 0x140128644 (KiSetProcessorIdle.c)
 */

void __fastcall KiGroupSchedulingGenerationEnd(__int64 a1, unsigned __int64 a2, unsigned __int8 a3)
{
  __int64 v3; // rsi
  __int64 v5; // r14
  unsigned __int64 *v8; // r8
  __int64 v9; // rdi
  int v10; // ebp
  signed int v11; // ecx
  unsigned __int64 *v12; // rax
  unsigned __int64 *v13; // rdi
  __int64 v14; // rax
  char v15; // cl
  _DWORD *v16; // rdx
  __int64 v17; // rcx
  bool v18; // zf
  char v19; // cl
  _DWORD *v20; // rdx
  int v21; // r8d
  char v22; // al
  char IsThreadRankNonZero; // al
  __int64 v24; // r8
  __int64 v25; // rdx

  v3 = *(_QWORD *)(a1 + 8);
  v5 = *(_QWORD *)(a1 + 24);
  if ( !a3 )
  {
    _disable();
    KiEndThreadCycleAccumulation(a1, *(_QWORD *)(a1 + 8), 0LL);
    _enable();
  }
  KiTransitionSchedulingGroupGeneration(a1, a2, a3);
  if ( !a3 )
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
        IsThreadRankNonZero = KiIsThreadRankNonZero(v3, a1);
        v19 = 1;
        if ( !IsThreadRankNonZero )
          v19 = *(_BYTE *)(v3 + 195);
      }
      else
      {
        v19 = *(_BYTE *)(v3 + 195);
      }
      **(_BYTE **)(a1 + 56) = v19;
      v20 = *(_DWORD **)(a1 + 25016);
      if ( v20 )
        *v20 = v19;
      *(_BYTE *)(v9 + 388) = 1;
      v21 = *(char *)(v9 + 195);
      *(_DWORD *)(v9 + 436) = MEMORY[0xFFFFF78000000320];
      KiAddThreadToPrcbQueue(a1, v9, v21, 1, 0);
      v10 = 1;
    }
    if ( v9 == *(_QWORD *)(a1 + 24) )
      goto LABEL_9;
    if ( v3 == v5 )
    {
      v11 = 0;
    }
    else
    {
      v11 = *(char *)(v3 + 195) + 1;
      if ( v11 > 31 )
        goto LABEL_9;
    }
    v12 = KiSelectReadyThread(v11, a1, v8);
    v13 = v12;
    if ( v12 )
    {
      if ( (*((_BYTE *)v12 + 2) & 4) != 0 )
      {
        v22 = KiIsThreadRankNonZero(v12, a1);
        v15 = 1;
        if ( !v22 )
          v15 = *((_BYTE *)v13 + 195);
      }
      else
      {
        v15 = *((_BYTE *)v12 + 195);
      }
      **(_BYTE **)(a1 + 56) = v15;
      v16 = *(_DWORD **)(a1 + 25016);
      if ( v16 )
        *v16 = v15;
      v17 = *(_QWORD *)(a1 + 25016);
      v18 = v13 == *(unsigned __int64 **)(a1 + 24);
      *(_QWORD *)(a1 + 16) = v13;
      if ( v17 )
        *(_BYTE *)(v17 + 8) = v18;
      if ( *((_BYTE *)v13 + 388) == 1 )
        *((_DWORD *)v13 + 33) = *((_DWORD *)v13 + 33) - *((_DWORD *)v13 + 109) + MEMORY[0xFFFFF78000000320];
      *((_BYTE *)v13 + 388) = 3;
      --v10;
    }
LABEL_9:
    if ( v3 != v5 )
    {
LABEL_10:
      _disable();
      LOBYTE(v8) = v3 == v5;
      KiStartThreadCycleAccumulation(a1, v3, v8);
      _enable();
      return;
    }
    if ( v10 > 0 )
    {
      if ( (*(_BYTE *)(a1 + 35) & 1) != 0 )
      {
        v24 = 1LL;
        v25 = 1LL;
LABEL_42:
        KiSetProcessorIdle(a1, v25, v24);
      }
    }
    else if ( v10 < 0 && (*(_BYTE *)(a1 + 35) & 1) == 0 )
    {
      v24 = 0LL;
      v25 = 0LL;
      goto LABEL_42;
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
}
