/*
 * XREFs of MiCopyToUserVa @ 0x1400A6BD0
 * Callers:
 *     MiCopyToCfgBitMap @ 0x1405145B0 (MiCopyToCfgBitMap.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiLocateCloneAddress @ 0x14007C278 (MiLocateCloneAddress.c)
 *     MiSimpleAging @ 0x14007EAB8 (MiSimpleAging.c)
 *     MiReduceWs @ 0x14007F54C (MiReduceWs.c)
 *     MiTrimWorkingSet @ 0x14007F5E8 (MiTrimWorkingSet.c)
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MiReleasePtes @ 0x1400A23A0 (MiReleasePtes.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiMakeSystemAddressValid @ 0x1400D0A70 (MiMakeSystemAddressValid.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x1400D6900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiAgeWorkingSet @ 0x1400D81E0 (MiAgeWorkingSet.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     MiReservePtes @ 0x1400F7CA0 (MiReservePtes.c)
 *     MiCopyOnWriteEx @ 0x1400FB340 (MiCopyOnWriteEx.c)
 *     MiLockPageAndSetDirty @ 0x140100B80 (MiLockPageAndSetDirty.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140103140 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1401038C0 (MiMapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     MiForcedTrim @ 0x140214F8C (MiForcedTrim.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14025C828 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiReturnFullProcessCommitment @ 0x140499FA8 (MiReturnFullProcessCommitment.c)
 *     MiChargeFullProcessCommitment @ 0x14051D550 (MiChargeFullProcessCommitment.c)
 */

__int64 __fastcall MiCopyToUserVa(ULONG_PTR a1, __int64 a2, const void *a3, size_t a4)
{
  _KPROCESS *Process; // r13
  ULONG_PTR v5; // r15
  int v6; // r12d
  __int64 SharedVm; // rbx
  KIRQL v8; // al
  KIRQL v9; // si
  __int64 v10; // rbx
  unsigned __int64 v11; // r15
  __int64 v12; // r14
  _QWORD *v13; // rbx
  _QWORD *CloneAddress; // rax
  _DWORD *v15; // rax
  int v16; // ebx
  __int64 v17; // rbx
  unsigned __int64 v18; // rbx
  __int64 v19; // r12
  __int64 v20; // rcx
  __int64 v21; // rdx
  char v22; // al
  unsigned __int64 v23; // r14
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // r14
  unsigned int v26; // ebx
  unsigned __int64 i; // rdx
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rax
  char v30; // al
  char v31; // al
  char v32; // al
  _DWORD *v33; // rax
  int v35; // [rsp+30h] [rbp-58h]
  unsigned __int64 ValidPte; // [rsp+38h] [rbp-50h] BYREF
  ULONG_PTR v37; // [rsp+40h] [rbp-48h]
  _KPROCESS *v38; // [rsp+48h] [rbp-40h]
  void *retaddr; // [rsp+88h] [rbp+0h]

  Process = KeGetCurrentThread()->ApcState.Process;
  v38 = Process;
  v5 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v37 = v5;
  v6 = 0;
  v35 = 0;
  SharedVm = MiGetSharedVm(&Process[1].IdealNode[12]);
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  *(_DWORD *)(SharedVm + 4) = 0;
  while ( 2 )
  {
    v9 = v8;
    while ( 1 )
    {
      while ( 1 )
      {
        MiMakeSystemAddressValid(v5, 1);
        ValidPte = MI_READ_PTE_LOCK_FREE(v5);
        if ( (ValidPte & 1) != 0 )
          break;
        MiUnlockWorkingSetExclusive(&Process[1].IdealNode[12], v9);
        v10 = MiGetSharedVm(&Process[1].IdealNode[12]);
        v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v10);
        *(_DWORD *)(v10 + 4) = 0;
      }
      v11 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&ValidPte) >> 12) & 0xFFFFFFFFFLL;
      v12 = 48 * v11 - 0x58000000000LL;
      if ( (*(_QWORD *)(v12 + 40) & 0x200000000000000LL) == 0 )
        goto LABEL_21;
      v13 = 0LL;
      if ( *(__int64 *)(v12 + 8) >= 0 )
        goto LABEL_17;
      if ( !Process[1].Affinity.Bitmap[12] )
        goto LABEL_17;
      CloneAddress = MiLocateCloneAddress((__int64)Process, *(_QWORD *)(v12 + 8) | 0x8000000000000000uLL);
      v13 = CloneAddress;
      if ( !CloneAddress )
        goto LABEL_17;
      if ( *(_QWORD *)(*(_QWORD *)&Process[1].IdealGlobalNode + 240LL) <= CloneAddress[9] )
      {
        v13 = 0LL;
        goto LABEL_17;
      }
      if ( !v6 )
        break;
