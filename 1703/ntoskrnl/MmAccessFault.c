/*
 * XREFs of MmAccessFault @ 0x1400BDCD0
 * Callers:
 *     MiMakeSystemAddressValidSystemWs @ 0x140004860 (MiMakeSystemAddressValidSystemWs.c)
 *     MiInPageSingleKernelStack @ 0x140011AE8 (MiInPageSingleKernelStack.c)
 *     MiMakeImageReadOnly @ 0x140028ABC (MiMakeImageReadOnly.c)
 *     MiSectionCreated @ 0x14005E604 (MiSectionCreated.c)
 *     MiMakeDriverPagesPrivate @ 0x14006C72C (MiMakeDriverPagesPrivate.c)
 *     MiMakeProtoAddressValid @ 0x1400788F8 (MiMakeProtoAddressValid.c)
 *     MiWalkVaRange @ 0x14007B280 (MiWalkVaRange.c)
 *     MiReleaseOutSwapReservations @ 0x14007D900 (MiReleaseOutSwapReservations.c)
 *     MmCheckCachedPageStates @ 0x14009E320 (MmCheckCachedPageStates.c)
 *     MmCopyToCachedPage @ 0x14009F980 (MmCopyToCachedPage.c)
 *     MiProtectPool @ 0x1400A5D90 (MiProtectPool.c)
 *     MiProbeLeafFrame @ 0x1400B44D0 (MiProbeLeafFrame.c)
 *     MiDeleteSubsectionPages @ 0x1400C4590 (MiDeleteSubsectionPages.c)
 *     MiWalkEntireImage @ 0x1400C9D50 (MiWalkEntireImage.c)
 *     MiMakeSystemAddressValid @ 0x1400D0A70 (MiMakeSystemAddressValid.c)
 *     MiLockCode @ 0x140100CD0 (MiLockCode.c)
 *     MiPrefetchVirtualMemory @ 0x140108070 (MiPrefetchVirtualMemory.c)
 *     MiPfPutPagesInTransition @ 0x140108850 (MiPfPutPagesInTransition.c)
 *     MiInitializeImageProtos @ 0x14010A158 (MiInitializeImageProtos.c)
 *     MiCheckProtoPtePageState @ 0x14010B1D8 (MiCheckProtoPtePageState.c)
 *     KiPageFault @ 0x14018E8C0 (KiPageFault.c)
 *     MiLockHotPatchPages @ 0x140211784 (MiLockHotPatchPages.c)
 *     MiPurgeImageSection @ 0x140215D80 (MiPurgeImageSection.c)
 *     MiBuildFileOnlyProtos @ 0x14021816C (MiBuildFileOnlyProtos.c)
 *     MiEliminateStaleExtents @ 0x140218880 (MiEliminateStaleExtents.c)
 *     MiEnableLargeSubsection @ 0x140218958 (MiEnableLargeSubsection.c)
 *     MiInsertLargeVadMapping @ 0x14021BFD8 (MiInsertLargeVadMapping.c)
 *     MiDeletePerSessionProtos @ 0x140221048 (MiDeletePerSessionProtos.c)
 *     MiInitializeProtoPfn @ 0x14022136C (MiInitializeProtoPfn.c)
 *     ExpSvmServicePageFault @ 0x14025E930 (ExpSvmServicePageFault.c)
 *     MmVirtualAccessFault @ 0x1406B83CC (MmVirtualAccessFault.c)
 * Callees:
 *     MiProcessWsInSwapFault @ 0x140011F40 (MiProcessWsInSwapFault.c)
 *     MiIsRetryIoStatus @ 0x140015264 (MiIsRetryIoStatus.c)
 *     ExReleaseSpinLockExclusive @ 0x14001DF40 (ExReleaseSpinLockExclusive.c)
 *     MiAllowGuardFault @ 0x140027A0C (MiAllowGuardFault.c)
 *     KeInvalidAccessAllowed @ 0x140027A64 (KeInvalidAccessAllowed.c)
 *     MiReleaseFaultCharges @ 0x1400322C4 (MiReleaseFaultCharges.c)
 *     MiDeprioritizeVad @ 0x140033E78 (MiDeprioritizeVad.c)
 *     KeResetEvent @ 0x14004BD20 (KeResetEvent.c)
 *     MiProtoFault @ 0x14006B9C4 (MiProtoFault.c)
 *     MiRetainSubsection @ 0x14006BC58 (MiRetainSubsection.c)
 *     MiCheckFatalAccessViolation @ 0x140073514 (MiCheckFatalAccessViolation.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x140073B74 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiPageAvailable @ 0x140075688 (MiPageAvailable.c)
 *     MiLockTransitionLeafPage @ 0x14007A494 (MiLockTransitionLeafPage.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140096D40 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiIssueHardFault @ 0x140096E10 (MiIssueHardFault.c)
 *     MiUpdatePageTableUseCount @ 0x1400A56C0 (MiUpdatePageTableUseCount.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     MiSystemFault @ 0x1400B04A0 (MiSystemFault.c)
 *     MiGetAnyMultiplexedVm @ 0x1400B1BCC (MiGetAnyMultiplexedVm.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400B7600 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiResolveDemandZeroFault @ 0x1400BA780 (MiResolveDemandZeroFault.c)
 *     MiResolvePrivateZeroFault @ 0x1400BAF20 (MiResolvePrivateZeroFault.c)
 *     MiCheckVadSequential @ 0x1400BD3B0 (MiCheckVadSequential.c)
 *     MiGetProtoPteAddress @ 0x1400BD630 (MiGetProtoPteAddress.c)
 *     MiResolvePageTablePage @ 0x1400BF190 (MiResolvePageTablePage.c)
 *     MiDispatchFault @ 0x1400BF7D0 (MiDispatchFault.c)
 *     MiResolveSharedZeroFault @ 0x1400C18A0 (MiResolveSharedZeroFault.c)
 *     MiLocateAddress @ 0x1400C2010 (MiLocateAddress.c)
 *     MiCheckVirtualAddress @ 0x1400C20D0 (MiCheckVirtualAddress.c)
 *     MiLocateVadEvent @ 0x1400CE790 (MiLocateVadEvent.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x1400D6900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     KeDelayExecutionThread @ 0x1400EE150 (KeDelayExecutionThread.c)
 *     MiCopyOnWriteEx @ 0x1400FB340 (MiCopyOnWriteEx.c)
 *     MiValidFault @ 0x1400FCBC0 (MiValidFault.c)
 *     MiFreeInPageSupportBlock @ 0x140109900 (MiFreeInPageSupportBlock.c)
 *     MiRaisedIrqlFault @ 0x1401314B8 (MiRaisedIrqlFault.c)
 *     MiWaitForRotateToComplete @ 0x140131EBC (MiWaitForRotateToComplete.c)
 *     MiDereferenceControlArea @ 0x14013645C (MiDereferenceControlArea.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiGetPrototypePteDirect @ 0x14017CE98 (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x14017CEE4 (MiIsPrototypePteVadLookup.c)
 *     MiMakeDemandZeroPte @ 0x14017CF18 (MiMakeDemandZeroPte.c)
 *     MiMakePrototypePteVadLookup @ 0x14017CF60 (MiMakePrototypePteVadLookup.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     HvlNotifyLongSpinWait @ 0x1401E5050 (HvlNotifyLongSpinWait.c)
 *     MiIsVadEligibleForCommitRelease @ 0x14020B2A0 (MiIsVadEligibleForCommitRelease.c)
 *     MiPrefetchJumpVad @ 0x140213F48 (MiPrefetchJumpVad.c)
 *     MiLargePageFault @ 0x14021C114 (MiLargePageFault.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWaitForFreePage @ 0x140220450 (MiWaitForFreePage.c)
 *     EtwTracePageFault @ 0x14025391C (EtwTracePageFault.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14025C6B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14025C828 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiCheckForUserStackOverflow @ 0x14043EBA8 (MiCheckForUserStackOverflow.c)
 *     MiAllocateFileExtents @ 0x1406B6DDC (MiAllocateFileExtents.c)
 */

