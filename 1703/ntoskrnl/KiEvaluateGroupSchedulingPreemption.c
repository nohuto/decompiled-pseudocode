/*
 * XREFs of KiEvaluateGroupSchedulingPreemption @ 0x1400E2590
 * Callers:
 *     KiDeferredReadyThread @ 0x1400E05F0 (KiDeferredReadyThread.c)
 * Callees:
 *     KiGetComparisonRanks @ 0x14002F988 (KiGetComparisonRanks.c)
 *     KiCheckForMaxOverQuotaScb @ 0x14010EEB4 (KiCheckForMaxOverQuotaScb.c)
 *     KiShouldPreemptionBeDeferred @ 0x14011387C (KiShouldPreemptionBeDeferred.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x140113960 (KiGetThreadEffectiveRankNonZero.c)
 */

bool __fastcall KiEvaluateGroupSchedulingPreemption(struct _KPRCB *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // edi
  __int64 *v6; // r15
  __int64 v7; // rbp
  struct _KPRCB *v8; // rdx
  bool v9; // cl
  __int64 v10; // rsi
  __int64 v11; // r14
  unsigned int v12; // r10d
  unsigned int v13; // eax
  __int64 v15; // rax
  int v16; // eax
  unsigned int ThreadEffectiveRankNonZero; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v18; // [rsp+68h] [rbp+10h] BYREF

  v5 = 0;
  v6 = (__int64 *)a4;
  v7 = a3;
  v8 = a1;
  v18 = 0;
  v9 = a1->CurrentThread != (_KTHREAD *)a2 || a1 == KeGetCurrentPrcb();
  v10 = *(_QWORD *)(a2 + 104);
  if ( v10 )
  {
    v10 += v8->ScbOffset;
    if ( v10 )
    {
      LODWORD(a4) = v10;
      LODWORD(a3) = 0;
      if ( *(char *)(a2 + 195) < 16
        && (*(_DWORD *)(a2 + 120) & 0x100) == 0
        && (!v9 || !(unsigned __int8)KiShouldPreemptionBeDeferred(a2)) )
      {
        if ( (unsigned __int8)KiCheckForMaxOverQuotaScb(v10) )
        {
          LODWORD(a3) = -1;
        }
        else
        {
          do
          {
            LODWORD(a3) = *(_DWORD *)(a4 + 116) + a3;
            if ( (_DWORD)a3 )
              break;
            a4 = *(_QWORD *)(a4 + 408);
          }
          while ( a4 );
        }
      }
      v18 = a3;
    }
  }
  v11 = *(_QWORD *)(v7 + 104);
  ThreadEffectiveRankNonZero = 0;
  *v6 = 0LL;
  if ( !v11 )
    goto LABEL_6;
  v11 += v8->ScbOffset;
  if ( !v11 )
    goto LABEL_6;
  LOBYTE(a4) = 1;
  ThreadEffectiveRankNonZero = KiGetThreadEffectiveRankNonZero(v7, v11, a3, a4, 0LL);
  v12 = ThreadEffectiveRankNonZero;
  if ( ThreadEffectiveRankNonZero )
  {
    *v6 = v11;
    goto LABEL_7;
  }
  v15 = v11;
  do
  {
    v5 += *(_DWORD *)(v15 + 116);
    v15 = *(_QWORD *)(v15 + 408);
  }
  while ( v15 );
  if ( v5 )
  {
    v16 = *(_DWORD *)(v7 + 120);
    if ( (v16 & 0x100) == 0
      && *(char *)(v7 + 195) < 16
      && (v16 & 0x600) == 0
      && (unsigned __int8)KiShouldPreemptionBeDeferred(v7) )
    {
      _interlockedbittestandset((volatile signed __int32 *)(v7 + 120), 0xAu);
LABEL_6:
      v12 = ThreadEffectiveRankNonZero;
    }
  }
LABEL_7:
  if ( !v10 || !v11 )
    goto LABEL_8;
  v13 = v18;
  if ( v18 && v12 )
  {
    KiGetComparisonRanks(v10, v11, &v18, &ThreadEffectiveRankNonZero);
    v12 = ThreadEffectiveRankNonZero;
LABEL_8:
    v13 = v18;
  }
  return v12 < v13 || v12 == v13 && *(_BYTE *)(v7 + 195) > *(_BYTE *)(a2 + 195);
}
