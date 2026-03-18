/*
 * XREFs of MmAccessFault @ 0x140040CF0
 * Callers:
 *     MiReleaseOutSwapReservations @ 0x1400040E0 (MiReleaseOutSwapReservations.c)
 *     MmCopyToCachedPage @ 0x14001CF90 (MmCopyToCachedPage.c)
 *     MiPfPutPagesInTransition @ 0x140025FD0 (MiPfPutPagesInTransition.c)
 *     MiCheckProtoPtePageState @ 0x140032610 (MiCheckProtoPtePageState.c)
 *     MiWalkEntireImage @ 0x140039480 (MiWalkEntireImage.c)
 *     MiMakeSystemAddressValid @ 0x14003D1A0 (MiMakeSystemAddressValid.c)
 *     MiDeleteSubsectionPages @ 0x14004C770 (MiDeleteSubsectionPages.c)
 *     MiProtectPool @ 0x140065070 (MiProtectPool.c)
 *     MmCheckCachedPageStates @ 0x14007B8D0 (MmCheckCachedPageStates.c)
 *     MiInPageSingleKernelStack @ 0x1400AD4B4 (MiInPageSingleKernelStack.c)
 *     MiSectionCreated @ 0x1400B72A4 (MiSectionCreated.c)
 *     MiLockCode @ 0x1400BCA50 (MiLockCode.c)
 *     MiProbeLeafFrame @ 0x1400BE690 (MiProbeLeafFrame.c)
 *     MiMakeDriverPagesPrivate @ 0x1400DC7CC (MiMakeDriverPagesPrivate.c)
 *     MiWalkVaRange @ 0x1400EBE20 (MiWalkVaRange.c)
 *     MiInitializeImageProtos @ 0x1400ECF10 (MiInitializeImageProtos.c)
 *     MiPrefetchVirtualMemory @ 0x140109C80 (MiPrefetchVirtualMemory.c)
 *     MiMakeProtoAddressValid @ 0x14010C53C (MiMakeProtoAddressValid.c)
 *     MiMakeSystemAddressValidSystemWs @ 0x14012069C (MiMakeSystemAddressValidSystemWs.c)
 *     MiMakeImageReadOnly @ 0x140122884 (MiMakeImageReadOnly.c)
 *     KiPageFault @ 0x14018E600 (KiPageFault.c)
 *     MiLockHotPatchPages @ 0x140219014 (MiLockHotPatchPages.c)
 *     MiPurgeImageSection @ 0x14021F0FC (MiPurgeImageSection.c)
 *     MiBuildFileOnlyProtos @ 0x140222428 (MiBuildFileOnlyProtos.c)
 *     MiEliminateStaleExtents @ 0x140222B30 (MiEliminateStaleExtents.c)
 *     MiEnableLargeSubsection @ 0x140222C04 (MiEnableLargeSubsection.c)
 *     MiInsertLargeVadMapping @ 0x140228908 (MiInsertLargeVadMapping.c)
 *     MiDeletePerSessionProtos @ 0x14022DCD4 (MiDeletePerSessionProtos.c)
 *     MiInitializeProtoPfn @ 0x14022E010 (MiInitializeProtoPfn.c)
 *     ExpSvmServicePageFault @ 0x140288480 (ExpSvmServicePageFault.c)
 *     MmVirtualAccessFault @ 0x1406E504C (MmVirtualAccessFault.c)
 * Callees:
 *     MiProcessWsInSwapFault @ 0x140003660 (MiProcessWsInSwapFault.c)
 *     MiWaitForRotateToComplete @ 0x14000F04C (MiWaitForRotateToComplete.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14001BE10 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiIssueHardFault @ 0x14002C7B0 (MiIssueHardFault.c)
 *     MiFreeInPageSupportBlock @ 0x140032450 (MiFreeInPageSupportBlock.c)
 *     MiSystemFault @ 0x140032BA0 (MiSystemFault.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiValidFault @ 0x14003E340 (MiValidFault.c)
 *     MiCheckVadSequential @ 0x1400401C0 (MiCheckVadSequential.c)
 *     MiGetProtoPteAddress @ 0x140040460 (MiGetProtoPteAddress.c)
 *     MiResolveSharedZeroFault @ 0x140040630 (MiResolveSharedZeroFault.c)
 *     MiResolvePageTablePage @ 0x1400422D0 (MiResolvePageTablePage.c)
 *     MiDispatchFault @ 0x1400429F0 (MiDispatchFault.c)
 *     MiResolveDemandZeroFault @ 0x140044CE0 (MiResolveDemandZeroFault.c)
 *     MiResolvePrivateZeroFault @ 0x1400464C0 (MiResolvePrivateZeroFault.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x140057900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiCopyOnWriteEx @ 0x140059760 (MiCopyOnWriteEx.c)
 *     MiSufficientAvailablePages @ 0x1400649E0 (MiSufficientAvailablePages.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUpdatePageTableUseCount @ 0x1400666B8 (MiUpdatePageTableUseCount.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140067810 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeDelayExecutionThread @ 0x1400818C0 (KeDelayExecutionThread.c)
 *     MiGetAnyMultiplexedVm @ 0x1400C0094 (MiGetAnyMultiplexedVm.c)
 *     MiPageAvailableEx @ 0x1400C729C (MiPageAvailableEx.c)
 *     MiLockTransitionLeafPage @ 0x1400E5058 (MiLockTransitionLeafPage.c)
 *     MiLocateAddress @ 0x1400E9700 (MiLocateAddress.c)
 *     MiCheckVirtualAddress @ 0x140109690 (MiCheckVirtualAddress.c)
 *     MiLocateVadEvent @ 0x14010C834 (MiLocateVadEvent.c)
 *     ExReleaseSpinLockExclusive @ 0x140110B40 (ExReleaseSpinLockExclusive.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x14011D054 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiAllowGuardFault @ 0x14011D07C (MiAllowGuardFault.c)
 *     KeInvalidAccessAllowed @ 0x14011D0D8 (KeInvalidAccessAllowed.c)
 *     MiIsRetryIoStatus @ 0x140124FC0 (MiIsRetryIoStatus.c)
 *     MiCheckFatalAccessViolation @ 0x140125200 (MiCheckFatalAccessViolation.c)
 *     MiProtoFault @ 0x1401269B8 (MiProtoFault.c)
 *     MiRetainSubsection @ 0x140126D3C (MiRetainSubsection.c)
 *     MiReleaseFaultCharges @ 0x1401286F4 (MiReleaseFaultCharges.c)
 *     MiDeprioritizeVad @ 0x14012E200 (MiDeprioritizeVad.c)
 *     MiDereferenceControlArea @ 0x140131C80 (MiDereferenceControlArea.c)
 *     HvlNotifyLongSpinWait @ 0x140153060 (HvlNotifyLongSpinWait.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiGetPrototypePteDirect @ 0x14017C6D0 (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x14017C740 (MiIsPrototypePteVadLookup.c)
 *     MiMakeDemandZeroPte @ 0x14017C774 (MiMakeDemandZeroPte.c)
 *     MiMakePrototypePteVadLookup @ 0x14017C7E0 (MiMakePrototypePteVadLookup.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     MiIsVadEligibleForCommitRelease @ 0x140212198 (MiIsVadEligibleForCommitRelease.c)
 *     MiPrefetchJumpVad @ 0x14021BF50 (MiPrefetchJumpVad.c)
 *     MiLargePageFault @ 0x140228A74 (MiLargePageFault.c)
 *     MiRaisedIrqlFault @ 0x140228D0C (MiRaisedIrqlFault.c)
 *     MiWaitForAvailablePages @ 0x14023050C (MiWaitForAvailablePages.c)
 *     MiWaitForFreePage @ 0x14023059C (MiWaitForFreePage.c)
 *     EtwTracePageFault @ 0x14027B5F0 (EtwTracePageFault.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140285FCC (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiCheckForUserStackOverflow @ 0x1405713E8 (MiCheckForUserStackOverflow.c)
 *     MiAllocateFileExtents @ 0x1406E3904 (MiAllocateFileExtents.c)
 */