__int64 __fastcall MmAccessFault(ULONG_PTR BugCheckParameter2, signed __int64 a2, unsigned __int8 a3, ULONG_PTR a4)
{
  ULONG_PTR v4; // r15
  ULONG_PTR v6; // r12
  ULONG_PTR v7; // rdi
  int v9; // esi
  int v10; // r8d
  __int64 v11; // rcx
  ULONG_PTR *v12; // rdx
  unsigned __int64 v13; // rcx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v15; // r9
  unsigned __int64 PrototypePteDirect; // r13
  struct _KPROCESS *Process; // r11
  unsigned int v18; // eax
  unsigned int valid; // ebx
  char v20; // r14
  int v21; // r9d
  __int64 v22; // rdi
  char v23; // al
  LONG *p_ProfileListHead; // r14
  bool v25; // cc
  __int64 v26; // rax
  __int64 v27; // rbx
  unsigned __int64 v28; // r8
  _QWORD *v29; // rcx
  unsigned __int64 v30; // rdx
  LARGE_INTEGER *v31; // rdi
  LONG *v32; // rbx
  __int64 CurrentIrql; // rcx
  unsigned int v34; // edi
  signed __int32 v35; // edx
  bool v36; // zf
  signed __int32 v37; // eax
  unsigned __int8 v38; // r10
  void *v39; // r11
  char v40; // al
  void *Address; // rax
  char v42; // al
  int v43; // r9d
  _QWORD *v44; // r14
  char *AnyMultiplexedVm; // rsi
  __int64 v46; // rsi
  __int64 DemandZeroPte; // rax
  unsigned __int64 v48; // r9
  unsigned __int64 v49; // r10
  int v50; // edi
  _KPROCESS *v51; // r9
  __int64 v52; // r8
  char v53; // cl
  unsigned __int64 v54; // r14
  __int64 v55; // rdx
  unsigned int *v56; // rbx
  LONG *v57; // rcx
  unsigned __int64 v58; // rdi
  unsigned int v59; // esi
  __int64 VadEvent; // rax
  __int64 ProtoPteAddress; // rax
  __int64 v62; // rcx
  __int64 PrototypePteVadLookup; // rax
  ULONG_PTR v64; // rcx
  __int64 v65; // rcx
  int v66; // r14d
  __int64 v67; // rax
  __int64 v68; // r9
  char v69; // r10
  char v70; // r11
  __int64 v71; // rdi
  __int64 v72; // rdx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // r9
  __int64 v76; // r10
  _BYTE *v77; // rcx
  char v78; // r8
  PVOID v79; // rdi
  __int64 v80; // rax
  __int64 v81; // r10
  __int64 v82; // rcx
  __int64 v83; // r10
  __int64 v84; // rcx
  unsigned __int8 v85; // di
  LONG *v86; // rax
  __int64 v87; // rax
  __int64 v88; // rdx
  __int64 v89; // r9
  int v90; // r8d
  char v91; // r14
  PVOID v92; // rsi
  __int64 v93; // rax
  __int64 *v94; // r14
  __int64 v95; // rdi
  LONG *SharedVm; // rax
  ULONG_PTR v97; // r9
  __int64 v98; // rdi
  bool v99; // cf
  int v100; // eax
  unsigned __int64 v101; // r15
  __int64 v102; // rcx
  int Timeout; // [rsp+28h] [rbp-E0h]
  int v104; // [rsp+30h] [rbp-D8h]
  unsigned __int8 v105; // [rsp+58h] [rbp-B0h]
  unsigned __int8 v106; // [rsp+59h] [rbp-AFh] BYREF
  char *v107; // [rsp+60h] [rbp-A8h]
  int v108; // [rsp+68h] [rbp-A0h]
  int v109; // [rsp+6Ch] [rbp-9Ch]
  ULONG_PTR BugCheckParameter2a; // [rsp+70h] [rbp-98h]
  PVOID P; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v112; // [rsp+80h] [rbp-88h]
  __int64 v113; // [rsp+88h] [rbp-80h]
  struct _KPROCESS *v114; // [rsp+90h] [rbp-78h]
  __int64 *v115; // [rsp+98h] [rbp-70h] BYREF
  struct _KTHREAD *i; // [rsp+A0h] [rbp-68h]
  ULONG_PTR BugCheckParameter3; // [rsp+A8h] [rbp-60h]
  _KPROCESS *v118; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v119; // [rsp+B8h] [rbp-50h]
  __int64 v120; // [rsp+C0h] [rbp-48h]
  PVOID v121; // [rsp+C8h] [rbp-40h] BYREF
  ULONG_PTR v122; // [rsp+D0h] [rbp-38h]
  char *v123; // [rsp+D8h] [rbp-30h] BYREF
  ULONG_PTR v124; // [rsp+E0h] [rbp-28h]
  __int16 v125; // [rsp+E8h] [rbp-20h]
  int v126; // [rsp+F8h] [rbp-10h] BYREF
  ULONG_PTR v127; // [rsp+100h] [rbp-8h]
  unsigned __int64 v128; // [rsp+110h] [rbp+8h]
  int v129; // [rsp+118h] [rbp+10h]
  int v130; // [rsp+11Ch] [rbp+14h]
  char v131; // [rsp+120h] [rbp+18h]
  int v132; // [rsp+124h] [rbp+1Ch]
  unsigned __int16 *v133; // [rsp+128h] [rbp+20h]
  unsigned __int64 v134; // [rsp+130h] [rbp+28h]
  unsigned int *v135; // [rsp+138h] [rbp+30h]
  __int64 v136; // [rsp+140h] [rbp+38h]
  char v137[8]; // [rsp+148h] [rbp+40h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+150h] [rbp+48h] BYREF
  __int64 v139; // [rsp+168h] [rbp+60h] BYREF
  _QWORD v140[3]; // [rsp+170h] [rbp+68h] BYREF
  ULONG_PTR v141; // [rsp+188h] [rbp+80h] BYREF
  unsigned __int64 v142; // [rsp+190h] [rbp+88h]
  unsigned __int64 v143; // [rsp+198h] [rbp+90h]
  __int64 v144; // [rsp+1A0h] [rbp+98h]
  void *retaddr; // [rsp+200h] [rbp+F8h]

  v105 = a3;
  BugCheckParameter2a = BugCheckParameter2;
  v4 = a4;
  v6 = a2;
  v7 = BugCheckParameter2;
  if ( (BugCheckParameter2 & 9) == 9 )
    KeBugCheckEx(0x1Au, 0x61941uLL, a2, BugCheckParameter2, a4);
  if ( (unsigned __int64)((a2 >> 47) + 1) > 1 )
  {
    if ( a3 != 1
      && ((a4 & 1) == 0 || ((*(_BYTE *)(a4 & 0xFFFFFFFFFFFFFFFEuLL) - 1) & 0xFD) != 0)
      && ((a4 & 1) != 0 || !KeInvalidAccessAllowed(a4)) )
    {
      KeBugCheckEx(0x50u, v6, v7, a4, 4uLL);
    }
    return 3221225477LL;
  }
  if ( (BugCheckParameter2 & 0x8000) != 0 )
    return 3221225477LL;
  v9 = 3;
  v10 = 3;
  v11 = ((unsigned __int64)a2 >> 9) & 0x7FFFFFFFF8LL;
  v12 = &v141;
  BugCheckParameter3 = v11 - 0x98000000000LL;
  v141 = v11 - 0x98000000000LL;
  do
  {
    v13 = *v12--;
    *v12 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v10;
  }
  while ( v10 );
  if ( KeGetCurrentIrql() > 1u )
    return MiRaisedIrqlFault(v7, v6, a4);
  CurrentThread = KeGetCurrentThread();
  v15 = v6;
  PrototypePteDirect = 0LL;
  LOBYTE(v109) = 0;
  Process = CurrentThread->ApcState.Process;
  v114 = Process;
  v115 = 0LL;
  v122 = 0LL;
  v112 = 4096;
  for ( i = CurrentThread; v15 >= 0xFFFFF68000000000uLL; v15 = (__int64)(v15 << 25) >> 16 )
  {
    if ( v15 > 0xFFFFF6FFFFFFFFFFuLL )
      break;
  }
  if ( v6 >= 0xFFFF800000000000uLL )
  {
    if ( a3 == 1 )
      return 3221225477LL;
    if ( v6 >= 0xFFFFF68000000000uLL && v6 <= 0xFFFFF6FFFFFFFFFFuLL && v15 >= qword_14036D870 && v15 <= qword_14036C5D0 )
    {
      v7 |= 2uLL;
      BugCheckParameter2a = v7;
    }
    v123 = 0LL;
    v124 = 0LL;
    v125 = 17;
    v18 = MiSystemFault(v7, v6, v4, v15, v140, (__int64 *)&v123);
    valid = v18;
    v20 = HIBYTE(v125);
    v107 = v123;
    PrototypePteDirect = v124;
    v106 = v125;
    v109 = HIBYTE(v125);
    if ( v18 != 192 )
    {
      if ( v18 != -1073741802 )
      {
        v98 = (__int64)i;
        goto LABEL_297;
      }
      v21 = 0;
      P = 0LL;
      goto LABEL_221;
    }
    Process = v114;
  }
  v22 = (__int64)&Process[1].IdealNode[12];
  v23 = (__int64)Process[2].Header.WaitListHead.Blink & 7;
  v107 = (char *)&Process[1].IdealNode[12];
  p_ProfileListHead = &dword_14036D4C0;
  if ( v23 != 2 )
    p_ProfileListHead = (LONG *)&Process[2].ProfileListHead;
  v25 = LODWORD(Process[2].Affinity.Bitmap[3]) <= 0x10;
  P = 0LL;
  if ( v25
    || Process == PsInitialSystemProcess
    || (v26 = *(_QWORD *)(qword_14036C8F8 + 8LL * WORD2(Process[1].SecurePid)), *(_DWORD *)(v26 + 1192))
    && *(struct _KPROCESS **)(v26 + 1296) == Process )
  {
    if ( !dword_14036CEA8 )
      goto LABEL_52;
    goto LABEL_51;
  }
  v27 = *(_QWORD *)(qword_14036C8F8 + 8LL * WORD2(Process[1].SecurePid));
  v28 = *(_QWORD *)(v27 + 6144);
  if ( (unsigned __int16)KeNumberNodes <= 1u )
    goto LABEL_39;
  v29 = (_QWORD *)(*(_QWORD *)(v27 + 48) + 2184LL * KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0]);
  v30 = 16 * (v29[4] + v29[5] + 32LL * (v29[2] + v29[3] + ((*v29 + v29[1]) << 9))) + v29[251] + v29[252];
  if ( v30 >= 0x420 )
    goto LABEL_48;
  if ( v28 >= v30 >> 4 )
