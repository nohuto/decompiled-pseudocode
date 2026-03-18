/*
 * XREFs of MiDeletePteList @ 0x1400C5000
 * Callers:
 *     MiDecommitPages @ 0x1400D2D20 (MiDecommitPages.c)
 * Callees:
 *     MiDecrementCloneBlockReference @ 0x1400036F4 (MiDecrementCloneBlockReference.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x1400224C0 (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KeFlushTb @ 0x140063C74 (KeFlushTb.c)
 *     MiDecrementCombinedPte @ 0x140078BE8 (MiDecrementCombinedPte.c)
 *     MiLocateCloneAddress @ 0x14007C278 (MiLocateCloneAddress.c)
 *     KeQueryActiveProcessorCountEx @ 0x140089140 (KeQueryActiveProcessorCountEx.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiReleasePageFileInfo @ 0x1400ABFD4 (MiReleasePageFileInfo.c)
 *     MiPfnShareCountIsZero @ 0x1400C6560 (MiPfnShareCountIsZero.c)
 *     KiFlushRangeWorker @ 0x1400D6990 (KiFlushRangeWorker.c)
 *     MiCaptureDirtyBitToPfn @ 0x140100BFC (MiCaptureDirtyBitToPfn.c)
 *     MiDecrementShareCount @ 0x1401055F0 (MiDecrementShareCount.c)
 *     KiIpiSendRequest @ 0x140120590 (KiIpiSendRequest.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x140143868 (KeFlushMultipleRangeCurrentTb.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeFlushCurrentTbOnly @ 0x14017BB28 (KeFlushCurrentTbOnly.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiGetContainingPageTable @ 0x14017CDC0 (MiGetContainingPageTable.c)
 *     MiTransferSoftwarePte @ 0x14017D0B8 (MiTransferSoftwarePte.c)
 *     MiBadShareCount @ 0x14017D1EC (MiBadShareCount.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     HvlNotifyLongSpinWait @ 0x1401E5050 (HvlNotifyLongSpinWait.c)
 *     HvlFlushRangeListTb @ 0x1401EB824 (HvlFlushRangeListTb.c)
 *     KiPrepareFlushParameters @ 0x140201138 (KiPrepareFlushParameters.c)
 *     MiGetPageFileReservationOffset @ 0x14021A1C8 (MiGetPageFileReservationOffset.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14021EE3C (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReduceShareCount @ 0x14021F2C8 (MiReduceShareCount.c)
 *     VmFlushTb @ 0x140251988 (VmFlushTb.c)
 *     ExFlushTb @ 0x14025D8F8 (ExFlushTb.c)
 */

