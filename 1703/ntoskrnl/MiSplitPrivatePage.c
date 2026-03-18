/*
 * XREFs of MiSplitPrivatePage @ 0x1400A7140
 * Callers:
 *     MiCopyToCfgBitMap @ 0x1405145B0 (MiCopyToCfgBitMap.c)
 * Callees:
 *     MiMakeProtoLeafValid @ 0x1400293F8 (MiMakeProtoLeafValid.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiIncreaseUsedPtesCount @ 0x1400A8338 (MiIncreaseUsedPtesCount.c)
 *     MiGetProtoPteAddress @ 0x1400BD630 (MiGetProtoPteAddress.c)
 *     MiMakeSystemAddressValid @ 0x1400D0A70 (MiMakeSystemAddressValid.c)
 *     MiGetNextPageTable @ 0x1400D2560 (MiGetNextPageTable.c)
 *     MiVadPureReserve @ 0x1400D2C90 (MiVadPureReserve.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x1400D6900 (MiPreUnlockWorkingSetExclusive.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     MiCopyOnWriteEx @ 0x1400FB340 (MiCopyOnWriteEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiGetPrototypePteDirect @ 0x14017CE98 (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x14017CEE4 (MiIsPrototypePteVadLookup.c)
 *     MiMakeDemandZeroPte @ 0x14017CF18 (MiMakeDemandZeroPte.c)
 *     MiMakePrototypePteVadLookup @ 0x14017CF60 (MiMakePrototypePteVadLookup.c)
 *     MiGetUsedPtesHandle @ 0x14021BF88 (MiGetUsedPtesHandle.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14025C828 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiReturnFullProcessCommitment @ 0x140499FA8 (MiReturnFullProcessCommitment.c)
 *     MiChargeFullProcessCommitment @ 0x14051D550 (MiChargeFullProcessCommitment.c)
 *     MiCommitPageTablesForVad @ 0x14051D620 (MiCommitPageTablesForVad.c)
 */

