/*
 * XREFs of MiDeleteSystemPagableVm @ 0x140026510
 * Callers:
 *     MmFreePoolMemory @ 0x140009F80 (MmFreePoolMemory.c)
 *     MiDeleteBootRange @ 0x140178A94 (MiDeleteBootRange.c)
 *     MiDeleteSessionPoolRange @ 0x14025BEE8 (MiDeleteSessionPoolRange.c)
 *     MmFreeSpecialPool @ 0x14025CAE4 (MmFreeSpecialPool.c)
 *     MiUnloadSystemImage @ 0x1405BCA9C (MiUnloadSystemImage.c)
 *     MiUseLargeDriverPage @ 0x1405F83BC (MiUseLargeDriverPage.c)
 *     MiFreeInitializationCode @ 0x1405F84EC (MiFreeInitializationCode.c)
 *     MmReturnChargesToLockPagedPool @ 0x14074DB80 (MmReturnChargesToLockPagedPool.c)
 * Callees:
 *     MiRemoveWsle @ 0x14000F040 (MiRemoveWsle.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     MiInsertTbFlushEntry @ 0x140026270 (MiInsertTbFlushEntry.c)
 *     MiDeleteValidSystemPage @ 0x140028710 (MiDeleteValidSystemPage.c)
 *     MiWorkingSetIsContended @ 0x14004EA30 (MiWorkingSetIsContended.c)
 *     MiPageTableLockIsContended @ 0x14004EA5C (MiPageTableLockIsContended.c)
 *     MiUnlockWsle @ 0x14004EB38 (MiUnlockWsle.c)
 *     MiReleasePageFileSpace @ 0x140051890 (MiReleasePageFileSpace.c)
 *     MiLockTransitionLeafPage @ 0x14005253C (MiLockTransitionLeafPage.c)
 *     MiDeleteTransitionPte @ 0x140052AA8 (MiDeleteTransitionPte.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140062834 (MiPteHasShadow.c)
 *     KxWaitForLockChainValid @ 0x1400889A0 (KxWaitForLockChainValid.c)
 *     ExAcquireSpinLockShared @ 0x14008E460 (ExAcquireSpinLockShared.c)
 *     KeShouldYieldProcessor @ 0x1400A9D70 (KeShouldYieldProcessor.c)
 *     MiDecrementCombinedPte @ 0x1400AD0F8 (MiDecrementCombinedPte.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x1400BC2D0 (MI_PROTO_FORMAT_COMBINED.c)
 *     EtwTraceKernelEvent @ 0x1400C1C38 (EtwTraceKernelEvent.c)
 *     MiPerformSafePdeWrite @ 0x1400CD48C (MiPerformSafePdeWrite.c)
 *     KxAcquireQueuedSpinLock @ 0x1400E01A0 (KxAcquireQueuedSpinLock.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     MiLockPageTableInternal @ 0x140120C90 (MiLockPageTableInternal.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MiGetWsleContents @ 0x140125350 (MiGetWsleContents.c)
 *     MI_WSLE_LOG_ACCESS @ 0x14012A21C (MI_WSLE_LOG_ACCESS.c)
 *     MiReturnSystemCharges @ 0x1401377CC (MiReturnSystemCharges.c)
 *     MiWriteWsle @ 0x14013FAB0 (MiWriteWsle.c)
 *     HvlNotifyLongSpinWait @ 0x14015AFE0 (HvlNotifyLongSpinWait.c)
 *     MiIsPfnSystemCharged @ 0x1401630BC (MiIsPfnSystemCharged.c)
 *     MiImageProtoChargedCommit @ 0x14016A0E4 (MiImageProtoChargedCommit.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MiGetPteTimeStamp @ 0x1401A650C (MiGetPteTimeStamp.c)
 *     MiGetPrototypePteDirect @ 0x1401A6524 (MiGetPrototypePteDirect.c)
 *     MiUpdatePageFileHighInPte @ 0x1401A6710 (MiUpdatePageFileHighInPte.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140242518 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     MiDriverPageIsDangling @ 0x140255CBC (MiDriverPageIsDangling.c)
 */

