/*
 * XREFs of KiGroupSchedulingQuantumEnd @ 0x14008ED50
 * Callers:
 *     KiQuantumEnd @ 0x140090E30 (KiQuantumEnd.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiSelectReadyThread @ 0x14006F300 (KiSelectReadyThread.c)
 *     KiGroupSchedulingGenerationEnd @ 0x14008AEE4 (KiGroupSchedulingGenerationEnd.c)
 *     KiSelectNextThread @ 0x1400A89A0 (KiSelectNextThread.c)
 *     KiShouldPreemptionBeDeferred @ 0x1400AA768 (KiShouldPreemptionBeDeferred.c)
 *     KiInsertDeferredPreemptionApc @ 0x1400AB178 (KiInsertDeferredPreemptionApc.c)
 *     KiChooseLowestRankedThread @ 0x1400AB7D4 (KiChooseLowestRankedThread.c)
 *     KiIsThreadRankNonZero @ 0x1400AB970 (KiIsThreadRankNonZero.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1400ABA00 (KiGetThreadEffectiveRankNonZero.c)
 *     KiComputeGroupSchedulingRank @ 0x1400D1370 (KiComputeGroupSchedulingRank.c)
 *     KiAddThreadToPrcbQueue @ 0x1400D2720 (KiAddThreadToPrcbQueue.c)
 *     KiRecomputeGroupSchedulingRank @ 0x1400D28C8 (KiRecomputeGroupSchedulingRank.c)
 *     KiRemoveSchedulingGroupQueue @ 0x1400D2A58 (KiRemoveSchedulingGroupQueue.c)
 *     KiAddThreadToScbQueue @ 0x1400D2AE0 (KiAddThreadToScbQueue.c)
 *     KiCheckMaxOverQuotaTransition @ 0x14011E1CC (KiCheckMaxOverQuotaTransition.c)
 *     KiCheckForMaxOverQuotaScb @ 0x140125400 (KiCheckForMaxOverQuotaScb.c)
 */

