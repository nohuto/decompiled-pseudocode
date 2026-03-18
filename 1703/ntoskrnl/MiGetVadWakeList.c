/*
 * XREFs of MiGetVadWakeList @ 0x1400DAF90
 * Callers:
 *     MiRemoveVadCharges @ 0x14051D900 (MiRemoveVadCharges.c)
 *     MiFreeRotateView @ 0x1406B62F4 (MiFreeRotateView.c)
 *     MiFreeVadEventBitmap @ 0x1406B6404 (MiFreeVadEventBitmap.c)
 *     MiFreeLargePageView @ 0x1406BEB6C (MiFreeLargePageView.c)
 * Callees:
 *     MiReduceWs @ 0x14007F54C (MiReduceWs.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400B7600 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x1401E5050 (HvlNotifyLongSpinWait.c)
 *     MiForceAgeWorkingSet @ 0x140214F58 (MiForceAgeWorkingSet.c)
 *     MiForcedTrim @ 0x140214F8C (MiForcedTrim.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14025C6B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14025C828 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 *__fastcall MiGetVadWakeList(__int64 a1, int a2)
{
  LONG *v2; // rsi
  __int64 *v3; // r15
  __int64 **v5; // r14
  unsigned __int16 *v6; // rbx
  LONG *v7; // rdi
  unsigned __int8 CurrentIrql; // bp
  unsigned int v9; // r12d
  signed __int32 v10; // edx
  __int64 *v11; // rcx
  char v12; // al
  char v13; // al
  char v14; // al
  char v15; // al
  __int64 *v17; // rdx
  bool v18; // zf
  signed __int32 v19; // eax
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // r8
  void *retaddr; // [rsp+48h] [rbp+0h]

  v2 = &dword_14036D4C0;
  v3 = 0LL;
  v5 = (__int64 **)(a1 + 56);
  v6 = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
  if ( (v6[96] & 7) == 2 )
    v7 = &dword_14036D4C0;
  else
    v7 = (LONG *)(v6 + 100);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v7, CurrentIrql);
  }
  else
  {
    v9 = 0;
    if ( _interlockedbittestandset(v7, 0x1Fu) )
      v9 = ExpWaitForSpinLockExclusiveAndAcquire(v7, CurrentIrql);
    v10 = *v7;
    while ( (v10 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (v10 & 0x40000000) == 0 )
      {
        v19 = _InterlockedCompareExchange(v7, v10 | 0x40000000, v10);
        v18 = v10 == v19;
        v10 = v19;
        if ( !v18 )
          continue;
      }
      if ( (++v9 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v9);
      v10 = *v7;
    }
  }
  v7[1] = 0;
  v11 = *v5;
  if ( *v5 )
  {
    do
    {
      v17 = (__int64 *)*v11;
      if ( ((_DWORD)v11[8] & a2) != 0 )
      {
        *v11 = (__int64)v3;
        v3 = v11;
        *v5 = v17;
      }
      else
      {
        v5 = (__int64 **)v11;
      }
      v11 = v17;
    }
    while ( v17 );
  }
  v12 = *((_BYTE *)v6 + 195);
  if ( (v12 & 0x10) == 0 )
  {
    if ( (v12 & 8) != 0 )
    {
      *((_BYTE *)v6 + 195) = *((_BYTE *)v6 + 195) & 0xE7 | 0x10;
      if ( ((MiForcedTrim(v6, CurrentIrql) + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 && (v6[96] & 0x40) != 0 )
      {
        v20 = *((_QWORD *)v6 + 15);
        if ( v20 > *((_QWORD *)v6 + 19) )
        {
          if ( (*((_DWORD *)v6 + 1) & 0xF) != 0 )
            v21 = v20 - 1;
          else
            v21 = *((_QWORD *)v6 + 19);
          MiReduceWs((__int64)v6, CurrentIrql, v21);
        }
      }
    }
    v13 = *((_BYTE *)v6 + 195);
    if ( (v13 & 4) != 0 )
    {
      *((_BYTE *)v6 + 195) = v13 & 0xEB | 0x10;
      MiForceAgeWorkingSet(v6, CurrentIrql);
    }
    v14 = *((_BYTE *)v6 + 195);
    if ( (v14 & 0x20) != 0 )
    {
      *((_BYTE *)v6 + 195) = v14 & 0xCF | 0x10;
      MiReduceWs((__int64)v6, CurrentIrql, *((_QWORD *)v6 + 19));
    }
    v15 = *((_BYTE *)v6 + 195);
    if ( (v15 & 0x10) != 0 )
      *((_BYTE *)v6 + 195) = v15 & 0xEF;
  }
  if ( (v6[96] & 7) != 2 )
    v2 = (LONG *)(v6 + 100);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v2, retaddr);
  else
    *v2 = 0;
  __writecr8(CurrentIrql);
  return v3;
}