LABEL_39:
    v30 = *(_QWORD *)(v27 + 5760);
  if ( v30 >= 0x420 || v28 < 0x4000 && v28 < v30 >> 4 )
  {
LABEL_48:
    if ( !dword_14036CEA8 )
      goto LABEL_52;
LABEL_51:
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi10Milliseconds);
    goto LABEL_52;
  }
  LODWORD(Process[2].Affinity.Bitmap[3]) = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v27 + 4672), &LockHandle);
  if ( *(_QWORD *)(v27 + 5760) < 0x420uLL )
  {
    v31 = (LARGE_INTEGER *)&MiHalfSecond;
    if ( v114->BasePriority >= 9 )
      v31 = (LARGE_INTEGER *)&Mi30Milliseconds;
    KeResetEvent((PRKEVENT)(v27 + 4744));
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    KeWaitForSingleObject((PVOID)(v27 + 4744), WrFreePage, 0, 0, v31);
    v22 = (__int64)v107;
  }
  else
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
  }
LABEL_52:
  v32 = &dword_14036D4C0;
  if ( (*(_BYTE *)(v22 + 192) & 7) != 2 )
    v32 = (LONG *)(v22 + 200);
  CurrentIrql = KeGetCurrentIrql();
  v113 = CurrentIrql;
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v32, (unsigned __int8)CurrentIrql);
  }
  else
  {
    v34 = 0;
    if ( _interlockedbittestandset(v32, 0x1Fu) )
      v34 = ExpWaitForSpinLockExclusiveAndAcquire(v32, CurrentIrql);
    v35 = *v32;
    while ( (v35 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (v35 & 0x40000000) == 0 )
      {
        v37 = _InterlockedCompareExchange(v32, v35 | 0x40000000, v35);
        v36 = v35 == v37;
        v35 = v37;
        if ( !v36 )
          continue;
      }
      if ( (++v34 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v34);
      v35 = *v32;
    }
    v22 = (__int64)v107;
  }
  v38 = v113;
  v39 = 0LL;
  v32[1] = 0;
  v40 = *(_BYTE *)(v22 + 195) & 0xC0;
  v106 = v38;
  if ( v40 == -64 && *((_QWORD *)p_ProfileListHead + 4) && v6 < 0xFFFF800000000000uLL )
  {
    Address = (void *)MiLocateAddress(v6);
    P = Address;
    if ( !Address || (unsigned int)MiIsVadEligibleForCommitRelease(Address) )
      goto LABEL_129;
    P = v39;
  }
  if ( (void *)v114[1].Affinity.Bitmap[9] != v39 )
  {
    if ( (unsigned int)MiWaitForRotateToComplete(v6, v38) == 1 )
    {
      valid = 0;
LABEL_130:
      AnyMultiplexedVm = v107;
LABEL_131:
      if ( (v4 & 1) != 0 && *(_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL) == 3 )
        MiProcessWsInSwapFault(v140);
      MiPreUnlockWorkingSetExclusive(AnyMultiplexedVm, v106);
      v57 = &dword_14036D4C0;
      if ( (AnyMultiplexedVm[192] & 7) != 2 )
        v57 = (LONG *)(AnyMultiplexedVm + 200);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v57, retaddr);
      else
        *v57 = 0;
      __writecr8(v106);
      goto LABEL_281;
    }
    v38 = v113;
  }
  if ( v6 - 0x7FFFFFFF0000LL <= 0xFFFF00000000FFFFuLL )
  {
LABEL_129:
    valid = -1073741819;
    goto LABEL_130;
  }
  LODWORD(v7) = BugCheckParameter2a;
  LOBYTE(v104) = v105;
  LOBYTE(Timeout) = v38;
  valid = MiResolvePageTablePage(BugCheckParameter2a, v6, v140, v4, Timeout, v104);
  if ( valid != -1073741802 )
    goto LABEL_130;
  v142 = ((v6 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v143 = ((v142 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v144 = ((v143 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  do
  {
    v42 = MI_READ_PTE_LOCK_FREE(*(&v142 + (unsigned int)--v9));
    if ( (v42 & 1) == 0 )
      break;
    if ( v42 < 0 )
    {
      if ( v43 )
      {
        AnyMultiplexedVm = v107;
        valid = MiLargePageFault(BugCheckParameter2a, v6, v4, v105, (__int64)v107);
        goto LABEL_131;
      }
      break;
    }
  }
  while ( v9 );
  v44 = (_QWORD *)v141;
  v120 = MI_READ_PTE_LOCK_FREE(v141);
  if ( (v120 & 1) != 0 )
  {
    valid = MiValidFault(BugCheckParameter2a, v6, v113, v105);
    goto LABEL_130;
  }
  LODWORD(v46) = 4;
  DemandZeroPte = MiMakeDemandZeroPte(4LL);
  if ( v48 == DemandZeroPte )
  {
    AnyMultiplexedVm = v107;
    valid = MiResolveDemandZeroFault(v6, (unsigned __int64)v44, 0LL, (__int64)v107, v4, BugCheckParameter2a & 2, v113);
    goto LABEL_131;
  }
  v49 = 0LL;
  v108 = 0;
  if ( v48 )
  {
    v46 = (v48 >> 5) & 0x1F;
    if ( (v48 & 0x400) == 0 )
      goto LABEL_201;
    if ( !(unsigned int)MiIsPrototypePteVadLookup(v48) )
    {
      PrototypePteDirect = MiGetPrototypePteDirect(v74, v72, v73, v74);
      if ( (v75 & 8) != 0 )
      {
        LODWORD(v46) = 1;
        goto LABEL_202;
      }
      if ( !MI_PROTO_FORMAT_COMBINED(v75) && v114[1].Affinity.Bitmap[12] == v76 )
      {
        v21 = v76;
        goto LABEL_220;
      }
      v108 = 1;
LABEL_219:
      v21 = v108;
LABEL_220:
      v20 = v109;
LABEL_221:
      v69 = v105;
LABEL_222:
      AnyMultiplexedVm = v107;
      valid = MiDispatchFault(v7, v6, PrototypePteDirect, v21, (__int64)v107, v106, v4, (__int64)P, v69, (__int64)&v121);
      if ( valid == -1073741802 )
      {
        if ( (v4 & 1) != 0
          && (v77 = (_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL),
              (unsigned __int8)(*(_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL) - 1) <= 1u) )
        {
          v77[1] = 1;
          if ( *v77 == 1 )
            v20 = 1;
          v4 = 0LL;
        }
        else if ( (v4 & 1) != 0 && *(_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL) == 5 )
        {
          v4 = 0LL;
        }
        if ( (AnyMultiplexedVm[192] & 7) != 3 )
        {
          valid = MiProtoFault(
                    (__int64)AnyMultiplexedVm,
                    (char *)&v106,
                    v6,
                    PrototypePteDirect,
                    (ULONG_PTR)P,
                    v20,
                    &v115);
          if ( valid != -1073741802 )
          {
LABEL_281:
            v94 = v115;
LABEL_282:
            v98 = (__int64)i;
            if ( v122 )
              MiDeprioritizeVad((unsigned int *)P, v122, (__int64)i);
            if ( (AnyMultiplexedVm[192] & 7) != 0 )
            {
              if ( (*((_DWORD *)AnyMultiplexedVm + 1) & 0xFFF) == 0 )
              {
                v99 = *(_QWORD *)(*(_QWORD *)(qword_14036C8F8 + 8LL * *((unsigned __int16 *)AnyMultiplexedVm + 86))
                                + 5760LL) < 0x420uLL;
                goto LABEL_292;
              }
            }
            else if ( *(char *)(v98 + 195) >= 16 )
            {
              v100 = *(_DWORD *)(v98 + 1740);
              if ( (v100 & 0xC) == 0
                && (v100 & 2) == 0
                && (__int64)(*((_QWORD *)AnyMultiplexedVm + 15) - *((_QWORD *)AnyMultiplexedVm + 14)) > 100 )
              {
                v99 = *(_QWORD *)(*(_QWORD *)(qword_14036C8F8 + 8LL * WORD2(v114[1].SecurePid)) + 5760LL) < 0x420uLL;
LABEL_292:
                if ( v99 )
                  KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
              }
            }
            if ( v94 )
              MiReleaseFaultCharges(v94);
LABEL_297:
            if ( valid )
            {
              if ( valid != -1073740748 )
              {
                if ( (valid & 0x80000000) == 0 || !MiIsRetryIoStatus(valid, v112) )
                {
                  if ( (PerfGlobalGroupMask & 0x1000) != 0 )
                  {
                    if ( (v4 & 1) != 0 && (unsigned __int8)(*(_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL) - 1) <= 1u
                      || (v4 & 1) != 0 && (unsigned __int8)(*(_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL) - 3) <= 1u )
                    {
                      v4 = 0LL;
                    }
                    EtwTracePageFault(valid, v6, v105, v4);
                  }
                  return valid;
                }
                if ( (*(_BYTE *)(v98 + 1744) & 4) != 0 || (*(_DWORD *)(v98 + 1740) & 0xC) != 0 )
                  return 3221225495LL;
                if ( (v4 & 1) != 0 )
                {
                  v101 = v4 & 0xFFFFFFFFFFFFFFFEuLL;
                  if ( *(_BYTE *)v101 == 5 && (*(_DWORD *)(v101 + 48) & 4) != 0 )
                    return 3221225688LL;
                }
                KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
                if ( !(unsigned int)MiPageAvailable(*(_QWORD *)(qword_14036C8F8 + 8LL * WORD2(v114[1].SecurePid)), 0) )
                  MiWaitForFreePage(v102);
              }
              return 0;
            }
            return valid;
          }
          AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
          v107 = AnyMultiplexedVm;
        }
        v6 = PrototypePteDirect;
        v87 = MI_READ_PTE_LOCK_FREE(((PrototypePteDirect >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v120 = v87;
        if ( (v87 & 1) != 0 )
        {
          if ( (v87 & 0x200) != 0 )
            MiCopyOnWriteEx(PrototypePteDirect, 0);
          valid = 0;
          goto LABEL_131;
        }
        v90 = 0;
        if ( (v87 & 0x400) != 0 )
          v90 = MiGetPrototypePteDirect(v87, v88, 0LL, v89);
        v91 = v105;
        valid = MiDispatchFault(
                  v7,
                  PrototypePteDirect,
                  v90,
                  0,
                  (__int64)AnyMultiplexedVm,
                  v106,
                  v4,
                  0LL,
                  v105,
                  (__int64)&v121);
        LOBYTE(v7) = v7 | 2;
      }
      else
      {
        v91 = v105;
      }
      v92 = v121;
      if ( v121 )
      {
        v93 = *((_QWORD *)v121 + 31);
        v112 = *((_DWORD *)v121 + 74);
        if ( v93 )
          v112 = *(_DWORD *)(v93 + 40);
        if ( v91 == 1 )
          *((_BYTE *)v121 + 191) |= 2u;
        if ( (*((_BYTE *)v92 + 188) & 2) != 0 )
        {
          v94 = (__int64 *)*((_QWORD *)v92 + 25);
          v95 = *v94;
          MiRetainSubsection(v94);
          ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v95 + 72));
          ++*(_QWORD *)(v95 + 40);
          ++*(_QWORD *)(v95 + 48);
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v95 + 72));
          MiPreUnlockWorkingSetExclusive(v107, v106);
          SharedVm = MiGetSharedVm((__int64)v107);
          ExReleaseSpinLockExclusive(SharedVm, v106);
          valid = MiAllocateFileExtents((ULONG_PTR)v94, 2);
          MiFreeInPageSupportBlock(v92);
          MiDereferenceControlArea(v95);
          AnyMultiplexedVm = v107;
          goto LABEL_282;
        }
        v97 = (ULONG_PTR)v92;
        AnyMultiplexedVm = v107;
        valid = MiIssueHardFault((__int64)v107, v106, v6, v97, v4, ((unsigned __int8)v7 >> 1) & 1, v91);
        goto LABEL_131;
      }
      goto LABEL_130;
    }
    PrototypePteDirect = MiCheckVirtualAddress(v6, v137, &P);
    if ( PrototypePteDirect )
    {
      P = 0LL;
      goto LABEL_201;
    }
    goto LABEL_129;
  }
  v50 = 0;
  v136 = 0LL;
  v51 = KeGetCurrentThread()->ApcState.Process;
  v36 = ((__int64)v51[2].Header.WaitListHead.Blink & 7) == 0;
  v52 = (__int64)&v51[1].IdealNode[12];
  v118 = v51;
  if ( v36 )
    v50 = 32;
  v126 = v50;
  if ( (v4 & 1) != 0 )
  {
    v53 = *(_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( v53 == 2 )
    {
      v50 |= 1u;
      goto LABEL_101;
    }
    if ( v53 == 1 )
    {
      v50 |= 2u;
      goto LABEL_101;
    }
  }
  if ( (v4 & 1) != 0 )
  {
    v53 = *(_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( v53 != 5 )
      goto LABEL_102;
    v50 |= 8u;
LABEL_101:
    v126 = v50;
LABEL_102:
    if ( v53 == 4 )
      goto LABEL_105;
  }
  if ( (v50 & 0xB) == 0 )
  {
    v54 = 0LL;
    goto LABEL_111;
  }
LABEL_105:
  v54 = v4 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v4 & 1) != 0 && *(_BYTE *)v54 == 4 )
    v136 = *(_QWORD *)(v54 + 40);
  if ( (v50 & 2) != 0 && (*(_DWORD *)(v54 + 80) & 0x4000) != 0 )
  {
    v50 |= 4u;
    v126 = v50;
  }
LABEL_111:
  v134 = v54;
  v133 = &v51[1].IdealNode[12];
  if ( v6 < 0xFFFF800000000000uLL )
  {
    v55 = 0xFFFFF6FFFFFFFFFFuLL;
  }
  else
  {
    if ( (v50 & 2) != 0 )
    {
      valid = 0;
      goto LABEL_130;
    }
    v55 = 0xFFFFF6FFFFFFFFFFuLL;
    if ( v6 >= 0xFFFFF68000000000uLL && v6 <= 0xFFFFF6FFFFFFFFFFuLL && v4 )
      KeBugCheckEx(0x50u, v6, BugCheckParameter2a, BugCheckParameter3, 6uLL);
  }
  v56 = 0LL;
  if ( v6 <= 0x7FFFFFFEFFFFLL )
  {
    v52 = v6 & 0x7FFFFFFFF000LL;
    if ( (v6 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000
      && (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000LL) == 0 )
    {
      PrototypePteDirect = qword_14036C1A8;
      LOBYTE(v50) = v126;
      LODWORD(v46) = 1;
      goto LABEL_182;
    }
    v55 = (__int64)KeGetCurrentThread()->ApcState.Process;
    v56 = *(unsigned int **)(v55 + 1584);
    if ( !v56 )
      goto LABEL_124;
    v58 = v6 >> 12;
    if ( v6 >> 12 < (v56[6] | ((unsigned __int64)*((unsigned __int8 *)v56 + 32) << 32))
      || v58 > (v56[7] | ((unsigned __int64)*((unsigned __int8 *)v56 + 33) << 32)) )
    {
      v56 = *(unsigned int **)(v55 + 1576);
      while ( v56 )
      {
        if ( v58 > (v56[7] | ((unsigned __int64)*((unsigned __int8 *)v56 + 33) << 32)) )
        {
          v56 = (unsigned int *)*((_QWORD *)v56 + 1);
        }
        else
        {
          if ( v58 >= (v56[6] | ((unsigned __int64)*((unsigned __int8 *)v56 + 32) << 32)) )
          {
            *(_QWORD *)(v55 + 1584) = v56;
            goto LABEL_148;
          }
          v56 = *(unsigned int **)v56;
        }
      }
LABEL_124:
      v56 = 0LL;
      LOBYTE(v50) = v126;
      goto LABEL_125;
    }
LABEL_148:
    if ( v52 == 2147352576
      && (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000LL) == 0 )
    {
      PrototypePteDirect = qword_14036C1A8;
      LODWORD(v46) = 1;
      goto LABEL_177;
    }
    v59 = v56[12];
    v52 = v59 & 7;
    if ( (_DWORD)v52 == 2 && (v56[16] & 0x10000000) != 0 )
    {
      VadEvent = MiLocateVadEvent(v56, 32LL);
      if ( VadEvent )
      {
        if ( *(struct _KTHREAD **)(VadEvent + 8) != KeGetCurrentThread() )
          goto LABEL_155;
      }
    }
    if ( (v59 & 0x80000) != 0 )
    {
      LODWORD(v46) = 24;
      PrototypePteDirect = v49;
    }
    else if ( (_DWORD)v52 == 1 )
    {
      LODWORD(v46) = 24;
      PrototypePteDirect = v49;
    }
    else if ( (v59 & 0x8000) != 0 )
    {
      if ( (_DWORD)v52 == 3 || (_DWORD)v52 == 5 || (v56[13] & 0x80000000) == 0 )
      {
LABEL_155:
        LODWORD(v46) = 24;
        PrototypePteDirect = v49;
        goto LABEL_177;
      }
      PrototypePteDirect = v49;
      LODWORD(v46) = (unsigned __int8)v59 >> 3;
    }
    else if ( (*((_BYTE *)v56 + 67) & 1) == 0 || (_DWORD)v52 == 7 )
    {
      LODWORD(v46) = (unsigned __int8)v59 >> 3;
      if ( (_DWORD)v46 == 7 && (_DWORD)v52 == 2 )
        LODWORD(v46) = 256;
      ProtoPteAddress = MiGetProtoPteAddress((__int64)v56, v6 >> 12, 0, &v139);
      v52 = *((_QWORD *)v56 + 15);
      PrototypePteDirect = ProtoPteAddress;
      v55 = 24LL;
      if ( !ProtoPteAddress )
        LODWORD(v46) = 24;
      if ( v52 < 0
        && v58 - (v56[6] | ((unsigned __int64)*((unsigned __int8 *)v56 + 32) << 32)) > (unsigned __int64)(*(_QWORD *)v52 - 1LL) >> 12 )
      {
        LODWORD(v46) = 24;
      }
      v51 = v118;
      LODWORD(v49) = 0;
    }
    else
    {
      LODWORD(v46) = 24;
      PrototypePteDirect = v49;
    }
LABEL_177:
    LOBYTE(v50) = v126;
    if ( (_DWORD)v46 == 24 )
      goto LABEL_125;
    goto LABEL_182;
  }
  if ( v6 < 0xFFFFF68000000000uLL || v6 > 0xFFFFF6FFFFFFFFFFuLL )
  {
LABEL_125:
    if ( !(unsigned int)MiCheckFatalAccessViolation(v6, (__int64)v56, BugCheckParameter2a, v51) && (v50 & 2) != 0 && v56 )
      MiPrefetchJumpVad(v54, v56, v6);
    goto LABEL_129;
  }
  PrototypePteDirect = 0LL;
LABEL_182:
  if ( (v46 & 0xFFFFFFF8) != 0x10 )
  {
    v131 = v113;
    v127 = v6;
    v129 = v46;
    v132 = BugCheckParameter2a >> 57;
    v128 = PrototypePteDirect;
    v135 = v56;
    v130 = v49;
    if ( !PrototypePteDirect )
    {
      valid = MiResolvePrivateZeroFault(&v126, v55, v52, (unsigned __int64)v51);
      goto LABEL_130;
    }
    v66 = v49;
    if ( (v50 & 2) == 0 )
    {
      if ( v56 )
      {
        if ( (*((_QWORD *)v56 + 15) & 0x8000000000000000uLL) == 0 )
        {
          v66 = MiCheckVadSequential((__int64)&v126);
          if ( v66 == -1073741280 )
            _InterlockedIncrement((volatile signed __int32 *)v56 + 9);
        }
      }
    }
    P = v56;
    MiResolveSharedZeroFault(&v126, v55);
    LODWORD(v7) = BugCheckParameter2a;
    v36 = v66 == -1073741280;
    v44 = (_QWORD *)v141;
    if ( v36 )
      v122 = v6;
LABEL_201:
    if ( (_DWORD)v46 != 256 )
    {
LABEL_202:
      if ( v105 == 1 && ((unsigned __int64)v44 > 0xFFFFF6BFFFFFFF78uLL || (unsigned __int64)v44 < 0xFFFFF68000000000uLL) )
        goto LABEL_236;
      v67 = MI_READ_PTE_LOCK_FREE(v44);
      v119 = v67;
      v71 = v67;
      if ( (v67 & 1) != 0 )
      {
        if ( v68 && (v67 & 0x800) == 0 )
        {
          LODWORD(v7) = BugCheckParameter2a;
          if ( (v67 & 0x200) == 0 )
            goto LABEL_236;
LABEL_255:
          v21 = v108;
          v20 = v109;
          goto LABEL_222;
        }
LABEL_254:
        LODWORD(v7) = BugCheckParameter2a;
        goto LABEL_255;
      }
      if ( v68 )
        LOBYTE(v68) = v70;
      if ( MiReadWrite[v46 & 7] - (char)v68 >= 10 )
      {
        if ( (v46 & 0xFFFFFFF8) != 0x10 || (v4 & 1) != 0 && *(_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
          goto LABEL_254;
        if ( (unsigned int)MiAllowGuardFault(v4) )
        {
          if ( (v71 & 0x800) == 0 || (v71 & 0x400) != 0 )
          {
            v119 = v71 & 0xFFFFFFFFFFFFFC1FuLL | (32 * (v46 & 0xF));
            *v44 = v119;
            if ( (unsigned int)MiPteInShadowRange(v44) )
              MiWritePteShadow(v84);
          }
          else
          {
            MiLockTransitionLeafPage((ULONG_PTR)v44, 0LL);
            v80 = MI_READ_PTE_LOCK_FREE(v44);
            if ( v81 )
              *(_QWORD *)(v81 + 16) = *(_QWORD *)(v81 + 16) & 0xFFFFFFFFFFFFFC1FuLL | (32 * (v46 & 0xF));
            v119 = v80 & 0xFFFFFFFFFFFFFC1FuLL | (32 * (v46 & 0xF));
            *v44 = v119;
            if ( (unsigned int)MiPteInShadowRange(v44) )
              MiWritePteShadow(v82);
            if ( v83 )
              _InterlockedAnd64((volatile signed __int64 *)(v83 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
          valid = -2147483647;
          goto LABEL_252;
        }
      }
      LOBYTE(v7) = BugCheckParameter2a;
LABEL_236:
      valid = -1073741819;
      if ( v6 < 0xFFFF800000000000uLL )
        P = (PVOID)MiLocateAddress(v6);
      v78 = v7;
      v79 = P;
      if ( (unsigned int)MiCheckFatalAccessViolation(v6, (__int64)P, v78, v114) )
        v79 = 0LL;
      P = v79;
LABEL_252:
      v85 = v113;
      AnyMultiplexedVm = v107;
      MiPreUnlockWorkingSetExclusive(v107, (unsigned __int8)v113);
      v86 = MiGetSharedVm((__int64)v107);
      ExReleaseSpinLockExclusiveFromDpcLevel(v86);
      __writecr8(v85);
      if ( valid == -2147483647 )
        valid = MiCheckForUserStackOverflow(v6);
      goto LABEL_281;
    }
    goto LABEL_219;
  }
  if ( (v50 & 2) != 0 )
  {
    valid = v49;
    goto LABEL_130;
  }
  if ( !(unsigned int)MiAllowGuardFault(v4) )
    goto LABEL_129;
  MiUpdatePageTableUseCount(v6, 1u);
  v62 = (unsigned int)v46 & 0xFFFFFFEF;
  if ( PrototypePteDirect )
    PrototypePteVadLookup = MiMakePrototypePteVadLookup(v62);
  else
    PrototypePteVadLookup = MiMakeDemandZeroPte(v62);
  v64 = BugCheckParameter3;
  *(_QWORD *)BugCheckParameter3 = PrototypePteVadLookup;
  if ( (unsigned int)MiPteInShadowRange(v64) )
    MiWritePteShadow(v65);
  MiUnlockWorkingSetExclusive(&v118[1].IdealNode[12], v113);
  return MiCheckForUserStackOverflow(v6);
}
