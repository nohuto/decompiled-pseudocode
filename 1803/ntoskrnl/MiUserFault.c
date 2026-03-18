/*
 * XREFs of MiUserFault @ 0x14001B870
 * Callers:
 *     MmAccessFault @ 0x14001B320 (MmAccessFault.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiResolvePrivateZeroFault @ 0x140017760 (MiResolvePrivateZeroFault.c)
 *     MiResolveDemandZeroFault @ 0x1400196F0 (MiResolveDemandZeroFault.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiResolveSharedZeroFault @ 0x14001E1D0 (MiResolveSharedZeroFault.c)
 *     MiGetProtoPteAddress @ 0x14001E7D0 (MiGetProtoPteAddress.c)
 *     MiCheckVadSequential @ 0x14001EA00 (MiCheckVadSequential.c)
 *     MiValidFault @ 0x14001ECF0 (MiValidFault.c)
 *     MiAccessCheck @ 0x14001F4F0 (MiAccessCheck.c)
 *     MiLocateAddress @ 0x140033EE0 (MiLocateAddress.c)
 *     MiCheckFatalAccessViolation @ 0x14003B348 (MiCheckFatalAccessViolation.c)
 *     MiUpdatePageTableUseCount @ 0x14003C610 (MiUpdatePageTableUseCount.c)
 *     MiInPagePageTable @ 0x14003D3E0 (MiInPagePageTable.c)
 *     MiCheckVirtualAddress @ 0x14003E120 (MiCheckVirtualAddress.c)
 *     MiReleaseFaultState @ 0x140057E38 (MiReleaseFaultState.c)
 *     MiUnlockFaultPageTable @ 0x140059D10 (MiUnlockFaultPageTable.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140062834 (MiPteHasShadow.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x1400889A0 (KxWaitForLockChainValid.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400A22F0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiGetPageTableLockBuffer @ 0x1400B2278 (MiGetPageTableLockBuffer.c)
 *     MiAllowGuardFault @ 0x1400B5494 (MiAllowGuardFault.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x1400BC2D0 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiWaitForRotateToComplete @ 0x1400D0B30 (MiWaitForRotateToComplete.c)
 *     KxAcquireQueuedSpinLock @ 0x1400E01A0 (KxAcquireQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1400E0660 (KxWaitForLockOwnerShip.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400E6200 (MiUnlockWorkingSetExclusive.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KeDelayExecutionThread @ 0x140104BA0 (KeDelayExecutionThread.c)
 *     MiLocateVadEvent @ 0x1401147D0 (MiLocateVadEvent.c)
 *     MiReadPteShadow @ 0x140122630 (MiReadPteShadow.c)
 *     HvlNotifyLongSpinWait @ 0x14015AFE0 (HvlNotifyLongSpinWait.c)
 *     MiGetPrototypePteDirect @ 0x1401A6524 (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x1401A6594 (MiIsPrototypePteVadLookup.c)
 *     MiMakeDemandZeroPte @ 0x1401A65C8 (MiMakeDemandZeroPte.c)
 *     MiMakePrototypePteVadLookup @ 0x1401A6634 (MiMakePrototypePteVadLookup.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140242390 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140242518 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     MiIsVadEligibleForCommitRelease @ 0x1402506DC (MiIsVadEligibleForCommitRelease.c)
 *     MiPrefetchJumpVad @ 0x1402580D8 (MiPrefetchJumpVad.c)
 *     MiLargePageFault @ 0x140261DA4 (MiLargePageFault.c)
 *     MiWaitForAvailablePages @ 0x14026B820 (MiWaitForAvailablePages.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402BA760 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiCheckForUserStackOverflow @ 0x14055FF64 (MiCheckForUserStackOverflow.c)
 */