void __fastcall KiGroupSchedulingQuantumEnd(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r13
  char v5; // r12
  __int64 v7; // r14
  unsigned __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rbp
  __int64 v11; // rsi
  __int64 v12; // r15
  __int64 v13; // rsi
  char v14; // al
  char v15; // cl
  __int64 v16; // rsi
  __int64 v17; // rdi
  unsigned __int64 *v18; // r8
  unsigned __int64 *v19; // rax
  unsigned __int64 *v20; // rdi
  __int64 v21; // r15
  __int64 v22; // r8
  __int64 v23; // r9
  _DWORD *v24; // rcx
  __int64 v25; // rcx
  bool v26; // zf
  char v27; // cl
  char IsThreadRankNonZero; // al
  _DWORD *v29; // rdx
  __int64 v30; // rcx
  bool v31; // zf
  __int64 v32; // r15
  char v33[4]; // [rsp+30h] [rbp-58h] BYREF
  int v34; // [rsp+34h] [rbp-54h] BYREF
  int v35; // [rsp+38h] [rbp-50h] BYREF
  __int64 v36; // [rsp+40h] [rbp-48h]
  __int64 v37; // [rsp+48h] [rbp-40h]
  char v38; // [rsp+90h] [rbp+8h]
  char v39; // [rsp+A0h] [rbp+18h]
  __int64 v40; // [rsp+A8h] [rbp+20h]

  v40 = a4;
  v39 = a3;
  v4 = 0;
  v5 = 0;
  v7 = a2;
  v38 = 0;
  v8 = MEMORY[0xFFFFF78000000320];
  v34 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
  {
    do
      KeYieldProcessorEx(&v34);
    while ( *(_QWORD *)(a1 + 48) );
  }
  v9 = *(_QWORD *)(a1 + 16);
  v10 = 0LL;
  v37 = v9;
  if ( v9 )
  {
    v10 = *(_QWORD *)(v9 + 104);
    if ( v10 )
      v10 += *(unsigned int *)(a1 + 216);
  }
  if ( v8 > *(_QWORD *)(a1 + 23520) )
  {
    KiGroupSchedulingGenerationEnd(a1, v8, 0);
    return;
  }
  v11 = *(_QWORD *)(v7 + 104);
  v12 = v11;
  v36 = v11;
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
        KiComputeGroupSchedulingRank(v12, a1, v13);
        if ( (*(_BYTE *)(v13 + 112) & 4) == 0 )
          goto LABEL_16;
        v5 = 1;
        v4 = 1;
        if ( v10 != v13 )
          goto LABEL_16;
        v15 = 1;
        v38 = 1;
LABEL_17:
        v13 = *(_QWORD *)(v13 + 408);
        if ( !v13 )
        {
          v16 = *(_QWORD *)(v7 + 104);
          v17 = v37;
          if ( v16 )
            v16 += *(unsigned int *)(a1 + 216);
          if ( !v5 || v37 )
          {
            if ( v4 && v37 && v10 )
            {
              if ( v10 == v16 )
                goto LABEL_40;
              while ( v10 )
              {
                v10 = *(_QWORD *)(v10 + 408);
                if ( v10 == v16 )
                  goto LABEL_40;
              }
              if ( !v16 || v15 )
              {
LABEL_40:
                v21 = KiChooseLowestRankedThread(a1, v37, (unsigned int)(*(char *)(v37 + 195) + 1));
                if ( v21 )
                {
                  *(_BYTE *)(v17 + 388) = 1;
                  *(_DWORD *)(v17 + 436) = MEMORY[0xFFFFF78000000320];
                  if ( (*(_BYTE *)(v21 + 2) & 4) != 0 )
                  {
                    IsThreadRankNonZero = KiIsThreadRankNonZero(v21, a1);
                    v27 = 1;
                    if ( !IsThreadRankNonZero )
                      v27 = *(_BYTE *)(v21 + 195);
                  }
                  else
                  {
                    v27 = *(_BYTE *)(v21 + 195);
                  }
                  **(_BYTE **)(a1 + 56) = v27;
                  v29 = *(_DWORD **)(a1 + 25016);
                  if ( v29 )
                    *v29 = v27;
                  v30 = *(_QWORD *)(a1 + 25016);
                  v31 = v21 == *(_QWORD *)(a1 + 24);
                  *(_QWORD *)(a1 + 16) = v21;
                  if ( v30 )
                    *(_BYTE *)(v30 + 8) = v31;
                  if ( *(_BYTE *)(v21 + 388) == 1 )
                    *(_DWORD *)(v21 + 132) = *(_DWORD *)(v21 + 132)
                                           - *(_DWORD *)(v21 + 436)
                                           + MEMORY[0xFFFFF78000000320];
                  *(_BYTE *)(v21 + 388) = 3;
                  v32 = *(_QWORD *)(v17 + 104);
                  if ( v32 )
                    v32 += *(unsigned int *)(a1 + 216);
                  if ( (unsigned int)KiGetThreadEffectiveRankNonZero(v17, v32, a3, 1, (__int64)v33) )
                    KiAddThreadToScbQueue(a1, v32, v17, 1LL);
                  else
                    KiAddThreadToPrcbQueue(a1, v17, *(char *)(v17 + 195), 1, v33[0]);
                }
              }
            }
          }
          else
          {
            LOBYTE(a4) = 1;
            if ( (unsigned int)KiGetThreadEffectiveRankNonZero(v7, v16, a3, a4, 0LL) )
              v19 = (unsigned __int64 *)KiChooseLowestRankedThread(a1, v7, (unsigned int)*(char *)(v7 + 195));
            else
              v19 = KiSelectReadyThread(*(char *)(v7 + 195), a1, v18);
            v20 = v19;
            if ( v19 )
            {
              if ( (*((_BYTE *)v19 + 2) & 4) != 0 )
              {
                if ( (unsigned __int8)KiIsThreadRankNonZero(v19, a1) )
                  a2 = 1LL;
                else
                  a2 = (unsigned int)*((char *)v20 + 195);
              }
              else
              {
                a2 = *((unsigned __int8 *)v19 + 195);
              }
              **(_BYTE **)(a1 + 56) = a2;
              v24 = *(_DWORD **)(a1 + 25016);
              if ( v24 )
                *v24 = (char)a2;
              v25 = *(_QWORD *)(a1 + 25016);
              v26 = v20 == *(unsigned __int64 **)(a1 + 24);
              *(_QWORD *)(a1 + 16) = v20;
              if ( v25 )
                *(_BYTE *)(v25 + 8) = v26;
              if ( *((_BYTE *)v20 + 388) == 1 )
                *((_DWORD *)v20 + 33) = *((_DWORD *)v20 + 33) - *((_DWORD *)v20 + 109) + MEMORY[0xFFFFF78000000320];
              *((_BYTE *)v20 + 388) = 3;
            }
          }
          if ( v16 )
          {
            if ( (unsigned __int8)KiShouldPreemptionBeDeferred(v7, a2, a3, a4) )
            {
              if ( (*(_DWORD *)(v7 + 120) & 0xC00) == 0 )
              {
                _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
                KiInsertDeferredPreemptionApc(a1, v7, 0LL);
                v35 = 0;
                while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
                {
                  do
                    KeYieldProcessorEx(&v35);
                  while ( *(_QWORD *)(a1 + 48) );
                }
              }
            }
            else if ( (unsigned __int8)KiCheckForMaxOverQuotaScb(v16) && !*(_QWORD *)(a1 + 16) )
            {
              KiSelectNextThread(a1, v40, v22, v23);
            }
          }
          return;
        }
        v12 = v13 - *(unsigned int *)(a1 + 216);
        v36 = v12;
      }
      if ( (v14 & 2) == 0 )
      {
        if ( (unsigned __int8)KiCheckMaxOverQuotaTransition(v13, v12) )
        {
          if ( (*(_BYTE *)(v13 + 112) & 1) != 0 )
          {
            LOBYTE(a3) = 1;
            KiRemoveSchedulingGroupQueue(a1, v13, a3);
          }
        }
        else
        {
          if ( *(_QWORD *)v13 < *(_QWORD *)(v13 + 24) )
          {
            if ( v39 )
              v5 = 1;
            goto LABEL_16;
          }
          KiRecomputeGroupSchedulingRank(v12, v13, a1);
          if ( v10 == v13 )
            v38 = 1;
        }
      }
      v5 = 1;
      v4 = 1;
LABEL_16:
      v15 = v38;
      goto LABEL_17;
    }
  }
}