void __fastcall MiDeletePteList(__int64 a1, _KPROCESS *Process, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  _WORD *v5; // r11
  __int64 v8; // r13
  char v9; // cl
  unsigned __int64 v10; // r8
  unsigned int v11; // r15d
  unsigned int v12; // ebx
  __int64 v13; // r12
  unsigned __int8 v14; // di
  ULONG ActiveProcessorCount; // eax
  int v16; // r11d
  int p_ActiveProcessors; // edx
  unsigned int v18; // r12d
  struct _KPRCB *CurrentPrcb; // rdi
  _KTHREAD *CurrentThread; // rax
  volatile _KAFFINITY_EX *v21; // rdx
  unsigned __int16 Count; // r8
  unsigned int v23; // r9d
  __int64 v24; // rcx
  int v25; // r10d
  unsigned __int16 v26; // dx
  unsigned __int64 v27; // r9
  unsigned __int64 v28; // rcx
  unsigned int v29; // ebx
  unsigned __int8 v30; // bl
  __int64 *v31; // rax
  __int64 v32; // rax
  __int64 v33; // r9
  unsigned __int64 v34; // rax
  __int64 *v35; // r15
  unsigned __int64 v36; // rdi
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // r8
  __int64 v41; // r10
  int v42; // r11d
  __int64 v43; // r14
  unsigned __int64 v44; // rbx
  struct _KEVENT *v45; // r12
  unsigned __int64 v46; // r15
  bool v47; // r12
  unsigned __int64 v48; // r11
  unsigned __int64 v49; // rbx
  int v50; // eax
  _QWORD *CloneAddress; // rax
  ULONG_PTR v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rbx
  __int64 v56; // r9
  _WORD *v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  unsigned int PageFileReservationOffset; // eax
  unsigned __int16 v61; // dx
  __int64 v62; // rcx
  __int64 v63; // r8
  bool v64; // zf
  unsigned __int64 v65; // rdx
  __int64 v66; // rdx
  signed __int32 v67[8]; // [rsp+0h] [rbp-100h] BYREF
  char v68[4]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v69; // [rsp+34h] [rbp-CCh]
  unsigned int v70; // [rsp+38h] [rbp-C8h]
  unsigned int v71; // [rsp+3Ch] [rbp-C4h]
  __int64 v72; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v73; // [rsp+48h] [rbp-B8h] BYREF
  __int64 CurrentIrql; // [rsp+50h] [rbp-B0h]
  __int64 v75; // [rsp+58h] [rbp-A8h]
  int v76; // [rsp+60h] [rbp-A0h] BYREF
  int v77; // [rsp+64h] [rbp-9Ch] BYREF
  __int64 *v78; // [rsp+68h] [rbp-98h]
  __int64 v79; // [rsp+70h] [rbp-90h]
  _KPROCESS *v80; // [rsp+78h] [rbp-88h]
  __int64 v81; // [rsp+80h] [rbp-80h]
  unsigned __int64 v82; // [rsp+88h] [rbp-78h]
  __int64 v83; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v84; // [rsp+98h] [rbp-68h]
  unsigned int v85; // [rsp+9Ch] [rbp-64h]
  __int64 v86; // [rsp+A0h] [rbp-60h] BYREF
  struct _KEVENT *v87; // [rsp+A8h] [rbp-58h]
  __int64 ContainingPageTable; // [rsp+B0h] [rbp-50h]
  _WORD v89[2]; // [rsp+C0h] [rbp-40h] BYREF
  int v90; // [rsp+C4h] [rbp-3Ch]
  _QWORD v91[21]; // [rsp+C8h] [rbp-38h] BYREF

  v4 = *(_DWORD *)(a1 + 12);
  LODWORD(v5) = 0;
  v79 = a4;
  v80 = Process;
  v70 = 0;
  v8 = 0LL;
  v81 = -1LL;
  v69 = v4;
  if ( v4 )
  {
    v9 = *(_BYTE *)(a1 + 4);
    v10 = qword_14036C218;
    if ( (v9 & 2) != 0 )
      goto LABEL_7;
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( !Process[2].ActiveProcessors.Bitmap[13] )
    {
      if ( !Process->SecurePid )
        goto LABEL_7;
      v11 = *(_DWORD *)a1;
      if ( *(_DWORD *)a1 != 1 )
        goto LABEL_9;
    }
    v10 = -1LL;
LABEL_7:
    v11 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 == 1 )
    {
      v12 = 0;
LABEL_10:
      if ( *(_BYTE *)(a1 + 5) || *(_QWORD *)(a1 + 16) > v10 )
      {
        if ( (v9 & 1) != 0 )
          KeFlushCurrentTbOnly(v11, Process, v10);
        else
          KeFlushTb(v11, v12);
        *(_BYTE *)(a1 + 5) = 0;
        goto LABEL_60;
      }
      if ( (v9 & 1) != 0 )
      {
        KeFlushMultipleRangeCurrentTb(v4, a1 + 24, v11);
LABEL_60:
        *(_BYTE *)(a1 + 4) &= ~8u;
        *(_DWORD *)(a1 + 12) = 0;
        *(_QWORD *)(a1 + 16) = 0LL;
        goto LABEL_61;
      }
      v13 = a1 + 24;
      if ( v11 == 1 && KeGetCurrentThread()->ApcState.Process->SecurePid )
      {
        v14 = 1;
      }
      else
      {
        v14 = 0;
        if ( (HvlEnlightenments & 6) == 0 )
          goto LABEL_25;
        if ( (HvlEnlightenments & 2) == 0 )
        {
          ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
          LODWORD(v5) = 0;
          if ( ActiveProcessorCount <= 1 )
            goto LABEL_25;
        }
      }
      KiPrepareFlushParameters(v11, &v86, v68);
      if ( v12 )
        p_ActiveProcessors = v16;
      else
        p_ActiveProcessors = (int)&KeGetCurrentThread()->ApcState.Process->ActiveProcessors;
      if ( (unsigned __int8)HvlFlushRangeListTb(v86, p_ActiveProcessors, (unsigned __int8)v68[0], v14, v69, a1 + 24) )
        goto LABEL_52;
      LODWORD(v5) = 0;
LABEL_25:
      v83 = a1 + 24;
      v18 = 4;
      v84 = v69;
      if ( v12 == 1 )
        v18 = -2147483644;
      v85 = v11;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xCuLL);
      CurrentPrcb = KeGetCurrentPrcb();
      if ( v12 )
      {
        v25 = 1;
        if ( (unsigned int)KeNumberProcessors_0 > 1 )
        {
LABEL_43:
          KiIpiSendRequest((_DWORD)CurrentPrcb, v25, (_DWORD)v5, (unsigned int)&v83, v69, v18);
          if ( KiFlushRangeWorker )
            KiFlushRangeWorker(&v83);
          v29 = 0;
          while ( CurrentPrcb->PacketBarrier )
          {
            if ( (++v29 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v29);
          }
          goto LABEL_51;
        }
      }
      else
      {
        _InterlockedOr(v67, 0);
        CurrentThread = CurrentPrcb->CurrentThread;
        v90 = 0;
        v21 = &CurrentThread->ApcState.Process->ActiveProcessors;
        Count = v21->Count;
        LOWORD(CurrentThread) = CurrentThread->ApcState.Process->ActiveProcessors.Size;
        v89[0] = Count;
        v89[1] = (_WORD)CurrentThread;
        if ( Count )
        {
          memmove(v91, v21->Bitmap, 8LL * Count);
          Count = v89[0];
        }
        v5 = v89;
        v23 = KiProcessorIndexToNumberMappingTable[CurrentPrcb->Number];
        v24 = v23 >> 6;
        if ( Count > (unsigned int)v24 )
        {
          v91[v24] &= ~(1LL << (v23 & 0x3F));
          Count = v89[0];
        }
        v25 = 0;
        v26 = 0;
        if ( Count )
        {
          v75 = 0x5555555555555555LL;
          do
          {
            v27 = v91[v26];
            v28 = (0x101010101010101LL
                 * ((((v27 - (v75 & (v27 >> 1))) & 0x3333333333333333LL)
                   + (((v27 - (v75 & (v27 >> 1))) >> 2) & 0x3333333333333333LL)
                   + ((((v27 - (v75 & (v27 >> 1))) & 0x3333333333333333LL)
                     + (((v27 - (v75 & (v27 >> 1))) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
            if ( (unsigned __int8)v28 > 1u
              || (_BYTE)v28 == 1 && (CurrentPrcb->Group != v26 || (v27 & CurrentPrcb->GroupSetMember) == 0) )
            {
              goto LABEL_43;
            }
          }
          while ( ++v26 < Count );
        }
      }
      if ( KiFlushRangeWorker )
        KiFlushRangeWorker(&v83);
LABEL_51:
      __writecr8((unsigned __int8)CurrentIrql);
      v13 = a1 + 24;
LABEL_52:
      v4 = v69;
      if ( VmTbFlushEnabled )
        VmFlushTb(v69, v13);
      if ( ExTbFlushActive )
      {
        v30 = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        ExFlushTb(v4, v13, v11);
        __writecr8(v30);
      }
      goto LABEL_60;
    }
LABEL_9:
    v12 = ((v9 & 8) != 0) + 1;
    goto LABEL_10;
  }
LABEL_61:
  v73 = 0LL;
  v71 = 0;
  if ( v4 )
  {
    v31 = (__int64 *)(a1 + 24);
    v75 = a1 + 24;
    do
    {
      v32 = *v31;
      v33 = (v32 & 0x3FF) + 1;
      v34 = v32 & 0xFFFFFFFFFFFFF000uLL;
      CurrentIrql = v33;
      v82 = v34;
      do
      {
        v35 = (__int64 *)(((v34 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v78 = v35;
        v36 = MI_READ_PTE_LOCK_FREE(v35) & 0xFFFFFFFFFFFFFBFEuLL | 1;
        v72 = v36;
        v43 = MI_GET_PFN_FROM_PTE(&v72, v37, v38, v39);
        v44 = *(_QWORD *)(v43 + 40);
        v45 = *(struct _KEVENT **)(qword_14036C8F8 + 8 * ((v44 >> 40) & 0x3FF));
        v87 = v45;
        if ( (v44 & 0x200000000000000LL) != 0 )
        {
          v46 = v41 | *(_QWORD *)(v43 + 8);
          v47 = (v41 & *(_QWORD *)(v43 + 8)) == 0;
          ContainingPageTable = MiGetContainingPageTable(v78);
          v49 = v48;
          MiLockPageAtDpcInline(v43);
          if ( (v36 & 0x42) != 0 )
            v49 = MiCaptureDirtyBitToPfn(v43);
          MiDecrementShareCount(v43);
          _InterlockedAnd64((volatile signed __int64 *)(v43 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v49 )
            MiReleasePageFileInfo(v87, v49, 1);
          if ( v47 )
          {
            v50 = MiDecrementCombinedPte(v46);
          }
          else
          {
            CloneAddress = MiLocateCloneAddress((__int64)v80, v46);
            v50 = MiDecrementCloneBlockReference((ULONG_PTR)CloneAddress, v52, v53);
          }
          if ( v50 == 3 )
          {
            v54 = a3;
            v55 = ContainingPageTable;
            v35 = v78;
            v72 = a3;
            ++*(_QWORD *)(v79 + 8);
          }
          else
          {
            if ( v50 == 5 )
              ++*(_QWORD *)(v79 + 16);
            v55 = ContainingPageTable;
            v54 = a3;
            v35 = v78;
            v72 = a3;
          }
        }
        else
        {
          v76 = v42;
          v55 = v44 & 0xFFFFFFFFFLL;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v43 + 24), 0x3FuLL) )
          {
            do
            {
              do
                KeYieldProcessorEx(&v76);
              while ( (*(_QWORD *)(v43 + 24) & 0x8000000000000000uLL) != 0 );
            }
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v43 + 24), 0x3FuLL) );
            v35 = v78;
          }
          v56 = *(_QWORD *)(v43 + 16);
          v57 = (_WORD *)(v43 + 16);
          *(_QWORD *)(v43 + 24) |= 0x4000000000000000uLL;
          if ( (v56 & 2) != 0 && !MI_IS_PTE_IN_WS_SWAP_SET((__int64)v45, v57) && *(_WORD *)(v43 + 32) == 1 && a3 )
          {
            *(_QWORD *)v57 &= ~2uLL;
            v73 = v56;
          }
          if ( (*(_BYTE *)(v43 + 34) & 7) != 6 )
            MiBadShareCount(v43, v57, v40);
          v58 = *(_QWORD *)(v43 + 24);
          v59 = 0x3FFFFFFFFFFFFFFFLL;
          *(_QWORD *)(v43 + 24) = v58 ^ (((v58 & 0x3FFFFFFFFFFFFFFFLL) - 1) ^ v58) & 0x3FFFFFFFFFFFFFFFLL;
          if ( (v58 & 0x3FFFFFFFFFFFFFFFLL) == 1 && (unsigned int)MiPfnShareCountIsZero(v43) == 3 )
            ++*(_QWORD *)(v79 + 8);
          _InterlockedAnd64((volatile signed __int64 *)(v43 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v72 = a3;
          if ( v73 )
          {
            PageFileReservationOffset = MiGetPageFileReservationOffset(&v73, v73, v59, v56);
            v72 = MiTransferSoftwarePte(
                    a3,
                    *((_QWORD *)&v45[233].Header.WaitListHead.Flink + (v61 >> 12)),
                    PageFileReservationOffset);
            v73 = 0LL;
          }
          _InterlockedExchangeAdd64((volatile signed __int64 *)&v80[1].Affinity.Bitmap[13], 0xFFFFFFFFFFFFFFFFuLL);
          v54 = v72;
        }
        *v35 = v54;
        if ( (unsigned int)MiPteInShadowRange(v35) )
          MiWritePteShadow(v62);
        if ( v55 != v81 )
        {
          if ( v8 )
          {
            MiLockPageAtDpcInline(v8);
            MiReduceShareCount(v8, v70);
            _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v70 = 0;
          }
          v8 = 48 * v55 - 0x58000000000LL;
          v81 = v55;
        }
        v63 = v70 + 1;
        v34 = v82 + 4096;
        ++v70;
        v64 = CurrentIrql-- == 1;
        v82 += 4096LL;
        v65 = 0xFFFFF68000000000uLL;
      }
      while ( !v64 );
      v31 = (__int64 *)(v75 + 8);
      ++v71;
      v75 += 8LL;
    }
    while ( v71 < v69 );
    if ( (_DWORD)v63 )
    {
      v77 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v77);
          while ( (*(_QWORD *)(v8 + 24) & 0x8000000000000000uLL) != 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) );
        v63 = v70;
      }
      if ( (*(_BYTE *)(v8 + 34) & 7) != 6 )
        MiBadShareCount(v8, v65, v63);
      v66 = (*(_QWORD *)(v8 + 24) & 0x3FFFFFFFFFFFFFFFLL) - (unsigned int)v63;
      *(_QWORD *)(v8 + 24) ^= (*(_QWORD *)(v8 + 24) ^ v66) & 0x3FFFFFFFFFFFFFFFLL;
      if ( !v66 )
        MiPfnShareCountIsZero(v8);
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
  }
}