__int64 __fastcall MmAccessFault(
        ULONG_PTR BugCheckParameter2,
        signed __int64 BugCheckParameter1,
        __int64 a3,
        ULONG_PTR a4)
{
  ULONG_PTR v4; // r15
  char v5; // r10
  ULONG_PTR v6; // r13
  ULONG_PTR v7; // r14
  __int64 v9; // rsi
  int v10; // r8d
  ULONG_PTR *v11; // rdx
  unsigned __int64 v12; // rcx
  int CurrentIrql; // eax
  unsigned __int64 v14; // r9
  _KPROCESS *Process; // r11
  LONG *v16; // rbx
  unsigned int v17; // eax
  __int64 v18; // rdi
  unsigned int FileExtents; // ebx
  __int64 v20; // r12
  int v21; // r9d
  char v22; // al
  struct _LIST_ENTRY **p_Blink; // r14
  bool v24; // cc
  __int64 v25; // rax
  __int64 v26; // r9
  unsigned __int64 v27; // r8
  _QWORD *v28; // rcx
  unsigned __int64 v29; // rdx
  const LARGE_INTEGER *v30; // rdx
  unsigned int v31; // edi
  signed __int32 v32; // edx
  bool v33; // zf
  signed __int32 v34; // eax
  void *v35; // r10
  void *Address; // rax
  ULONG_PTR v37; // r11
  int v38; // r9d
  _QWORD *v39; // r8
  __int64 v40; // rax
  ULONG_PTR v41; // r10
  __int64 *v42; // rsi
  __int64 v43; // rdx
  unsigned int valid; // eax
  __int64 v45; // rdi
  __int64 DemandZeroPte; // rax
  unsigned __int64 v47; // rdx
  unsigned __int64 v48; // r11
  __int64 v49; // r10
  int v50; // esi
  _KPROCESS *v51; // r9
  __int64 v52; // rdx
  unsigned __int64 v53; // r14
  unsigned int *v54; // rbx
  __int64 v55; // r12
  unsigned __int64 v56; // rsi
  unsigned int v57; // edi
  int v58; // r8d
  __int64 VadEvent; // rax
  __int64 ProtoPteAddress; // rax
  _QWORD *v61; // r8
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rcx
  __int64 PrototypePteVadLookup; // rax
  ULONG_PTR v69; // rcx
  int v70; // r14d
  ULONG_PTR v71; // rax
  ULONG_PTR v72; // r10
  __int64 v73; // r9
  ULONG_PTR v74; // rsi
  _BYTE *v75; // rax
  char v76; // cl
  __int64 v77; // rdx
  __int64 v78; // rdx
  __int64 v79; // r8
  __int64 v80; // r10
  __int64 v81; // r9
  unsigned __int64 v82; // r11
  __int64 v83; // r10
  unsigned __int64 v84; // r9
  __int64 v85; // rax
  unsigned __int64 v86; // rbx
  unsigned __int64 v87; // rbx
  unsigned __int8 v88; // si
  LONG *v89; // rax
  __int64 AnyMultiplexedVm; // rax
  __int64 *v91; // r10
  __int64 PteShadow; // rax
  __int64 v93; // rdx
  int PrototypePteDirect; // r8d
  char *v95; // rsi
  __int64 v96; // rax
  char v97; // cl
  __int64 *v98; // r14
  __int64 v99; // rdi
  LONG *SharedVm; // rax
  unsigned __int64 v101; // rdx
  LONG *v102; // rcx
  struct _KTHREAD *v103; // rsi
  __int64 v104; // rax
  int v105; // eax
  unsigned __int64 v106; // r15
  __int64 v107; // rbx
  __int64 v108; // rdx
  int BugCheckParameter4; // [rsp+28h] [rbp-E0h]
  int v110; // [rsp+30h] [rbp-D8h]
  int v111; // [rsp+30h] [rbp-D8h]
  char v112; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int8 v113; // [rsp+59h] [rbp-AFh]
  unsigned __int16 *v114; // [rsp+60h] [rbp-A8h]
  __int64 v115; // [rsp+68h] [rbp-A0h]
  __int64 v116; // [rsp+70h] [rbp-98h]
  PVOID v117; // [rsp+78h] [rbp-90h] BYREF
  int v118; // [rsp+80h] [rbp-88h]
  unsigned int v119; // [rsp+84h] [rbp-84h]
  ULONG_PTR BugCheckParameter2a; // [rsp+88h] [rbp-80h]
  __int64 v121; // [rsp+90h] [rbp-78h]
  _KPROCESS *i; // [rsp+98h] [rbp-70h]
  __int64 *v123; // [rsp+A0h] [rbp-68h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+A8h] [rbp-60h]
  ULONG_PTR BugCheckParameter3; // [rsp+B0h] [rbp-58h]
  _KPROCESS *v126; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v127; // [rsp+C0h] [rbp-48h]
  PVOID P; // [rsp+C8h] [rbp-40h] BYREF
  ULONG_PTR v129; // [rsp+D0h] [rbp-38h]
  __int64 v130; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v131; // [rsp+E0h] [rbp-28h]
  __int16 v132; // [rsp+E8h] [rbp-20h]
  int v133; // [rsp+F8h] [rbp-10h] BYREF
  ULONG_PTR v134; // [rsp+100h] [rbp-8h]
  ULONG_PTR v135; // [rsp+108h] [rbp+0h]
  __int64 v136; // [rsp+110h] [rbp+8h]
  int v137; // [rsp+118h] [rbp+10h]
  int v138; // [rsp+11Ch] [rbp+14h]
  char v139; // [rsp+120h] [rbp+18h]
  int v140; // [rsp+124h] [rbp+1Ch]
  unsigned __int16 *v141; // [rsp+128h] [rbp+20h]
  unsigned __int64 v142; // [rsp+130h] [rbp+28h]
  unsigned int *v143; // [rsp+138h] [rbp+30h]
  __int64 v144; // [rsp+140h] [rbp+38h]
  char v145[8]; // [rsp+148h] [rbp+40h] BYREF
  __int64 v146; // [rsp+150h] [rbp+48h] BYREF
  __int64 v147[3]; // [rsp+158h] [rbp+50h] BYREF
  ULONG_PTR v148; // [rsp+170h] [rbp+68h] BYREF
  unsigned __int64 v149; // [rsp+178h] [rbp+70h]
  unsigned __int64 v150; // [rsp+180h] [rbp+78h]
  __int64 v151; // [rsp+188h] [rbp+80h]
  void *retaddr; // [rsp+1E0h] [rbp+D8h]

  v113 = a3;
  BugCheckParameter2a = BugCheckParameter2;
  v4 = a4;
  v5 = a3;
  v6 = BugCheckParameter1;
  v7 = BugCheckParameter2;
  if ( (BugCheckParameter2 & 9) == 9 )
    KeBugCheckEx(0x1Au, 0x61941uLL, BugCheckParameter1, BugCheckParameter2, a4);
  if ( (unsigned __int64)((BugCheckParameter1 >> 47) + 1) > 1 )
  {
    if ( (_BYTE)a3 != 1 && ((a4 & 1) == 0 || *(_BYTE *)(a4 & 0xFFFFFFFFFFFFFFFEuLL) != 1) )
    {
      if ( (a4 & 1) == 0 )
        goto LABEL_9;
      if ( *(_BYTE *)(a4 & 0xFFFFFFFFFFFFFFFEuLL) != 3 )
      {
        if ( (a4 & 1) != 0 )
          goto LABEL_351;
LABEL_9:
        if ( (unsigned __int8)KeInvalidAccessAllowed(a4, BugCheckParameter1, a3, a4) != 1 )
LABEL_351:
          KeBugCheckEx(0x50u, BugCheckParameter1, v7, a4, 4uLL);
      }
    }
    return 3221225477LL;
  }
  if ( (BugCheckParameter2 & 0x8000) != 0 )
    return 3221225477LL;
  LODWORD(v9) = 3;
  v10 = 3;
  v11 = &v148;
  BugCheckParameter3 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v148 = BugCheckParameter3;
  do
  {
    v12 = *v11--;
    *v11 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v10;
  }
  while ( v10 );
  CurrentIrql = KeGetCurrentIrql();
  if ( (unsigned __int8)CurrentIrql > 1u )
    return MiRaisedIrqlFault(v7, v6, a4);
  v119 = 4096;
  LOBYTE(CurrentIrql) = 0;
  v123 = 0LL;
  v118 = CurrentIrql;
  v14 = v6;
  v116 = 0LL;
  v129 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  for ( i = Process; v14 >= 0xFFFFF68000000000uLL; v14 = (__int64)(v14 << 25) >> 16 )
  {
    if ( v14 > 0xFFFFF6FFFFFFFFFFuLL )
      break;
  }
  v16 = &dword_140389780;
  if ( v6 >= 0xFFFF800000000000uLL )
  {
    if ( v5 == 1 )
      return 3221225477LL;
    if ( v6 >= 0xFFFFF68000000000uLL && v6 <= 0xFFFFF6FFFFFFFFFFuLL && v14 >= qword_140389B40 && v14 <= qword_140388958 )
    {
      v7 |= 2uLL;
      BugCheckParameter2a = v7;
    }
    v130 = 0LL;
    v131 = 0LL;
    v132 = 17;
    v17 = MiSystemFault(v7, v6, v4, v14, (__int64)v147, (__int64)&v130);
    v18 = v130;
    FileExtents = v17;
    LOBYTE(v20) = v132;
    v116 = v131;
    v118 = HIBYTE(v132);
    v114 = (unsigned __int16 *)v130;
    v112 = v132;
    if ( v17 != 192 )
    {
      if ( v17 != -1073741802 )
      {
        v103 = CurrentThread;
        goto LABEL_319;
      }
      v21 = 0;
      v117 = 0LL;
LABEL_218:
      v74 = v116;
      FileExtents = MiDispatchFault(v7, v6, v116, v21, v18, v20, v4, (__int64)v117, v113, (__int64)&P);
      if ( FileExtents != -1073741802 )
      {
LABEL_285:
        v95 = (char *)P;
        if ( !P )
          goto LABEL_294;
        v96 = *((_QWORD *)P + 31);
        v119 = *((_DWORD *)P + 74);
        if ( v96 )
          v119 = *(_DWORD *)(v96 + 40);
        v97 = v113;
        if ( v113 == 1 )
          *((_BYTE *)P + 191) |= 2u;
        if ( (v95[188] & 2) != 0 )
        {
          v98 = (__int64 *)*((_QWORD *)v95 + 25);
          v99 = *v98;
          MiRetainSubsection((ULONG_PTR)v98);
          ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v99 + 72));
          ++*(_QWORD *)(v99 + 40);
          ++*(_QWORD *)(v99 + 48);
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v99 + 72));
          MiPreUnlockWorkingSetExclusive(v114, (unsigned __int8)v20);
          SharedVm = MiGetSharedVm((__int64)v114);
          ExReleaseSpinLockExclusive(SharedVm, v20);
          FileExtents = MiAllocateFileExtents((ULONG_PTR)v98, 2);
          MiFreeInPageSupportBlock(v95, v101);
          MiDereferenceControlArea(v99);
          v18 = (__int64)v114;
          goto LABEL_304;
        }
        valid = MiIssueHardFault(v18, v20, v6, (ULONG_PTR)v95, v4, (v7 >> 1) & 1, v97);
