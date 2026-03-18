/*
 * XREFs of MiCopyToUserVa @ 0x140034630
 * Callers:
 *     MiCopyToCfgBitMap @ 0x1404D3670 (MiCopyToCfgBitMap.c)
 * Callees:
 *     MiReduceWs @ 0x14000B908 (MiReduceWs.c)
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiLockPageAndSetDirty @ 0x140032380 (MiLockPageAndSetDirty.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MiMakeSystemAddressValid @ 0x14003D1A0 (MiMakeSystemAddressValid.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x140057900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiCopyOnWriteEx @ 0x140059760 (MiCopyOnWriteEx.c)
 *     MiReleasePtes @ 0x140074F70 (MiReleasePtes.c)
 *     MiReservePtes @ 0x140099750 (MiReservePtes.c)
 *     MiAgeWorkingSet @ 0x14009C900 (MiAgeWorkingSet.c)
 *     MiLocateCloneAddress @ 0x1400EA120 (MiLocateCloneAddress.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1400ED258 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400ED9A0 (MiMapPageInHyperSpaceWorker.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     MiForcedTrim @ 0x14021D544 (MiForcedTrim.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiChargeFullProcessCommitment @ 0x140495E90 (MiChargeFullProcessCommitment.c)
 *     MiReturnFullProcessCommitment @ 0x140573D78 (MiReturnFullProcessCommitment.c)
 */

__int64 __fastcall MiCopyToUserVa(unsigned __int64 a1, __int64 a2, const void *a3, size_t a4)
{
  _KPROCESS *Process; // r13
  __int64 *v5; // r12
  __int64 SharedVm; // rbx
  KIRQL v7; // si
  __int64 PteShadow; // rax
  _DWORD *v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r15
  __int64 v13; // r14
  __int64 v14; // rbx
  __int64 CloneAddress; // rax
  int v16; // r14d
  _DWORD *v17; // rax
  int v18; // ebx
  __int64 v19; // rbx
  __int64 v20; // rax
  int v21; // eax
  unsigned __int64 v22; // rbx
  __int64 v23; // r12
  __int64 ValidPte; // rax
  __int64 v25; // rdx
  struct _KTHREAD *CurrentThread; // rbx
  int Blink_low_high; // eax
  unsigned __int64 v28; // r8
  unsigned __int64 v29; // r8
  char v30; // al
  char v31; // al
  _DWORD *v32; // rax
  int v34; // [rsp+30h] [rbp-58h]
  _QWORD v35[10]; // [rsp+38h] [rbp-50h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]
  int v37; // [rsp+90h] [rbp+8h]

  v37 = a1;
  Process = KeGetCurrentThread()->ApcState.Process;
  v35[1] = Process;
  v5 = (__int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v34 = 0;
LABEL_2:
  SharedVm = MiGetSharedVm(&Process[1].IdealNode[12]);
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  *(_DWORD *)(SharedVm + 4) = 0;
  do
  {
    while ( 1 )
    {
      MiMakeSystemAddressValid((ULONG_PTR)v5, 1);
      PteShadow = *v5;
      if ( (unsigned __int64)v5 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v5 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow(v5, *v5);
      v35[0] = PteShadow;
      if ( (PteShadow & 1) == 0 )
      {
        MiPreUnlockWorkingSetExclusive(&Process[1].IdealNode[12], v7);
        v9 = (_DWORD *)MiGetSharedVm(&Process[1].IdealNode[12]);
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v9, retaddr);
        else
          *v9 = 0;
        __writecr8(v7);
        goto LABEL_2;
      }
      v12 = MI_GET_PAGE_FRAME_FROM_PTE(v35);
      v13 = 48 * v12 - 0x58000000000LL;
      if ( (*(_QWORD *)(v13 + 40) & 0x200000000000000LL) == 0 )
        goto LABEL_30;
      v14 = 0LL;
      if ( *(__int64 *)(v13 + 8) >= 0 )
        break;
      if ( !Process[1].Affinity.Bitmap[12] )
        break;
      CloneAddress = MiLocateCloneAddress(Process, *(_QWORD *)(v13 + 8) | 0x8000000000000000uLL, v10, v11);
      v14 = CloneAddress;
      if ( !CloneAddress )
        break;
      if ( *(_QWORD *)(*(_QWORD *)&Process[1].IdealGlobalNode + 240LL) <= *(_QWORD *)(CloneAddress + 72) )
      {
        v14 = 0LL;
        break;
      }
      v16 = v34;
      if ( v34 )
        break;
      MiPreUnlockWorkingSetExclusive(&Process[1].IdealNode[12], v7);
      v17 = (_DWORD *)MiGetSharedVm(&Process[1].IdealNode[12]);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v17, retaddr);
      else
        *v17 = 0;
      __writecr8(v7);
      v18 = MiChargeFullProcessCommitment(Process, 1LL);
      if ( v18 < 0 )
        goto LABEL_57;
      v34 = 1;
      v19 = MiGetSharedVm(&Process[1].IdealNode[12]);
      v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v19);
      *(_DWORD *)(v19 + 4) = 0;
    }
  }
  while ( (unsigned int)MiCopyOnWriteEx(v37, (_DWORD)v5, -1, v7, 0) != 1 );
  v20 = *v5;
  if ( (unsigned __int64)v5 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v5 <= 0xFFFFF6FB7DBED7F8uLL )
    v20 = MiReadPteShadow(v5, *v5);
  v35[0] = v20;
  v12 = MI_GET_PAGE_FRAME_FROM_PTE(v35);
  v13 = 48 * v12 - 0x58000000000LL;
  v21 = v34;
  if ( v14 )
    v21 = 0;
  v34 = v21;