LABEL_17:
      v5 = v37;
      if ( (unsigned int)MiCopyOnWriteEx(a1, 0) == 1 )
      {
        ValidPte = MI_READ_PTE_LOCK_FREE(v5);
        v11 = MI_GET_PAGE_FRAME_FROM_PTE(&ValidPte);
        v12 = 48 * v11 - 0x58000000000LL;
        if ( v13 )
          v6 = 0;
        v35 = v6;
LABEL_21:
        v18 = MiReservePtes(&qword_14036D0A0, 1LL);
        if ( v18 )
        {
          v19 = (__int64)(v18 << 25) >> 16;
          ValidPte = MiMakeValidPte(v18, v11, -1610612732);
          *(_QWORD *)v18 = ValidPte;
          if ( (unsigned int)MiPteInShadowRange(v18) )
            MiWritePteShadow(v20);
        }
        else
        {
          v19 = MiMapPageInHyperSpaceWorker(v11, 0LL, 0x80000000LL);
        }
        memmove((void *)(v19 + (a1 & 0xFFF)), a3, a4);
        if ( v18 )
        {
          MiReleasePtes((__int64)&qword_14036D0A0, (_QWORD *)v18, 1u);
        }
        else
        {
          LOBYTE(v21) = 17;
          MiUnmapPageInHyperSpaceWorker(v19, v21, 0x80000000LL);
        }
        MiLockPageAndSetDirty(v12, 1LL);
        v22 = BYTE3(Process[2].Header.WaitListHead.Blink);
        if ( (v22 & 0x10) == 0 )
        {
          if ( (v22 & 8) != 0 )
          {
            BYTE3(Process[2].Header.WaitListHead.Blink) = v22 & 0xE7 | 0x10;
            if ( ((MiForcedTrim(&Process[1].IdealNode[12], v9) + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0
              && ((__int64)Process[2].Header.WaitListHead.Blink & 0x40) != 0 )
            {
              v23 = *(_QWORD *)&Process[1].Spare2[31];
              v24 = *(_QWORD *)&Process[1].Spare2[63];
              if ( v23 > v24 )
              {
                if ( (*(_DWORD *)&Process[1].IdealNode[14] & 0xF) != 0 )
                {
                  v25 = v23 - 1;
                  v26 = 7;
                  for ( i = *(_QWORD *)&Process[1].Spare2[47]; i > v25; i = *(_QWORD *)&Process[1].Spare2[47] )
                  {
                    v28 = i - v25;
                    if ( v26 )
                    {
                      v29 = v28;
                      v28 = *(&Process[1].CycleTime + v26);
                      if ( v28 > v29 )
                        v28 = v29;
                    }
                    if ( v28 )
                    {
                      MiTrimWorkingSet((__int64)&Process[1].IdealNode[12], v28, v9, v26, 0);
                      if ( !v26 )
                        break;
                    }
                    --v26;
                  }
                  MiSimpleAging((__int64)&Process[1].IdealNode[12], v9);
                }
                else
                {
                  MiReduceWs((__int64)&Process[1].IdealNode[12], v9, v24);
                }
              }
            }
          }
          v30 = BYTE3(Process[2].Header.WaitListHead.Blink);
          if ( (v30 & 4) != 0 )
          {
            BYTE3(Process[2].Header.WaitListHead.Blink) = v30 & 0xEB | 0x10;
            MiAgeWorkingSet(
              &Process[1].IdealNode[12],
              v9,
              1LL,
              *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(qword_14036C8F8 + 8LL * WORD2(Process[1].SecurePid)) + 5544LL)
                                  + 2354LL));
          }
          v31 = BYTE3(Process[2].Header.WaitListHead.Blink);
          if ( (v31 & 0x20) != 0 )
          {
            BYTE3(Process[2].Header.WaitListHead.Blink) = v31 & 0xCF | 0x10;
            MiReduceWs((__int64)&Process[1].IdealNode[12], v9, *(_QWORD *)&Process[1].Spare2[63]);
          }
          v32 = BYTE3(Process[2].Header.WaitListHead.Blink);
          if ( (v32 & 0x10) != 0 )
            BYTE3(Process[2].Header.WaitListHead.Blink) = v32 & 0xEF;
        }
        v33 = (_DWORD *)MiGetSharedVm(&Process[1].IdealNode[12]);
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v33, retaddr);
        else
          *v33 = 0;
        __writecr8(v9);
        v16 = 0;
        v6 = v35;
        goto LABEL_53;
      }
    }
    MiPreUnlockWorkingSetExclusive(&Process[1].IdealNode[12], v9);
    v15 = (_DWORD *)MiGetSharedVm(&Process[1].IdealNode[12]);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v15, retaddr);
    else
      *v15 = 0;
    __writecr8(v9);
    v16 = MiChargeFullProcessCommitment(Process, 1LL);
    if ( v16 >= 0 )
    {
      v6 = 1;
      v35 = 1;
      v17 = MiGetSharedVm(&Process[1].IdealNode[12]);
      v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v17);
      *(_DWORD *)(v17 + 4) = 0;
      v5 = v37;
      continue;
    }
    break;
  }
LABEL_53:
  if ( v6 )
    MiReturnFullProcessCommitment(Process);
  return (unsigned int)v16;
}
