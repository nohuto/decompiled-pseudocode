/*
 * XREFs of MiSplitPrivatePage @ 0x14003CAC0
 * Callers:
 *     MiCopyToCfgBitMap @ 0x1404B4120 (MiCopyToCfgBitMap.c)
 * Callees:
 *     MiVadPureReserve @ 0x14000BFF0 (MiVadPureReserve.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiGetProtoPteAddress @ 0x14001E7D0 (MiGetProtoPteAddress.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     MiIncreaseUsedPtesCount @ 0x14003C650 (MiIncreaseUsedPtesCount.c)
 *     MiGetNextPageTable @ 0x14003DA90 (MiGetNextPageTable.c)
 *     MiGetUsedPtesHandle @ 0x14003E470 (MiGetUsedPtesHandle.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     MiMakeProtoLeafValid @ 0x1400BF71C (MiMakeProtoLeafValid.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     MiMakeSystemAddressValid @ 0x140122000 (MiMakeSystemAddressValid.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 *     MiCopyOnWrite @ 0x140126BA0 (MiCopyOnWrite.c)
 *     MiGetPrototypePteDirect @ 0x1401A6524 (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x1401A6594 (MiIsPrototypePteVadLookup.c)
 *     MiMakeDemandZeroPte @ 0x1401A65C8 (MiMakeDemandZeroPte.c)
 *     MiMakePrototypePteVadLookup @ 0x1401A6634 (MiMakePrototypePteVadLookup.c)
 *     MiCopyOnWriteCheckConditions @ 0x14026B6DC (MiCopyOnWriteCheckConditions.c)
 *     MiCommitPageTablesForVad @ 0x1404AF6B0 (MiCommitPageTablesForVad.c)
 *     MiReturnFullProcessCommitment @ 0x1404B4A78 (MiReturnFullProcessCommitment.c)
 *     MiChargeFullProcessCommitment @ 0x1405B6870 (MiChargeFullProcessCommitment.c)
 */

