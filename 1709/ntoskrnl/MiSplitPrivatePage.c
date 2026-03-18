/*
 * XREFs of MiSplitPrivatePage @ 0x140034BC0
 * Callers:
 *     MiCopyToCfgBitMap @ 0x1404D3670 (MiCopyToCfgBitMap.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiMakeSystemAddressValid @ 0x14003D1A0 (MiMakeSystemAddressValid.c)
 *     MiVadPureReserve @ 0x14003DDE0 (MiVadPureReserve.c)
 *     MiGetNextPageTable @ 0x14003FDB0 (MiGetNextPageTable.c)
 *     MiGetProtoPteAddress @ 0x140040460 (MiGetProtoPteAddress.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x140057900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiCopyOnWriteEx @ 0x140059760 (MiCopyOnWriteEx.c)
 *     MiIncreaseUsedPtesCount @ 0x1400666F8 (MiIncreaseUsedPtesCount.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     MiMakeProtoLeafValid @ 0x140128454 (MiMakeProtoLeafValid.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiGetPrototypePteDirect @ 0x14017C6D0 (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x14017C740 (MiIsPrototypePteVadLookup.c)
 *     MiMakeDemandZeroPte @ 0x14017C774 (MiMakeDemandZeroPte.c)
 *     MiMakePrototypePteVadLookup @ 0x14017C7E0 (MiMakePrototypePteVadLookup.c)
 *     MiGetUsedPtesHandle @ 0x140228894 (MiGetUsedPtesHandle.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiChargeFullProcessCommitment @ 0x140495E90 (MiChargeFullProcessCommitment.c)
 *     MiCommitPageTablesForVad @ 0x140499490 (MiCommitPageTablesForVad.c)
 *     MiReturnFullProcessCommitment @ 0x140573D78 (MiReturnFullProcessCommitment.c)
 */

