/*
 * XREFs of MiDeleteVad @ 0x1400F1A40
 * Callers:
 *     MiFreeVadRange @ 0x1400719E4 (MiFreeVadRange.c)
 *     MiUnmapVad @ 0x1404D72FC (MiUnmapVad.c)
 *     MiAllocateUserStack @ 0x1404E88F4 (MiAllocateUserStack.c)
 *     MiFreeToSubAllocatedRegion @ 0x140562CBC (MiFreeToSubAllocatedRegion.c)
 *     MiCleanVad @ 0x140595BD8 (MiCleanVad.c)
 *     MiAllocateVirtualMemory @ 0x1405B49A0 (MiAllocateVirtualMemory.c)
 *     MiMapViewOfPhysicalSection @ 0x140646C40 (MiMapViewOfPhysicalSection.c)
 *     MiCoalescePlaceholderAllocations @ 0x14074D2C8 (MiCoalescePlaceholderAllocations.c)
 *     MiCreateEnclave @ 0x140751C18 (MiCreateEnclave.c)
 *     MiFinishPlaceholderVadReplacement @ 0x1407550B8 (MiFinishPlaceholderVadReplacement.c)
 *     MiDeleteInsertedCloneVads @ 0x1407560B0 (MiDeleteInsertedCloneVads.c)
 * Callees:
 *     MiWalkPageTables @ 0x14000D8E0 (MiWalkPageTables.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiCheckProcessShadow @ 0x14001CFE0 (MiCheckProcessShadow.c)
 *     MiGetProtoPteAddress @ 0x14001E7D0 (MiGetProtoPteAddress.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     RtlAvlRemoveNode @ 0x14002A570 (RtlAvlRemoveNode.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     MiEmptyPageAccessLog @ 0x14007A620 (MiEmptyPageAccessLog.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     KeAbPostReleaseEx @ 0x14007C82C (KeAbPostReleaseEx.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140089F80 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400A22F0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiDereferenceExtendInfo @ 0x1400CF1C0 (MiDereferenceExtendInfo.c)
 *     MiDeleteDeferredCloneDescriptors @ 0x1400D2920 (MiDeleteDeferredCloneDescriptors.c)
 *     MiControlAreaRequiresCharge @ 0x1400E481C (MiControlAreaRequiresCharge.c)
 *     MiCheckControlArea @ 0x1400E5110 (MiCheckControlArea.c)
 *     MiDecrementSubsections @ 0x1400E5350 (MiDecrementSubsections.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400E6200 (MiUnlockWorkingSetExclusive.c)
 *     MiUnlockVad @ 0x1400E6930 (MiUnlockVad.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     MiFinishVadDeletion @ 0x1400F0F10 (MiFinishVadDeletion.c)
 *     ExpAcquireSpinLockExclusive @ 0x1400F3540 (ExpAcquireSpinLockExclusive.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     MiMakeSystemAddressValid @ 0x140122000 (MiMakeSystemAddressValid.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiDereferenceControlArea @ 0x1401404A0 (MiDereferenceControlArea.c)
 *     HvlNotifyLongSpinWait @ 0x14015AFE0 (HvlNotifyLongSpinWait.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x14024FF3C (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiLogPerfMemoryRangeEvent @ 0x1402547CC (MiLogPerfMemoryRangeEvent.c)
 *     MiDecrementLargeSubsections @ 0x14025D3E0 (MiDecrementLargeSubsections.c)
 *     MiRemoveUserPhysicalPagesVad @ 0x1402629CC (MiRemoveUserPhysicalPagesVad.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402682E4 (MiReturnCrossPartitionSectionCharges.c)
 *     MiReInsertPlaceholderVad @ 0x140268574 (MiReInsertPlaceholderVad.c)
 *     MiFreeLargePages @ 0x140268BB8 (MiFreeLargePages.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1402AE854 (EtwTraceAutoBoostEntryExhaustion.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402BA6B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402BA760 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402BA844 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     MiReturnPageTablePageCommitment @ 0x1404AF230 (MiReturnPageTablePageCommitment.c)
 *     MiRemoveSharedCommitNode @ 0x140595640 (MiRemoveSharedCommitNode.c)
 *     MiUnlockNestedVad @ 0x1405BFC80 (MiUnlockNestedVad.c)
 *     MiAweViewRemover @ 0x14074F7F4 (MiAweViewRemover.c)
 *     MiDeleteEnclavePages @ 0x14075220C (MiDeleteEnclavePages.c)
 *     MiDereferencePerSessionProtos @ 0x140754C70 (MiDereferencePerSessionProtos.c)
 */