__int64 __fastcall MiUserFault(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 *v4; // r13
  unsigned __int64 *v5; // r15
  _LIST_ENTRY *p_ThreadListHead; // r14
  _KPROCESS *Process; // rbx
  unsigned __int16 *v8; // rdi
  __int64 v9; // r12
  bool v10; // cc
  __int64 v11; // rax
  unsigned __int64 v12; // r10
  _QWORD *v13; // rdx
  char BasePriority; // al
  const LARGE_INTEGER *v15; // rdx
  unsigned __int8 v16; // al
  unsigned __int8 CurrentIrql; // si
  LONG *v18; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // rcx
  int v21; // eax
  signed __int32 v22; // ett
  unsigned __int64 v23; // r10
  unsigned __int64 v24; // r11
  __int64 Address; // rax
  int v26; // esi
  unsigned __int64 v27; // rbx
  char v28; // al
  volatile __int64 *v29; // r11
  _KLOCK_QUEUE_HANDLE *SelfmapLockHandle; // r10
  struct _KPRCB *v31; // r10
  struct _KPRCB *v32; // rcx
  _DWORD *v33; // rdx
  int v34; // eax
  unsigned int v35; // r14d
  __int64 v36; // r13
  unsigned __int64 v37; // rdi
  unsigned __int64 v38; // r9
  __int64 v39; // rcx
  __int64 v40; // rdx
  unsigned __int64 v41; // r9
  __int64 v42; // rax
  __int64 v43; // r8
  unsigned __int64 v44; // rax
  char v45; // dl
  struct _KPRCB *v46; // rax
  unsigned __int64 v47; // rdx
  struct _KPRCB *v48; // rax
  struct _KPRCB *v49; // rcx
  _KLOCK_QUEUE_HANDLE *v50; // rcx
  _KLOCK_QUEUE_HANDLE *v51; // rcx
  volatile signed __int32 *PageTableLockBuffer; // rbx
  char i; // cl
  signed __int32 v54; // eax
  bool v55; // zf
  unsigned __int32 v56; // eax
  __int64 v57; // rax
  unsigned int v58; // ebx
  char v59; // cl
  _KLOCK_QUEUE_HANDLE *v60; // rbx
  struct _KPRCB *v61; // rbx
  __int64 Next; // rax
  __int64 v63; // rdx
  int v64; // eax
  signed __int32 v65; // eax
  signed __int32 v66; // ett
  signed __int32 v67; // edx
  signed __int64 v68; // rdx
  unsigned __int64 v69; // r8
  __int64 v70; // rax
  __int64 v71; // r8
  signed __int64 v72; // rax
  signed __int64 v73; // rdx
  ULONG_PTR v74; // r9
  ULONG_PTR v75; // rdx
  ULONG_PTR v76; // r13
  __int64 v77; // rdx
  unsigned __int64 v78; // r8
  __int64 v79; // rax
  char v80; // r8
  int valid; // eax
  volatile signed __int64 *v82; // r9
  unsigned __int64 v83; // rbx
  char v84; // cl
  struct _KPRCB *v85; // rax
  unsigned __int64 v86; // rcx
  __int64 v87; // rdi
  __int64 DemandZeroPte; // rax
  unsigned __int64 v89; // rdx
  char v90; // r9
  unsigned __int64 v91; // r11
  int v92; // esi
  __int64 v93; // rdx
  _KPROCESS *v94; // r8
  unsigned __int64 v95; // rax
  _BYTE *v96; // rax
  unsigned __int64 v97; // r15
  ULONG_PTR v98; // r14
  __int64 *v99; // r12
  __int64 v100; // r9
  volatile signed __int32 *v101; // rbx
  __int64 v102; // rax
  __int64 v103; // rcx
  char v104; // di
  unsigned __int64 v105; // r9
  unsigned __int64 v106; // rbx
  __int64 v107; // rcx
  struct _KPRCB *v108; // rax
  unsigned __int64 v109; // rsi
  __int64 v110; // rax
  __int64 VadEvent; // rcx
  int v112; // eax
  int v113; // ecx
  int v114; // eax
  _QWORD *v115; // r8
  __int64 v116; // rcx
  __int64 PrototypePteVadLookup; // rax
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // rax
  __int64 PrototypePteDirect; // rsi
  unsigned int v122; // eax
  __int64 v123; // rdx
  __int64 v124; // r8
  __int64 v125; // r9
  unsigned int v126; // ebx
  ULONG_PTR v127; // rcx
  __int64 v128; // rax
  struct _KLOCK_QUEUE_HANDLE *v130; // rcx
  volatile signed __int32 *v131; // r8
  int v132; // r9d
  signed __int32 v133; // eax
  volatile signed __int32 v134; // ett
  signed __int32 v135; // edx
  signed __int64 v136; // rdx
  unsigned __int64 v137; // r8
  __int64 v138; // rax
  __int64 v139; // r8
  signed __int64 v140; // rax
  signed __int64 v141; // rdx
  __int64 v142; // rdx
  __int64 v143; // rdx
  __int64 v144; // rdx
  __int64 v145; // r8
  __int64 v146; // r9
  __int64 v147; // r8
  struct _KLOCK_QUEUE_HANDLE *v148; // rcx
  volatile signed __int32 *v149; // r8
  int v150; // edi
  signed __int32 v151; // eax
  volatile signed __int32 v152; // ett
  signed __int32 v153; // edx
  signed __int64 PteShadow; // rax
  signed __int64 v155; // rax
  signed __int64 v156; // rtt
  signed __int64 v157; // rdx
  __int64 v158; // rdx
  __int64 ProtoPteAddress; // [rsp+30h] [rbp-99h]
  unsigned __int64 v160; // [rsp+38h] [rbp-91h]
  __int64 v161; // [rsp+40h] [rbp-89h] BYREF
  _KPROCESS *v162; // [rsp+48h] [rbp-81h]
  int v163; // [rsp+50h] [rbp-79h] BYREF
  int v164; // [rsp+54h] [rbp-75h] BYREF
  int v165; // [rsp+58h] [rbp-71h] BYREF
  int v166; // [rsp+5Ch] [rbp-6Dh] BYREF
  unsigned __int64 *v167; // [rsp+60h] [rbp-69h]
  int v168; // [rsp+70h] [rbp-59h] BYREF
  __int64 v169; // [rsp+78h] [rbp-51h]
  ULONG_PTR v170; // [rsp+80h] [rbp-49h]
  __int64 v171; // [rsp+88h] [rbp-41h]
  int v172; // [rsp+90h] [rbp-39h]
  int v173; // [rsp+94h] [rbp-35h]
  int v174; // [rsp+A0h] [rbp-29h]
  unsigned __int64 v175; // [rsp+A8h] [rbp-21h]
  volatile signed __int32 *v176; // [rsp+B0h] [rbp-19h]
  __int64 v177; // [rsp+B8h] [rbp-11h]
  char v178[8]; // [rsp+C0h] [rbp-9h] BYREF
  __int64 v179; // [rsp+C8h] [rbp-1h]
  char v180[80]; // [rsp+D0h] [rbp+7h] BYREF
  void *retaddr; // [rsp+128h] [rbp+5Fh]
  int v183; // [rsp+138h] [rbp+6Fh] BYREF
  _KPROCESS *v184; // [rsp+140h] [rbp+77h]
  int v185; // [rsp+148h] [rbp+7Fh]

  v4 = (unsigned __int64 *)(a1 + 56);
  v5 = (unsigned __int64 *)a1;
  v167 = (unsigned __int64 *)(a1 + 56);
  p_ThreadListHead = (_LIST_ENTRY *)&unk_1403CCD60;
  Process = KeGetCurrentThread()->ApcState.Process;
  v162 = Process;
  v8 = &Process[1].IdealNode[12];
  *(_QWORD *)(a1 + 56) = (char *)Process + 1280;
  if ( ((__int64)Process[2].Header.WaitListHead.Flink & 7) != 2 )
    p_ThreadListHead = &Process[2].ThreadListHead;
  v9 = 0LL;
  v10 = LODWORD(Process[2].Affinity.Bitmap[3]) <= 0x10;
  ProtoPteAddress = 0LL;
  v161 = 0LL;
  if ( v10 )
    goto LABEL_18;
  if ( (Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
    goto LABEL_18;
  v11 = *(_QWORD *)(qword_1403CBD88 + 8LL * *((unsigned __int16 *)&Process[1].SecureState.Flags + 3));
  if ( *(_DWORD *)(v11 + 1144) )
  {
    if ( *(_KPROCESS **)(v11 + 1264) == Process )
      goto LABEL_18;
  }
  a4 = *(_QWORD *)(qword_1403CBD88 + 8LL * *((unsigned __int16 *)&Process[1].SecureState.Flags + 3));
  v12 = *(_QWORD *)(v11 + 7424);
  if ( (unsigned __int16)KeNumberNodes <= 1u
    || (v13 = (_QWORD *)(*(_QWORD *)(a4 + 16) + 1984LL * KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0]),
        a3 = 16LL * (v13[68] + v13[69]) + ((v13[34] + v13[35]) << 9) + ((*v13 + v13[1]) << 18) + v13[220] + v13[221],
        a3 < 0x420)
    && v12 >= a3 >> 4
    || !a3 )
  {
    a3 = *(_QWORD *)(a4 + 7040);
  }
  if ( a3 >= 0x420 || v12 < 0x4000 && (a3 >>= 4, v12 < a3) )
  {
LABEL_18:
    if ( dword_1403CC3E8 )
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi10Milliseconds);
  }
  else
  {
    BasePriority = Process->BasePriority;
    LODWORD(Process[2].Affinity.Bitmap[3]) = 0;
    v15 = &MiHalfSecond;
    if ( BasePriority >= 9 )
      v15 = &Mi30Milliseconds;
    MiWaitForAvailablePages(a4, v15);
  }
  v16 = (__int64)Process[2].Header.WaitListHead.Flink & 7;
  if ( v16 < 6u )
  {
    v18 = &dword_1403CCD40;
    if ( v16 != 2 )
      v18 = (LONG *)(v8 + 96);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v18, CurrentIrql);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v21 = SchedulerAssist[5];
          SchedulerAssist[5] = v21 + 1;
          if ( v21 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
            KiPerformUnboostKick(CurrentPrcb);
        }
      }
      _m_prefetchw(v18);
      v22 = *v18 & 0x7FFFFFFF;
      if ( v22 != _InterlockedCompareExchange(v18, v22 + 1, v22) )
      {
        KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
        ExpWaitForSpinLockSharedAndAcquire(v18, CurrentIrql);
      }
    }
    if ( v18[1] )
      _InterlockedExchange(v18 + 1, 0);
    Process = v162;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
  }
  *((_BYTE *)v4 + 8) = CurrentIrql;
  v23 = 0xCFFFFFFFFFFFFFFFuLL;
  v24 = 0xFFFFF6FB7DBED000uLL;
  if ( (*((_BYTE *)v8 + 187) & 0x60) == 0x60 && p_ThreadListHead->Flink && *v5 < 0xFFFF800000000000uLL )
  {
    Address = MiLocateAddress(*v5, 0xFFFF800000000000uLL, a3, a4);
    v161 = Address;
    if ( !Address || (unsigned int)MiIsVadEligibleForCommitRelease(Address) )
      goto LABEL_44;
    v161 = 0LL;
  }
  if ( *v5 - 0x7FFFFFFF0000LL <= 0xFFFF00000000FFFFuLL )
  {
LABEL_44:
    v26 = -1073741819;
    goto LABEL_206;
  }
  if ( Process[1].Affinity.Bitmap[9] && (unsigned int)MiWaitForRotateToComplete(*v5, v4) == 1 )
  {
    v26 = 0;
    goto LABEL_205;
  }
  v27 = *v4;
  v26 = 0;
  LODWORD(v184) = 0;
  v160 = v27;
  if ( !*((_BYTE *)v4 + 9) )
  {
    v4[2] = 0xFFFFF6FB7DBEDF68uLL;
    v28 = *(_BYTE *)(v27 + 184) & 7;
    if ( v28 )
    {
      if ( v28 == 7 )
      {
        v29 = (volatile __int64 *)&unk_1403CBCE8;
        SelfmapLockHandle = &KeGetCurrentPrcb()->SelfmapLockHandle[1];
      }
      else
      {
        v31 = KeGetCurrentPrcb();
        if ( v28 == 5 )
        {
          v29 = (volatile __int64 *)&unk_1403CBCE0;
          SelfmapLockHandle = v31->SelfmapLockHandle;
        }
        else
        {
          v29 = (volatile __int64 *)&unk_1403CBCF8;
          SelfmapLockHandle = &v31->SelfmapLockHandle[3];
        }
      }
    }
    else
    {
      v29 = (volatile __int64 *)(v27 + 176);
      SelfmapLockHandle = &KeGetCurrentPrcb()->SelfmapLockHandle[2];
    }
    SelfmapLockHandle->LockQueue.Lock = (unsigned __int64 *volatile)v29;
    SelfmapLockHandle->LockQueue.Next = 0LL;
    v32 = KeGetCurrentPrcb();
    v33 = v32->SchedulerAssist;
    if ( v33 )
    {
      if ( v32->NestingLevel <= 1u )
      {
        v34 = v33[5];
        v33[5] = v34 + 1;
        if ( v34 == -1 && !*((_BYTE *)v33 + 25) && !*((_BYTE *)v33 + 27) )
          KiPerformUnboostKick(v32);
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(SelfmapLockHandle, v29);
    }
    else if ( _InterlockedExchange64(v29, (__int64)SelfmapLockHandle) )
    {
      KxWaitForLockOwnerShip(SelfmapLockHandle);
    }
  }
  v35 = 3;
  v185 = 3;
  v36 = 3LL;
  do
  {
    v37 = v5[v36 + 3];
    v38 = 0xFFFFF6FB7DBED000uLL;
    v39 = *(_QWORD *)v37;
    v40 = *(_QWORD *)v37;
    if ( v37 >= 0xFFFFF6FB7DBED000uLL && v37 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      if ( (MiFlags & 0x1800000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v40 & 1) != 0
        && ((v40 & 0x20) == 0 || (v40 & 0x42) == 0) )
      {
        v41 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v41 )
        {
          LOBYTE(v40) = v40 | 0x20;
          v42 = *(_QWORD *)(v41 + 8 * ((v37 >> 3) & 0x1FF));
          if ( (v42 & 0x20) == 0 )
            v40 = *(_QWORD *)v37;
          if ( (v42 & 0x42) != 0 )
            LOBYTE(v40) = v40 | 0x42;
        }
      }
      v38 = 0xFFFFF6FB7DBED000uLL;
    }
    v43 = 0xFFFFF68000000000uLL;
    if ( (v40 & 1) != 0 )
    {
      if ( (v40 & 0x80u) != 0LL )
      {
        v74 = v5[2];
        if ( (v74 & 1) == 0 || *(_BYTE *)(v74 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
        {
          v75 = *v5;
          if ( *v5 >= 0xFFFFF68000000000uLL && v75 <= 0xFFFFF6FFFFFFFFFFuLL )
            KeBugCheckEx(0x50u, v75, v5[1], v74, 8uLL);
        }
        v26 = MiLargePageFault(v5, v5[v36 + 3], 0xFFFFF68000000000uLL);
        if ( v26 >= 0 )
          v26 = -1073740748;
        goto LABEL_188;
      }
      v44 = v5[9];
      if ( v44 && v37 != v44 )
      {
        v45 = *(_BYTE *)(v27 + 184) & 7;
        if ( v37 == 0xFFFFF6FB7DBEDF68uLL )
        {
          if ( v45 )
          {
            if ( v45 == 7 )
            {
              v48 = KeGetCurrentPrcb();
              v48->SelfmapLockHandle[1].LockQueue.Lock = (unsigned __int64 *volatile)&unk_1403CBCE8;
              v48->SelfmapLockHandle[1].LockQueue.Next = 0LL;
              KxAcquireQueuedSpinLock(&v48->SelfmapLockHandle[1], &unk_1403CBCE8);
            }
            else
            {
              v49 = KeGetCurrentPrcb();
              if ( v45 == 5 )
              {
                v50 = v49->SelfmapLockHandle;
                v50->LockQueue.Lock = (unsigned __int64 *volatile)&unk_1403CBCE0;
                v50->LockQueue.Next = 0LL;
                KxAcquireQueuedSpinLock(v50, &unk_1403CBCE0);
              }
              else
              {
                v51 = &v49->SelfmapLockHandle[3];
                v51->LockQueue.Lock = (unsigned __int64 *volatile)&unk_1403CBCF8;
                v51->LockQueue.Next = 0LL;
                KxAcquireQueuedSpinLock(v51, &unk_1403CBCF8);
              }
            }
          }
          else
          {
            v46 = KeGetCurrentPrcb();
            v46->SelfmapLockHandle[2].LockQueue.Lock = (unsigned __int64 *volatile)(v27 + 176);
            v46->SelfmapLockHandle[2].LockQueue.Next = 0LL;
            KxAcquireQueuedSpinLock(&v46->SelfmapLockHandle[2], v27 + 176);
          }
          goto LABEL_134;
        }
        if ( v45 && v37 >= 0xFFFFF6FB7DBED000uLL && v37 <= 0xFFFFF6FB7DBEDFFFuLL )
        {
          PageTableLockBuffer = (volatile signed __int32 *)MiGetPageTableLockBuffer(v27, v5[v36 + 3], &v183);
          LODWORD(v43) = *PageTableLockBuffer;
          for ( i = v183; ; i = v183 )
          {
            while ( (((unsigned int)v43 >> i) & 1) != 0 )
            {
              if ( (((unsigned int)v43 >> i) & 2) != 0 )
              {
                v163 = 0;
                do
                {
                  KeYieldProcessorEx(&v163);
                  LODWORD(v43) = *PageTableLockBuffer;
                  i = v183;
                }
                while ( (((unsigned __int32)*PageTableLockBuffer >> v183) & 1) != 0 );
              }
              else
              {
                v54 = _InterlockedCompareExchange(PageTableLockBuffer, v43 | (2 << i), v43);
                i = v183;
                LODWORD(v43) = v54;
              }
            }
            v47 = ~(2 << i) & ((unsigned int)v43 | (1 << i));
            v56 = _InterlockedCompareExchange(PageTableLockBuffer, v47, v43);
            v55 = (_DWORD)v43 == v56;
            v43 = v56;
            if ( v55 )
              break;
          }
LABEL_133:
          v27 = v160;
          goto LABEL_134;
        }
        if ( v37 >= 0xFFFFF6FB7DBED000uLL
          && v37 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0x1800000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v39 & 1) != 0
          && ((v39 & 0x20) == 0 || (v39 & 0x42) == 0) )
        {
          v43 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v43 )
          {
            v57 = *(_QWORD *)(v43 + 8 * ((v37 >> 3) & 0x1FF));
            v43 = v39 | 0x20;
            if ( (v57 & 0x20) == 0 )
              v43 = *(_QWORD *)v37;
            v39 = v43;
            if ( (v57 & 0x42) != 0 )
              v39 = v43 | 0x42;
          }
        }
        v47 = v39;
        if ( (v39 & 1) != 0 )
        {
          v43 = v39;
          do
          {
            if ( (v47 & 0x1000000000000000LL) != 0 )
            {
              if ( ((v47 >> 60) & 2) != 0 )
              {
                v58 = 0;
                do
                {
                  if ( (++v58 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                    _mm_pause();
                  else
                    HvlNotifyLongSpinWait(v58);
                  v179 = *(_QWORD *)v37;
                  v39 = v179;
                }
                while ( (v179 & 0x1000000000000000LL) != 0 );
              }
              else
              {
                v39 = _InterlockedCompareExchange64((volatile signed __int64 *)v37, v47 | 0x2000000000000000LL, v39);
              }
            }
            else
            {
              v47 = v47 & 0xCFFFFFFFFFFFFFDFuLL | 0x1000000000000020LL;
              v39 = _InterlockedCompareExchange64((volatile signed __int64 *)v37, v47, v39);
              if ( v39 == v43 )
                break;
            }
            v47 = v39;
            v43 = v39;
          }
          while ( (v39 & 1) != 0 );
          v26 = (int)v184;
          v5 = (unsigned __int64 *)a1;
          v35 = v185;
          goto LABEL_133;
        }
LABEL_134:
        v38 = v5[9];
        v59 = *(_BYTE *)(v27 + 184) & 7;
        if ( v38 == 0xFFFFF6FB7DBEDF68uLL )
        {
          if ( v59 )
          {
            if ( v59 == 7 )
            {
              v60 = &KeGetCurrentPrcb()->SelfmapLockHandle[1];
            }
            else
            {
              v61 = KeGetCurrentPrcb();
              if ( v59 == 5 )
                v60 = v61->SelfmapLockHandle;
              else
                v60 = &v61->SelfmapLockHandle[3];
            }
          }
          else
          {
            v60 = &KeGetCurrentPrcb()->SelfmapLockHandle[2];
          }
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
          {
            _m_prefetchw(v60);
            Next = (__int64)v60->LockQueue.Next;
            if ( !v60->LockQueue.Next )
            {
              if ( v60 == (_KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                                   (volatile signed __int64 *)v60->LockQueue.Lock,
                                                   0LL,
                                                   (signed __int64)v60) )
                goto LABEL_148;
              Next = KxWaitForLockChainValid(v60, v47, v43, 0xFFFFF6FB7DBEDF68uLL);
            }
            v60->LockQueue.Next = 0LL;
            _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
            goto LABEL_148;
          }
          KiReleaseQueuedSpinLockInstrumented(v60, retaddr, v43, 0xFFFFF6FB7DBEDF68uLL);
LABEL_148:
          v39 = (__int64)KeGetCurrentPrcb();
          v63 = *(_QWORD *)(v39 + 25016);
          if ( v63 )
          {
            if ( *(_BYTE *)(v39 + 32) <= 1u )
            {
              v64 = *(_DWORD *)(v63 + 20) - 1;
              *(_DWORD *)(v63 + 20) = v64;
              if ( !v64 )
              {
                v43 = *(unsigned __int8 *)(v63 + 27);
                if ( !*(_BYTE *)(v63 + 25) && !(_BYTE)v43 )
                  KiPerformUnboostKick(v39);
              }
            }
          }
          v27 = v160;
        }
        else if ( v59 && v38 >= 0xFFFFF6FB7DBED000uLL && v38 <= 0xFFFFF6FB7DBEDFFFuLL )
        {
          v43 = MiGetPageTableLockBuffer(v27, v5[9], &v164);
          v38 = (unsigned int)~(3 << v164);
          v39 = (unsigned int)v38 & *(_DWORD *)v43;
          v66 = *(_DWORD *)v43;
          v65 = _InterlockedCompareExchange((volatile signed __int32 *)v43, v39, *(_DWORD *)v43);
          if ( v66 != v65 )
          {
            do
            {
              v67 = v65;
              v39 = (unsigned int)v38 & v65;
              v65 = _InterlockedCompareExchange((volatile signed __int32 *)v43, v39, v65);
            }
            while ( v65 != v67 );
          }
        }
        else
        {
          v68 = *(_QWORD *)v38;
          if ( v38 >= 0xFFFFF6FB7DBED000uLL
            && v38 <= 0xFFFFF6FB7DBED7F8uLL
            && (MiFlags & 0x1800000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v68 & 1) != 0
            && ((v68 & 0x20) == 0 || (v68 & 0x42) == 0) )
          {
            v69 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
            if ( v69 )
            {
              v70 = *(_QWORD *)(v69 + 8 * ((v38 >> 3) & 0x1FF));
              v71 = v68 | 0x20;
              if ( (v70 & 0x20) == 0 )
                v71 = *(_QWORD *)v38;
              v68 = v71;
              if ( (v70 & 0x42) != 0 )
                v68 = v71 | 0x42;
            }
          }
          v43 = 0xCFFFFFFFFFFFFFFFuLL;
          v39 = v68 & 0xCFFFFFFFFFFFFFFFuLL;
          v72 = _InterlockedCompareExchange64((volatile signed __int64 *)v38, v68 & 0xCFFFFFFFFFFFFFFFuLL, v68);
          if ( v68 != v72 )
          {
            do
            {
              v73 = v72;
              v39 = v72 & 0xCFFFFFFFFFFFFFFFuLL;
              v72 = _InterlockedCompareExchange64((volatile signed __int64 *)v38, v72 & 0xCFFFFFFFFFFFFFFFuLL, v72);
            }
            while ( v72 != v73 );
          }
        }
        v5[9] = v37;
      }
    }
    else
    {
      LODWORD(v184) = MiInPagePageTable(v5, v35, 0xFFFFF68000000000uLL);
      v26 = (int)v184;
      if ( (int)v184 < 0 )
        goto LABEL_188;
      ++v35;
      ++v36;
    }
    --v35;
    --v36;
    v185 = v35;
  }
  while ( v35 );
  if ( v26 >= 0 )
  {
    v4 = v5 + 7;
    goto LABEL_159;
  }
LABEL_188:
  v4 = v5 + 7;
  MiUnlockFaultPageTable(v5 + 7);
LABEL_159:
  if ( v26 == -1073740748 )
  {
    v26 = 0;
    goto LABEL_205;
  }
  if ( v26 < 0 )
    goto LABEL_205;
  v76 = v5[3];
  v77 = *(_QWORD *)v76;
  if ( v76 < 0xFFFFF6FB7DBED000uLL || v76 > 0xFFFFF6FB7DBED7F8uLL || !(unsigned int)MiPteHasShadow(v39, v77, v43, v38) )
    goto LABEL_201;
  if ( (v77 & 1) != 0 )
  {
    if ( (v77 & 0x20) == 0 || (v77 & 0x42) == 0 )
    {
      v78 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v78 )
      {
        v79 = *(_QWORD *)(v78 + 8 * ((v76 >> 3) & 0x1FF));
        v80 = v77 | 0x20;
        if ( (v79 & 0x20) == 0 )
          v80 = v77;
        LOBYTE(v77) = v80;
        if ( (v79 & 0x42) != 0 )
          LOBYTE(v77) = v80 | 0x42;
      }
    }
LABEL_201:
    if ( (v77 & 1) != 0 )
    {
      valid = MiValidFault(v5);
      goto LABEL_203;
    }
  }
  v86 = v5[1];
  if ( (v86 & 2) != 0 && (v162[1].DirectoryTableBase & 0x1000000000LL) != 0 && *v5 < 0xFFFF800000000000uLL )
    v5[1] = v86 & 0xFFFFFFFFFFFFFFFDuLL;
  LODWORD(v87) = 4;
  DemandZeroPte = MiMakeDemandZeroPte(4LL);
  if ( v89 != DemandZeroPte )
  {
    if ( v89 )
    {
      v87 = (v89 >> 5) & 0x1F;
      if ( (v89 & 0x400) != 0 )
      {
        if ( !(unsigned int)MiIsPrototypePteVadLookup(v89) )
        {
          PrototypePteDirect = MiGetPrototypePteDirect(v143);
          if ( (v144 & 8) == 0 )
          {
            if ( (unsigned __int8)MI_PROTO_FORMAT_COMBINED(v144, v144, v145, v146) || *(_QWORD *)(v147 + 912) )
              *((_DWORD *)v5 + 21) |= 2u;
            goto LABEL_384;
          }
          v9 = v161;
LABEL_337:
          v122 = MiAccessCheck(v76, v5[2], 0);
          v126 = v122;
          if ( v122 )
          {
            if ( v122 == -1073741819 )
            {
              v127 = *v5;
              if ( *v5 < 0xFFFF800000000000uLL )
              {
                v128 = MiLocateAddress(v127, v123, v124, v125);
                v127 = *v5;
                v9 = v128;
              }
              MiCheckFatalAccessViolation(v127);
              v5[11] = v9;
            }
            LOBYTE(v123) = 17;
            MiReleaseFaultState(v5 + 7, v123, 0LL);
            if ( v126 == -2147483647 )
              return (unsigned int)MiCheckForUserStackOverflow(*v5);
            return v126;
          }
LABEL_384:
          v5[12] = PrototypePteDirect;
          return 3221225494LL;
        }
        PrototypePteDirect = MiCheckVirtualAddress(*v5, v178, &v161);
        if ( !PrototypePteDirect )
        {
          v26 = -1073741819;
          goto LABEL_204;
        }
LABEL_336:
        if ( (_DWORD)v87 == 256 )
          goto LABEL_384;
        goto LABEL_337;
      }
LABEL_335:
      PrototypePteDirect = ProtoPteAddress;
      v9 = v161;
      goto LABEL_336;
    }
    v92 = 0;
    v93 = v5[2];
    v177 = 0LL;
    v94 = KeGetCurrentThread()->ApcState.Process;
    v95 = v5[7];
    v184 = v94;
    if ( (*(_BYTE *)(v95 + 184) & 7) == 0 )
      v92 = 64;
    v96 = (_BYTE *)(v93 & 0xFFFFFFFFFFFFFFFEuLL);
    v168 = v92;
    if ( (v93 & 1) != 0 )
    {
      if ( *v96 == 2 )
      {
        v92 |= 1u;
        goto LABEL_228;
      }
      if ( *v96 == 1 )
      {
        v92 |= 2u;
        goto LABEL_228;
      }
    }
    else
    {
      v96 = (_BYTE *)(v93 & 0xFFFFFFFFFFFFFFFEuLL);
    }
    if ( (v93 & 1) == 0 || *v96 != 5 )
    {
LABEL_229:
      v97 = v93 & 0xFFFFFFFFFFFFFFFEuLL;
      if ( (v93 & 1) != 0 && *(_BYTE *)v97 == 4 || (v92 & 0xB) != 0 )
      {
        if ( (v93 & 1) != 0 && *(_BYTE *)v97 == 4 )
          v177 = *(_QWORD *)(v97 + 40);
        if ( (v92 & 2) != 0 && (*(_DWORD *)(v97 + 80) & 0x4000) != 0 )
        {
          v92 |= 4u;
          v168 = v92;
        }
        if ( (v92 & 8) != 0 && *(_QWORD *)(*(_QWORD *)(v97 + 8) + 8LL) > 0x1000uLL )
        {
          v92 |= 0x10u;
          v168 = v92;
        }
      }
      else
      {
        v97 = 0LL;
      }
      v175 = v97;
      v169 = a1;
      v98 = *(_QWORD *)a1;
      v99 = (__int64 *)(((*(_QWORD *)a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      if ( *(_QWORD *)a1 >= 0xFFFF800000000000uLL )
      {
        if ( (v92 & 2) != 0 )
        {
          v26 = 0;
LABEL_261:
          v5 = (unsigned __int64 *)a1;
          goto LABEL_262;
        }
        if ( v98 >= 0xFFFFF68000000000uLL && v98 <= 0xFFFFF6FFFFFFFFFFuLL && v93 )
          KeBugCheckEx(
            0x50u,
            *(_QWORD *)a1,
            *(_QWORD *)(a1 + 8),
            ((*(_QWORD *)a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
            6uLL);
      }
      v100 = 0LL;
      v101 = 0LL;
      if ( v98 > 0x7FFFFFFEFFFFLL )
      {
        if ( v98 >= 0xFFFFF68000000000uLL && v98 <= 0xFFFFF6FFFFFFFFFFuLL )
        {
          v103 = 0LL;
          goto LABEL_315;
        }
LABEL_257:
        MiCheckFatalAccessViolation(v98);
        if ( (v92 & 2) != 0 && v101 )
          MiPrefetchJumpVad(v97, v101, v98);
        v26 = -1073741819;
        v91 = 0xFFFFF6FB7DBED000uLL;
        goto LABEL_261;
      }
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000LL) == 0 )
      {
        v102 = v98 & 0x7FFFFFFFF000LL;
        if ( (v98 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 )
        {
          v103 = qword_1403CB670;
          LODWORD(v87) = 1;
          LOBYTE(v92) = v168;
LABEL_315:
          ProtoPteAddress = v103;
LABEL_316:
          v5 = (unsigned __int64 *)a1;
          if ( (v87 & 0xFFFFFFF8) == 0x10 )
          {
            if ( (v92 & 2) != 0 )
            {
              v26 = v100;
              v91 = 0xFFFFF6FB7DBED000uLL;
            }
            else
            {
              if ( (unsigned int)MiAllowGuardFault(*(_QWORD *)(a1 + 16), v93, v94) )
              {
                MiUpdatePageTableUseCount(v98, 1LL);
                v116 = (unsigned int)v87 & 0xFFFFFFEF;
                if ( ProtoPteAddress )
                  PrototypePteVadLookup = MiMakePrototypePteVadLookup(v116);
                else
                  PrototypePteVadLookup = MiMakeDemandZeroPte(v116);
                *v99 = PrototypePteVadLookup;
                if ( MiPteInShadowRange((unsigned __int64)v99) )
                  MiWritePteShadow(v119, v118);
                v104 = 2;
                v91 = 0xFFFFF6FB7DBED000uLL;
                v26 = 0;
                goto LABEL_263;
              }
              v26 = -1073741819;
              v91 = 0xFFFFF6FB7DBED000uLL;
            }
LABEL_262:
            v104 = 1;
LABEL_263:
            v105 = v5[9];
            v106 = v5[7];
            if ( v105 )
            {
              v107 = *(unsigned __int8 *)(v106 + 184);
              LOBYTE(v107) = v107 & 7;
              if ( v105 == 0xFFFFF6FB7DBEDF68uLL )
              {
                v108 = KeGetCurrentPrcb();
                if ( (_BYTE)v107 )
                {
                  if ( (_BYTE)v107 == 7 )
                  {
                    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v108->SelfmapLockHandle[1]);
                  }
                  else
                  {
                    v55 = (_BYTE)v107 == 5;
                    v130 = v108->SelfmapLockHandle;
                    if ( !v55 )
                      v130 = &v108->SelfmapLockHandle[3];
                    KeReleaseInStackQueuedSpinLockFromDpcLevel(v130);
                  }
                }
                else
                {
                  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v108->SelfmapLockHandle[2]);
                }
              }
              else if ( (_BYTE)v107 && v105 >= v91 && v105 <= 0xFFFFF6FB7DBEDFFFuLL )
              {
                v131 = (volatile signed __int32 *)MiGetPageTableLockBuffer(v5[7], v5[9], &v165);
                v132 = ~(3 << v165);
                v134 = *v131;
                v133 = _InterlockedCompareExchange(v131, v132 & *v131, *v131);
                if ( v134 != v133 )
                {
                  do
                  {
                    v135 = v133;
                    v133 = _InterlockedCompareExchange(v131, v132 & v133, v133);
                  }
                  while ( v133 != v135 );
                }
              }
              else
              {
                v136 = *(_QWORD *)v105;
                if ( v105 >= v91
                  && v105 <= 0xFFFFF6FB7DBED7F8uLL
                  && (unsigned int)MiPteHasShadow(v107, v136, v5[9], v105)
                  && (v136 & 1) != 0
                  && ((v136 & 0x20) == 0 || (v136 & 0x42) == 0) )
                {
                  v137 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
                  if ( v137 )
                  {
                    v138 = *(_QWORD *)(v137 + 8 * ((v105 >> 3) & 0x1FF));
                    v139 = v136 | 0x20;
                    if ( (v138 & 0x20) == 0 )
                      v139 = v136;
                    v136 = v139;
                    if ( (v138 & 0x42) != 0 )
                      v136 = v139 | 0x42;
                  }
                }
                v140 = _InterlockedCompareExchange64(
                         (volatile signed __int64 *)v105,
                         v136 & 0xCFFFFFFFFFFFFFFFuLL,
                         v136);
                if ( v136 != v140 )
                {
                  do
                  {
                    v141 = v140;
                    v140 = _InterlockedCompareExchange64(
                             (volatile signed __int64 *)v105,
                             v140 & 0xCFFFFFFFFFFFFFFFuLL,
                             v140);
                  }
                  while ( v140 != v141 );
                }
              }
              v5[9] = 0LL;
            }
            v142 = *((unsigned __int8 *)v5 + 64);
            if ( *((_BYTE *)v5 + 65) )
              MiUnlockWorkingSetExclusive(v106, v142);
            else
              MiUnlockWorkingSetShared(v106, v142);
            if ( v104 == 2 )
              return (unsigned int)MiCheckForUserStackOverflow(*v5);
            return (unsigned int)v26;
          }
          v120 = *(_QWORD *)(a1 + 8) >> 57;
          v170 = v98;
          v172 = v87;
          v174 = v120;
          v171 = v103;
          v176 = v101;
          v173 = v100;
          if ( !v103 )
          {
            v26 = MiResolvePrivateZeroFault((__int64)&v168);
            v91 = 0xFFFFF6FB7DBED000uLL;
            goto LABEL_262;
          }
          if ( (v92 & 2) == 0
            && v101
            && *((__int64 *)v101 + 15) >= 0
            && (unsigned int)MiCheckVadSequential(&v168, v93, v94) == -1073741280 )
          {
            _InterlockedIncrement(v101 + 9);
            *(_DWORD *)(a1 + 84) |= 1u;
            *(_QWORD *)(a1 + 88) = v101;
          }
          MiResolveSharedZeroFault(&v168, v93, v94);
          goto LABEL_335;
        }
        if ( v102 == qword_1403CB680 && v102 )
        {
          v103 = qword_1403CB678;
          LODWORD(v87) = 1;
          LOBYTE(v92) = v168;
          goto LABEL_315;
        }
      }
      v93 = (__int64)KeGetCurrentThread()->ApcState.Process;
      v101 = *(volatile signed __int32 **)(v93 + 1584);
      if ( !v101 )
        goto LABEL_256;
      v109 = v98 >> 12;
      if ( v98 >> 12 < (*((unsigned int *)v101 + 6) | ((unsigned __int64)*((unsigned __int8 *)v101 + 32) << 32))
        || v109 > (*((unsigned int *)v101 + 7) | ((unsigned __int64)*((unsigned __int8 *)v101 + 33) << 32)) )
      {
        v101 = *(volatile signed __int32 **)(v93 + 1576);
        while ( v101 )
        {
          if ( v109 > (*((unsigned int *)v101 + 7) | ((unsigned __int64)*((unsigned __int8 *)v101 + 33) << 32)) )
          {
            v101 = (volatile signed __int32 *)*((_QWORD *)v101 + 1);
          }
          else
          {
            if ( v109 >= (*((unsigned int *)v101 + 6) | ((unsigned __int64)*((unsigned __int8 *)v101 + 32) << 32)) )
            {
              *(_QWORD *)(v93 + 1584) = v101;
              goto LABEL_277;
            }
            v101 = *(volatile signed __int32 **)v101;
          }
        }
LABEL_256:
        v101 = 0LL;
        LOBYTE(v92) = v168;
        goto LABEL_257;
      }
LABEL_277:
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000LL) != 0 )
        goto LABEL_286;
      v110 = v98 & 0x7FFFFFFFF000LL;
      if ( (v98 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 )
      {
        v103 = qword_1403CB670;
        LODWORD(v87) = 1;
        ProtoPteAddress = qword_1403CB670;
        goto LABEL_310;
      }
      if ( v110 == qword_1403CB680 && v110 )
      {
        v103 = qword_1403CB678;
        LODWORD(v87) = 1;
        ProtoPteAddress = qword_1403CB678;
      }
      else
      {
LABEL_286:
        if ( (v101[12] & 7) == 2
          && (v101[16] & 0x10000000) != 0
          && (VadEvent = MiLocateVadEvent(v101, 32LL)) != 0
          && *(struct _KTHREAD **)(VadEvent + 8) != KeGetCurrentThread() )
        {
          v93 = 24LL;
          v103 = v100;
          LODWORD(v87) = 24;
          ProtoPteAddress = v100;
        }
        else
        {
          v112 = *((_DWORD *)v101 + 12);
          if ( (v112 & 0x20000000) != 0 )
          {
            v93 = 24LL;
            v103 = v100;
            LODWORD(v87) = 24;
            ProtoPteAddress = v100;
          }
          else
          {
            v113 = v101[12] & 7;
            if ( v113 == 1 )
            {
              v93 = 24LL;
              v103 = v100;
              LODWORD(v87) = 24;
              ProtoPteAddress = v100;
            }
            else if ( (v112 & 0x4000) != 0 )
            {
              v93 = 24LL;
              LODWORD(v87) = 24;
              if ( v113 != 3 && v113 != 5 )
              {
                v114 = (unsigned __int8)v112 >> 3;
                if ( *((_DWORD *)v101 + 13) < (int)v100 )
                  LODWORD(v87) = v114;
              }
              v103 = v100;
              ProtoPteAddress = v100;
            }
            else if ( (v101[16] & 0x1000000) == 0 || (v101[12] & 7) == 7 )
            {
              ProtoPteAddress = MiGetProtoPteAddress(v101, v98 >> 12, 4LL, v180);
              v103 = ProtoPteAddress;
              v93 = 24LL;
              if ( ProtoPteAddress )
              {
                LODWORD(v87) = (*((_DWORD *)v101 + 12) >> 3) & 0x1F;
                if ( (v101[12] & 7) == 2 && (_DWORD)v87 == 7 )
                  LODWORD(v87) = 256;
              }
              else
              {
                LODWORD(v87) = 24;
              }
              v115 = (_QWORD *)*((_QWORD *)v101 + 15);
              if ( (__int64)v115 < 0 )
              {
                v103 = ProtoPteAddress;
                if ( v109 - (*((unsigned int *)v101 + 6) | ((unsigned __int64)*((unsigned __int8 *)v101 + 32) << 32)) > (unsigned __int64)(*v115 - 1LL) >> 12 )
                  LODWORD(v87) = 24;
              }
              v94 = v184;
              LODWORD(v100) = 0;
            }
            else
            {
              v93 = 24LL;
              v103 = v100;
              LODWORD(v87) = 24;
              ProtoPteAddress = v100;
            }
          }
        }
      }
LABEL_310:
      LOBYTE(v92) = v168;
      if ( (_DWORD)v87 != 24 )
        goto LABEL_316;
      goto LABEL_257;
    }
    v92 |= 8u;
LABEL_228:
    v168 = v92;
    goto LABEL_229;
  }
  valid = MiResolveDemandZeroFault(v5, v76, 0LL, v90 & 2);
LABEL_203:
  v26 = valid;
LABEL_204:
  v4 = v167;
LABEL_205:
  v24 = 0xFFFFF6FB7DBED000uLL;
  v23 = 0xCFFFFFFFFFFFFFFFuLL;
LABEL_206:
  v82 = (volatile signed __int64 *)v4[2];
  v83 = *v4;
  if ( v82 )
  {
    v84 = *(_BYTE *)(v83 + 184) & 7;
    if ( v82 == (volatile signed __int64 *)0xFFFFF6FB7DBEDF68LL )
    {
      v85 = KeGetCurrentPrcb();
      if ( v84 )
      {
        if ( v84 == 7 )
        {
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v85->SelfmapLockHandle[1]);
        }
        else
        {
          v55 = v84 == 5;
          v148 = v85->SelfmapLockHandle;
          if ( !v55 )
            v148 = &v85->SelfmapLockHandle[3];
          KeReleaseInStackQueuedSpinLockFromDpcLevel(v148);
        }
      }
      else
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v85->SelfmapLockHandle[2]);
      }
    }
    else if ( v84 && (unsigned __int64)v82 >= v24 && (unsigned __int64)v82 <= 0xFFFFF6FB7DBEDFFFuLL )
    {
      v149 = (volatile signed __int32 *)MiGetPageTableLockBuffer(*v4, v4[2], &v166);
      v150 = ~(3 << v166);
      v152 = *v149;
      v151 = _InterlockedCompareExchange(v149, *v149 & v150, *v149);
      if ( v152 != v151 )
      {
        do
        {
          v153 = v151;
          v151 = _InterlockedCompareExchange(v149, v151 & v150, v151);
        }
        while ( v151 != v153 );
      }
    }
    else
    {
      PteShadow = *v82;
      if ( (unsigned __int64)v82 >= v24 && (unsigned __int64)v82 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow(v4[2], *v82);
      v156 = PteShadow;
      v155 = _InterlockedCompareExchange64(v82, v23 & PteShadow, PteShadow);
      if ( v156 != v155 )
      {
        do
        {
          v157 = v155;
          v155 = _InterlockedCompareExchange64(v82, v23 & v155, v155);
        }
        while ( v155 != v157 );
      }
    }
    v4[2] = 0LL;
  }
  v158 = *((unsigned __int8 *)v4 + 8);
  if ( *((_BYTE *)v4 + 9) )
    MiUnlockWorkingSetExclusive(v83, v158);
  else
    MiUnlockWorkingSetShared(v83, v158);
  return (unsigned int)v26;
}