__int64 __fastcall MiSplitPrivatePage(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 *v6; // r15
  __int64 *v7; // rsi
  __int64 v8; // r8
  int v9; // eax
  __int64 v10; // r14
  __int64 SharedVm; // rbx
  KIRQL v12; // al
  KIRQL v13; // bp
  __int64 v14; // rbx
  ULONG_PTR v15; // rcx
  _DWORD *v16; // rax
  struct _KTHREAD *v17; // r14
  volatile signed __int64 *v18; // rbx
  int v19; // ebp
  __int64 v20; // rbx
  unsigned __int64 ProtoPteAddress; // r14
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rbx
  __int64 UsedPtesHandle; // rax
  __int64 v27; // rax
  __int64 PrototypePteVadLookup; // rax
  __int64 v29; // rcx
  __int64 v30; // rcx
  int v31; // r14d
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  _DWORD *v35; // rax
  __int64 v37; // rdx
  unsigned __int64 v38; // rdx
  __int64 v39; // rcx
  _DWORD *v40; // rax
  _DWORD *v41; // rax
  _DWORD *v42; // rax
  _KPROCESS *v43; // rsi
  int v44; // [rsp+30h] [rbp-78h]
  char v45[4]; // [rsp+34h] [rbp-74h] BYREF
  __int64 v46; // [rsp+38h] [rbp-70h]
  __int64 DemandZeroPte; // [rsp+40h] [rbp-68h] BYREF
  _KPROCESS *Process; // [rsp+48h] [rbp-60h]
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-58h]
  __int64 v50[10]; // [rsp+58h] [rbp-50h] BYREF
  void *retaddr; // [rsp+A8h] [rbp+0h]
  int v52; // [rsp+B0h] [rbp+8h]
  int v53; // [rsp+B8h] [rbp+10h]
  int v54; // [rsp+C0h] [rbp+18h]
  int v55; // [rsp+C8h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v6 = &Process[1].IdealNode[12];
  v55 = MiVadPureReserve(a2, a2, Process, a4);
  v7 = (__int64 *)(((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v50[0] = *(_QWORD *)(a2 + 72);
  v9 = MiChargeFullProcessCommitment(v8, 1LL);
  v10 = v9;
  v52 = v9;
  v54 = 0;
  v53 = 0;
  v44 = 0;
  SharedVm = MiGetSharedVm(&Process[1].IdealNode[12]);
  v12 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  *(_DWORD *)(SharedVm + 4) = 0;
  v13 = v12;
  v14 = v10;
  v46 = v10;
  while ( 1 )
  {
    v15 = ((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( v55 )
      break;
LABEL_11:
    MiMakeSystemAddressValid(v15, 1);
LABEL_12:
    ProtoPteAddress = MiGetProtoPteAddress(a2, BugCheckParameter2 >> 12, 1LL, v50);
    DemandZeroPte = MI_READ_PTE_LOCK_FREE(v7);
    v25 = DemandZeroPte;
    if ( !DemandZeroPte )
    {
      if ( v46 < 0 )
      {
        MiPreUnlockWorkingSetExclusive(v6, v13);
        v40 = (_DWORD *)MiGetSharedVm(v6);
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v40, retaddr);
          __writecr8(v13);
          return (unsigned int)v52;
        }
        *v40 = 0;
        __writecr8(v13);
        return (unsigned int)v52;
      }
      UsedPtesHandle = MiGetUsedPtesHandle(BugCheckParameter2, v22, v23, v24);
      MiIncreaseUsedPtesCount(UsedPtesHandle, 1LL);
      if ( v55 )
      {
        if ( !ProtoPteAddress
          || (v27 = MI_READ_PTE_LOCK_FREE(((ProtoPteAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
              DemandZeroPte = v27,
              (v27 & 1) == 0)
          && (v27 & 0x3E0) == 0 )
        {
          v31 = v52;
LABEL_41:
          v54 = 1;
LABEL_42:
          v37 = *(unsigned int *)(a2 + 52);
          LODWORD(v37) = v37 & 0x7FFFFFFF;
          v53 = 1;
          v38 = (((unsigned __int64)*(unsigned __int8 *)(a2 + 34) << 31) | v37) + 1;
          *(_DWORD *)(a2 + 52) ^= (v38 ^ *(_DWORD *)(a2 + 52)) & 0x7FFFFFFF;
          *(_BYTE *)(a2 + 34) = v38 >> 31;
          if ( v54 == 1 )
          {
            DemandZeroPte = MiMakeDemandZeroPte(1LL);
            *v7 = DemandZeroPte;
            if ( (unsigned int)MiPteInShadowRange(v7) )
              MiWritePteShadow(v39);
          }
LABEL_55:
          MiPreUnlockWorkingSetExclusive(v6, v13);
          v42 = (_DWORD *)MiGetSharedVm(v6);
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v42, retaddr);
          else
            *v42 = 0;
          __writecr8(v13);
          v43 = Process;
          if ( v44 == 1 )
          {
            if ( (_InterlockedExchangeAdd64(
                    (volatile signed __int64 *)&Process[1].Affinity.Bitmap[8],
                    0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(&v43[1].Affinity.Bitmap[8]);
            KeAbPostRelease((ULONG_PTR)&v43[1].Affinity.Bitmap[8]);
            KiLeaveGuardedRegionUnsafe(CurrentThread);
          }
          if ( !v53 && v31 >= 0 )
            MiReturnFullProcessCommitment(v43);
          return 0LL;
        }
      }
      PrototypePteVadLookup = MiMakePrototypePteVadLookup(1LL);
      DemandZeroPte = PrototypePteVadLookup;
      *v7 = PrototypePteVadLookup;
      v25 = PrototypePteVadLookup;
      if ( (unsigned int)MiPteInShadowRange(v7) )
        MiWritePteShadow(v29);
    }
    if ( (v25 & 1) != 0 )
    {
      v30 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&DemandZeroPte) - 0x58000000000LL;
      if ( (*(_QWORD *)(v30 + 40) & 0x200000000000000LL) == 0
        || (*(_QWORD *)(v30 + 8) | 0x8000000000000000uLL) != ProtoPteAddress )
      {
        goto LABEL_54;
      }
      v14 = v46;
      if ( v46 < 0 )
      {
        MiPreUnlockWorkingSetExclusive(v6, v13);
        v41 = (_DWORD *)MiGetSharedVm(v6);
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v41, retaddr);
        else
          *v41 = 0;
        __writecr8(v13);
        return (unsigned int)v14;
      }
      if ( (unsigned int)MiCopyOnWriteEx(BugCheckParameter2, 0) )
      {
        v31 = v14;
        goto LABEL_42;
      }
    }
    else
    {
      if ( (v25 & 0x400) == 0
        || !(unsigned int)MiIsPrototypePteVadLookup(v25)
        && MiGetPrototypePteDirect(v25, v32, v33, v34) != ProtoPteAddress )
      {
LABEL_54:
        v31 = v52;
        goto LABEL_55;
      }
      if ( (__int64 *)MiMakeProtoLeafValid((ULONG_PTR)v7, 24LL, v13) != v7 && v25 == MI_READ_PTE_LOCK_FREE(v7) )
      {
        v31 = v52;
        if ( v52 < 0 )
        {
          MiPreUnlockWorkingSetExclusive(v6, v13);
          v35 = (_DWORD *)MiGetSharedVm(v6);
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v35, retaddr);
          else
            *v35 = 0;
          __writecr8(v13);
          return (unsigned int)v52;
        }
        goto LABEL_41;
      }
      v14 = v46;
    }
  }
  if ( ((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL == MiGetNextPageTable(
                                                                           (unsigned int)(BugCheckParameter2 >> 9) & 0xFFFFFFF8,
                                                                           (unsigned int)(BugCheckParameter2 >> 9) & 0xFFFFFFF8,
                                                                           0,
                                                                           v13,
                                                                           4,
                                                                           (__int64)v45) )
    goto LABEL_12;
  MiPreUnlockWorkingSetExclusive(v6, v13);
  v16 = (_DWORD *)MiGetSharedVm(v6);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v16, retaddr);
  else
    *v16 = 0;
  __writecr8(v13);
  if ( v14 < 0 )
    return (unsigned int)v52;
  v17 = CurrentThread;
  v44 = 1;
  --CurrentThread->SpecialApcDisable;
  v18 = (volatile signed __int64 *)&Process[1].Affinity.Bitmap[8];
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&Process[1].Affinity.Bitmap[8], 0LL);
  v19 = MiCommitPageTablesForVad(a2, BugCheckParameter2, BugCheckParameter2);
  if ( v19 >= 0 )
  {
    v20 = MiGetSharedVm(v6);
    v13 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v20);
    *(_DWORD *)(v20 + 4) = 0;
    v15 = ((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    goto LABEL_11;
  }
  if ( (_InterlockedExchangeAdd64(v18, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v18);
  KeAbPostRelease((ULONG_PTR)v18);
  KiLeaveGuardedRegionUnsafe(v17);
  if ( v52 >= 0 )
    MiReturnFullProcessCommitment(Process);
  return (unsigned int)v19;
}
