/*
 * XREFs of MiMakeHyperRangeAccessible @ 0x1400D1310
 * Callers:
 *     MiExpandVadBitMap @ 0x14049E24C (MiExpandVadBitMap.c)
 *     MiCommitPageTablesForVad @ 0x14051D620 (MiCommitPageTablesForVad.c)
 *     MiExpandVadBitMapDown @ 0x1406B7F10 (MiExpandVadBitMapDown.c)
 * Callees:
 *     MiFillHyperPtes @ 0x140020148 (MiFillHyperPtes.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiReduceWs @ 0x14007F54C (MiReduceWs.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400B7600 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiGetNextPageTable @ 0x1400D2560 (MiGetNextPageTable.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x1400D6900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiAgeWorkingSet @ 0x1400D81E0 (MiAgeWorkingSet.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x14017CF18 (MiMakeDemandZeroPte.c)
 *     HvlNotifyLongSpinWait @ 0x1401E5050 (HvlNotifyLongSpinWait.c)
 *     MiForcedTrim @ 0x140214F8C (MiForcedTrim.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14025C6B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14025C828 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiReturnFullProcessCommitment @ 0x140499FA8 (MiReturnFullProcessCommitment.c)
 *     MiChargeFullProcessCommitment @ 0x14051D550 (MiChargeFullProcessCommitment.c)
 */