__int64 __fastcall MiSplitPrivatePage(ULONG_PTR a1, __int64 a2)
{
  ULONG_PTR v2; // r15
  __int64 v3; // rbx
  __int64 v4; // rbp
  unsigned __int64 v5; // r14
  __int64 v6; // r8
  int v7; // r13d
  __int64 v8; // rsi
  unsigned __int8 v9; // r12
  ULONG_PTR v10; // rcx
  unsigned __int64 NextPageTable; // rax
  __int64 v12; // r8
  volatile signed __int64 *v13; // rbx
  int v14; // esi
  unsigned __int64 ProtoPteAddress; // r15
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rbx
  unsigned int v20; // ebx
  __int64 UsedPtesHandle; // rax
  __int16 v22; // ax
  __int64 PrototypePteVadLookup; // rax
  __int64 v24; // rcx
  unsigned __int64 v25; // rcx
  int v26; // ebx
  __int64 v27; // r8
  int v29; // r15d
  __int64 v30; // rdx
  unsigned __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  _KPROCESS *v35; // rsi
  int v36; // [rsp+30h] [rbp-78h]
  int v37; // [rsp+34h] [rbp-74h]
  char v38[8]; // [rsp+38h] [rbp-70h] BYREF
  _KPROCESS *Process; // [rsp+40h] [rbp-68h]
  __int64 DemandZeroPte; // [rsp+48h] [rbp-60h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-58h]
  __int64 v42[10]; // [rsp+58h] [rbp-50h] BYREF
  int v45; // [rsp+C0h] [rbp+18h]

  v2 = a1;
  v3 = a2;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v4 = (__int64)&Process[1].IdealNode[12];
  v36 = MiVadPureReserve(a2);
  v5 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v42[0] = *(_QWORD *)(v3 + 72);
  v7 = 0;
  v45 = MiChargeFullProcessCommitment(v6, 1LL);
  v37 = 0;
  v8 = 0LL;
  v9 = MiLockWorkingSetShared((__int64)&Process[1].IdealNode[12]);
  while ( 1 )
  {
    v10 = v5;
    if ( v36 )
      break;
LABEL_11:
    MiMakeSystemAddressValid(v10, 0);
LABEL_12:
    ProtoPteAddress = MiGetProtoPteAddress(v3, v2 >> 12, 0, v42);
    DemandZeroPte = MI_READ_PTE_LOCK_FREE(v5);
    v19 = DemandZeroPte;
    if ( !DemandZeroPte )
    {
      v20 = v45;
      if ( v45 < 0 )
        goto LABEL_42;
      UsedPtesHandle = MiGetUsedPtesHandle(a1, v16, v17, v18);
      MiIncreaseUsedPtesCount(UsedPtesHandle, 1u);
      if ( v36 )
      {
        if ( !ProtoPteAddress )
          goto LABEL_46;
        v22 = MI_READ_PTE_LOCK_FREE(((ProtoPteAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        if ( (v22 & 1) == 0 && (v22 & 0x3E0) == 0 )
          goto LABEL_46;
      }
      PrototypePteVadLookup = MiMakePrototypePteVadLookup(1LL);
      DemandZeroPte = PrototypePteVadLookup;
      *(_QWORD *)v5 = PrototypePteVadLookup;
      v19 = PrototypePteVadLookup;
      if ( MiPteInShadowRange(v5) )
        MiWritePteShadow(v24, v19);
    }
    if ( (v19 & 1) != 0 )
    {
      v25 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&DemandZeroPte) >> 12) & 0xFFFFFFFFFLL)
          - 0x58000000000LL;
      if ( (*(_QWORD *)(v25 + 40) & 0x200000000000000LL) == 0
        || (*(_QWORD *)(v25 + 8) | 0x8000000000000000uLL) != ProtoPteAddress )
      {
        goto LABEL_50;
      }
      v20 = v45;
      if ( v45 < 0 )
        goto LABEL_42;
      v2 = a1;
      v26 = MiCopyOnWrite(a1);
      if ( v26 >= 0 )
        goto LABEL_47;
      if ( v8 )
        MiUnlockPageTableInternal(v4, v8);
      MiUnlockWorkingSetShared(v4, v9, v17);
      MiCopyOnWriteCheckConditions(v4, (unsigned int)v26);
      MiLockWorkingSetShared(v4);
      v3 = a2;
      v8 = 0LL;
    }
    else
    {
      if ( (v19 & 0x400) == 0
        || !(unsigned int)MiIsPrototypePteVadLookup(v19) && MiGetPrototypePteDirect(v19) != ProtoPteAddress )
      {
LABEL_50:
        v29 = 0;
        goto LABEL_51;
      }
      if ( (int)MiMakeProtoLeafValid(v5) < 0 && v19 == MI_READ_PTE_LOCK_FREE(v5) )
      {
        v20 = v45;
        if ( v45 < 0 )
        {
LABEL_42:
          if ( v8 )
            MiUnlockPageTableInternal(v4, v8);
          MiUnlockWorkingSetShared(v4, v9, v17);
          return v20;
        }
LABEL_46:
        v7 = 1;
LABEL_47:
        v29 = 1;
        v30 = *(unsigned int *)(a2 + 52);
        LODWORD(v30) = v30 & 0x7FFFFFFF;
        v31 = (((unsigned __int64)*(unsigned __int8 *)(a2 + 34) << 31) | v30) + 1;
        *(_DWORD *)(a2 + 52) ^= (v31 ^ *(_DWORD *)(a2 + 52)) & 0x7FFFFFFF;
        *(_BYTE *)(a2 + 34) = v31 >> 31;
        if ( v7 == 1 )
        {
          DemandZeroPte = MiMakeDemandZeroPte(1LL);
          *(_QWORD *)v5 = DemandZeroPte;
          if ( MiPteInShadowRange(v5) )
            MiWritePteShadow(v33, v32);
        }
LABEL_51:
        if ( v8 )
          MiUnlockPageTableInternal(v4, v8);
        MiUnlockWorkingSetShared(v4, v9, v17);
        v35 = Process;
        if ( v37 == 1 )
        {
          if ( (_InterlockedExchangeAdd64(
                  (volatile signed __int64 *)&Process[1].Affinity.Bitmap[8],
                  0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(&v35[1].Affinity.Bitmap[8]);
          KeAbPostRelease((ULONG_PTR)&v35[1].Affinity.Bitmap[8]);
          KiLeaveGuardedRegionUnsafe(CurrentThread);
        }
        if ( !v29 && v45 >= 0 )
          MiReturnFullProcessCommitment(v35, 1LL, v34);
        return 0LL;
      }
      if ( v8 )
        MiUnlockPageTableInternal(v4, v8);
      v2 = a1;
      v8 = 0LL;
      v3 = a2;
    }
  }
  NextPageTable = MiGetNextPageTable(v5, v5, 0, v9, 0, (__int64)v38);
  if ( NextPageTable )
    v8 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( v5 == NextPageTable )
    goto LABEL_12;
  if ( v8 )
    MiUnlockPageTableInternal(v4, v8);
  MiUnlockWorkingSetShared(v4, v9, v12);
  if ( v45 < 0 )
    return (unsigned int)v45;
  v37 = 1;
  --CurrentThread->SpecialApcDisable;
  v13 = (volatile signed __int64 *)&Process[1].Affinity.Bitmap[8];
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&Process[1].Affinity.Bitmap[8], 0LL);
  v14 = MiCommitPageTablesForVad(a2, v2, v2);
  if ( v14 >= 0 )
  {
    v8 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v3 = a2;
    v9 = MiLockWorkingSetShared(v4);
    v10 = v5;
    goto LABEL_11;
  }
  if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v13);
  KeAbPostRelease((ULONG_PTR)v13);
  KiLeaveGuardedRegionUnsafe(CurrentThread);
  if ( v45 >= 0 )
    MiReturnFullProcessCommitment(Process, 1LL, v27);
  return (unsigned int)v14;
}
