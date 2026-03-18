/*
 * XREFs of MiGetVadWakeList @ 0x140038190
 * Callers:
 *     MiRemoveVadCharges @ 0x140495BC0 (MiRemoveVadCharges.c)
 *     MiFreeRotateView @ 0x1406E25E4 (MiFreeRotateView.c)
 *     MiFreeVadEventBitmap @ 0x1406E26F4 (MiFreeVadEventBitmap.c)
 *     MiFreeLargePageView @ 0x1406EBEE4 (MiFreeLargePageView.c)
 * Callees:
 *     MiReduceWs @ 0x14000B908 (MiReduceWs.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14001BE10 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x140153060 (HvlNotifyLongSpinWait.c)
 *     MiForceAgeWorkingSet @ 0x14021D508 (MiForceAgeWorkingSet.c)
 *     MiForcedTrim @ 0x14021D544 (MiForcedTrim.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140285FCC (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 *__fastcall MiGetVadWakeList(__int64 a1, int a2)
{
  __int64 **v2; // r15
  LONG *v4; // r14
  __int64 *v5; // rdx
  __int64 *v6; // r12
  _KPROCESS *Process; // rdi
  char Blink; // al
  __int64 v9; // rdi
  LONG *v10; // rsi
  unsigned __int8 CurrentIrql; // bp
  unsigned int v12; // ebx
  signed __int32 v13; // eax
  __int64 *v14; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  int v16; // eax
  char v17; // al
  char v18; // al
  signed __int32 v20; // ett
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // r8
  void *retaddr; // [rsp+48h] [rbp+0h]

  v2 = (__int64 **)(a1 + 56);
  v4 = &dword_140389780;
  LODWORD(v5) = 0;
  v6 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  Blink = (char)Process[2].Header.WaitListHead.Blink;
  v9 = (__int64)&Process[1].IdealNode[12];
  if ( (Blink & 7) == 2 )
    v10 = &dword_140389780;
  else
    v10 = (LONG *)(v9 + 200);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v10, CurrentIrql);
LABEL_30:
    LODWORD(v5) = 0;
    goto LABEL_7;
  }
  v12 = 0;
  if ( _interlockedbittestandset(v10, 0x1Fu) )
  {
    v12 = ExpWaitForSpinLockExclusiveAndAcquire(v10, CurrentIrql);
    LODWORD(v5) = 0;
  }
  v13 = *v10;
  if ( (*v10 & 0xBFFFFFFF) != 0x80000000 )
  {
    do
    {
      if ( (v13 & 0x40000000) == 0 )
      {
        v20 = v13;
        v13 = _InterlockedCompareExchange(v10, v13 | 0x40000000, v13);
        if ( v20 != v13 )
          continue;
      }
      if ( (++v12 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v12);
      v13 = *v10;
    }
    while ( (v13 & 0xBFFFFFFF) != 0x80000000 );
    goto LABEL_30;
  }
LABEL_7:
  v10[1] = 0;
  v14 = *v2;
  if ( *v2 )
  {
    do
    {
      v5 = (__int64 *)*v14;
      if ( (a2 & (_DWORD)v14[8]) != 0 )
      {
        *v14 = (__int64)v6;
        v6 = v14;
        *v2 = v5;
      }
      else
      {
        v2 = (__int64 **)v14;
      }
      v14 = v5;
    }
    while ( v5 );
  }
  CurrentThread = KeGetCurrentThread();
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0x400000) == 0 )
  {
    v16 = HIBYTE(*(_DWORD *)(v9 + 192));
    if ( (v16 & 8) != 0 )
    {
      *(_BYTE *)(v9 + 195) = v16 & 0xF7;
      _interlockedbittestandset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x16u);
      if ( !MiForcedTrim(v9, CurrentIrql) && (*(_BYTE *)(v9 + 192) & 0x40) != 0 )
      {
        v21 = *(_QWORD *)(v9 + 120);
        if ( v21 > *(_QWORD *)(v9 + 152) )
        {
          if ( (*(_DWORD *)(v9 + 4) & 0xF) != 0 )
            v22 = v21 - 1;
          else
            v22 = *(_QWORD *)(v9 + 152);
          MiReduceWs(v9, CurrentIrql, v22);
        }
      }
      LODWORD(v5) = 0;
    }
    v17 = *(_BYTE *)(v9 + 195);
    if ( (v17 & 4) != 0 )
    {
      *(_BYTE *)(v9 + 195) = v17 & 0xFB;
      _interlockedbittestandset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x16u);
      MiForceAgeWorkingSet(v9, CurrentIrql);
      LODWORD(v5) = 0;
    }
    v18 = *(_BYTE *)(v9 + 195);
    if ( (v18 & 0x10) != 0 )
    {
      *(_BYTE *)(v9 + 195) = v18 & 0xEF;
      _interlockedbittestandset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x16u);
      MiReduceWs(v9, CurrentIrql, *(_QWORD *)(v9 + 152));
      LODWORD(v5) = 0;
    }
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0x400000) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x16u);
  }
  if ( (*(_BYTE *)(v9 + 192) & 7) != 2 )
    v4 = (LONG *)(v9 + 200);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v4, retaddr);
  else
    *v4 = (int)v5;
  __writecr8(CurrentIrql);
  return v6;
}