__int64 __fastcall MiDeleteSystemPagableVm(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        char a5,
        _QWORD *a6)
{
  _QWORD *v6; // rsi
  __int64 v7; // r13
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // r12
  char v11; // dl
  int v12; // r11d
  __int64 v13; // r15
  char v14; // r9
  __int64 v15; // r8
  __int64 v16; // rax
  int v17; // r14d
  unsigned __int8 v18; // dl
  unsigned __int64 v19; // rbx
  LONG *v20; // rbx
  KIRQL v21; // al
  signed __int64 v22; // rdx
  unsigned __int64 Process; // rcx
  __int64 v24; // r9
  int v25; // r10d
  __int64 v26; // r14
  unsigned __int64 v27; // rsi
  __int64 v28; // r8
  __int64 v29; // rax
  unsigned __int8 v30; // dl
  struct _KPRCB *v31; // rax
  signed __int64 v32; // rdx
  struct _KPRCB *CurrentPrcb; // rax
  struct _KPRCB *v34; // rcx
  _KLOCK_QUEUE_HANDLE *SelfmapLockHandle; // rcx
  _KLOCK_QUEUE_HANDLE *v36; // rcx
  char v37; // bl
  unsigned __int64 v38; // rcx
  volatile signed __int32 *v39; // rdi
  bool v40; // zf
  unsigned __int32 v41; // eax
  __int64 v42; // rax
  unsigned __int64 v43; // rcx
  unsigned int v44; // ebx
  unsigned __int8 v45; // cl
  _KLOCK_QUEUE_HANDLE *v46; // rbx
  struct _KPRCB *v47; // rbx
  __int64 Next; // rax
  int v49; // eax
  __int64 v50; // r12
  volatile signed __int32 *v51; // r8
  unsigned __int32 v52; // eax
  volatile signed __int32 v53; // ett
  __int64 v54; // rcx
  __int64 v55; // r8
  unsigned __int64 v56; // r8
  __int64 v57; // rax
  __int64 v58; // r8
  signed __int64 j; // rax
  __int64 v60; // rax
  __int64 v61; // rdx
  unsigned __int64 v62; // r8
  unsigned __int64 v63; // r10
  unsigned __int64 v64; // r11
  unsigned __int64 v65; // r9
  unsigned __int64 v66; // r14
  unsigned __int64 v67; // rdx
  __int64 v68; // rax
  __int64 v69; // r9
  __int64 v70; // rbx
  __int64 v71; // rcx
  __int64 v72; // rdi
  __int64 v73; // rcx
  unsigned __int64 v74; // rbx
  unsigned __int64 v75; // rdx
  __int64 v76; // r8
  __int64 v77; // rax
  __int64 v78; // r8
  char v79; // r15
  unsigned __int64 v80; // rdx
  BOOL v81; // edi
  unsigned __int64 v82; // r8
  __int64 v83; // rax
  __int64 v84; // r8
  __int64 v85; // r9
  int v86; // esi
  char WsleContents; // cl
  unsigned __int64 v88; // rdx
  unsigned __int64 v89; // rax
  __int64 v90; // r8
  __int64 v91; // rax
  __int64 v92; // rcx
  __int64 v93; // rcx
  __int64 v94; // r8
  unsigned __int64 v95; // r9
  unsigned __int64 v96; // r11
  unsigned __int64 v97; // rdx
  __int64 v98; // rax
  unsigned __int64 v99; // rcx
  __int64 v100; // rax
  _DWORD *v101; // r10
  __int64 v102; // r13
  unsigned __int64 v103; // r9
  __int64 v104; // rdx
  __int64 v105; // rax
  int v106; // eax
  char v107; // cl
  int v108; // edx
  __int64 v109; // rax
  __int64 v110; // rdx
  __int64 v111; // rdx
  __int64 v112; // r9
  __int64 PrototypePteDirect; // rax
  __int64 v114; // rbx
  __int64 v115; // rax
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 v118; // r10
  __int64 v119; // r10
  __int64 v120; // r10
  __int64 v121; // rdx
  __int64 v122; // rcx
  bool v123; // cf
  __int64 v124; // rcx
  __int64 v125; // r8
  __int64 v126; // r8
  signed __int32 v128[8]; // [rsp+0h] [rbp-100h] BYREF
  __int64 updated; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v130; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v131; // [rsp+40h] [rbp-C0h]
  int v132; // [rsp+48h] [rbp-B8h]
  BOOL v133; // [rsp+4Ch] [rbp-B4h]
  int v134; // [rsp+50h] [rbp-B0h]
  BOOL v135; // [rsp+54h] [rbp-ACh]
  __int64 v136; // [rsp+58h] [rbp-A8h]
  _QWORD *v137; // [rsp+60h] [rbp-A0h]
  int v138; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v139; // [rsp+70h] [rbp-90h] BYREF
  __int64 v140; // [rsp+78h] [rbp-88h]
  __int64 CurrentIrql; // [rsp+80h] [rbp-80h]
  _QWORD v142[3]; // [rsp+88h] [rbp-78h] BYREF
  __int64 i; // [rsp+A0h] [rbp-60h]
  __int64 v144; // [rsp+A8h] [rbp-58h]
  signed __int64 v145; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v146; // [rsp+B8h] [rbp-48h]
  __int64 v147; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v148; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v149; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v150; // [rsp+D8h] [rbp-28h]
  __int64 v151; // [rsp+E0h] [rbp-20h]
  _QWORD v152[3]; // [rsp+E8h] [rbp-18h] BYREF
  int v153; // [rsp+100h] [rbp+0h] BYREF
  __int16 v154; // [rsp+104h] [rbp+4h]
  __int64 v155; // [rsp+108h] [rbp+8h]
  __int64 v156; // [rsp+110h] [rbp+10h]
  __int64 v157; // [rsp+118h] [rbp+18h]
  _QWORD v158[4]; // [rsp+1C0h] [rbp+C0h] BYREF
  void *retaddr; // [rsp+228h] [rbp+128h]

  v6 = a6;
  v144 = a1;
  v147 = a2;
  v7 = a1;
  v131 = a3;
  v137 = a6;
  v135 = 0;
  v9 = a3;
  if ( a2 )
    v135 = (*(_DWORD *)(a2 + 56) & 0x800) != 0;
  v133 = 0;
  v10 = 0LL;
  v11 = *(_BYTE *)(a1 + 184);
  v12 = 0;
  v13 = 0LL;
  v14 = v11 & 7;
  v140 = 0LL;
  v15 = (__int64)(a3 << 25) >> 16;
  v134 = 0;
  if ( (unsigned __int8)((v11 & 7) - 3) > 1u )
  {
    if ( (a5 & 2) != 0 )
      v133 = dword_1403CBF28 != 0;
    v12 = 2;
    v134 = 2;
  }
  v16 = *(_QWORD *)(qword_1403CBD88 + 8LL * *(unsigned __int16 *)(a1 + 174));
  v156 = 0LL;
  v157 = 0LL;
  v17 = a5 & 8;
  v136 = v16;
  v132 = v17;
  v155 = 20LL;
  v153 = v12;
  v154 = 0;
  if ( (a5 & 8) == 0 && (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
  {
    v142[0] = 0LL;
    v142[1] = v15;
    v142[2] = (unsigned int)a4;
    if ( v14 == 4 )
    {
      v142[0] = 6LL;
    }
    else if ( v14 == 3 )
    {
      v142[0] = 4LL;
    }
    else
    {
      v142[0] = v142[0] & 0xFFF0000000000007uLL | (16
                                                 * (KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] & 0xFFFFFFFFFFFFLL)) | 7;
    }
    v152[1] = 24LL;
    v152[0] = v142;
    EtwTraceKernelEvent((unsigned int)v152, 1, 536870913, 633, 289413890);
    v11 = *(_BYTE *)(v7 + 184);
  }
  v18 = v11 & 7;
  v19 = v9 + 8 * a4;
  v130 = v19;
  if ( v18 < 6u )
  {
    v20 = &dword_1403CCD40;
    if ( v18 != 2 )
      v20 = (LONG *)(v7 + 192);
    v21 = ExAcquireSpinLockShared(v20);
    if ( v20[1] )
      _InterlockedExchange(v20 + 1, 0);
    v19 = v130;
    LOBYTE(CurrentIrql) = v21;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
  }
  if ( v9 >= v19 )
    goto LABEL_294;
  do
  {
    if ( v10 )
    {
      if ( (v9 & 0xFFF) != 0 )
        goto LABEL_140;
      MiFlushTbList(&v153);
      MiUnlockPageTableInternal(v7, v10);
    }
    v146 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v148 = v146;
    v149 = ((v146 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v150 = ((v149 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v151 = ((v150 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v10 = 0xFFFFF6FB7DBEDF68uLL;
    MiLockPageTableInternal(v7, 0xFFFFF6FB7DBEDF68uLL, 0LL);
    v25 = 2;
    v26 = 2LL;
    for ( i = 2LL; ; i = v26 )
    {
      v27 = *(&v148 + v26);
      v28 = *(_QWORD *)v27;
      if ( v27 >= 0xFFFFF6FB7DBED000uLL
        && v27 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow(Process, v22, v28, v24) )
      {
        if ( (v28 & 1) == 0 )
          break;
        if ( (v28 & 0x20) == 0 || (v28 & 0x42) == 0 )
        {
          Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
          v22 = *(_QWORD *)(Process + 1544);
          if ( v22 )
          {
            v29 = *(_QWORD *)(v22 + 8 * ((v27 >> 3) & 0x1FF));
            v22 = v28 | 0x20;
            Process = (unsigned __int8)v29;
            LOBYTE(Process) = v29 & 0x20;
            if ( (v29 & 0x20) == 0 )
              v22 = v28;
            v28 = v22;
            if ( (v29 & 0x42) != 0 )
              v28 = v22 | 0x42;
          }
        }
      }
      if ( (v28 & 1) == 0 || (v28 & 0x80u) != 0LL )
        break;
      if ( (v28 & 0x20) == 0 )
      {
        MiPerformSafePdeWrite(Process, v27, v28, 1LL);
        v25 = 2;
      }
      if ( v27 != v10 )
      {
        v30 = *(_BYTE *)(v7 + 184) & 7;
        if ( v27 == 0xFFFFF6FB7DBEDF68uLL )
        {
          if ( v30 )
          {
            if ( v30 == 7 )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              CurrentPrcb->SelfmapLockHandle[1].LockQueue.Lock = (unsigned __int64 *volatile)&unk_1403CBCE8;
              CurrentPrcb->SelfmapLockHandle[1].LockQueue.Next = 0LL;
              KxAcquireQueuedSpinLock(&CurrentPrcb->SelfmapLockHandle[1], &unk_1403CBCE8);
            }
            else
            {
              v34 = KeGetCurrentPrcb();
              if ( v30 == 5 )
              {
                SelfmapLockHandle = v34->SelfmapLockHandle;
                SelfmapLockHandle->LockQueue.Lock = (unsigned __int64 *volatile)&unk_1403CBCE0;
                SelfmapLockHandle->LockQueue.Next = 0LL;
                KxAcquireQueuedSpinLock(SelfmapLockHandle, &unk_1403CBCE0);
              }
              else
              {
                v36 = &v34->SelfmapLockHandle[3];
                v36->LockQueue.Lock = (unsigned __int64 *volatile)&unk_1403CBCF8;
                v36->LockQueue.Next = 0LL;
                KxAcquireQueuedSpinLock(v36, &unk_1403CBCF8);
              }
            }
          }
          else
          {
            v31 = KeGetCurrentPrcb();
            v31->SelfmapLockHandle[2].LockQueue.Lock = (unsigned __int64 *volatile)(v7 + 176);
            v31->SelfmapLockHandle[2].LockQueue.Next = 0LL;
            KxAcquireQueuedSpinLock(&v31->SelfmapLockHandle[2], v7 + 176);
          }
        }
        else
        {
          if ( v30 && v27 >= 0xFFFFF6FB7DBED000uLL && v27 <= 0xFFFFF6FB7DBEDFFFuLL )
          {
            v37 = (2 * ((__int64)(v27 + 0x90482413000LL) >> 3)) & 0x1F;
            v38 = (unsigned __int64)(2 * (unsigned int)((__int64)(v27 + 0x90482413000LL) >> 3)) >> 5;
            if ( v30 < 2u )
              v39 = (volatile signed __int32 *)(v7 + 4 * v38 + 4872);
            else
              v39 = (volatile signed __int32 *)&MiState + v38 + 617;
            LODWORD(v28) = *v39;
            while ( 1 )
            {
              v24 = (unsigned int)(v25 << v37);
              while ( (((unsigned int)v28 >> v37) & 1) == 0 )
              {
                v32 = ~(_DWORD)v24 & ((unsigned int)v28 | (1 << v37));
                v41 = _InterlockedCompareExchange(v39, v32, v28);
                v40 = (_DWORD)v28 == v41;
                v28 = v41;
                if ( v40 )
                  goto LABEL_93;
              }
              if ( (((unsigned int)v28 >> v37) & 2) != 0 )
              {
                v138 = 0;
                do
                {
                  KeYieldProcessorEx(&v138);
                  LODWORD(v28) = *v39;
                }
                while ( (((unsigned __int32)*v39 >> v37) & 1) != 0 );
                v25 = 2;
              }
              else
              {
                LODWORD(v28) = _InterlockedCompareExchange(v39, v28 | (v25 << v37), v28);
              }
            }
          }
          v32 = *(_QWORD *)v27;
          if ( v27 >= 0xFFFFF6FB7DBED000uLL
            && v27 <= 0xFFFFF6FB7DBED7F8uLL
            && (unsigned int)MiPteHasShadow(Process, v32, v28, v24)
            && (v32 & 1) != 0
            && ((v32 & 0x20) == 0 || (v32 & 0x42) == 0) )
          {
            v28 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
            if ( v28 )
            {
              v42 = *(_QWORD *)(v28 + 8 * ((v27 >> 3) & 0x1FF));
              v28 = v32 | 0x20;
              if ( (v42 & 0x20) == 0 )
                v28 = v32;
              v32 = v28;
              if ( (v42 & 0x42) != 0 )
                v32 = v28 | 0x42;
            }
          }
          v43 = v32;
          if ( (v32 & 1) != 0 )
          {
            v28 = v32;
            do
            {
              if ( (v43 & 0x1000000000000000LL) != 0 )
              {
                if ( ((v43 >> 60) & 2) != 0 )
                {
                  v44 = 0;
                  do
                  {
                    if ( (++v44 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                      _mm_pause();
                    else
                      HvlNotifyLongSpinWait(v44);
                    v145 = *(_QWORD *)v27;
                    v32 = v145;
                  }
                  while ( (v145 & 0x1000000000000000LL) != 0 );
                }
                else
                {
                  v32 = _InterlockedCompareExchange64((volatile signed __int64 *)v27, v43 | 0x2000000000000000LL, v32);
                }
              }
              else
              {
                v32 = _InterlockedCompareExchange64(
                        (volatile signed __int64 *)v27,
                        v43 & 0xCFFFFFFFFFFFFFDFuLL | 0x1000000000000020LL,
                        v32);
                if ( v32 == v28 )
                  break;
              }
              v43 = v32;
              v28 = v32;
            }
            while ( (v32 & 1) != 0 );
            v26 = i;
            v7 = v144;
          }
        }
LABEL_93:
        v45 = *(_BYTE *)(v7 + 184) & 7;
        if ( v10 == 0xFFFFF6FB7DBEDF68uLL )
        {
          if ( v45 )
          {
            if ( v45 == 7 )
            {
              v46 = &KeGetCurrentPrcb()->SelfmapLockHandle[1];
            }
            else
            {
              v47 = KeGetCurrentPrcb();
              if ( v45 == 5 )
                v46 = v47->SelfmapLockHandle;
              else
                v46 = &v47->SelfmapLockHandle[3];
            }
          }
          else
          {
            v46 = &KeGetCurrentPrcb()->SelfmapLockHandle[2];
          }
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          {
            KiReleaseQueuedSpinLockInstrumented(v46, retaddr, v28, v24);
            goto LABEL_107;
          }
          _m_prefetchw(v46);
          Next = (__int64)v46->LockQueue.Next;
          if ( v46->LockQueue.Next )
          {
LABEL_106:
            v46->LockQueue.Next = 0LL;
            _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
          }
          else if ( v46 != (_KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                                    (volatile signed __int64 *)v46->LockQueue.Lock,
                                                    0LL,
                                                    (signed __int64)v46) )
          {
            Next = KxWaitForLockChainValid(v46, v32, v28, v24);
            goto LABEL_106;
          }
LABEL_107:
          Process = (unsigned __int64)KeGetCurrentPrcb();
          v22 = *(_QWORD *)(Process + 25016);
          if ( v22 )
          {
            if ( *(_BYTE *)(Process + 32) <= 1u )
            {
              v49 = *(_DWORD *)(v22 + 20) - 1;
              *(_DWORD *)(v22 + 20) = v49;
              if ( !v49 && !*(_BYTE *)(v22 + 25) && !*(_BYTE *)(v22 + 27) )
                KiPerformUnboostKick(Process);
            }
          }
        }
        else if ( v45 && v10 >= 0xFFFFF6FB7DBED000uLL && v10 <= 0xFFFFF6FB7DBEDFFFuLL )
        {
          v50 = (__int64)(v10 + 0x90482413000LL) >> 3;
          v22 = (unsigned __int64)(unsigned int)(2 * v50) >> 5;
          if ( v45 < 2u )
            v51 = (volatile signed __int32 *)(v7 + 4 * v22 + 4872);
          else
            v51 = (volatile signed __int32 *)&MiState + v22 + 617;
          v24 = (unsigned int)~(3 << ((2 * v50) & 0x1F));
          Process = (unsigned int)v24 & *v51;
          v53 = *v51;
          v52 = _InterlockedCompareExchange(v51, Process, *v51);
          if ( v53 != v52 )
          {
            do
            {
              v22 = v52;
              Process = (unsigned int)v24 & v52;
              v52 = _InterlockedCompareExchange(v51, Process, v52);
            }
            while ( v52 != (_DWORD)v22 );
          }
        }
        else
        {
          if ( MiPteInShadowRange(v10)
            && (unsigned int)MiPteHasShadow(v54, v22, v55, v24)
            && (v22 & 1) != 0
            && ((v22 & 0x20) == 0 || (v22 & 0x42) == 0) )
          {
            v56 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
            if ( v56 )
            {
              v57 = *(_QWORD *)(v56 + 8 * ((v10 >> 3) & 0x1FF));
              v58 = v22 | 0x20;
              if ( (v57 & 0x20) == 0 )
                v58 = v22;
              v22 = v58;
              if ( (v57 & 0x42) != 0 )
                v22 = v58 | 0x42;
            }
          }
          Process = v22 & 0xCFFFFFFFFFFFFFFFuLL;
          for ( j = _InterlockedCompareExchange64((volatile signed __int64 *)v10, v22 & 0xCFFFFFFFFFFFFFFFuLL, v22);
                j != v22;
                j = _InterlockedCompareExchange64((volatile signed __int64 *)v10, j & 0xCFFFFFFFFFFFFFFFuLL, j) )
          {
            v22 = j;
            Process = j & 0xCFFFFFFFFFFFFFFFuLL;
          }
        }
        v10 = v27;
      }
      if ( !v26 )
        break;
      --v26;
      v25 = 2;
    }
    if ( v10 != v146 )
    {
      MiUnlockPageTableInternal(v7, v10);
      v19 = v130;
      v9 = (v131 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      v10 = 0LL;
      v131 = v9;
      goto LABEL_292;
    }
    v9 = v131;
    v6 = v137;
    v13 = v140;
    v17 = v132;
    v19 = v130;
LABEL_140:
    v60 = MI_READ_PTE_LOCK_FREE(v9);
    updated = v60;
    v65 = v60;
    if ( !v60 )
      goto LABEL_286;
    if ( (v60 & 1) == 0 )
    {
      if ( (v60 & 0x400) == 0 )
      {
        if ( (v60 & 0x800) != 0 )
        {
          if ( !MiLockTransitionLeafPage(v9) )
            goto LABEL_292;
          updated = MI_READ_PTE_LOCK_FREE(v9);
          if ( v17 )
          {
            if ( (unsigned int)MiIsPfnSystemCharged(v118) )
            {
              *(_BYTE *)(v119 + 35) &= ~0x20u;
              ++v6[1];
            }
            _InterlockedAnd64((volatile signed __int64 *)(v119 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            goto LABEL_286;
          }
          if ( (a5 & 4) != 0 && (unsigned int)MiIsPfnSystemCharged(v118) )
          {
            MiDriverPageIsDangling();
            *(_BYTE *)(v120 + 35) &= ~0x20u;
          }
          if ( (unsigned int)MiDeleteTransitionPte(v9) == 3 )
            ++v6[1];
        }
        else
        {
          if ( v17 || (v60 & 0x3E0) == 0 )
            goto LABEL_286;
          MiReleasePageFileSpace(v136, v60, 1LL);
          *(_QWORD *)v9 = ZeroPte;
          if ( MiPteInShadowRange(v9) )
          {
            MiWritePteShadow(v122, v121);
            ++v6[3];
            goto LABEL_286;
          }
        }
        ++v6[3];
        goto LABEL_286;
      }
      if ( v17 )
        goto LABEL_286;
      if ( (v60 & 2) != 0 )
        goto LABEL_265;
      if ( (unsigned __int8)MI_PROTO_FORMAT_COMBINED(v60, v61, v62, v60) )
      {
        ++v6[3];
        PrototypePteDirect = MiGetPrototypePteDirect(v112);
        v114 = **(_QWORD **)(((PrototypePteDirect - 48) & 0xFFFFFFFFFFFFF000uLL) + 0x10);
        if ( (unsigned int)MiDecrementCombinedPte(v7, PrototypePteDirect) == 3 && v114 == v136 )
          ++v6[1];
        goto LABEL_266;
      }
      if ( v135 || (v115 = MiGetPrototypePteDirect(v112), (unsigned int)MiImageProtoChargedCommit(v147, v115)) )
LABEL_265:
        ++v6[3];
LABEL_266:
      *(_QWORD *)v9 = ZeroPte;
      if ( MiPteInShadowRange(v9) )
        MiWritePteShadow(v117, v116);
      goto LABEL_285;
    }
    v66 = (__int64)((v9 << 25) - v13) >> 16;
    if ( (unsigned __int64)&updated >= v63 && (unsigned __int64)&updated <= v64 )
    {
      if ( (unsigned int)MiPteHasShadow(&updated, v61, v62, v60) )
      {
        v62 = v65;
        if ( (v65 & 0x20) == 0 || (v65 & 0x42) == 0 )
        {
          v67 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v67 )
          {
            v68 = *(_QWORD *)(v67 + 8 * (((unsigned __int64)&updated >> 3) & 0x1FF));
            if ( (v68 & 0x20) != 0 )
              v65 |= 0x20uLL;
            if ( (v68 & 0x42) != 0 )
              v65 |= 0x42uLL;
          }
          else
          {
            v65 = updated;
          }
        }
      }
    }
    v69 = (v65 >> 12) & 0xFFFFFFFFFLL;
    v70 = 48 * v69 - 0x58000000000LL;
    v71 = (*(_QWORD *)(v70 + 40) >> 40) & 0x3FFLL;
    v72 = *(_QWORD *)(qword_1403CBD88 + 8 * v71);
    if ( v132 )
    {
      if ( (unsigned int)MiIsPfnSystemCharged(48 * v69 - 0x58000000000LL) )
      {
        MiLockPageAtDpcInline(v73);
        *(_BYTE *)(v70 + 35) &= ~0x20u;
        _InterlockedAnd64((volatile signed __int64 *)(v70 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v40 = v72 == v136;
        v9 = v131;
        if ( v40 )
          ++v6[1];
      }
      else
      {
        v9 = v131;
      }
      goto LABEL_285;
    }
    v74 = ((v66 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v75 = *(_QWORD *)v74;
    if ( v74 >= v63
      && v74 <= v64
      && (unsigned int)MiPteHasShadow(v71, v75, v62, v69)
      && (v75 & 1) != 0
      && ((v75 & 0x20) == 0 || (v75 & 0x42) == 0) )
    {
      v71 = (__int64)KeGetCurrentThread()->ApcState.Process;
      v76 = *(_QWORD *)(v71 + 1544);
      if ( v76 )
      {
        v77 = *(_QWORD *)(v76 + 8 * ((v74 >> 3) & 0x1FF));
        v78 = v75 | 0x20;
        v71 = (unsigned __int8)v77;
        LOBYTE(v71) = v77 & 0x20;
        if ( (v77 & 0x20) == 0 )
          v78 = v75;
        v75 = v78;
        if ( (v77 & 0x42) != 0 )
          v75 = v78 | 0x42;
      }
    }
    v79 = HIBYTE(v75) & 0xF;
    if ( (HIBYTE(v75) & 0xF) == 9 )
    {
      MiWriteWsle(v71, v66, (unsigned __int8)(16 * ((v75 >> 60) & 7)) | 0xAu);
      goto LABEL_245;
    }
    if ( v133 )
    {
      MI_WSLE_LOG_ACCESS(v7, v131);
      v63 = 0xFFFFF6FB7DBED000uLL;
    }
    v80 = *(_QWORD *)v74;
    v81 = 1;
    if ( v74 >= v63
      && v74 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(1LL, v80, 0xFFFFF6FB7DBED7F8uLL, v69)
      && (v80 & 1) != 0
      && ((v80 & 0x20) == 0 || (v80 & 0x42) == 0) )
    {
      v82 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v82 )
      {
        v83 = *(_QWORD *)(v82 + 8 * ((v74 >> 3) & 0x1FF));
        v84 = v80 | 0x20;
        if ( (v83 & 0x20) == 0 )
          v84 = v80;
        v80 = v84;
        if ( (v83 & 0x42) != 0 )
          v80 = v84 | 0x42;
      }
    }
    v85 = 48 * ((v80 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    if ( v66 < 0xFFFFF68000000000uLL || v66 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      v88 = *(_QWORD *)v74;
      v86 = 1;
      if ( v74 >= v63
        && v74 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow(1LL, v88, 0xFFFFF6FB7DBED7F8uLL, v85)
        && (v88 & 1) != 0
        && ((v88 & 0x20) == 0 || (v88 & 0x42) == 0) )
      {
        v89 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v89 )
        {
          v90 = v88 | 0x20;
          v91 = *(_QWORD *)(v89 + 8 * ((v74 >> 3) & 0x1FF));
          if ( (v91 & 0x20) == 0 )
            v90 = v88;
          v88 = v90;
          if ( (v91 & 0x42) != 0 )
            v88 = v90 | 0x42;
        }
      }
      WsleContents = HIBYTE(v88) & 0xF | (16 * ((v88 >> 60) & 7));
      v81 = (*(_QWORD *)(v85 + 40) & 0x200000000000000LL) == 0;
      if ( (HIBYTE(v88) & 0xF) == 8 )
      {
        MiUnlockWsle(v7, v66, v85);
        WsleContents = MiGetWsleContents(v92, v66);
      }
    }
    else
    {
      v86 = 0;
      WsleContents = (*(_BYTE *)v85 >> 1) & 7;
    }
    MiRemoveWsle(v7, v66, WsleContents, 10, v81);
    if ( !v86 )
      goto LABEL_244;
    v95 = ((v66 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    v96 = 0xFFFFF6FB7DBED000uLL;
    v97 = *(_QWORD *)v95;
    if ( v95 >= 0xFFFFF6FB7DBED000uLL
      && v95 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(v93, v97, v94, v95)
      && (v97 & 1) != 0
      && ((v97 & 0x20) == 0 || (v97 & 0x42) == 0) )
    {
      v94 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v94 )
      {
        v98 = *(_QWORD *)(v94 + 8 * ((v95 >> 3) & 0x1FF));
        v94 = v97 | 0x20;
        if ( (v98 & 0x20) == 0 )
          v94 = v97;
        v97 = v94;
        if ( (v98 & 0x42) != 0 )
          v97 = v94 | 0x42;
      }
    }
    v139 = v97;
    v99 = (unsigned __int64)&v139;
    if ( (unsigned __int64)&v139 >= v96 )
    {
      v99 = (unsigned __int64)&v139;
      if ( (unsigned __int64)&v139 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow(&v139, v97, v94, v95)
        && (v97 & 1) != 0
        && ((v97 & 0x20) == 0 || (v97 & 0x42) == 0) )
      {
        v99 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
        v94 = *(_QWORD *)(v99 + 1544);
        if ( v94 )
        {
          v100 = *(_QWORD *)(v94 + 8 * (((unsigned __int64)&v139 >> 3) & 0x1FF));
          v94 = v97 | 0x20;
          v99 = (unsigned __int8)v100;
          LOBYTE(v99) = v100 & 0x20;
          if ( (v100 & 0x20) == 0 )
            v94 = v97;
          v97 = v94;
          if ( (v100 & 0x42) != 0 )
            v97 = v94 | 0x42;
        }
      }
    }
    v101 = (_DWORD *)(48 * ((v97 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
    if ( ((*v101 >> 4) & 0x3FF) != 0 )
      goto LABEL_244;
    v102 = v140;
    v103 = (__int64)((v95 << 25) - v140) >> 16;
    memset(v158, 0, sizeof(v158));
    while ( 2 )
    {
      v104 = *(_QWORD *)v103;
      if ( v103 >= v96 && v103 <= 0xFFFFF6FB7DBED7F8uLL && (unsigned int)MiPteHasShadow(v99, v104, v94, v103) )
      {
        if ( (v104 & 1) != 0 )
        {
          if ( (v104 & 0x20) == 0 || (v104 & 0x42) == 0 )
          {
            v99 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
            v94 = *(_QWORD *)(v99 + 1544);
            if ( v94 )
            {
              v105 = *(_QWORD *)(v94 + 8 * ((v103 >> 3) & 0x1FF));
              v94 = v104 | 0x20;
              v99 = (unsigned __int8)v105;
              LOBYTE(v99) = v105 & 0x20;
              if ( (v105 & 0x20) == 0 )
                v94 = v104;
              LOBYTE(v104) = v94;
              if ( (v105 & 0x42) != 0 )
                LOBYTE(v104) = v94 | 0x42;
            }
          }
          goto LABEL_235;
        }
      }
      else
      {
LABEL_235:
        if ( (v104 & 1) != 0 )
        {
          v106 = MiGetWsleContents(v99, (__int64)((v103 << 25) - v102) >> 16);
          LOBYTE(v106) = v106 & 0xF;
          v99 = (unsigned int)(v106 - 8);
          if ( (unsigned __int8)(v106 - 8) > 2u )
            ++*((_DWORD *)v158 + (unsigned __int8)v106);
        }
      }
      v103 += 8LL;
      if ( (v103 & 0xFFF) != 0 )
        continue;
      break;
    }
    v7 = v144;
    v107 = 8;
    while ( 1 )
    {
      v108 = *((_DWORD *)v158 + (unsigned __int8)--v107);
      if ( v108 )
        break;
      if ( !v107 )
        goto LABEL_244;
    }
    *(_QWORD *)v101 = *(_QWORD *)v101 & 0xFFFFFFFFFFFE000FuLL | (16
                                                               * (v108 & 0x3FF | ((unsigned __int64)(v107 & 7) << 10)));
LABEL_244:
    v6 = v137;
    if ( v79 == 8 )
    {
LABEL_245:
      ++*v6;
      if ( v134 == 2 )
        MiReturnSystemCharges(v136, 1LL, 1LL);
    }
    v9 = v131;
    MiDeleteValidSystemPage(v7, v131, a5 & 4 | 0x10u, v6);
    if ( (a5 & 1) != 0 )
      goto LABEL_248;
    updated = 0LL;
    v109 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&updated);
    _InterlockedOr(v128, 0);
    updated = MiUpdatePageFileHighInPte(v109, (unsigned int)KiTbFlushTimeStamp);
    if ( MiPteInShadowRange((unsigned __int64)&updated) )
      MiWritePteShadow(&updated, v110);
    v111 = updated;
    *(_QWORD *)v9 = updated;
    if ( v9 >= 0xFFFFF6FB7DBED000uLL && v9 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow(v9, v111);
    if ( !MiGetPteTimeStamp(v111) )
LABEL_248:
      MiInsertTbFlushEntry((__int64)&v153, v66, 1LL, 0);
LABEL_285:
    v19 = v130;
LABEL_286:
    v9 += 8LL;
    v131 = v9;
    v123 = v9 < v19;
    if ( v9 != v19 )
    {
      if ( (v9 & 0x78) == 0
        && ((unsigned int)MiWorkingSetIsContended(v7)
         || (unsigned int)MiPageTableLockIsContended(v124, v10)
         || KeShouldYieldProcessor()) )
      {
        MiFlushTbList(&v153);
        MiUnlockPageTableInternal(v7, v10);
        MiUnlockWorkingSetShared(v7, CurrentIrql, v125);
        v10 = 0LL;
        MiLockWorkingSetShared(v7);
      }
LABEL_292:
      v123 = v9 < v19;
    }
    v6 = v137;
    v13 = v140;
    v17 = v132;
  }
  while ( v123 );
LABEL_294:
  MiFlushTbList(&v153);
  if ( v10 )
    MiUnlockPageTableInternal(v7, v10);
  return MiUnlockWorkingSetShared(v7, CurrentIrql, v126);
}