LABEL_30:
  v22 = MiReservePtes(&qword_140389360, 1LL);
  if ( v22 )
  {
    v23 = (__int64)(v22 << 25) >> 16;
    ValidPte = MiMakeValidPte(v22, v12, 2684354564LL);
    v35[0] = ValidPte;
    *(_QWORD *)v22 = ValidPte;
    if ( v22 >= 0xFFFFF6FB7DBED000uLL && v22 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow(v22, ValidPte);
  }
  else
  {
    v23 = MiMapPageInHyperSpaceWorker(v12, 0LL, 0x80000000LL);
  }
  memmove((void *)(v23 + (v37 & 0xFFF)), a3, a4);
  if ( v22 )
  {
    MiReleasePtes(&qword_140389360, v22, 1LL);
  }
  else
  {
    LOBYTE(v25) = 17;
    MiUnmapPageInHyperSpaceWorker(v23, v25, 0x80000000LL);
  }
  MiLockPageAndSetDirty(v13, 1);
  CurrentThread = KeGetCurrentThread();
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0x400000) == 0 )
  {
    Blink_low_high = HIBYTE(LODWORD(Process[2].Header.WaitListHead.Blink));
    if ( (Blink_low_high & 8) != 0 )
    {
      BYTE3(Process[2].Header.WaitListHead.Blink) = Blink_low_high & 0xF7;
      _interlockedbittestandset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x16u);
      if ( !MiForcedTrim(&Process[1].IdealNode[12], v7) && ((__int64)Process[2].Header.WaitListHead.Blink & 0x40) != 0 )
      {
        v28 = *(_QWORD *)&Process[1].Spare2[31];
        if ( v28 > *(_QWORD *)&Process[1].Spare2[63] )
        {
          if ( (*(_DWORD *)&Process[1].IdealNode[14] & 0xF) != 0 )
            v29 = v28 - 1;
          else
            v29 = *(_QWORD *)&Process[1].Spare2[63];
          MiReduceWs((__int64)&Process[1].IdealNode[12], v7, v29);
        }
      }
    }
    v30 = BYTE3(Process[2].Header.WaitListHead.Blink);
    if ( (v30 & 4) != 0 )
    {
      BYTE3(Process[2].Header.WaitListHead.Blink) = v30 & 0xFB;
      _interlockedbittestandset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x16u);
      MiAgeWorkingSet(
        &Process[1].IdealNode[12],
        v7,
        1LL,
        *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(qword_140388AF0
                                                    + 8LL * *((unsigned __int16 *)&Process[1].SecureState.Flags + 2))
                                        + 5680LL)
                            + 2354LL));
    }
    v31 = BYTE3(Process[2].Header.WaitListHead.Blink);
    if ( (v31 & 0x10) != 0 )
    {
      BYTE3(Process[2].Header.WaitListHead.Blink) = v31 & 0xEF;
      _interlockedbittestandset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x16u);
      MiReduceWs((__int64)&Process[1].IdealNode[12], v7, *(_QWORD *)&Process[1].Spare2[63]);
    }
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0x400000) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x16u);
  }
  v32 = (_DWORD *)MiGetSharedVm(&Process[1].IdealNode[12]);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v32, retaddr);
  else
    *v32 = 0;
  __writecr8(v7);
  v18 = 0;
  v16 = v34;
LABEL_57:
  if ( v16 )
    MiReturnFullProcessCommitment(Process, 1LL);
  return (unsigned int)v18;
}