int __fastcall MiDeleteVad(unsigned int *a1, __int64 a2, int a3)
{
  unsigned int *v3; // r13
  unsigned int v4; // ebx
  struct _KTHREAD *CurrentThread; // r15
  _KPROCESS *Process; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  unsigned int v9; // eax
  int v10; // ecx
  void *v11; // rcx
  unsigned int v12; // ecx
  __int64 v13; // rax
  unsigned int v14; // r12d
  char v15; // al
  LONG *p_Blink; // rdi
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // r10
  unsigned int v19; // esi
  _DWORD *SchedulerAssist; // rcx
  int v21; // eax
  signed __int32 v22; // edx
  bool v23; // zf
  signed __int32 v24; // eax
  unsigned __int8 v25; // di
  signed __int32 v26; // eax
  signed __int32 v27; // ett
  signed __int32 v28; // eax
  signed __int32 v29; // ett
  signed __int32 v30; // eax
  signed __int32 v31; // ett
  signed __int32 v32; // edx
  LONG *v33; // rdi
  _SLIST_ENTRY *v34; // rsi
  _KPROCESS *v35; // rcx
  int v36; // r14d
  __int64 v37; // r8
  __int64 v38; // r9
  struct _KPRCB *v39; // rdx
  _DWORD *v40; // rcx
  int v41; // eax
  _SLIST_ENTRY *Next; // rdi
  __int64 v43; // r8
  ULONG_PTR v44; // rsi
  struct _KTHREAD *v45; // r14
  unsigned int SessionId; // r8d
  unsigned __int8 v47; // r15
  __int64 v48; // rdx
  __int64 v49; // rcx
  int v50; // eax
  __int64 v51; // rcx
  _KLOCK_ENTRY *v52; // rsi
  __int64 v53; // rdx
  unsigned __int8 v54; // al
  struct _KTHREAD *v55; // rcx
  unsigned int v56; // ecx
  int v57; // eax
  int v58; // r14d
  __int64 *v59; // rax
  _KPROCESS *v60; // r12
  char v61; // cl
  unsigned __int8 v62; // cl
  int v63; // eax
  char v64; // al
  unsigned __int8 v65; // si
  LONG *v66; // rsi
  unsigned __int8 v67; // r15
  struct _KPRCB *v68; // r10
  _DWORD *v69; // rcx
  int v70; // eax
  signed __int32 v71; // ett
  __int64 v72; // r8
  __int64 v73; // rcx
  unsigned int v74; // ecx
  __int64 v75; // rdx
  unsigned int v76; // r15d
  unsigned int v77; // ecx
  _KPROCESS *v78; // rdx
  LONG *v79; // r14
  unsigned __int8 v80; // r12
  LONG *v81; // rcx
  LONG *v82; // rcx
  _QWORD *v83; // rcx
  LONG *v84; // rcx
  int v85; // ebx
  unsigned int v86; // ecx
  int v87; // ebx
  struct _KTHREAD *v88; // r15
  struct _KTHREAD *v89; // rsi
  ULONG_PTR v90; // r12
  _KLOCK_ENTRY *v91; // r14
  unsigned __int8 AbEntrySummary; // al
  unsigned __int8 AbOrphanedEntrySummary; // al
  __int64 v94; // rcx
  int v95; // eax
  __int64 v96; // r8
  __int64 v97; // r9
  int v98; // eax
  LONG *v99; // rsi
  unsigned __int8 v100; // r15
  __int64 v101; // r12
  struct _KPRCB *v102; // r10
  unsigned int v103; // r14d
  _DWORD *v104; // rcx
  int v105; // eax
  signed __int32 v106; // edx
  signed __int32 v107; // eax
  unsigned __int64 v108; // rcx
  int *v109; // r15
  unsigned __int64 v110; // rdi
  int v111; // edx
  unsigned __int64 v112; // rcx
  unsigned __int64 *v113; // r8
  unsigned int v114; // esi
  __int64 **v115; // r14
  __int64 *v116; // r10
  __int64 v117; // rcx
  unsigned __int64 v118; // r8
  __int64 v119; // rax
  __int64 v120; // r8
  PVOID v121; // rcx
  unsigned __int64 v122; // r15
  unsigned __int64 v123; // rax
  unsigned __int64 v124; // rsi
  PVOID v125; // rcx
  _QWORD *v126; // rax
  int v127; // eax
  _SLIST_ENTRY *v128; // r14
  _KPROCESS *v129; // rcx
  int v130; // r12d
  struct _KPRCB *v131; // rdx
  _DWORD *v132; // rcx
  int v133; // eax
  _SLIST_ENTRY *v134; // rsi
  __int64 v135; // r8
  unsigned __int64 v136; // rdx
  unsigned __int64 v137; // r9
  unsigned int v138; // eax
  unsigned int v139; // r10d
  unsigned int *v140; // r12
  unsigned int v141; // ecx
  int v142; // eax
  unsigned int v143; // r13d
  unsigned int v144; // edx
  unsigned int v145; // r15d
  int v146; // r8d
  BOOL v147; // r11d
  unsigned int v148; // r15d
  unsigned int v149; // r8d
  __int64 v150; // r15
  __int64 v151; // rcx
  _BYTE *v152; // r14
  unsigned int v153; // r8d
  unsigned __int64 v154; // r8
  unsigned int v155; // r9d
  __int64 v156; // rdx
  __int64 v157; // r8
  __int64 v158; // r9
  ULONG_PTR v159; // rsi
  struct _KTHREAD *v160; // r14
  ULONG_PTR v161; // r9
  unsigned __int8 v162; // r15
  __int64 v163; // rdx
  __int64 v164; // rcx
  int v165; // eax
  __int64 v166; // rcx
  _KLOCK_ENTRY *v167; // rsi
  __int64 v168; // r12
  __int64 v169; // rdx
  struct _KTHREAD *v170; // rcx
  __int64 v171; // rsi
  __int64 v172; // rsi
  char *v173; // r15
  __int64 v174; // rsi
  struct _KTHREAD *v175; // rax
  volatile signed __int64 *v176; // r14
  __int64 v177; // rdx
  __int64 v178; // r8
  __int64 v179; // r9
  __int64 v180; // rcx
  char **v181; // rax
  struct _KTHREAD *v182; // rsi
  unsigned int v183; // eax
  __int64 v184; // r9
  int result; // eax
  __int64 v186; // r13
  ULONG_PTR v187; // rdi
  __int64 v188; // r14
  __int64 v189; // rcx
  __int64 v190; // rsi
  BOOL v191; // r15d
  KIRQL v192; // bl
  char v193; // [rsp+40h] [rbp-C0h]
  _KPROCESS *v194; // [rsp+48h] [rbp-B8h]
  int Flink; // [rsp+50h] [rbp-B0h]
  int v196; // [rsp+50h] [rbp-B0h]
  unsigned int v197; // [rsp+50h] [rbp-B0h]
  ULONG_PTR BugCheckParameter2; // [rsp+58h] [rbp-A8h]
  unsigned __int8 v199; // [rsp+60h] [rbp-A0h]
  unsigned int v200; // [rsp+60h] [rbp-A0h]
  int v201; // [rsp+68h] [rbp-98h] BYREF
  int v202; // [rsp+6Ch] [rbp-94h] BYREF
  __int64 v203; // [rsp+70h] [rbp-90h]
  _QWORD *v204; // [rsp+78h] [rbp-88h]
  unsigned __int64 v205; // [rsp+80h] [rbp-80h]
  int v206; // [rsp+88h] [rbp-78h] BYREF
  int v207; // [rsp+8Ch] [rbp-74h]
  LONG *v208; // [rsp+90h] [rbp-70h]
  unsigned __int64 v209; // [rsp+98h] [rbp-68h]
  unsigned __int64 v210; // [rsp+A0h] [rbp-60h]
  PVOID P; // [rsp+A8h] [rbp-58h]
  int v212; // [rsp+B0h] [rbp-50h] BYREF
  int v213; // [rsp+B4h] [rbp-4Ch]
  int v214; // [rsp+B8h] [rbp-48h] BYREF
  int v215; // [rsp+BCh] [rbp-44h]
  int v216; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v217; // [rsp+C8h] [rbp-38h]
  struct _KTHREAD *v218; // [rsp+D0h] [rbp-30h]
  __int64 v219; // [rsp+D8h] [rbp-28h]
  __int64 v220; // [rsp+E0h] [rbp-20h] BYREF
  ULONG_PTR v221; // [rsp+E8h] [rbp-18h] BYREF
  unsigned __int64 v222; // [rsp+F0h] [rbp-10h]
  int v223; // [rsp+F8h] [rbp-8h]
  _QWORD v224[2]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v225; // [rsp+110h] [rbp+10h]
  __int64 *v226; // [rsp+118h] [rbp+18h]
  __int64 v227; // [rsp+120h] [rbp+20h]
  __int64 v228; // [rsp+128h] [rbp+28h]
  __int64 v229; // [rsp+130h] [rbp+30h]
  __int64 v230; // [rsp+138h] [rbp+38h] BYREF
  __int64 v231; // [rsp+140h] [rbp+40h]
  __int64 v232; // [rsp+148h] [rbp+48h]
  __int64 v233; // [rsp+150h] [rbp+50h]
  _QWORD v234[22]; // [rsp+160h] [rbp+60h] BYREF
  int v235; // [rsp+210h] [rbp+110h] BYREF
  __int16 v236; // [rsp+214h] [rbp+114h]
  __int64 v237; // [rsp+218h] [rbp+118h]
  __int64 v238; // [rsp+220h] [rbp+120h]
  __int64 v239; // [rsp+228h] [rbp+128h]
  char v240; // [rsp+2D0h] [rbp+1D0h] BYREF
  char v241; // [rsp+2E0h] [rbp+1E0h] BYREF
  void *retaddr; // [rsp+328h] [rbp+228h]

  v3 = a1;
  P = a1;
  v207 = a3;
  v230 = 0LL;
  v231 = 0LL;
  v4 = 0;
  v232 = 0LL;
  v233 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v7 = a1[7];
  v205 = (a1[6] | ((unsigned __int64)*((unsigned __int8 *)a1 + 32) << 32)) << 12;
  v8 = v7 | ((unsigned __int64)*((unsigned __int8 *)a1 + 33) << 32);
  v219 = a2;
  v9 = v3[12];
  v193 = 0;
  v218 = CurrentThread;
  v194 = Process;
  v221 = 0LL;
  v220 = 0LL;
  v203 = 0LL;
  v210 = (v8 << 12) | 0xFFF;
  if ( (v9 & 0x4000) != 0 )
  {
    v4 = 64;
    if ( (v9 & 7) != 5 )
      v4 = 0;
    v193 = v4;
  }
  else
  {
    if ( (v3[16] & 0x1000000) != 0 )
    {
      v10 = 0;
      if ( (v3[12] & 7) == 2 )
        v10 = 64;
      v4 = v10;
      v193 = v10;
    }
    v11 = (void *)*((_QWORD *)v3 + 16);
    if ( v11 )
      ObfDereferenceObject(v11);
  }
  v12 = v3[12];
  if ( (v12 & 0x10000) != 0 )
  {
    MiDeleteEnclavePages(Process, v3);
    v12 = v3[12];
  }
  if ( (v12 & 7) == 3 )
  {
    if ( (v12 & 0x10000) == 0 )
      MiAweViewRemover(Process, v3);
    MiRemoveUserPhysicalPagesVad(v3);
  }
  v13 = v3[13];
  LODWORD(v13) = v13 & 0x7FFFFFFF;
  if ( (v13 | ((unsigned __int64)*((unsigned __int8 *)v3 + 34) << 31)) == 0x7FFFFFFFDLL && *((_QWORD *)v3 + 2) == -2LL )
  {
    v4 |= 0x80u;
    v193 = v4;
  }
  --CurrentThread->SpecialApcDisable;
  v14 = v4;
  BugCheckParameter2 = (ULONG_PTR)&Process[1].Affinity.Bitmap[8];
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&Process[1].Affinity.Bitmap[8], 0LL);
  v15 = (__int64)Process[2].Header.WaitListHead.Flink & 7;
  v208 = &dword_1403CCD40;
  if ( v15 == 2 )
    p_Blink = &dword_1403CCD40;
  else
    p_Blink = (LONG *)&Process[2].Header.WaitListHead.Blink;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(p_Blink, CurrentIrql);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v19 = 0;
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
    if ( _interlockedbittestandset(p_Blink, 0x1Fu) )
    {
      KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
      v19 = ExpWaitForSpinLockExclusiveAndAcquire(p_Blink, CurrentIrql);
    }
    v22 = *p_Blink;
    while ( (v22 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (v22 & 0x40000000) == 0 )
      {
        v24 = _InterlockedCompareExchange(p_Blink, v22 | 0x40000000, v22);
        v23 = v22 == v24;
        v22 = v24;
        if ( !v23 )
          continue;
      }
      if ( (++v19 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v19);
      v22 = *p_Blink;
    }
  }
  p_Blink[1] = 0;
  v25 = KeGetCurrentIrql();
  __writecr8(2uLL);
  v26 = v3[12];
  do
  {
    while ( v26 < 0 )
    {
      if ( (v26 & 0x40000000) != 0 )
      {
        v212 = 0;
        do
        {
          KeYieldProcessorEx(&v212);
          v26 = v3[12];
        }
        while ( v26 < 0 );
      }
      else
      {
        v26 = _InterlockedCompareExchange((volatile signed __int32 *)v3 + 12, v26 | 0x40000000, v26);
      }
    }
    v27 = v26;
    v26 = _InterlockedCompareExchange((volatile signed __int32 *)v3 + 12, v26 & 0x3FFFFFFF | 0x80000000, v26);
  }
  while ( v27 != v26 );
  v28 = v3[12];
  do
  {
    v29 = v28;
    v28 = _InterlockedCompareExchange((volatile signed __int32 *)v3 + 12, v28 | 0x20000000, v28);
  }
  while ( v29 != v28 );
  v31 = v3[12];
  v30 = _InterlockedCompareExchange((volatile signed __int32 *)v3 + 12, v31 & 0x3FFFFFFF, v31);
  if ( v31 != v30 )
  {
    do
    {
      v32 = v30;
      v30 = _InterlockedCompareExchange((volatile signed __int32 *)v3 + 12, v30 & 0x3FFFFFFF, v30);
    }
    while ( v30 != v32 );
  }
  __writecr8(v25);
  v33 = &dword_1403CCD40;
  v34 = 0LL;
  Flink = (int)v194[2].Header.WaitListHead.Flink;
  if ( (Flink & 7) != 2 )
    v33 = (LONG *)&v194[2].Header.WaitListHead.Blink;
  if ( (Flink & 7) == 0 )
  {
    if ( *(_QWORD *)&v194[1].IdealGlobalNode )
    {
      v35 = KeGetCurrentThread()->ApcState.Process;
      if ( *(_WORD *)(*(_QWORD *)&v35[1].IdealGlobalNode + 336LL) )
        v34 = MiDeleteDeferredCloneDescriptors((__int64)v35);
    }
  }
  v36 = *(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x400000;
  MiCheckProcessShadow((__int64)&v194[1].IdealNode[12], 2);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v33, retaddr);
  else
    *v33 = 0;
  v39 = KeGetCurrentPrcb();
  v40 = v39->SchedulerAssist;
  if ( v40 )
  {
    if ( v39->NestingLevel <= 1u )
    {
      v41 = v40[5] - 1;
      v40[5] = v41;
      if ( !v41 )
      {
        v37 = *((unsigned __int8 *)v40 + 27);
        if ( !*((_BYTE *)v40 + 25) && !(_BYTE)v37 )
          KiPerformUnboostKick(v39);
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( v34 )
  {
    do
    {
      Next = v34->Next;
      ExFreePoolWithTag(v34, 0);
      v34 = Next;
    }
    while ( Next );
  }
  if ( !v36 && ((Flink & 0x8000000) != 0 || (Flink & 0x4000000) != 0 || (Flink & 0x10000000) != 0) )
  {
    MiLockWorkingSetShared((__int64)&v194[1].IdealNode[12]);
    MiUnlockWorkingSetShared((__int64)&v194[1].IdealNode[12], CurrentIrql, v43);
  }
  v44 = BugCheckParameter2;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2, (__int64)v39, v37, v38);
  v201 = 0;
  v45 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
    SessionId = MmGetSessionIdEx(v45->ApcState.Process);
  else
    SessionId = -1;
  --v45->SpecialApcDisable;
  v47 = ++v45->AbAllocationRegionCount;
  LODWORD(v48) = ((char)v45->AbEntrySummary | (char)v45->AbOrphanedEntrySummary) ^ 0x3F;
  v23 = !_BitScanReverse((unsigned int *)&v49, v48);
  v213 = v49;
  if ( v23 )
  {
LABEL_104:
    if ( (*((_DWORD *)&v45->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v45, v44, SessionId, 0LL);
  }
  else
  {
    while ( 1 )
    {
      v50 = ~(1 << v49);
      v51 = v49;
      v48 = v50 & (unsigned int)v48;
      v52 = &v45->LockEntries[v51];
      if ( (v52->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v52->LockState.0 & 1) == 0
        && (*(_QWORD *)&v52->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
        && v52->LockState.SessionId == SessionId )
      {
        v52->AcquiredByte &= ~1u;
        if ( v52->LockState.0 )
          break;
      }
      v23 = !_BitScanReverse((unsigned int *)&v49, v48);
      v213 = v49;
      if ( v23 )
        goto LABEL_103;
    }
    if ( !v52 )
    {
LABEL_103:
      v44 = BugCheckParameter2;
      goto LABEL_104;
    }
    v52->CrossThreadReleasableAndBusyByte |= 2u;
    if ( (__int64)v52->LockState.LockState < 0 )
      KiAbEntryRemoveFromTree(&v45->LockEntries[v51].TreeNode, v48);
    v201 = 0;
    v201 = v52->BoostBitmap.AllFields & 0x1FFFF;
    v52->BoostBitmap.AllFields &= 0xFFFE0000;
    v52->ThreadLocalFlags &= ~1u;
    v52->LockState.0 = 0LL;
    v53 = (unsigned __int128)(((char *)v52 - (char *)v45 - 800) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
    v44 = BugCheckParameter2;
    v54 = 1 << ((v53 >> 4) + (v53 < 0));
    if ( v47 == 1 )
      v45->AbEntrySummary |= v54;
    else
      _InterlockedOr8((volatile signed __int8 *)&v45->AbOrphanedEntrySummary, v54);
  }
  --v45->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(v45, v44, &v201);
  v23 = v45->SpecialApcDisable++ == -1;
  if ( v23 && ($005F0E83B22994B61E86C72E0CE43C71 *)v45->ApcState.ApcListHead[0].Flink != &v45->152 )
    KiCheckForKernelApcDelivery();
  v55 = v218;
  v23 = v218->SpecialApcDisable++ == -1;
  if ( v23 && ($005F0E83B22994B61E86C72E0CE43C71 *)v55->ApcState.ApcListHead[0].Flink != &v55->152 )
    KiCheckForKernelApcDelivery();
  v56 = v3[12];
  v57 = v56 & 7;
  if ( v57 == 3 )
  {
    v58 = 16;
  }
  else if ( v57 == 1 )
  {
    v59 = (__int64 *)*((_QWORD *)v3 + 9);
    if ( v59 )
      v203 = *v59;
    v58 = 32;
  }
  else if ( (v56 & 0x4000) != 0 )
  {
    v58 = 8;
    if ( v57 != 6 )
      v58 = 0;
  }
  else
  {
    v58 = ((v207 >> 31) & 1) + 2;
    if ( (v207 & 1) != 0 )
      v58 |= 4u;
  }
  if ( (v4 & 0x80u) == 0 )
  {
    v60 = KeGetCurrentThread()->ApcState.Process;
    v224[0] = 0LL;
    v224[1] = 0LL;
    v225 = 0LL;
    v227 = 0LL;
    v228 = 0LL;
    v229 = 0LL;
    memset(v234, 0, sizeof(v234));
    v61 = (char)v60[2].Header.WaitListHead.Flink;
    v226 = &v230;
    v227 = v58 | 0x40u;
    v62 = v61 & 7;
    if ( v62 )
      v63 = v62 < 2u ? 2 : 0;
    else
      v63 = 1;
    v235 = v63;
    v234[2] = &v235;
    v64 = v225;
    if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
      v64 = 1;
    v237 = 20LL;
    LOBYTE(v225) = v64;
    v234[21] = v224;
    v234[19] = MiDeleteVa;
    v234[20] = MiDeleteVaTail;
    v234[4] = v205;
    v234[5] = v210;
    v236 = 0;
    v238 = 0LL;
    v239 = 0LL;
    BYTE2(v234[1]) = 0;
    LODWORD(v234[0]) = 39;
    v234[3] = (char *)v60 + 1280;
    if ( v62 < 6u )
    {
      v66 = &dword_1403CCD40;
      if ( v62 != 2 )
        v66 = (LONG *)&v60[2].Header.WaitListHead.Blink;
      v67 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v66, v67);
      }
      else
      {
        v68 = KeGetCurrentPrcb();
        v69 = v68->SchedulerAssist;
        if ( v69 )
        {
          if ( v68->NestingLevel <= 1u )
          {
            v70 = v69[5];
            v69[5] = v70 + 1;
            if ( v70 == -1 && !*((_BYTE *)v69 + 25) && !*((_BYTE *)v69 + 27) )
              KiPerformUnboostKick(v68);
          }
        }
        _m_prefetchw(v66);
        v71 = *v66 & 0x7FFFFFFF;
        if ( v71 != _InterlockedCompareExchange(v66, v71 + 1, v71) )
        {
          KiSetVpThreadSpinLockCount(v68, 0LL);
          ExpWaitForSpinLockSharedAndAcquire(v66, v67);
        }
      }
      if ( v66[1] )
        _InterlockedExchange(v66 + 1, 0);
      v65 = v67;
    }
    else
    {
      v65 = KeGetCurrentIrql();
      __writecr8(2uLL);
    }
    BYTE4(v234[0]) = v65;
    MiWalkPageTables((int *)v234);
    v73 = (__int64)&v60[1].IdealNode[12];
    if ( (v234[0] & 4) != 0 )
      MiUnlockWorkingSetShared(v73, v65, v72);
    else
      MiUnlockWorkingSetExclusive(v73, v65);
    if ( v229 )
      v231 += MiFreeLargePages();
    v3 = (unsigned int *)P;
    if ( v233 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)&v60[1].Affinity.Bitmap[13], -v233);
    v14 = v4;
  }
  if ( (v58 & 2) != 0 )
  {
    v74 = v3[12];
    v75 = **((_QWORD **)v3 + 9);
    v203 = v75;
    if ( (v74 & 7) == 2 )
    {
      if ( (v3[16] & 0x1000000) != 0 )
      {
        v4 |= 0x18u;
        v193 = v4;
      }
    }
    else if ( *(_QWORD *)(v75 + 64) )
    {
      if ( ((((unsigned __int8)v74 >> 3) - 4) & 0xFFFFFFFD) == 0 )
        _InterlockedDecrement((volatile signed __int32 *)(v75 + 92));
      MiGetProtoPteAddress((__int64)v3, v3[6] | ((unsigned __int64)*((unsigned __int8 *)v3 + 32) << 32), 0, &v221);
      v4 = v14 | 0x20;
      if ( (v3[16] & 0x1000000) == 0 )
        v4 = v14;
      v193 = v4;
      MiGetProtoPteAddress((__int64)v3, v3[7] | ((unsigned __int64)*((unsigned __int8 *)v3 + 33) << 32), 0, &v220);
    }
    v76 = v4;
    if ( (v4 & 8) == 0 )
    {
      v77 = v3[12];
      if ( (v3[12] & 7) != 7 )
      {
        v78 = v194;
        v79 = &dword_1403CCD40;
        if ( ((__int64)v194[2].Header.WaitListHead.Flink & 7) != 2 )
          v79 = (LONG *)&v194[2].Header.WaitListHead.Blink;
        if ( *((_QWORD *)v79 + 6) )
        {
          v80 = KeGetCurrentIrql();
          __writecr8(2uLL);
          v81 = &dword_1403CCD40;
          LOBYTE(v78) = -1;
          if ( ((__int64)v194[2].Header.WaitListHead.Flink & 7) != 2 )
            v81 = (LONG *)&v194[2].Header.WaitListHead.Blink;
          v82 = v81 + 10;
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
            ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v82, v78);
          else
            ExpAcquireSpinLockExclusive(v82, v78);
          v83 = (_QWORD *)*((_QWORD *)v79 + 6);
          if ( v83 )
          {
            MiEmptyPageAccessLog(v83);
            *((_QWORD *)v79 + 6) = 0LL;
          }
          v84 = &dword_1403CCD40;
          if ( ((__int64)v194[2].Header.WaitListHead.Flink & 7) != 2 )
            v84 = (LONG *)&v194[2].Header.WaitListHead.Blink;
          ExReleaseSpinLockExclusiveFromDpcLevel(v84 + 10);
          __writecr8(v80);
          v77 = v3[12];
        }
        if ( (v77 & 7) == 2 )
        {
          v85 = v4 | 2;
          if ( (*(_DWORD *)(v203 + 56) & 0x4000000) == 0 )
            v85 = v76;
          v4 = v85 | 4;
        }
        else if ( (v77 & 0x4000) == 0 && !*(_QWORD *)(v203 + 64) )
        {
          MiGetProtoPteAddress((__int64)v3, v3[6] | ((unsigned __int64)*((unsigned __int8 *)v3 + 32) << 32), 0, &v221);
          MiGetProtoPteAddress((__int64)v3, v3[7] | ((unsigned __int64)*((unsigned __int8 *)v3 + 33) << 32), 0, &v220);
        }
      }
      v86 = v4;
      v87 = v4 | 1;
      if ( *((__int64 *)v3 + 15) >= 0 )
        v87 = v86;
      v4 = v87 | 8;
      v193 = v4;
    }
  }
  v88 = KeGetCurrentThread();
  --v88->SpecialApcDisable;
  v214 = 0;
  v89 = KeGetCurrentThread();
  v90 = (ULONG_PTR)&v194[1].Affinity.Bitmap[7];
  --v89->SpecialApcDisable;
  if ( ++v89->AbAllocationRegionCount != 1 )
  {
    _interlockedbittestandset((volatile signed __int32 *)&v89->116 + 1, 0x10u);
    v91 = 0LL;
    goto LABEL_197;
  }
  AbEntrySummary = v89->AbEntrySummary;
  if ( !AbEntrySummary )
  {
    if ( !v89->AbOrphanedEntrySummary )
    {
      v91 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(v89, v90);
      goto LABEL_188;
    }
    AbOrphanedEntrySummary = v89->AbOrphanedEntrySummary;
    v89->AbOrphanedEntrySummary = 0;
    v89->AbEntrySummary |= AbOrphanedEntrySummary;
    AbEntrySummary = v89->AbEntrySummary;
  }
  _BitScanForward((unsigned int *)&v94, AbEntrySummary);
  v223 = v94;
  v89->AbEntrySummary = AbEntrySummary & ~(1 << v94);
  v91 = &v89->LockEntries[v94];
LABEL_188:
  if ( v91 )
  {
    if ( v90 >= 0xFFFF800000000000uLL && byte_1403CCF90[((v90 >> 39) & 0x1FF) - 256] == 1 )
      v95 = MmGetSessionIdEx(v89->ApcState.Process);
    else
      v95 = -1;
    v91->LockState.SessionId = v95;
    v91->LockState.0 = ($A1A49EE4C6E599293708B9EDC35F5B5E)(v90 & 0x7FFFFFFFFFFFFFFCLL);
  }
  else
  {
    _interlockedbittestandset((volatile signed __int32 *)&v89->116 + 1, 0x10u);
  }
LABEL_197:
  --v89->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(v89, v90, &v214);
  v23 = v89->SpecialApcDisable++ == -1;
  if ( v23 && ($005F0E83B22994B61E86C72E0CE43C71 *)v89->ApcState.ApcListHead[0].Flink != &v89->152 )
    KiCheckForKernelApcDelivery();
  if ( _interlockedbittestandset64((volatile signed __int32 *)v90, 0LL) )
  {
    if ( v91 )
      KeAbPostReleaseEx(v90, v91);
    v98 = 0;
  }
  else
  {
    if ( v91 )
      v91->AcquiredByte |= 1u;
    v98 = 1;
  }
  if ( v98 )
  {
    LOBYTE(v88[1].Queue) |= 1u;
  }
  else
  {
    MiUnlockVad((__int64)v88, (__int64)v3, v96, v97);
    --v88->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(v90, 0LL);
    LOBYTE(v88[1].Queue) |= 1u;
    --v88->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v3 + 10), 0LL);
    LOBYTE(v88[1].Queue) |= 0x80u;
    KiLeaveGuardedRegionUnsafe(v88);
  }
  v216 = (v4 >> 7) & 1;
  if ( v216 )
  {
    v168 = 0LL;
  }
  else
  {
    --v218->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
    v99 = &dword_1403CCD40;
    if ( ((__int64)v194[2].Header.WaitListHead.Flink & 7) != 2 )
      v99 = (LONG *)&v194[2].Header.WaitListHead.Blink;
    v100 = KeGetCurrentIrql();
    v199 = v100;
    v101 = 2LL;
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v99, v100);
    }
    else
    {
      v102 = KeGetCurrentPrcb();
      v103 = 0;
      v104 = v102->SchedulerAssist;
      if ( v104 )
      {
        if ( v102->NestingLevel <= 1u )
        {
          v105 = v104[5];
          v104[5] = v105 + 1;
          if ( v105 == -1 && !*((_BYTE *)v104 + 25) && !*((_BYTE *)v104 + 27) )
            KiPerformUnboostKick(v102);
        }
      }
      if ( _interlockedbittestandset(v99, 0x1Fu) )
      {
        KiSetVpThreadSpinLockCount(v102, 0LL);
        v103 = ExpWaitForSpinLockExclusiveAndAcquire(v99, v100);
      }
      v106 = *v99;
      while ( (v106 & 0xBFFFFFFF) != 0x80000000 )
      {
        if ( (v106 & 0x40000000) == 0 )
        {
          v107 = _InterlockedCompareExchange(v99, v106 | 0x40000000, v106);
          v23 = v106 == v107;
          v106 = v107;
          if ( !v23 )
            continue;
        }
        if ( (++v103 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v103);
        v106 = *v99;
      }
    }
    v108 = v205;
    v109 = &v206;
    v110 = v210;
    v99[1] = 0;
    v206 = 0;
    do
    {
      v111 = 3;
      v112 = ((v108 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
      v113 = (unsigned __int64 *)&v241;
      do
      {
        *v113 = v112;
        v112 = ((v112 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        --v113;
        --v111;
      }
      while ( v111 );
      v114 = 0;
      v115 = (__int64 **)&v240;
      while ( 1 )
      {
        v116 = *v115;
        v117 = **v115;
        if ( (unsigned __int64)*v115 >= 0xFFFFF6FB7DBED000uLL
          && (unsigned __int64)v116 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0x1800000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v117 & 1) != 0
          && ((v117 & 0x20) == 0 || (v117 & 0x42) == 0) )
        {
          v118 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v118 )
          {
            v119 = *(_QWORD *)(v118 + 8 * (((unsigned __int64)v116 >> 3) & 0x1FF));
            v120 = v117 | 0x20;
            if ( (v119 & 0x20) == 0 )
              v120 = **v115;
            v117 = v120;
            if ( (v119 & 0x42) != 0 )
              v117 = v120 | 0x42;
          }
        }
        if ( !v117 )
          break;
        if ( (v117 & 1) == 0 && v114 != 2 )
          MiMakeSystemAddressValid((__int64)((_QWORD)v116 << 25) >> 16, 1);
        ++v114;
        ++v115;
        if ( v114 >= 3 )
          goto LABEL_255;
      }
      *(_BYTE *)v109 = 1 << (2 - v114);
LABEL_255:
      v109 = (int *)((char *)v109 + 1);
      v108 = v110;
      --v101;
    }
    while ( v101 );
    v3 = (unsigned int *)P;
    v121 = P;
    v122 = *(_QWORD *)P;
    v209 = v122;
    if ( v122 )
    {
      v123 = *(_QWORD *)(v122 + 8);
      if ( v123 )
      {
        do
        {
          v209 = v123;
          v123 = *(_QWORD *)(v123 + 8);
        }
        while ( v123 );
        v122 = v209;
      }
    }
    else
    {
      v122 = *((_QWORD *)P + 2) & 0xFFFFFFFFFFFFFFFCuLL;
      v209 = v122;
      if ( v122 )
      {
        do
        {
          if ( *(PVOID *)(v122 + 8) == v121 )
            break;
          v121 = (PVOID)v122;
          v122 = *(_QWORD *)(v122 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        }
        while ( v122 );
        v209 = v122;
      }
    }
    v124 = *((_QWORD *)P + 1);
    v125 = P;
    v204 = (_QWORD *)v124;
    if ( v124 )
    {
      v126 = *(_QWORD **)v124;
      if ( *(_QWORD *)v124 )
      {
        do
        {
          v204 = v126;
          v126 = (_QWORD *)*v126;
        }
        while ( v126 );
        v124 = (unsigned __int64)v204;
      }
    }
    else
    {
      v124 = *((_QWORD *)P + 2) & 0xFFFFFFFFFFFFFFFCuLL;
      v204 = (_QWORD *)v124;
      if ( v124 )
      {
        do
        {
          if ( *(PVOID *)v124 == v125 )
            break;
          v125 = (PVOID)v124;
          v124 = *(_QWORD *)(v124 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        }
        while ( v124 );
        v204 = (_QWORD *)v124;
      }
    }
    RtlAvlRemoveNode(&v194[2].Affinity.Bitmap[4], (__int64)P);
    LOBYTE(v4) = v193;
    if ( (unsigned int *)v194[2].Affinity.Bitmap[5] == v3 )
      v194[2].Affinity.Bitmap[5] = v194[2].Affinity.Bitmap[4];
    --v194[2].Affinity.Bitmap[6];
    v127 = v3[12] & 7;
    *((_QWORD *)v3 + 2) = -2LL;
    if ( v127 == 5 || v127 == 2 && (v3[16] & 0x1000000) != 0 )
      --HIDWORD(v194[2].ReadyListHead.Flink);
    v128 = 0LL;
    v196 = (int)v194[2].Header.WaitListHead.Flink;
    if ( (v196 & 7) != 2 )
      v208 = (LONG *)&v194[2].Header.WaitListHead.Blink;
    if ( (v196 & 7) == 0 )
    {
      if ( *(_QWORD *)&v194[1].IdealGlobalNode )
      {
        v129 = KeGetCurrentThread()->ApcState.Process;
        if ( *(_WORD *)(*(_QWORD *)&v129[1].IdealGlobalNode + 336LL) )
          v128 = MiDeleteDeferredCloneDescriptors((__int64)v129);
      }
    }
    v130 = *(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x400000;
    MiCheckProcessShadow((__int64)&v194[1].IdealNode[12], 2);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v208, retaddr);
    else
      *v208 = 0;
    v131 = KeGetCurrentPrcb();
    v132 = v131->SchedulerAssist;
    if ( v132 )
    {
      if ( v131->NestingLevel <= 1u )
      {
        v133 = v132[5] - 1;
        v132[5] = v133;
        if ( !v133 && !*((_BYTE *)v132 + 25) && !*((_BYTE *)v132 + 27) )
          KiPerformUnboostKick(v131);
      }
    }
    __writecr8(v199);
    if ( v128 )
    {
      do
      {
        v134 = v128->Next;
        ExFreePoolWithTag(v128, 0);
        v128 = v134;
      }
      while ( v134 );
      v124 = (unsigned __int64)v204;
    }
    if ( !v130 && ((v196 & 0x8000000) != 0 || (v196 & 0x4000000) != 0 || (v196 & 0x10000000) != 0) )
    {
      MiLockWorkingSetShared((__int64)&v194[1].IdealNode[12]);
      MiUnlockWorkingSetShared((__int64)&v194[1].IdealNode[12], v199, v135);
    }
    if ( !v219 )
    {
      v136 = v205 >> 16;
      v137 = v210 >> 16;
      v217 = v205 >> 16;
      v222 = v210 >> 16;
      if ( v122
        && ((v205 ^ ((*(unsigned int *)(v122 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v122 + 33) << 32)) << 12)) & 0xFFFFFFFFFFFF0000uLL) == 0 )
      {
        LODWORD(v136) = v136 + 1;
        v217 = (unsigned int)v136;
      }
      if ( v124
        && ((v210 ^ ((*(unsigned int *)(v124 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v124 + 32) << 32)) << 12)) & 0xFFFFFFFFFFFF0000uLL) == 0 )
      {
        v138 = v137 - 1;
        if ( !(_DWORD)v137 )
          goto LABEL_349;
        LODWORD(v137) = v137 - 1;
        v222 = v138;
      }
      v139 = 0;
      v200 = 0;
      v140 = (unsigned int *)(*(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode + 64LL);
      while ( 1 )
      {
        v141 = v136;
        v142 = *(v140 - 2) - qword_1403CBB68;
        if ( !(_DWORD)v136 )
        {
          if ( v142 )
            goto LABEL_314;
          v141 = 1;
        }
        if ( v141 > (unsigned int)v137 )
          goto LABEL_348;
LABEL_314:
        v143 = 8 * v142;
        if ( (unsigned int)v137 >= 8 * v142 )
        {
          v144 = v143 + *(v140 - 4);
          if ( v141 >= v144 )
            goto LABEL_346;
          v145 = v144 - 1;
          v146 = 8 * v142;
          if ( v141 >= v143 )
            v146 = v141;
          v147 = 0;
          if ( (unsigned int)v137 < v144 )
          {
            v147 = v141 >= v143;
            v145 = v137;
          }
          v148 = v145 - v146;
          LODWORD(v208) = v147;
          v149 = v146 - v143;
          v197 = v149;
          v150 = v148 + 1;
          if ( (_DWORD)v150 )
          {
            v151 = v149 & 7;
            v152 = (_BYTE *)(*((_QWORD *)v140 - 1) + ((unsigned __int64)v149 >> 3));
            if ( (unsigned int)(v151 + v150) > 8 )
            {
              if ( (v149 & 7) != 0 )
              {
                v150 = (unsigned int)(v151 + v150 - 8);
                *v152++ &= byte_1402FEA38[v151];
              }
              if ( (unsigned int)v150 > 8 )
              {
                memset(v152, 0, (unsigned __int64)(unsigned int)v150 >> 3);
                v149 = v197;
                v152 += (unsigned __int64)(unsigned int)v150 >> 3;
                v124 = (unsigned __int64)v204;
                v150 &= 7u;
                v139 = v200;
                v147 = (int)v208;
              }
              if ( (_DWORD)v150 )
                *v152 &= byte_1402FEA48[v150];
            }
            else
            {
              *v152 &= ~(byte_1402FEA38[v150] << v151);
            }
          }
          if ( *v140 > v149 )
            *v140 = v149;
          LODWORD(v122) = v209;
          v153 = 0;
          if ( v209 )
          {
            v154 = ((((*(unsigned int *)(v209 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v209 + 33) << 32)) << 12) | 0xFFF)
                  + 0xFFFF) >> 16;
            if ( (unsigned int)v154 > v143 )
            {
              v153 = v154 - v143;
              if ( !v153 )
                goto LABEL_336;
LABEL_338:
              v155 = *(v140 - 4);
              if ( v124 && ((*(_DWORD *)(v124 + 24) >> 4) | (*(unsigned __int8 *)(v124 + 32) << 28)) <= v155 + v143 )
                v155 = ((*(_DWORD *)(v124 + 24) >> 4) | (*(unsigned __int8 *)(v124 + 32) << 28)) - v143;
              if ( v153 < v140[2] && v155 - v153 >= v140[1] )
                v140[2] = v153;
              if ( v147 )
              {
LABEL_348:
                LOBYTE(v4) = v193;
                v3 = (unsigned int *)P;
                break;
              }
              LODWORD(v137) = v222;
LABEL_346:
              LODWORD(v136) = v217;
              goto LABEL_347;
            }
            v153 = 0;
          }
LABEL_336:
          if ( !v143 )
            v153 = 1;
          goto LABEL_338;
        }
LABEL_347:
        ++v139;
        v140 += 14;
        v200 = v139;
        if ( v139 >= 3 )
          goto LABEL_348;
      }
    }
LABEL_349:
    MiReturnPageTablePageCommitment(v205, v210, (_DWORD)v194, v122, v124, (__int64)v3, (__int64)&v206);
    v159 = BugCheckParameter2;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2, v156, v157, v158);
    v202 = 0;
    v160 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
      v161 = (unsigned int)MmGetSessionIdEx(v160->ApcState.Process);
    else
      v161 = 0xFFFFFFFFLL;
    --v160->SpecialApcDisable;
    v162 = ++v160->AbAllocationRegionCount;
    LODWORD(v163) = ((char)v160->AbEntrySummary | (char)v160->AbOrphanedEntrySummary) ^ 0x3F;
    v23 = !_BitScanReverse((unsigned int *)&v164, v163);
    v215 = v164;
    if ( v23 )
    {
LABEL_362:
      v168 = 0LL;
      if ( (*((_DWORD *)&v160->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v160, v159, v161, 0LL);
    }
    else
    {
      while ( 1 )
      {
        v165 = 1 << v164;
        v166 = v164;
        v167 = &v160->LockEntries[v166];
        v163 = ~v165 & (unsigned int)v163;
        if ( (v167->AcquiredByte & 1) != 0
          && (*(_DWORD *)&v167->LockState.0 & 1) == 0
          && (*(_QWORD *)&v167->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
          && v167->LockState.SessionId == (_DWORD)v161 )
        {
          v167->AcquiredByte &= ~1u;
          if ( v167->LockState.0 )
            break;
        }
        v23 = !_BitScanReverse((unsigned int *)&v164, v163);
        v215 = v164;
        if ( v23 )
          goto LABEL_361;
      }
      if ( !v167 )
      {
LABEL_361:
        v159 = BugCheckParameter2;
        goto LABEL_362;
      }
      v167->CrossThreadReleasableAndBusyByte |= 2u;
      if ( (__int64)v167->LockState.LockState < 0 )
        KiAbEntryRemoveFromTree(&v160->LockEntries[v166].TreeNode, v163);
      v168 = 0LL;
      v202 = 0;
      v202 = v167->BoostBitmap.AllFields & 0x1FFFF;
      v167->BoostBitmap.AllFields &= 0xFFFE0000;
      v167->ThreadLocalFlags &= ~1u;
      v167->LockState.0 = 0LL;
      v169 = ((char *)v167 - (char *)v160 - 800) / 96;
      if ( v162 == 1 )
        v160->AbEntrySummary |= 1 << v169;
      else
        _InterlockedOr8((volatile signed __int8 *)&v160->AbOrphanedEntrySummary, 1 << v169);
    }
    --v160->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts(v160, BugCheckParameter2, &v202);
    v23 = v160->SpecialApcDisable++ == -1;
    if ( v23 && ($005F0E83B22994B61E86C72E0CE43C71 *)v160->ApcState.ApcListHead[0].Flink != &v160->152 )
      KiCheckForKernelApcDelivery();
    v170 = v218;
    v23 = v218->SpecialApcDisable++ == -1;
    if ( v23 && ($005F0E83B22994B61E86C72E0CE43C71 *)v170->ApcState.ApcListHead[0].Flink != &v170->152 )
      KiCheckForKernelApcDelivery();
    v171 = v219;
    if ( v219 )
    {
      MiReInsertPlaceholderVad(v219);
      MiUnlockNestedVad(v171);
    }
  }
  *((_QWORD *)v3 + 1) = v231;
  *(_QWORD *)v3 = v232;
  if ( (v4 & 0x40) != 0 && (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    MiLogPerfMemoryRangeEvent(
      v205,
      v194,
      26LL,
      (v3[7] | ((unsigned __int64)*((unsigned __int8 *)v3 + 33) << 32))
    - (v3[6] | ((unsigned __int64)*((unsigned __int8 *)v3 + 32) << 32))
    + 1);
  v172 = v203;
  if ( (v4 & 1) != 0 )
    MiDereferenceExtendInfo((__int64)v3, v203);
  if ( (v4 & 8) != 0 )
  {
    if ( (v4 & 2) != 0 )
    {
      MmGetSessionIdEx(v194);
      MiDereferencePerSessionProtos(v172);
    }
    if ( (v4 & 4) != 0 && (MiControlAreaRequiresCharge(v172, 0LL) & 0xFFFFFFFD) == 0 )
      MiReturnCrossPartitionControlAreaCharges(v172);
    MiRemoveSharedCommitNode(v172, v194, 0LL);
    v173 = (char *)(v3 + 24);
    v174 = **((_QWORD **)v3 + 9);
    v175 = KeGetCurrentThread();
    --v175->SpecialApcDisable;
    v176 = (volatile signed __int64 *)(v174 + 104);
    ExAcquirePushLockExclusiveEx(v174 + 104, 0LL);
    if ( (*(_DWORD *)(v174 + 56) & 0x400) == 0 )
    {
      v180 = *(_QWORD *)v173;
      v181 = (char **)*((_QWORD *)v3 + 13);
      if ( *(char **)(*(_QWORD *)v173 + 8LL) != v173 || *v181 != v173 )
        __fastfail(3u);
      *v181 = (char *)v180;
      *(_QWORD *)(v180 + 8) = v181;
    }
    v182 = KeGetCurrentThread();
    if ( (_InterlockedExchangeAdd64(v176, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v176, v177, v178, v179);
    KeAbPostRelease((ULONG_PTR)v176);
    v23 = v182->SpecialApcDisable++ == -1;
    if ( v23 && ($005F0E83B22994B61E86C72E0CE43C71 *)v182->ApcState.ApcListHead[0].Flink != &v182->152 )
      KiCheckForKernelApcDelivery();
  }
  v183 = 0;
  if ( v219 || v216 )
    v183 = 1;
  v184 = v183 | 2;
  if ( (v207 & 0x40000000) == 0 )
    v184 = v183;
  result = MiFinishVadDeletion(v3, v205, v210, v184);
  v186 = v203;
  if ( v203 )
  {
    if ( (v4 & 0x10) != 0 )
    {
      return MiDereferenceControlArea(v203);
    }
    else
    {
      v187 = v221;
      v188 = v220;
      if ( v221 && (v4 & 0x20) != 0 )
        MiDecrementLargeSubsections(v221, v220);
      v189 = v186 + 72;
      v190 = 0LL;
      v191 = *(_QWORD *)(v186 + 64) != 0LL;
      v192 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v189, v192);
      else
        ExpAcquireSpinLockExclusive(v189, v192);
      if ( v187 )
        v168 = MiDecrementSubsections(v187, v188, 8u);
      --*(_QWORD *)(v186 + 40);
      --*(_QWORD *)(v186 + 48);
      if ( v168 )
        v190 = *(_QWORD *)(qword_1403CBD88 + 8LL * (*(_WORD *)(v186 + 60) & 0x3FF));
      result = MiCheckControlArea(v186, v192);
      if ( v168 )
        return MiReturnCrossPartitionSectionCharges(v190, v191, v168);
    }
  }
  return result;
}
