/*
 * XREFs of KiGroupSchedulingQuantumEnd @ 0x1400EABEC
 * Callers:
 *     KiQuantumEnd @ 0x1400EBA30 (KiQuantumEnd.c)
 * Callees:
 *     KiIsThreadRankNonZero @ 0x14003A860 (KiIsThreadRankNonZero.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x14003A8F0 (KiGetThreadEffectiveRankNonZero.c)
 *     KiShouldPreemptionBeDeferred @ 0x14003AEF8 (KiShouldPreemptionBeDeferred.c)
 *     KiInsertDeferredPreemptionApc @ 0x1400439A8 (KiInsertDeferredPreemptionApc.c)
 *     KiSelectNextThread @ 0x1400A70C0 (KiSelectNextThread.c)
 *     KiCheckForMaxOverQuotaScb @ 0x1400A7660 (KiCheckForMaxOverQuotaScb.c)
 *     KiRecomputeGroupSchedulingRank @ 0x1400A8494 (KiRecomputeGroupSchedulingRank.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1400A8540 (KiGroupSchedulingGenerationEnd.c)
 *     KiAddThreadToPrcbQueue @ 0x1400A8C4C (KiAddThreadToPrcbQueue.c)
 *     KiChooseLowestRankedThread @ 0x1400A8E28 (KiChooseLowestRankedThread.c)
 *     KiRemoveSchedulingGroupQueue @ 0x1400A9260 (KiRemoveSchedulingGroupQueue.c)
 *     KiAddThreadToScbQueue @ 0x1400A930C (KiAddThreadToScbQueue.c)
 *     KiComputeGroupSchedulingRank @ 0x1400B1940 (KiComputeGroupSchedulingRank.c)
 *     KiCheckMaxOverQuotaTransition @ 0x1400BEE64 (KiCheckMaxOverQuotaTransition.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSelectReadyThread @ 0x1400F8040 (KiSelectReadyThread.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 */

