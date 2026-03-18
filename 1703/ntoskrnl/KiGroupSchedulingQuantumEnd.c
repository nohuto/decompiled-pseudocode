/*
 * XREFs of KiGroupSchedulingQuantumEnd @ 0x140042440
 * Callers:
 *     KiQuantumEnd @ 0x140041B30 (KiQuantumEnd.c)
 * Callees:
 *     KiComputeGroupSchedulingRank @ 0x14001C768 (KiComputeGroupSchedulingRank.c)
 *     KiRecomputeGroupSchedulingRank @ 0x14002A620 (KiRecomputeGroupSchedulingRank.c)
 *     KiInsertDeferredPreemptionApc @ 0x14003FE18 (KiInsertDeferredPreemptionApc.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiSelectReadyThread @ 0x1400EC0C0 (KiSelectReadyThread.c)
 *     KiCheckForMaxOverQuotaScb @ 0x14010EEB4 (KiCheckForMaxOverQuotaScb.c)
 *     KiChooseLowestRankedThread @ 0x140112D54 (KiChooseLowestRankedThread.c)
 *     KiShouldPreemptionBeDeferred @ 0x14011387C (KiShouldPreemptionBeDeferred.c)
 *     KiCheckMaxOverQuotaTransition @ 0x14011389C (KiCheckMaxOverQuotaTransition.c)
 *     KiIsThreadRankNonZero @ 0x1401138D0 (KiIsThreadRankNonZero.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x140113960 (KiGetThreadEffectiveRankNonZero.c)
 *     KiAddThreadToScbQueue @ 0x140113C3C (KiAddThreadToScbQueue.c)
 *     KiSelectNextThread @ 0x140113E30 (KiSelectNextThread.c)
 *     KiRemoveSchedulingGroupQueue @ 0x140114D04 (KiRemoveSchedulingGroupQueue.c)
 *     KiAddThreadToPrcbQueue @ 0x14011F700 (KiAddThreadToPrcbQueue.c)
 */