LABEL_293:
        FileExtents = valid;
LABEL_294:
        if ( (v4 & 1) != 0 && *(_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL) == 3 )
          MiProcessWsInSwapFault((__int64 **)v147);
        MiPreUnlockWorkingSetExclusive(v18, (unsigned __int8)v20);
        v102 = &dword_140389780;
        if ( (*(_BYTE *)(v18 + 192) & 7) != 2 )
          v102 = (LONG *)(v18 + 200);
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v102, retaddr);
        else
          *v102 = 0;
        __writecr8((unsigned __int8)v20);
        goto LABEL_303;
      }
      if ( (v4 & 1) != 0 )
      {
        v75 = (_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL);
        if ( *(_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
          goto LABEL_223;
      }
      if ( (v4 & 1) != 0 )
      {
        v75 = (_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL);
        if ( *(_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL) == 2 )
        {
LABEL_223:
          v76 = v118;
          v75[1] = 1;
          if ( *v75 == 1 )
            v76 = 1;
          v4 = 0LL;
          goto LABEL_272;
        }
        if ( (v4 & 1) != 0 && *(_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL) == 5 )
          v4 = 0LL;
      }
      v76 = v118;
LABEL_272:
      if ( (*(_BYTE *)(v18 + 192) & 7) != 3 )
      {
        LOBYTE(v111) = v76;
        FileExtents = MiProtoFault(v18, &v112, v6, v74, v117, v111, &v123);
        if ( FileExtents != -1073741802 )
        {
LABEL_303:
          v98 = v123;
LABEL_304:
          v103 = CurrentThread;
          if ( v129 )
            MiDeprioritizeVad(v117);
          if ( (*(_BYTE *)(v18 + 192) & 7) != 0 )
          {
            if ( (*(_DWORD *)(v18 + 4) & 0xFFF) == 0 )
            {
              v104 = *(unsigned __int16 *)(v18 + 172);
              goto LABEL_314;
            }
          }
          else if ( v103->Priority >= 16 )
          {
            v105 = *((_DWORD *)&v103[1].SwapListEntry + 3);
            if ( (v105 & 0xC) == 0
              && (v105 & 2) == 0
              && (__int64)(*(_QWORD *)(v18 + 120) - *(_QWORD *)(v18 + 112)) > 100 )
            {
              v104 = *((unsigned __int16 *)&i[1].SecureState.Flags + 2);
LABEL_314:
              if ( !(unsigned int)MiSufficientAvailablePages(*(_QWORD *)(qword_140388AF0 + 8 * v104), 1056LL) )
                KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
            }
          }
          if ( v98 )
            MiReleaseFaultCharges((ULONG_PTR)v98);
LABEL_319:
          if ( FileExtents )
          {
            if ( FileExtents != -1073740748 )
            {
              if ( (FileExtents & 0x80000000) == 0 || !(unsigned int)MiIsRetryIoStatus(FileExtents, v119) )
              {
                if ( (PerfGlobalGroupMask & 0x1000) != 0 )
                {
                  if ( (v4 & 1) != 0 && *(_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL) == 1
                    || (v4 & 1) != 0
                    && (*(_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL) == 2
                     || (v4 & 1) != 0
                     && (*(_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL) == 4
                      || (v4 & 1) != 0 && *(_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL) == 3)) )
                  {
                    v4 = 0LL;
                  }
                  EtwTracePageFault(FileExtents, v6, v113, v4);
                }
                return FileExtents;
              }
              if ( ((__int64)v103[1].Queue & 4) != 0 || (*((_DWORD *)&v103[1].SwapListEntry + 3) & 0xC) != 0 )
                return 3221225495LL;
              if ( (v4 & 1) != 0 )
              {
                v106 = v4 & 0xFFFFFFFFFFFFFFFEuLL;
                if ( *(_BYTE *)v106 == 5 && (*(_DWORD *)(v106 + 48) & 0xC) != 0 )
                  return 3221225688LL;
              }
              v107 = *(_QWORD *)(qword_140388AF0 + 8LL * *((unsigned __int16 *)&i[1].SecureState.Flags + 2));
              if ( !(unsigned int)MiSufficientAvailablePages(v107, 1056LL) || *(_QWORD *)(v107 + 6016) < 0x400uLL )
                KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
              v108 = *(_QWORD *)(v107 + 5952);
              if ( v108 )
                --v108;
              if ( !(unsigned int)MiPageAvailableEx(v107, v108, 0LL) )
                MiWaitForFreePage(v107);
            }
            return 0;
          }
          return FileExtents;
        }
        AnyMultiplexedVm = MiGetAnyMultiplexedVm(2LL);
        LOBYTE(v20) = v112;
        v18 = AnyMultiplexedVm;
        v114 = (unsigned __int16 *)AnyMultiplexedVm;
      }
      v6 = v74;
      v91 = (__int64 *)(((v74 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      PteShadow = *v91;
      if ( (unsigned __int64)v91 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v91 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow(((v74 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, *v91);
      if ( (PteShadow & 1) != 0 )
      {
        if ( (PteShadow & 0x200) != 0 )
          MiCopyOnWriteEx(v74, (_DWORD)v91, -1, (unsigned __int8)v20, 0);
        FileExtents = 0;
        goto LABEL_294;
      }
      v93 = 0LL;
      PrototypePteDirect = 0;
      if ( (PteShadow & 0x400) != 0 )
        PrototypePteDirect = MiGetPrototypePteDirect(PteShadow);
      FileExtents = MiDispatchFault(v7, v74, PrototypePteDirect, 0, v18, v20, v4, v93, v113, (__int64)&P);
      v7 = 2LL;
      goto LABEL_285;
    }
    Process = i;
    v16 = &dword_140389780;
  }
  v18 = (__int64)&Process[1].IdealNode[12];
  v22 = (__int64)Process[2].Header.WaitListHead.Blink & 7;
  v114 = &Process[1].IdealNode[12];
  p_Blink = (struct _LIST_ENTRY **)&unk_1403897A0;
  if ( v22 != 2 )
    p_Blink = &Process[2].ThreadListHead.Blink;
  v24 = LODWORD(Process[2].Affinity.Bitmap[3]) <= 0x10;
  v117 = 0LL;
  if ( v24
    || (Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
    || (v25 = *(_QWORD *)(qword_140388AF0 + 8LL * *((unsigned __int16 *)&Process[1].SecureState.Flags + 2)),
        *(_DWORD *)(v25 + 1144))
    && *(_KPROCESS **)(v25 + 1264) == Process )
  {
    if ( !dword_140389168 )
      goto LABEL_53;
    goto LABEL_52;
  }
  v26 = *(_QWORD *)(qword_140388AF0 + 8LL * *((unsigned __int16 *)&Process[1].SecureState.Flags + 2));
  v27 = *(_QWORD *)(v25 + 6336);
  if ( (unsigned __int16)KeNumberNodes <= 1u
    || (v28 = (_QWORD *)(*(_QWORD *)(v26 + 16) + 8256LL * KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0]),
        v29 = 16 * (v28[4] + v28[5] + 32LL * (v28[2] + v28[3] + ((*v28 + v28[1]) << 9))) + v28[1004] + v28[1005],
        v29 < 0x420)
    && v27 >= v29 >> 4
    || !v29 )
  {
    v29 = *(_QWORD *)(v26 + 5952);
  }
  if ( v29 >= 0x420 || v27 < 0x4000 && v27 < v29 >> 4 )
  {
    if ( !dword_140389168 )
      goto LABEL_53;
LABEL_52:
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi10Milliseconds);
    goto LABEL_53;
  }
  v30 = &MiHalfSecond;
  v24 = Process->BasePriority < 9;
  LODWORD(Process[2].Affinity.Bitmap[3]) = 0;
  if ( !v24 )
    v30 = &Mi30Milliseconds;
  MiWaitForAvailablePages(v26, v30);
LABEL_53:
  if ( (*(_BYTE *)(v18 + 192) & 7) != 2 )
    v16 = (LONG *)(v18 + 200);
  v20 = KeGetCurrentIrql();
  v121 = v20;
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v16, (unsigned __int8)v20);
  }
  else
  {
    v31 = 0;
    if ( _interlockedbittestandset(v16, 0x1Fu) )
      v31 = ExpWaitForSpinLockExclusiveAndAcquire(v16, v20);
    v32 = *v16;
    while ( (v32 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (v32 & 0x40000000) == 0 )
      {
        v34 = _InterlockedCompareExchange(v16, v32 | 0x40000000, v32);
        v33 = v32 == v34;
        v32 = v34;
        if ( !v33 )
          continue;
      }
      if ( (++v31 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v31);
      v32 = *v16;
    }
    v18 = (__int64)v114;
  }
  v35 = 0LL;
  v112 = v20;
  v16[1] = 0;
  if ( (*(_BYTE *)(v18 + 195) & 0x60) == 0x60 && *p_Blink && v6 < 0xFFFF800000000000uLL )
  {
    Address = (void *)MiLocateAddress(v6);
    v117 = Address;
    if ( !Address || (unsigned int)MiIsVadEligibleForCommitRelease(Address) )
    {
LABEL_79:
      FileExtents = -1073741819;
      goto LABEL_294;
    }
    v117 = v35;
  }
  if ( (void *)i[1].Affinity.Bitmap[9] != v35 && (unsigned int)MiWaitForRotateToComplete(v6, (unsigned __int8)v121) == 1 )
  {
    FileExtents = 0;
    goto LABEL_294;
  }
  if ( v6 - 0x7FFFFFFF0000LL <= 0xFFFF00000000FFFFuLL )
    goto LABEL_79;
  v7 = BugCheckParameter2a;
  LOBYTE(v110) = v113;
  LOBYTE(BugCheckParameter4) = v121;
  FileExtents = MiResolvePageTablePage(BugCheckParameter2a, v6, v147, v4, BugCheckParameter4, v110);
  if ( FileExtents != -1073741802 )
    goto LABEL_294;
  v149 = ((v6 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v150 = ((v149 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v37 = 0xFFFFF6FB7DBED000uLL;
  v151 = ((v150 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  do
  {
    v38 = v9;
    v9 = (unsigned int)(v9 - 1);
    v39 = (_QWORD *)*(&v149 + v9);
    v40 = *v39;
    v41 = 0xFFFFF6FB7DBED7F8uLL;
    if ( (unsigned __int64)v39 >= v37 && (unsigned __int64)v39 <= 0xFFFFF6FB7DBED7F8uLL )
      LOBYTE(v40) = MiReadPteShadow(*(&v149 + v9), *v39);
    if ( (v40 & 1) == 0 )
      break;
    if ( (v40 & 0x80u) != 0LL )
    {
      if ( v38 )
      {
        valid = MiLargePageFault(BugCheckParameter2a, v6, v4, v113, v18);
        goto LABEL_293;
      }
      break;
    }
  }
  while ( (_DWORD)v9 );
  v42 = (__int64 *)v148;
  v43 = *(_QWORD *)v148;
  if ( v148 >= v37 && v148 <= v41 )
    v43 = MiReadPteShadow(v148, v43);
  if ( (v43 & 1) != 0 )
  {
    valid = MiValidFault(BugCheckParameter2a, v6, v43, v4, v121, v113);
    goto LABEL_293;
  }
  if ( (BugCheckParameter2a & 2) != 0 && (i[1].DirectoryTableBase & 0x1000000000LL) != 0 && v6 < 0xFFFF800000000000uLL )
  {
    v7 = BugCheckParameter2a & 0xFFFFFFFFFFFFFFFDuLL;
    BugCheckParameter2a &= ~2uLL;
  }
  LODWORD(v45) = 4;
  DemandZeroPte = MiMakeDemandZeroPte(4LL);
  if ( v47 == DemandZeroPte )
  {
    v18 = (__int64)v114;
    valid = MiResolveDemandZeroFault(v6, (_DWORD)v42, 0, (_DWORD)v114, v4, v7 & 2, v121);
    goto LABEL_293;
  }
  v49 = 0LL;
  LODWORD(v115) = 0;
  if ( v47 )
  {
    v45 = (v47 >> 5) & 0x1F;
    if ( (v47 & 0x400) == 0 )
    {
LABEL_205:
      if ( (_DWORD)v45 != 256 )
        goto LABEL_206;
      goto LABEL_216;
    }
    if ( !(unsigned int)MiIsPrototypePteVadLookup(v47) )
    {
      v116 = MiGetPrototypePteDirect(v77);
      if ( (v78 & 8) != 0 )
      {
        LODWORD(v45) = 1;
LABEL_206:
        v72 = v7 & 2;
        if ( v113 == 1
          && ((unsigned __int64)v42 > 0xFFFFF6BFFFFFFF78uLL || (unsigned __int64)v42 < 0xFFFFF68000000000uLL) )
        {
          goto LABEL_261;
        }
        v73 = *v42;
        if ( (unsigned __int64)v42 >= v48 && (unsigned __int64)v42 <= 0xFFFFF6FB7DBED7F8uLL )
          v73 = MiReadPteShadow(v42, *v42);
        v127 = v73;
        if ( (v73 & 1) != 0 )
        {
          if ( !v72 || (v73 & 0x800) != 0 || (v73 & 0x200) != 0 )
            goto LABEL_216;
          goto LABEL_261;
        }
        if ( MiReadWrite[v45 & 7] - (v72 != 0) < 10 )
          goto LABEL_261;
        if ( (v45 & 0xFFFFFFF8) != 0x10 || (v4 & 1) != 0 && *(_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
          goto LABEL_216;
        if ( !(unsigned int)MiAllowGuardFault(v4) )
        {
LABEL_261:
          if ( v6 < 0xFFFF800000000000uLL )
            v117 = (PVOID)MiLocateAddress(v6);
          FileExtents = -1073741819;
          if ( (unsigned int)MiCheckFatalAccessViolation(v6) )
            v117 = 0LL;
          goto LABEL_265;
        }
        if ( (v81 & 0x800) == 0 || (v81 & 0x400) != 0 )
        {
          v87 = v81 & 0xFFFFFFFFFFFFFC1FuLL | (32 * (v45 & 0xF));
          v127 = v87;
          *v42 = v87;
          if ( (unsigned __int64)v42 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v42 <= v82 )
            MiWritePteShadow(v42, v87);
        }
        else
        {
          v83 = MiLockTransitionLeafPage((ULONG_PTR)v42);
          v84 = 0xFFFFF6FB7DBED000uLL;
          v85 = *v42;
          if ( (unsigned __int64)v42 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v42 <= 0xFFFFF6FB7DBED7F8uLL )
            v85 = MiReadPteShadow(v42, *v42);
          if ( v83 )
            *(_QWORD *)(v83 + 16) = *(_QWORD *)(v83 + 16) & 0xFFFFFFFFFFFFFC1FuLL | (32 * (v45 & 0xF));
          v86 = v85 & 0xFFFFFFFFFFFFFC1FuLL | (32 * (v45 & 0xF));
          v127 = v86;
          *v42 = v86;
          if ( (unsigned __int64)v42 >= v84 && (unsigned __int64)v42 <= 0xFFFFF6FB7DBED7F8uLL )
            MiWritePteShadow(v42, v86);
          if ( v83 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(v83 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            FileExtents = -2147483647;
            goto LABEL_265;
          }
        }
        FileExtents = -2147483647;
LABEL_265:
        v88 = v121;
        v18 = (__int64)v114;
        MiPreUnlockWorkingSetExclusive(v114, (unsigned __int8)v121);
        v89 = MiGetSharedVm((__int64)v114);
        ExReleaseSpinLockExclusiveFromDpcLevel(v89);
        __writecr8(v88);
        if ( FileExtents == -2147483647 )
          FileExtents = MiCheckForUserStackOverflow(v6);
        goto LABEL_303;
      }
      if ( !(unsigned __int8)MI_PROTO_FORMAT_COMBINED(v78) && *(_QWORD *)(v79 + 912) == v80 )
      {
        v21 = v80;
        goto LABEL_217;
      }
      LODWORD(v115) = 1;
LABEL_216:
      v21 = v115;
LABEL_217:
      v18 = (__int64)v114;
      goto LABEL_218;
    }
    v116 = MiCheckVirtualAddress(v6, v145, &v117);
    if ( !v116 )
    {
      v18 = (__int64)v114;
      FileExtents = -1073741819;
      goto LABEL_294;
    }
    v117 = 0LL;
LABEL_204:
    v48 = 0xFFFFF6FB7DBED000uLL;
    goto LABEL_205;
  }
  v50 = 0;
  v144 = 0LL;
  v51 = KeGetCurrentThread()->ApcState.Process;
  v33 = ((__int64)v51[2].Header.WaitListHead.Blink & 7) == 0;
  v52 = (__int64)&v51[1].IdealNode[12];
  v126 = v51;
  if ( v33 )
    v50 = 32;
  v133 = v50;
  if ( (v4 & 1) != 0 && *(_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL) == 2 )
  {
    v50 |= 1u;
    goto LABEL_112;
  }
  if ( (v4 & 1) != 0 )
  {
    if ( *(_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
    {
      v50 |= 2u;
    }
    else
    {
      if ( *(_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL) != 5 )
      {
LABEL_113:
        if ( (v4 & 1) != 0 && *(_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
          goto LABEL_117;
        goto LABEL_115;
      }
      v50 |= 8u;
    }
LABEL_112:
    v133 = v50;
    goto LABEL_113;
  }
LABEL_115:
  if ( (v50 & 0xB) == 0 )
  {
    v53 = 0LL;
    goto LABEL_123;
  }
LABEL_117:
  v53 = v4 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v4 & 1) != 0 && *(_BYTE *)v53 == 4 )
    v144 = *(_QWORD *)(v53 + 40);
  if ( (v50 & 2) != 0 && (*(_DWORD *)(v53 + 80) & 0x4000) != 0 )
  {
    v50 |= 4u;
    v133 = v50;
  }
LABEL_123:
  v142 = v53;
  v141 = &v51[1].IdealNode[12];
  if ( v6 >= 0xFFFF800000000000uLL )
  {
    if ( (v50 & 2) != 0 )
    {
      LOBYTE(v20) = v112;
      FileExtents = 0;
      v18 = (__int64)v114;
      goto LABEL_294;
    }
    if ( v6 >= 0xFFFFF68000000000uLL && v6 <= 0xFFFFF6FFFFFFFFFFuLL && v4 )
      KeBugCheckEx(0x50u, v6, BugCheckParameter2a, BugCheckParameter3, 6uLL);
  }
  v54 = 0LL;
  if ( v6 > 0x7FFFFFFEFFFFLL )
  {
    if ( v6 >= 0xFFFFF68000000000uLL && v6 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      v55 = 0LL;
      v116 = 0LL;
      goto LABEL_182;
    }
LABEL_136:
    if ( (unsigned int)MiCheckFatalAccessViolation(v6) )
    {
      LOBYTE(v20) = v112;
      FileExtents = -1073741819;
      v18 = (__int64)v114;
    }
    else
    {
      if ( (v50 & 2) != 0 && v54 )
        MiPrefetchJumpVad(v53, v54, v6);
      LOBYTE(v20) = v112;
      FileExtents = -1073741819;
      v18 = (__int64)v114;
    }
    goto LABEL_294;
  }
  if ( (v6 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000
    && (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000LL) == 0 )
  {
    v55 = qword_1403884E8;
    LOBYTE(v50) = v133;
    LODWORD(v45) = 1;
    v116 = qword_1403884E8;
    goto LABEL_182;
  }
  v52 = (__int64)KeGetCurrentThread()->ApcState.Process;
  v54 = *(unsigned int **)(v52 + 1584);
  if ( !v54 )
    goto LABEL_135;
  v56 = v6 >> 12;
  if ( v6 >> 12 < (v54[6] | ((unsigned __int64)*((unsigned __int8 *)v54 + 32) << 32))
    || v56 > (v54[7] | ((unsigned __int64)*((unsigned __int8 *)v54 + 33) << 32)) )
  {
    v54 = *(unsigned int **)(v52 + 1576);
    while ( v54 )
    {
      if ( v56 > (v54[7] | ((unsigned __int64)*((unsigned __int8 *)v54 + 33) << 32)) )
      {
        v54 = (unsigned int *)*((_QWORD *)v54 + 1);
      }
      else
      {
        if ( v56 >= (v54[6] | ((unsigned __int64)*((unsigned __int8 *)v54 + 32) << 32)) )
        {
          *(_QWORD *)(v52 + 1584) = v54;
          goto LABEL_148;
        }
        v54 = *(unsigned int **)v54;
      }
    }
LABEL_135:
    v54 = 0LL;
    LOBYTE(v50) = v133;
    goto LABEL_136;
  }
LABEL_148:
  if ( (v6 & 0x7FFFFFFFF000LL) == 0x7FFE0000
    && (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000LL) == 0 )
  {
    v55 = qword_1403884E8;
    LODWORD(v45) = 1;
    v116 = qword_1403884E8;
    goto LABEL_177;
  }
  v57 = v54[12];
  v58 = v57 & 7;
  if ( v58 == 2 && (v54[16] & 0x10000000) != 0 )
  {
    VadEvent = MiLocateVadEvent(v54, 32LL);
    if ( VadEvent )
    {
      if ( *(struct _KTHREAD **)(VadEvent + 8) != KeGetCurrentThread() )
        goto LABEL_155;
    }
  }
  if ( (v57 & 0x80000) != 0 )
  {
    LODWORD(v45) = 24;
    v116 = v49;
    v55 = v49;
  }
  else if ( v58 == 1 )
  {
    LODWORD(v45) = 24;
    v116 = v49;
    v55 = v49;
  }
  else if ( (v57 & 0x8000) != 0 )
  {
    if ( v58 == 3 || v58 == 5 || (int)v54[13] >= (int)v49 )
    {
LABEL_155:
      LODWORD(v45) = 24;
      v116 = v49;
      v55 = v49;
      goto LABEL_177;
    }
    v55 = v49;
    LODWORD(v45) = (unsigned __int8)v57 >> 3;
    v116 = v49;
  }
  else if ( (v54[16] & 0x1000000) == 0 || v58 == 7 )
  {
    LODWORD(v45) = (unsigned __int8)v57 >> 3;
    if ( (_DWORD)v45 == 7 && v58 == 2 )
      LODWORD(v45) = 256;
    ProtoPteAddress = MiGetProtoPteAddress((__int64)v54, v6 >> 12, 0, &v146);
    v61 = (_QWORD *)*((_QWORD *)v54 + 15);
    v52 = 24LL;
    v116 = ProtoPteAddress;
    if ( !ProtoPteAddress )
      LODWORD(v45) = 24;
    v55 = ProtoPteAddress;
    if ( (__int64)v61 < 0
      && v56 - (v54[6] | ((unsigned __int64)*((unsigned __int8 *)v54 + 32) << 32)) > (unsigned __int64)(*v61 - 1LL) >> 12 )
    {
      LODWORD(v45) = 24;
    }
    LODWORD(v49) = 0;
  }
  else
  {
    LODWORD(v45) = 24;
    v116 = v49;
    v55 = v49;
  }
LABEL_177:
  LOBYTE(v50) = v133;
  if ( (_DWORD)v45 == 24 )
    goto LABEL_136;
LABEL_182:
  if ( (v45 & 0xFFFFFFF8) != 0x10 )
  {
    v139 = v121;
    v134 = v6;
    v135 = v6;
    v137 = v45;
    v140 = BugCheckParameter2a >> 57;
    v136 = v55;
    v143 = v54;
    v138 = v49;
    if ( !v55 )
    {
      valid = MiResolvePrivateZeroFault(&v133, v52);
      LOBYTE(v20) = v112;
      v18 = (__int64)v114;
      goto LABEL_293;
    }
    v70 = v49;
    if ( (v50 & 2) == 0 )
    {
      if ( v54 )
      {
        if ( *((__int64 *)v54 + 15) >= 0 )
        {
          v70 = MiCheckVadSequential(&v133);
          if ( v70 == -1073741280 )
            _InterlockedIncrement((volatile signed __int32 *)v54 + 9);
        }
      }
    }
    v117 = v54;
    MiResolveSharedZeroFault((unsigned int *)&v133);
    v42 = (__int64 *)v148;
    v33 = v70 == -1073741280;
    LOBYTE(v20) = v112;
    v71 = v6;
    v7 = BugCheckParameter2a;
    if ( !v33 )
      v71 = 0LL;
    v129 = v71;
    goto LABEL_204;
  }
  if ( (v50 & 2) != 0 )
  {
    LOBYTE(v20) = v112;
    FileExtents = v49;
    v18 = (__int64)v114;
    goto LABEL_294;
  }
  if ( !(unsigned int)MiAllowGuardFault(v4) )
  {
    LOBYTE(v20) = v112;
    FileExtents = -1073741819;
    v18 = (__int64)v114;
    goto LABEL_294;
  }
  MiUpdatePageTableUseCount(v6, (unsigned int)v63, v62, v63);
  v67 = (unsigned int)v45 & 0xFFFFFFEF;
  if ( v55 )
    PrototypePteVadLookup = MiMakePrototypePteVadLookup(v67, v64, v65, v66);
  else
    PrototypePteVadLookup = MiMakeDemandZeroPte(v67);
  v69 = BugCheckParameter3;
  *(_QWORD *)BugCheckParameter3 = PrototypePteVadLookup;
  if ( v69 >= 0xFFFFF6FB7DBED000uLL && v69 <= 0xFFFFF6FB7DBED7F8uLL )
    MiWritePteShadow(v69, PrototypePteVadLookup);
  MiUnlockWorkingSetExclusive(&v126[1].IdealNode[12], v121);
  return MiCheckForUserStackOverflow(v6);
}