char __fastcall KiGroupSchedulingQuantumEnd(__int64 a1, __int64 a2, char a3, _QWORD *a4)
{
  char v4; // r12
  char v5; // r15
  char v6; // r13
  unsigned __int64 v8; // r14
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned __int64 ready; // rax
  __int64 v11; // r8
  __int64 v12; // rbp
  __int64 v13; // rsi
  volatile signed __int64 *v14; // rdi
  volatile signed __int64 *v15; // r14
  __int64 v16; // rdi
  char v17; // bp
  char v18; // al
  __int64 v19; // rdi
  __int64 v20; // rbp
  __int64 v21; // r14
  __int64 v22; // rdx
  struct _KPRCB *v23; // rdi
  int ThreadEffectiveRankNonZero; // eax
  char v25; // cl
  unsigned __int64 v26; // rdi
  char v27; // cl
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // r8
  unsigned __int64 v31; // rdi
  bool IsThreadRankNonZero; // al
  int v33; // eax
  int v34; // ecx
  bool v35; // al
  __int64 v36; // rax
  __int64 v37; // r10
  __int64 v38; // r10
  int v40; // [rsp+30h] [rbp-68h] BYREF
  int v41; // [rsp+34h] [rbp-64h] BYREF
  volatile signed __int64 *v42; // [rsp+38h] [rbp-60h]
  __int64 v43; // [rsp+40h] [rbp-58h]
  char v44; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v45; // [rsp+A8h] [rbp+10h]
  char v46; // [rsp+B0h] [rbp+18h]
  _QWORD *v47; // [rsp+B8h] [rbp+20h]

  v47 = a4;
  v46 = a3;
  v45 = a2;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v8 = MEMORY[0xFFFFF78000000320];
  CurrentPrcb = KeGetCurrentPrcb();
  v40 = 0;
  while ( 1 )
  {
    LOBYTE(a2) = 1;
    LOBYTE(ready) = KiSetVpThreadSpinLockCount(CurrentPrcb, a2);
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      break;
    KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
    do
      KeYieldProcessorEx(&v40);
    while ( *(_QWORD *)(a1 + 48) );
  }
  v12 = *(_QWORD *)(a1 + 16);
  v13 = 0LL;
  v43 = v12;
  if ( v12 )
  {
    v13 = *(_QWORD *)(v12 + 104);
    if ( v13 )
    {
      ready = *(unsigned int *)(a1 + 216);
      v13 += ready;
    }
  }
  if ( v8 > *(_QWORD *)(a1 + 23520) )
  {
    LOBYTE(ready) = KiGroupSchedulingGenerationEnd(a1, v8, 0LL);
    return ready;
  }
  v14 = *(volatile signed __int64 **)(v45 + 104);
  v42 = v14;
  v15 = v14;
  if ( v14 )
  {
    ready = *(unsigned int *)(a1 + 216);
    v16 = (__int64)v14 + ready;
    if ( v16 )
    {
      v17 = v46;
      while ( 1 )
      {
        v18 = *(_BYTE *)(v16 + 112);
        if ( (v18 & 4) != 0 )
        {
          if ( (v18 & 2) != 0 )
          {
            LOBYTE(ready) = 1;
            v5 = 1;
            v4 = 1;
          }
          else
          {
            LOBYTE(ready) = KiCheckMaxOverQuotaTransition(v16, v15);
            if ( (_BYTE)ready )
            {
              if ( (*(_BYTE *)(v16 + 112) & 1) != 0 )
                LOBYTE(ready) = KiRemoveSchedulingGroupQueue((_RTL_RB_TREE *)a1, v16, 1);
              goto LABEL_30;
            }
            ready = *(_QWORD *)(v16 + 24);
            if ( *(_QWORD *)v16 >= ready )
            {
              LOBYTE(ready) = KiRecomputeGroupSchedulingRank((__int64)v15, v16, a1);
              if ( v13 == v16 )
                v6 = 1;
LABEL_30:
              v5 = 1;
              v4 = 1;
              goto LABEL_12;
            }
            if ( v17 )
              v5 = 1;
          }
        }
        else
        {
          LOBYTE(ready) = KiComputeGroupSchedulingRank((__int64)v15, (struct _KPRCB *)a1, v16);
          if ( (*(_BYTE *)(v16 + 112) & 4) != 0 )
          {
            v5 = 1;
            v4 = 1;
            if ( v13 == v16 )
              v6 = 1;
          }
        }
LABEL_12:
        v16 = *(_QWORD *)(v16 + 408);
        if ( !v16 )
        {
          v19 = v45;
          v20 = v43;
          v21 = *(_QWORD *)(v45 + 104);
          if ( v21 )
          {
            ready = *(unsigned int *)(a1 + 216);
            v21 += ready;
          }
          if ( v5 && !v43 )
          {
            ThreadEffectiveRankNonZero = KiGetThreadEffectiveRankNonZero(v45, v21, v11, 1, 0LL);
            v25 = *(_BYTE *)(v19 + 195);
            if ( ThreadEffectiveRankNonZero )
              ready = KiChooseLowestRankedThread((struct _KPRCB *)a1, v19, (unsigned int)v25);
            else
              ready = KiSelectReadyThread((unsigned int)v25, a1);
            v26 = ready;
            if ( ready )
            {
              if ( (*(_BYTE *)(ready + 2) & 4) != 0 )
              {
                IsThreadRankNonZero = KiIsThreadRankNonZero(ready, (struct _KPRCB *)a1);
                v27 = 1;
                if ( !IsThreadRankNonZero )
                  v27 = *(_BYTE *)(v26 + 195);
              }
              else
              {
                v27 = *(_BYTE *)(ready + 195);
              }
              **(_BYTE **)(a1 + 56) = v27;
              v28 = *(_QWORD *)(a1 + 25016);
              if ( v28 )
              {
                v33 = KiVpThreadSystemWorkPriority;
                if ( v26 != *(_QWORD *)(a1 + 24) )
                  v33 = v27;
                *(_DWORD *)v28 = v33;
                v28 = *(_QWORD *)(a1 + 25016);
              }
              v29 = *(_QWORD *)(a1 + 24);
              *(_QWORD *)(a1 + 16) = v26;
              if ( v28 )
                *(_BYTE *)(v28 + 24) = v26 == v29;
              LOBYTE(ready) = *(_BYTE *)(v26 + 388);
              if ( (_BYTE)ready == 1 )
              {
                LODWORD(ready) = *(_DWORD *)(v26 + 132) - *(_DWORD *)(v26 + 436) + MEMORY[0xFFFFF78000000320];
                *(_DWORD *)(v26 + 132) = ready;
              }
              *(_BYTE *)(v26 + 388) = 3;
            }
            goto LABEL_35;
          }
          if ( v4 && v43 && v13 )
          {
            if ( v13 == v21 )
              goto LABEL_57;
            do
            {
              if ( !v13 )
                break;
              v13 = *(_QWORD *)(v13 + 408);
            }
            while ( v13 != v21 );
            if ( v21 == v13 || v6 )
            {
LABEL_57:
              ready = KiChooseLowestRankedThread((struct _KPRCB *)a1, v43, (unsigned int)(*(char *)(v43 + 195) + 1));
              v31 = ready;
              if ( ready )
              {
                *(_BYTE *)(v20 + 388) = 1;
                *(_DWORD *)(v20 + 436) = MEMORY[0xFFFFF78000000320];
                if ( (*(_BYTE *)(ready + 2) & 4) != 0 )
                {
                  v35 = KiIsThreadRankNonZero(ready, (struct _KPRCB *)a1);
                  LOBYTE(v34) = 1;
                  if ( !v35 )
                    LOBYTE(v34) = *(_BYTE *)(v31 + 195);
                }
                else
                {
                  LOBYTE(v34) = *(_BYTE *)(ready + 195);
                }
                **(_BYTE **)(a1 + 56) = v34;
                v36 = *(_QWORD *)(a1 + 25016);
                if ( v36 )
                {
                  if ( v31 == *(_QWORD *)(a1 + 24) )
                    v34 = KiVpThreadSystemWorkPriority;
                  else
                    v34 = (char)v34;
                  *(_DWORD *)v36 = v34;
                  v36 = *(_QWORD *)(a1 + 25016);
                }
                *(_QWORD *)(a1 + 16) = v31;
                if ( v36 )
                  *(_BYTE *)(v36 + 24) = v31 == *(_QWORD *)(a1 + 24);
                if ( *(_BYTE *)(v31 + 388) == 1 )
                  *(_DWORD *)(v31 + 132) = *(_DWORD *)(v31 + 132) - *(_DWORD *)(v31 + 436) + MEMORY[0xFFFFF78000000320];
                *(_BYTE *)(v31 + 388) = 3;
                v37 = *(_QWORD *)(v20 + 104);
                if ( v37 )
                  v37 += *(unsigned int *)(a1 + 216);
                if ( (unsigned int)KiGetThreadEffectiveRankNonZero(v20, v37, v30, 1, (bool *)&v44) )
                  LOBYTE(ready) = KiAddThreadToScbQueue(a1, v38, v20, 1);
                else
                  LOBYTE(ready) = KiAddThreadToPrcbQueue(a1, v20, *(char *)(v20 + 195), 1, v44);
              }
LABEL_35:
              v19 = v45;
            }
          }
          if ( v21 )
          {
            LOBYTE(ready) = KiShouldPreemptionBeDeferred(v19);
            if ( (_BYTE)ready )
            {
              if ( (*(_DWORD *)(v19 + 120) & 0xC00) == 0 )
              {
                _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
                KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
                KiInsertDeferredPreemptionApc(a1, v19, 0);
                v23 = KeGetCurrentPrcb();
                v41 = 0;
                while ( 1 )
                {
                  LOBYTE(v22) = 1;
                  LOBYTE(ready) = KiSetVpThreadSpinLockCount(v23, v22);
                  if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
                    break;
                  KiSetVpThreadSpinLockCount(v23, 0LL);
                  do
                    KeYieldProcessorEx(&v41);
                  while ( *(_QWORD *)(a1 + 48) );
                }
              }
            }
            else
            {
              LOBYTE(ready) = KiCheckForMaxOverQuotaScb(v21);
              if ( (_BYTE)ready && !*(_QWORD *)(a1 + 16) )
                LOBYTE(ready) = KiSelectNextThread((struct _KPRCB *)a1, v47);
            }
          }
          return ready;
        }
        v15 = (volatile signed __int64 *)(v16 - *(unsigned int *)(a1 + 216));
        v42 = v15;
      }
    }
  }
  return ready;
}