void __fastcall KiGroupSchedulingQuantumEnd(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r12
  char v6; // r13
  unsigned __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rbp
  __int64 v11; // rsi
  __int64 v12; // r15
  __int64 v13; // rsi
  char v14; // al
  char v15; // cl
  __int64 v16; // rsi
  __int64 ready; // rax
  __int64 v18; // rdi
  char v19; // r8
  __int64 v20; // r15
  char v21; // bp
  char v22; // cl
  char IsThreadRankNonZero; // al
  __int64 v24; // r10
  __int64 v25; // r10
  char v26; // [rsp+30h] [rbp-58h]
  char v27[3]; // [rsp+31h] [rbp-57h] BYREF
  int v28; // [rsp+34h] [rbp-54h] BYREF
  int v29; // [rsp+38h] [rbp-50h] BYREF
  __int64 v30; // [rsp+40h] [rbp-48h]
  char v31; // [rsp+90h] [rbp+8h]
  __int64 v32; // [rsp+A8h] [rbp+20h]

  v32 = a4;
  v26 = 0;
  v4 = 0;
  v6 = a3;
  v31 = 0;
  v8 = MEMORY[0xFFFFF78000000320];
  v28 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
  {
    do
      KeYieldProcessorEx(&v28);
    while ( *(_QWORD *)(a1 + 48) );
  }
  v9 = *(_QWORD *)(a1 + 16);
  v10 = 0LL;
  if ( v9 )
  {
    v10 = *(_QWORD *)(v9 + 104);
    if ( v10 )
      v10 += *(unsigned int *)(a1 + 216);
  }
  if ( v8 > *(_QWORD *)(a1 + 23520) )
  {
    KiGroupSchedulingGenerationEnd(a1, v8, 0LL);
    return;
  }
  v11 = *(_QWORD *)(a2 + 104);
  v12 = v11;
  v30 = v11;
  if ( v11 )
  {
    v13 = *(unsigned int *)(a1 + 216) + v11;
    if ( v13 )
    {
      while ( 1 )
      {
        v14 = *(_BYTE *)(v13 + 112);
        if ( (v14 & 4) != 0 )
          break;
        KiComputeGroupSchedulingRank(v12, a1, (__int64 *)v13);
        if ( (*(_BYTE *)(v13 + 112) & 4) == 0 )
          goto LABEL_16;
        v4 = 1;
        v26 = 1;
        if ( v10 != v13 )
          goto LABEL_16;
        v15 = 1;
        v31 = 1;
LABEL_17:
        v13 = *(_QWORD *)(v13 + 408);
        if ( !v13 )
        {
          v16 = *(_QWORD *)(a2 + 104);
          if ( v16 )
            v16 += *(unsigned int *)(a1 + 216);
          if ( !v4 || v9 )
          {
            if ( v26 && v9 && v10 )
            {
              if ( v10 == v16 )
                goto LABEL_43;
              while ( v10 )
              {
                v10 = *(_QWORD *)(v10 + 408);
                if ( v10 == v16 )
                  goto LABEL_43;
              }
              if ( !v16 || v15 )
              {
LABEL_43:
                v20 = KiChooseLowestRankedThread(a1, v9, (unsigned int)(*(char *)(v9 + 195) + 1));
                if ( v20 )
                {
                  *(_BYTE *)(v9 + 388) = 1;
                  *(_DWORD *)(v9 + 436) = MEMORY[0xFFFFF78000000320];
                  if ( (*(_BYTE *)(v20 + 2) & 4) != 0 )
                  {
                    IsThreadRankNonZero = KiIsThreadRankNonZero(v20, a1);
                    v22 = 1;
                    if ( !IsThreadRankNonZero )
                      v22 = *(_BYTE *)(v20 + 195);
                  }
                  else
                  {
                    v22 = *(_BYTE *)(v20 + 195);
                  }
                  **(_BYTE **)(a1 + 56) = v22;
                  *(_QWORD *)(a1 + 16) = v20;
                  if ( *(_BYTE *)(v20 + 388) == 1 )
                    *(_DWORD *)(v20 + 132) = *(_DWORD *)(v20 + 132)
                                           - *(_DWORD *)(v20 + 436)
                                           + MEMORY[0xFFFFF78000000320];
                  *(_BYTE *)(v20 + 388) = 3;
                  v24 = *(_QWORD *)(v9 + 104);
                  if ( v24 )
                    LODWORD(v24) = *(_DWORD *)(a1 + 216) + v24;
                  if ( (unsigned int)KiGetThreadEffectiveRankNonZero(v9, v24, v19, 1, (__int64)v27) )
                    KiAddThreadToScbQueue(a1, v25, v9, 1LL);
                  else
                    KiAddThreadToPrcbQueue(a1, v9, *(char *)(v9 + 195), 1, v27[0]);
                }
              }
            }
          }
          else
          {
            LOBYTE(a4) = 1;
            if ( (unsigned int)KiGetThreadEffectiveRankNonZero(a2, v16, (_BYTE)a3, a4, 0LL) )
              ready = KiChooseLowestRankedThread(a1, a2, (unsigned int)*(char *)(a2 + 195));
            else
              ready = KiSelectReadyThread((unsigned int)*(char *)(a2 + 195), a1);
            v18 = ready;
            if ( ready )
            {
              if ( (*(_BYTE *)(ready + 2) & 4) != 0 )
              {
                if ( (unsigned __int8)KiIsThreadRankNonZero(ready, a1) )
                  v21 = 1;
                else
                  v21 = *(_BYTE *)(v18 + 195);
              }
              else
              {
                v21 = *(_BYTE *)(ready + 195);
              }
              **(_BYTE **)(a1 + 56) = v21;
              *(_QWORD *)(a1 + 16) = v18;
              if ( *(_BYTE *)(v18 + 388) == 1 )
                *(_DWORD *)(v18 + 132) = *(_DWORD *)(v18 + 132) - *(_DWORD *)(v18 + 436) + MEMORY[0xFFFFF78000000320];
              *(_BYTE *)(v18 + 388) = 3;
            }
          }
          if ( v16 )
          {
            if ( (unsigned __int8)KiShouldPreemptionBeDeferred(a2) )
            {
              if ( (*(_DWORD *)(a2 + 120) & 0x600) == 0 )
              {
                _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
                KiInsertDeferredPreemptionApc(a1, a2, 0);
                v29 = 0;
                while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
                {
                  do
                    KeYieldProcessorEx(&v29);
                  while ( *(_QWORD *)(a1 + 48) );
                }
              }
            }
            else if ( (unsigned __int8)KiCheckForMaxOverQuotaScb(v16) )
            {
              if ( !*(_QWORD *)(a1 + 16) )
                KiSelectNextThread(a1, v32);
            }
          }
          return;
        }
        v12 = v13 - *(unsigned int *)(a1 + 216);
        v30 = v12;
      }
      if ( (v14 & 2) == 0 )
      {
        if ( (unsigned __int8)KiCheckMaxOverQuotaTransition(v13, v12) )
        {
          if ( (*(_BYTE *)(v13 + 112) & 1) != 0 )
          {
            LOBYTE(a3) = 1;
            KiRemoveSchedulingGroupQueue(a1, v13, a3, a4);
          }
        }
        else
        {
          if ( *(_QWORD *)v13 < *(_QWORD *)(v13 + 24) )
          {
            if ( v6 )
              v4 = 1;
            goto LABEL_16;
          }
          KiRecomputeGroupSchedulingRank(v12, v13, a1);
          if ( v10 == v13 )
            v31 = 1;
        }
      }
      v4 = 1;
      v26 = 1;
LABEL_16:
      v15 = v31;
      goto LABEL_17;
    }
  }
}