__int64 __fastcall MiMakeHyperRangeAccessible(unsigned __int64 a1, unsigned __int64 a2, __int64 *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  LONG *p_ProfileListHead; // rdi
  __int64 v5; // r13
  int v8; // r14d
  __int64 v9; // r15
  unsigned __int8 CurrentIrql; // r12
  unsigned int v11; // ebx
  signed __int32 v12; // edx
  bool v13; // zf
  signed __int32 v14; // eax
  int v15; // ecx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rbp
  __int64 v18; // rdi
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // rbx
  __int64 NextPageTable; // rax
  unsigned __int64 v22; // rsi
  LONG *SharedVm; // rax
  __int64 v24; // rcx
  __int64 result; // rax
  LONG *v26; // rbx
  char v27; // al
  unsigned __int64 v28; // r8
  unsigned __int64 v29; // r8
  char v30; // al
  char v31; // al
  char v32; // al
  LONG *v33; // rcx
  __int64 v34; // rax
  _BYTE v35[8]; // [rsp+30h] [rbp-78h] BYREF
  unsigned __int64 v36; // [rsp+38h] [rbp-70h]
  _KPROCESS *Process; // [rsp+40h] [rbp-68h]
  unsigned __int64 v38; // [rsp+48h] [rbp-60h]
  int v39; // [rsp+50h] [rbp-58h] BYREF
  __int64 v40; // [rsp+58h] [rbp-50h]
  unsigned __int64 v41; // [rsp+60h] [rbp-48h]
  void *retaddr; // [rsp+A8h] [rbp+0h]
  int v44; // [rsp+C8h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  p_ProfileListHead = &dword_14036D4C0;
  v5 = 0LL;
  *a3 = 0LL;
  v36 = 0LL;
  v8 = 0;
  Process = CurrentThread->ApcState.Process;
  v39 = 0;
  v9 = (__int64)&Process[1].IdealNode[12];
  if ( ((__int64)Process[2].Header.WaitListHead.Blink & 7) != 2 )
    p_ProfileListHead = (LONG *)&Process[2].ProfileListHead;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(p_ProfileListHead, CurrentIrql);
  }
  else
  {
    v11 = 0;
    if ( _interlockedbittestandset(p_ProfileListHead, 0x1Fu) )
      v11 = ExpWaitForSpinLockExclusiveAndAcquire(p_ProfileListHead, CurrentIrql);
    v12 = *p_ProfileListHead;
    while ( (v12 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (v12 & 0x40000000) == 0 )
      {
        v14 = _InterlockedCompareExchange(p_ProfileListHead, v12 | 0x40000000, v12);
        v13 = v12 == v14;
        v12 = v14;
        if ( !v13 )
          continue;
      }
      if ( (++v11 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v11);
      v12 = *p_ProfileListHead;
    }
    v8 = v39;
  }
  v15 = 0;
  v44 = 0;
  p_ProfileListHead[1] = 0;
  v16 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v38 = v16;
  v17 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  while ( 1 )
  {
    v40 = 0LL;
    v18 = 0LL;
    v41 = 0LL;
    v19 = 0LL;
    v20 = v16;
    if ( v16 <= v17 )
    {
      while ( 1 )
      {
        NextPageTable = MiGetNextPageTable(v20, v17, 0, CurrentIrql, 4, (__int64)v35);
        if ( NextPageTable )
        {
          if ( NextPageTable == v20 )
          {
            while ( 1 )
            {
              if ( !MI_READ_PTE_LOCK_FREE(v20) )
              {
                if ( v8 )
                {
                  *(_QWORD *)v20 = MiMakeDemandZeroPte(4LL);
                  if ( (unsigned int)MiPteInShadowRange(v20) )
                    MiWritePteShadow(v24);
                }
                v40 = ++v18;
              }
              v20 += 8LL;
              if ( (v20 & 0xFFF) == 0 )
                goto LABEL_24;
              if ( v20 > v17 )
                goto LABEL_25;
            }
          }
          v22 = NextPageTable - 8;
        }
        else
        {
          v22 = v17;
        }
        MiFillHyperPtes(v20, v22, CurrentIrql, (__int64)&v39);
        v18 = v40;
        v20 = v22 + 8;
        v8 = v39;
LABEL_24:
        if ( v20 > v17 )
        {
LABEL_25:
          v19 = v41;
          v15 = v44;
          break;
        }
      }
    }
    if ( v15 || !v18 )
      break;
    MiPreUnlockWorkingSetExclusive(v9, CurrentIrql);
    SharedVm = MiGetSharedVm(v9);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(SharedVm, retaddr);
    else
      *SharedVm = 0;
    __writecr8(CurrentIrql);
    v36 = v19;
    result = MiChargeFullProcessCommitment(Process, v19 + v18);
    if ( (int)result < 0 )
      return result;
    v8 = 1;
    v39 = 1;
    *a3 = v18;
    v26 = MiGetSharedVm(v9);
    ExAcquireSpinLockExclusive(v26);
    v16 = v38;
    v15 = 1;
    v44 = 1;
    v26[1] = 0;
  }
  if ( v19 )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)MiGetSharedVm(v9) + 6, v19);
    v19 = v41;
    v18 = v40;
  }
  v27 = *(_BYTE *)(v9 + 195);
  if ( (v27 & 0x10) == 0 )
  {
    if ( (v27 & 8) != 0 )
    {
      *(_BYTE *)(v9 + 195) = v27 & 0xE7 | 0x10;
      if ( ((MiForcedTrim(v9, CurrentIrql) + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 && (*(_BYTE *)(v9 + 192) & 0x40) != 0 )
      {
        v28 = *(_QWORD *)(v9 + 120);
        if ( v28 > *(_QWORD *)(v9 + 152) )
        {
          if ( (*(_DWORD *)(v9 + 4) & 0xF) != 0 )
            v29 = v28 - 1;
          else
            v29 = *(_QWORD *)(v9 + 152);
          MiReduceWs(v9, CurrentIrql, v29);
        }
      }
    }
    v30 = *(_BYTE *)(v9 + 195);
    if ( (v30 & 4) != 0 )
    {
      *(_BYTE *)(v9 + 195) = v30 & 0xEB | 0x10;
      MiAgeWorkingSet(
        v9,
        CurrentIrql,
        1LL,
        *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(qword_14036C8F8 + 8LL * *(unsigned __int16 *)(v9 + 172)) + 5544LL)
                            + 2354LL));
    }
    v31 = *(_BYTE *)(v9 + 195);
    if ( (v31 & 0x20) != 0 )
    {
      *(_BYTE *)(v9 + 195) = v31 & 0xCF | 0x10;
      MiReduceWs(v9, CurrentIrql, *(_QWORD *)(v9 + 152));
    }
    v32 = *(_BYTE *)(v9 + 195);
    if ( (v32 & 0x10) != 0 )
      *(_BYTE *)(v9 + 195) = v32 & 0xEF;
  }
  v33 = &dword_14036D4C0;
  if ( (*(_BYTE *)(v9 + 192) & 7) != 2 )
    v33 = (LONG *)(v9 + 200);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v33, retaddr);
  else
    *v33 = 0;
  __writecr8(CurrentIrql);
  v34 = *a3;
  if ( v18 != *a3 )
  {
    *a3 = v18;
    v5 = v34 - v18;
  }
  if ( v19 != v36 )
    v5 += v36 - v19;
  if ( v5 )
    MiReturnFullProcessCommitment(Process);
  return 0LL;
}