__int64 __fastcall MiSplitPrivatePage(unsigned __int64 a1, __int64 a2)
{
  unsigned __int16 *v4; // r15
  __int64 *v5; // rsi
  __int64 v6; // r8
  int v7; // eax
  __int64 v8; // r14
  __int64 SharedVm; // rbx
  KIRQL v10; // al
  KIRQL v11; // bp
  __int64 v12; // rbx
  ULONG_PTR v13; // rcx
  _DWORD *v14; // rax
  struct _KTHREAD *v15; // r14
  volatile signed __int64 *v16; // rbx
  int v17; // ebp
  __int64 v18; // rbx
  __int64 ProtoPteAddress; // rax
  __int64 PteShadow; // rbx
  unsigned __int64 v21; // r14
  __int64 UsedPtesHandle; // rax
  unsigned __int64 v23; // rdx
  __int64 v24; // r8
  __int64 *v25; // rcx
  unsigned __int64 v26; // r9
  __int64 v27; // rax
  int v28; // r14d
  unsigned __int64 v29; // r9
  __int64 v30; // rcx
  int v31; // r12d
  __int64 v32; // rdx
  unsigned __int64 v33; // rdx
  __int64 DemandZeroPte; // rax
  unsigned __int64 v35; // r9
  __int64 v36; // rax
  _DWORD *v37; // rax
  _DWORD *v39; // rax
  _DWORD *v40; // rax
  _DWORD *v41; // rax
  _KPROCESS *v42; // rsi
  int v43; // [rsp+30h] [rbp-78h]
  char v44[4]; // [rsp+34h] [rbp-74h] BYREF
  __int64 v45; // [rsp+38h] [rbp-70h]
  __int64 PrototypePteVadLookup; // [rsp+40h] [rbp-68h] BYREF
  _KPROCESS *Process; // [rsp+48h] [rbp-60h]
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-58h]
  __int64 v49[10]; // [rsp+58h] [rbp-50h] BYREF
  void *retaddr; // [rsp+A8h] [rbp+0h]
  int v51; // [rsp+B0h] [rbp+8h]
  int v52; // [rsp+B8h] [rbp+10h]
  int v53; // [rsp+C8h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v4 = &Process[1].IdealNode[12];
  v53 = MiVadPureReserve(a2);
  v5 = (__int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v49[0] = *(_QWORD *)(a2 + 72);
  v7 = MiChargeFullProcessCommitment(v6, 1LL);
  v8 = v7;
  v51 = v7;
  v52 = 0;
  v43 = 0;
  SharedVm = MiGetSharedVm(&Process[1].IdealNode[12]);
  v10 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  *(_DWORD *)(SharedVm + 4) = 0;
  v11 = v10;
  v12 = v8;
  v45 = v8;
  while ( 1 )
  {
    v13 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( !v53 )
      goto LABEL_11;
    if ( ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL != MiGetNextPageTable(
                                                             (unsigned int)(a1 >> 9) & 0xFFFFFFF8,
                                                             (unsigned int)(a1 >> 9) & 0xFFFFFFF8,
                                                             0,
                                                             v11,
                                                             4,
                                                             (__int64)v44) )
      break;
LABEL_12:
    ProtoPteAddress = MiGetProtoPteAddress(a2, a1 >> 12, 1LL, v49);
    PteShadow = *v5;
    v21 = ProtoPteAddress;
    if ( (unsigned __int64)v5 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v5 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow(v5, *v5);
    PrototypePteVadLookup = PteShadow;
    if ( !PteShadow )
    {
      if ( v45 < 0 )
      {
        MiPreUnlockWorkingSetExclusive(v4, v11);
        v39 = (_DWORD *)MiGetSharedVm(v4);
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v39, retaddr);
          __writecr8(v11);
          return (unsigned int)v51;
        }
        *v39 = 0;
        __writecr8(v11);
        return (unsigned int)v51;
      }
      UsedPtesHandle = MiGetUsedPtesHandle(a1);
      MiIncreaseUsedPtesCount(UsedPtesHandle, 1LL);
      if ( v53 )
      {
        if ( !v21 )
        {
          v28 = v51;
          v52 = 1;
LABEL_35:
          v31 = 1;
          v32 = *(unsigned int *)(a2 + 52);
          LODWORD(v32) = v32 & 0x7FFFFFFF;
          v33 = (((unsigned __int64)*(unsigned __int8 *)(a2 + 34) << 31) | v32) + 1;
          *(_DWORD *)(a2 + 52) ^= (v33 ^ *(_DWORD *)(a2 + 52)) & 0x7FFFFFFF;
          *(_BYTE *)(a2 + 34) = v33 >> 31;
          if ( v52 == 1 )
          {
            DemandZeroPte = MiMakeDemandZeroPte(1LL);
            PrototypePteVadLookup = DemandZeroPte;
            *v5 = DemandZeroPte;
            if ( (unsigned __int64)v5 >= v35 && (unsigned __int64)v5 <= 0xFFFFF6FB7DBED7F8uLL )
              MiWritePteShadow(v5, DemandZeroPte);
          }
          goto LABEL_68;
        }
        v25 = (__int64 *)(((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v26 = 0xFFFFF6FB7DBED000uLL;
        v27 = *v25;
        v23 = 0xFFFFF6FB7DBED000uLL;
        if ( (unsigned __int64)v25 >= 0xFFFFF6FB7DBED000uLL )
        {
          v23 = 0xFFFFF6FB7DBED7F8uLL;
          if ( (unsigned __int64)v25 <= 0xFFFFF6FB7DBED7F8uLL )
            v27 = MiReadPteShadow(v25, *v25);
        }
        PrototypePteVadLookup = v27;
        if ( (v27 & 1) == 0 && (v27 & 0x3E0) == 0 )
        {
          v28 = v51;
          v52 = 1;
          goto LABEL_35;
        }
      }
      else
      {
        v26 = 0xFFFFF6FB7DBED000uLL;
      }
      PrototypePteVadLookup = MiMakePrototypePteVadLookup(1LL, v23, v24, v26);
      PteShadow = PrototypePteVadLookup;
      *v5 = PrototypePteVadLookup;
      if ( (unsigned __int64)v5 >= v29 && (unsigned __int64)v5 <= 0xFFFFF6FB7DBED7F8uLL )
        MiWritePteShadow(v5, PteShadow);
    }
    if ( (PteShadow & 1) != 0 )
    {
      v30 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&PrototypePteVadLookup) - 0x58000000000LL;
      if ( (*(_QWORD *)(v30 + 40) & 0x200000000000000LL) == 0 || (*(_QWORD *)(v30 + 8) | 0x8000000000000000uLL) != v21 )
        goto LABEL_67;
      v12 = v45;
      if ( v45 < 0 )
      {
        MiPreUnlockWorkingSetExclusive(v4, v11);
        v40 = (_DWORD *)MiGetSharedVm(v4);
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v40, retaddr);
        else
          *v40 = 0;
        __writecr8(v11);
        return (unsigned int)v12;
      }
      if ( (unsigned int)MiCopyOnWriteEx(a1, (unsigned int)(a1 >> 9) & 0xFFFFFFF8, -1, v11, 0) )
      {
        v28 = v12;
        goto LABEL_35;
      }
    }
    else
    {
      if ( (PteShadow & 0x400) == 0
        || !(unsigned int)MiIsPrototypePteVadLookup(PteShadow) && MiGetPrototypePteDirect(PteShadow) != v21 )
      {
LABEL_67:
        v31 = 0;
        v28 = v51;
LABEL_68:
        MiPreUnlockWorkingSetExclusive(v4, v11);
        v41 = (_DWORD *)MiGetSharedVm(v4);
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v41, retaddr);
        else
          *v41 = 0;
        __writecr8(v11);
        v42 = Process;
        if ( v43 == 1 )
        {
          if ( (_InterlockedExchangeAdd64(
                  (volatile signed __int64 *)&Process[1].Affinity.Bitmap[8],
                  0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(&v42[1].Affinity.Bitmap[8]);
          KeAbPostRelease((ULONG_PTR)&v42[1].Affinity.Bitmap[8]);
          KiLeaveGuardedRegionUnsafe(CurrentThread);
        }
        if ( !v31 && v28 >= 0 )
          MiReturnFullProcessCommitment(v42, 1LL);
        return 0LL;
      }
      if ( (__int64 *)MiMakeProtoLeafValid((ULONG_PTR)v5) != v5 )
      {
        v36 = *v5;
        if ( (unsigned __int64)v5 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v5 <= 0xFFFFF6FB7DBED7F8uLL )
          v36 = MiReadPteShadow(v5, *v5);
        if ( PteShadow == v36 )
        {
          v28 = v51;
          if ( v51 < 0 )
          {
            MiPreUnlockWorkingSetExclusive(v4, v11);
            v37 = (_DWORD *)MiGetSharedVm(v4);
            if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
              ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v37, retaddr);
            else
              *v37 = 0;
            __writecr8(v11);
            return (unsigned int)v51;
          }
          v52 = 1;
          goto LABEL_35;
        }
      }
      v12 = v45;
    }
  }
  MiPreUnlockWorkingSetExclusive(v4, v11);
  v14 = (_DWORD *)MiGetSharedVm(v4);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v14, retaddr);
  else
    *v14 = 0;
  __writecr8(v11);
  if ( v12 < 0 )
    return (unsigned int)v51;
  v15 = CurrentThread;
  v43 = 1;
  --CurrentThread->SpecialApcDisable;
  v16 = (volatile signed __int64 *)&Process[1].Affinity.Bitmap[8];
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&Process[1].Affinity.Bitmap[8], 0LL);
  v17 = MiCommitPageTablesForVad(a2, a1, a1);
  if ( v17 >= 0 )
  {
    v18 = MiGetSharedVm(v4);
    v11 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v18);
    *(_DWORD *)(v18 + 4) = 0;
    v13 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
LABEL_11:
    MiMakeSystemAddressValid(v13, 1);
    goto LABEL_12;
  }
  if ( (_InterlockedExchangeAdd64(v16, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v16);
  KeAbPostRelease((ULONG_PTR)v16);
  KiLeaveGuardedRegionUnsafe(v15);
  if ( v51 >= 0 )
    MiReturnFullProcessCommitment(Process, 1LL);
  return (unsigned int)v17;
}
