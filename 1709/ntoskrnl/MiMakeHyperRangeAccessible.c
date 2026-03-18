/*
 * XREFs of MiMakeHyperRangeAccessible @ 0x14003E8F0
 * Callers:
 *     MiExpandVadBitMap @ 0x14045E94C (MiExpandVadBitMap.c)
 *     MiCommitPageTablesForVad @ 0x140499490 (MiCommitPageTablesForVad.c)
 *     MiExpandVadBitMapDown @ 0x1406E4B9C (MiExpandVadBitMapDown.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14001BE10 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiGetNextPageTable @ 0x14003FDB0 (MiGetNextPageTable.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x140057900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiFillHyperPtes @ 0x140116DE4 (MiFillHyperPtes.c)
 *     HvlNotifyLongSpinWait @ 0x140153060 (HvlNotifyLongSpinWait.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x14017C774 (MiMakeDemandZeroPte.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140285FCC (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiChargeFullProcessCommitment @ 0x140495E90 (MiChargeFullProcessCommitment.c)
 *     MiReturnFullProcessCommitment @ 0x140573D78 (MiReturnFullProcessCommitment.c)
 */

__int64 __fastcall MiMakeHyperRangeAccessible(unsigned __int64 a1, unsigned __int64 a2, __int64 *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  LONG *p_ProfileListHead; // rdi
  __int64 v5; // r12
  int v8; // r14d
  __int64 v9; // r13
  unsigned __int8 CurrentIrql; // r15
  unsigned int v11; // ebx
  signed __int32 v12; // edx
  bool v13; // zf
  signed __int32 v14; // eax
  int v15; // ecx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rbp
  __int64 v18; // rsi
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rbx
  __int64 NextPageTable; // rax
  unsigned __int64 v22; // rdi
  LONG *SharedVm; // rax
  unsigned __int64 v24; // r10
  __int64 PteShadow; // rax
  __int64 DemandZeroPte; // rax
  unsigned __int64 v27; // rdx
  __int64 result; // rax
  LONG *v29; // rbx
  LONG *v30; // rcx
  __int64 v31; // rax
  _BYTE v32[8]; // [rsp+30h] [rbp-78h] BYREF
  unsigned __int64 v33; // [rsp+38h] [rbp-70h]
  _KPROCESS *Process; // [rsp+40h] [rbp-68h]
  unsigned __int64 v35; // [rsp+48h] [rbp-60h]
  int v36; // [rsp+50h] [rbp-58h] BYREF
  __int64 v37; // [rsp+58h] [rbp-50h]
  unsigned __int64 v38; // [rsp+60h] [rbp-48h]
  void *retaddr; // [rsp+A8h] [rbp+0h]
  int v41; // [rsp+C8h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  p_ProfileListHead = &dword_140389780;
  v5 = 0LL;
  *a3 = 0LL;
  v33 = 0LL;
  v8 = 0;
  Process = CurrentThread->ApcState.Process;
  v36 = 0;
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
    v8 = v36;
  }
  v15 = 0;
  v41 = 0;
  p_ProfileListHead[1] = 0;
  v16 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v35 = v16;
  v17 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  while ( 1 )
  {
    v37 = 0LL;
    v18 = 0LL;
    v38 = 0LL;
    v19 = 0LL;
    v20 = v16;
    if ( v16 <= v17 )
    {
      while ( 1 )
      {
        NextPageTable = MiGetNextPageTable(v20, v17, 0, CurrentIrql, 4, (__int64)v32);
        if ( NextPageTable )
        {
          if ( NextPageTable == v20 )
          {
            v24 = 0xFFFFF6FB7DBED000uLL;
            while ( 1 )
            {
              PteShadow = *(_QWORD *)v20;
              if ( v20 >= v24 && v20 <= 0xFFFFF6FB7DBED7F8uLL )
                PteShadow = MiReadPteShadow(v20, *(_QWORD *)v20);
              if ( !PteShadow )
              {
                if ( v8 )
                {
                  DemandZeroPte = MiMakeDemandZeroPte(4LL);
                  *(_QWORD *)v20 = DemandZeroPte;
                  if ( v20 >= v24 && v20 <= v27 )
                    MiWritePteShadow(v20, DemandZeroPte);
                }
                v37 = ++v18;
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
        MiFillHyperPtes(v20, v22, CurrentIrql, &v36);
        v18 = v37;
        v20 = v22 + 8;
        v8 = v36;
LABEL_24:
        if ( v20 > v17 )
        {
LABEL_25:
          v19 = v38;
          v15 = v41;
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
    v33 = v19;
    result = MiChargeFullProcessCommitment(Process, v19 + v18);
    if ( (int)result < 0 )
      return result;
    v8 = 1;
    v36 = 1;
    *a3 = v18;
    v29 = MiGetSharedVm(v9);
    ExAcquireSpinLockExclusive(v29);
    v16 = v35;
    v15 = 1;
    v41 = 1;
    v29[1] = 0;
  }
  if ( v19 )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)MiGetSharedVm(v9) + 6, v19);
    v19 = v38;
    v18 = v37;
  }
  MiPreUnlockWorkingSetExclusive(v9, CurrentIrql);
  v30 = &dword_140389780;
  if ( (*(_BYTE *)(v9 + 192) & 7) != 2 )
    v30 = (LONG *)(v9 + 200);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v30, retaddr);
  else
    *v30 = 0;
  __writecr8(CurrentIrql);
  v31 = *a3;
  if ( v18 != *a3 )
  {
    *a3 = v18;
    v5 = v31 - v18;
  }
  if ( v19 != v33 )
    v5 += v33 - v19;
  if ( v5 )
    MiReturnFullProcessCommitment(Process, v5);
  return 0LL;
}
