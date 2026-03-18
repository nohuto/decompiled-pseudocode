/*
 * XREFs of KiEvaluateGroupSchedulingPreemption @ 0x1400763C0
 * Callers:
 *     KiDeferredReadyThread @ 0x140072C60 (KiDeferredReadyThread.c)
 * Callees:
 *     KiShouldPreemptionBeDeferred @ 0x1400AA768 (KiShouldPreemptionBeDeferred.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1400ABA00 (KiGetThreadEffectiveRankNonZero.c)
 *     KiGetComparisonRanks @ 0x140128258 (KiGetComparisonRanks.c)
 */

bool __fastcall KiEvaluateGroupSchedulingPreemption(struct _KPRCB *a1, _KTHREAD *a2, __int64 a3, _QWORD *a4)
{
  int v4; // edi
  _QWORD *v5; // r12
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rsi
  __int64 v10; // r15
  unsigned int v11; // r9d
  unsigned int v12; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rax
  int v17; // eax
  unsigned int v18; // [rsp+60h] [rbp+8h] BYREF
  unsigned int ThreadEffectiveRankNonZero; // [rsp+68h] [rbp+10h] BYREF

  v4 = 0;
  v5 = a4;
  ThreadEffectiveRankNonZero = 0;
  LOBYTE(a4) = a1->CurrentThread != a2 || a1 == KeGetCurrentPrcb();
  SchedulingGroup = a2->SchedulingGroup;
  if ( SchedulingGroup )
  {
    SchedulingGroup = (_KSCHEDULING_GROUP *volatile)((char *)SchedulingGroup + a1->ScbOffset);
    if ( SchedulingGroup )
      ThreadEffectiveRankNonZero = KiGetThreadEffectiveRankNonZero(
                                     (_DWORD)a2,
                                     (_DWORD)SchedulingGroup,
                                     a3,
                                     (_DWORD)a4,
                                     0LL);
  }
  v10 = *(_QWORD *)(a3 + 104);
  v18 = 0;
  *v5 = 0LL;
  if ( !v10 )
    goto LABEL_6;
  v10 += a1->ScbOffset;
  if ( !v10 )
    goto LABEL_6;
  LOBYTE(a4) = 1;
  v18 = KiGetThreadEffectiveRankNonZero(a3, v10, a3, (_DWORD)a4, 0LL);
  v11 = v18;
  if ( v18 )
  {
    *v5 = v10;
    goto LABEL_7;
  }
  v16 = v10;
  do
  {
    v4 += *(_DWORD *)(v16 + 116);
    v16 = *(_QWORD *)(v16 + 408);
  }
  while ( v16 );
  if ( v4 )
  {
    v17 = *(_DWORD *)(a3 + 120);
    if ( (v17 & 0x200) == 0
      && *(char *)(a3 + 195) < 16
      && (v17 & 0xC00) == 0
      && (unsigned __int8)KiShouldPreemptionBeDeferred(a3, v14, v15, v18) )
    {
      _interlockedbittestandset((volatile signed __int32 *)(a3 + 120), 0xBu);
LABEL_6:
      v11 = v18;
    }
  }
LABEL_7:
  if ( !SchedulingGroup || !v10 )
    goto LABEL_8;
  v12 = ThreadEffectiveRankNonZero;
  if ( ThreadEffectiveRankNonZero && v11 )
  {
    KiGetComparisonRanks(SchedulingGroup, v10, &ThreadEffectiveRankNonZero, &v18);
    v11 = v18;
LABEL_8:
    v12 = ThreadEffectiveRankNonZero;
  }
  return v11 < v12 || v11 == v12 && *(_BYTE *)(a3 + 195) > a2->Priority;
}
