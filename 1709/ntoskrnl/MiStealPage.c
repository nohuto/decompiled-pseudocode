/*
 * XREFs of MiStealPage @ 0x1400C81C8
 * Callers:
 *     MiTradePage @ 0x140078860 (MiTradePage.c)
 * Callees:
 *     MiRotatedToFrameBuffer @ 0x140008950 (MiRotatedToFrameBuffer.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140011210 (MI_WSLE_LOG_ACCESS.c)
 *     ExReleaseFastMutexUnsafe @ 0x140016CF0 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiFinalizePageAttribute @ 0x140028064 (MiFinalizePageAttribute.c)
 *     MiUnlockProtoPoolPage @ 0x140030AF0 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x140030E90 (MiLockProtoPoolPage.c)
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiWriteValidPteNewPage @ 0x140031C10 (MiWriteValidPteNewPage.c)
 *     MiCaptureDirtyBitToPfn @ 0x140032400 (MiCaptureDirtyBitToPfn.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiGetPageChain @ 0x1400484F0 (MiGetPageChain.c)
 *     MiGetPage @ 0x1400489F0 (MiGetPage.c)
 *     MiClearPfnImageVerified @ 0x140050290 (MiClearPfnImageVerified.c)
 *     MiFreeWsleList @ 0x140052390 (MiFreeWsleList.c)
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     PsGetCurrentProcess @ 0x1400574C0 (PsGetCurrentProcess.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x140057900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiCopyPage @ 0x14005A3E0 (MiCopyPage.c)
 *     MiGetPagePrivilege @ 0x14005AE80 (MiGetPagePrivilege.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiIsPfnFileOnly @ 0x140078F10 (MiIsPfnFileOnly.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     MiTbFlushType @ 0x1400A5D50 (MiTbFlushType.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     MiAttachToOwningSession @ 0x1400B4828 (MiAttachToOwningSession.c)
 *     MmDetachSession @ 0x1400B4910 (MmDetachSession.c)
 *     KeAbPreAcquire @ 0x1400BAD80 (KeAbPreAcquire.c)
 *     KeAbPostReleaseEx @ 0x1400BAF60 (KeAbPostReleaseEx.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     MiGetAnyMultiplexedVm @ 0x1400C0094 (MiGetAnyMultiplexedVm.c)
 *     MiReleasePageFileInfo @ 0x1400C0554 (MiReleasePageFileInfo.c)
 *     MiReleaseFreshPage @ 0x1400C538C (MiReleaseFreshPage.c)
 *     MiPageToNode @ 0x1400C7140 (MiPageToNode.c)
 *     MiSmallVaStillMapsFrame @ 0x1400C9FCC (MiSmallVaStillMapsFrame.c)
 *     KeFlushSingleTb @ 0x1400CA124 (KeFlushSingleTb.c)
 *     MiCopyPfnEntry @ 0x1400CA320 (MiCopyPfnEntry.c)
 *     MiTryToAcquireExpansionLockAtDpc @ 0x1400CAD48 (MiTryToAcquireExpansionLockAtDpc.c)
 *     MiAttachThreadDone @ 0x1400CAF78 (MiAttachThreadDone.c)
 *     MiPrepareAttachThread @ 0x1400CAFFC (MiPrepareAttachThread.c)
 *     MiGetPteFromCopyList @ 0x1400CEEDC (MiGetPteFromCopyList.c)
 *     MiReplacePageTablePage @ 0x1400D0B4C (MiReplacePageTablePage.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1400D56B0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiGetTopLevelPfn @ 0x1400E6BD0 (MiGetTopLevelPfn.c)
 *     MiLocateAddress @ 0x1400E9700 (MiLocateAddress.c)
 *     MiGetWsleContents @ 0x1400E9E90 (MiGetWsleContents.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x140113B10 (ExReleaseAutoExpandPushLockExclusive.c)
 *     MiLockNestedPageAtDpcInline @ 0x14011C690 (MiLockNestedPageAtDpcInline.c)
 *     MiReplacePageOfProtoPool @ 0x14011DA1C (MiReplacePageOfProtoPool.c)
 *     MiVaIsPageFileHash @ 0x1401287CC (MiVaIsPageFileHash.c)
 *     MiHyperPage @ 0x14012DB1C (MiHyperPage.c)
 *     KeSwapDirectoryTableBase @ 0x14012F060 (KeSwapDirectoryTableBase.c)
 *     ExTryAcquireAutoExpandPushLockExclusive @ 0x140155520 (ExTryAcquireAutoExpandPushLockExclusive.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14022A99C (MiSetOriginalPtePfnFromFreeList.c)
 *     MiClusterVadActive @ 0x14022ECAC (MiClusterVadActive.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiStealPage(__int64 a1, unsigned __int8 a2, int a3, unsigned int *a4, int a5, _QWORD *a6)
{
  unsigned int v6; // edi
  __int64 v8; // r13
  unsigned int v9; // esi
  __int64 v10; // r12
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // r11
  __int64 v13; // r8
  unsigned __int64 v14; // rdx
  __int64 v15; // r9
  __int64 TopLevelPfn; // rcx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  unsigned int i; // r8d
  int SystemRegionType; // eax
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // r9
  unsigned __int64 v24; // r10
  __int64 *v25; // r11
  ULONG_PTR v26; // rbx
  int v27; // r9d
  int v28; // eax
  int v29; // edx
  int v30; // eax
  __int64 v31; // rdx
  int v32; // ecx
  struct _KTHREAD *v33; // rdx
  char *v34; // rax
  LONG *v35; // rbx
  KIRQL v36; // al
  unsigned int v37; // esi
  unsigned __int64 v38; // rdx
  LONG *v39; // rax
  int v40; // eax
  int v41; // esi
  _KPROCESS *v42; // rcx
  LONG *v43; // rbx
  KIRQL v44; // al
  LONG *v45; // rax
  unsigned __int64 v46; // r8
  int v47; // eax
  int v48; // edx
  ULONG_PTR v49; // rdx
  _KPROCESS *CurrentProcess; // rax
  _KPROCESS *v51; // rcx
  LONG *SharedVm; // rbx
  __int64 Address; // rax
  __int64 v54; // rbx
  __int64 v55; // rax
  __int64 v56; // rax
  _KPROCESS *Process; // rcx
  char *AnyMultiplexedVm; // rbx
  char WsleContents; // al
  char v60; // r9
  __int64 v61; // rcx
  unsigned __int64 v62; // r10
  _BYTE *v63; // r11
  int v64; // r10d
  unsigned int v65; // edx
  unsigned int v66; // ebx
  __int64 v67; // rbx
  int v68; // eax
  __int64 Page; // rax
  __int64 v70; // r12
  int v71; // r8d
  unsigned int v72; // r9d
  __int64 PageChain; // rax
  unsigned __int8 v74; // bl
  unsigned __int64 v75; // r9
  __int64 v76; // r8
  unsigned __int64 v77; // rax
  __int64 *v78; // r10
  signed __int64 PteShadow; // rbx
  __int64 v80; // r15
  unsigned __int8 v81; // al
  LONG *v82; // rax
  PRTL_BALANCED_NODE v83; // rax
  ULONG_PTR v84; // rcx
  __int64 *v85; // rcx
  unsigned __int64 v86; // rdx
  unsigned int v87; // eax
  int v88; // ecx
  __int64 v89; // r9
  unsigned __int64 v90; // r8
  unsigned __int64 v91; // rax
  int v92; // eax
  __int64 v93; // rax
  char v94; // r10
  __int64 v95; // rcx
  __int64 v96; // rax
  unsigned __int64 v97; // rax
  __int64 v98; // rcx
  char v99; // cl
  char v100; // r12
  bool v101; // zf
  unsigned __int64 PteFromCopyList; // r11
  int v103; // r10d
  unsigned __int64 v104; // r9
  __int64 v105; // r8
  __int64 v106; // rax
  __int64 v107; // r13
  LONG *v108; // rax
  LONG *v109; // r13
  ULONG_PTR v110; // rax
  unsigned __int64 v111; // rcx
  unsigned __int8 v112; // al
  ULONG_PTR v113; // rax
  unsigned __int64 v114; // rbx
  unsigned __int64 v115; // rbx
  unsigned int v116; // r15d
  __int64 v117; // rbx
  unsigned int v118; // eax
  unsigned __int8 v119; // bl
  unsigned __int64 v120; // r9
  __int64 v121; // rax
  __int64 v122; // r9
  __int64 v123; // r10
  __int64 *v124; // rcx
  unsigned int v125; // eax
  char v126; // dl
  volatile signed __int64 *v127; // rbx
  unsigned int v128; // edx
  LONG *v129; // rax
  unsigned __int8 v130; // r14
  LONG *v131; // rax
  unsigned __int8 v132; // [rsp+40h] [rbp-348h]
  unsigned __int8 v133; // [rsp+41h] [rbp-347h]
  unsigned __int8 v134; // [rsp+42h] [rbp-346h] BYREF
  KIRQL v135; // [rsp+43h] [rbp-345h]
  unsigned int v136; // [rsp+44h] [rbp-344h]
  unsigned int v137; // [rsp+48h] [rbp-340h]
  unsigned __int64 v138; // [rsp+50h] [rbp-338h]
  ULONG_PTR v139; // [rsp+58h] [rbp-330h]
  __int64 *v140; // [rsp+60h] [rbp-328h]
  __int64 v141; // [rsp+68h] [rbp-320h]
  int v142; // [rsp+70h] [rbp-318h]
  unsigned __int64 v143; // [rsp+78h] [rbp-310h]
  __int64 v144; // [rsp+80h] [rbp-308h]
  ULONG_PTR BugCheckParameter1; // [rsp+88h] [rbp-300h]
  __int64 v146; // [rsp+90h] [rbp-2F8h]
  ULONG_PTR v147; // [rsp+98h] [rbp-2F0h]
  struct _KTHREAD *CurrentThread; // [rsp+A0h] [rbp-2E8h]
  ULONG_PTR BugCheckParameter2; // [rsp+A8h] [rbp-2E0h]
  unsigned __int64 v150; // [rsp+B0h] [rbp-2D8h]
  unsigned int *v151; // [rsp+B8h] [rbp-2D0h]
  PVOID Object; // [rsp+C0h] [rbp-2C8h]
  __int64 IsPageFileHash; // [rsp+C8h] [rbp-2C0h]
  __int64 v154; // [rsp+D0h] [rbp-2B8h]
  __int64 v155; // [rsp+D8h] [rbp-2B0h] BYREF
  __int64 v156; // [rsp+E0h] [rbp-2A8h]
  struct _KLOCK_QUEUE_HANDLE v157; // [rsp+E8h] [rbp-2A0h] BYREF
  unsigned __int64 v158; // [rsp+100h] [rbp-288h] BYREF
  _QWORD *v159; // [rsp+108h] [rbp-280h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+110h] [rbp-278h] BYREF
  _QWORD v161[7]; // [rsp+130h] [rbp-258h] BYREF
  _KPROCESS *v162; // [rsp+168h] [rbp-220h]
  __int64 v163; // [rsp+170h] [rbp-218h]
  unsigned __int64 v164; // [rsp+178h] [rbp-210h]
  __int64 v165; // [rsp+180h] [rbp-208h]
  $709EDFC2F9E0D4565D6AA3C4377BC643 v166; // [rsp+188h] [rbp-200h] BYREF
  int v167; // [rsp+1C0h] [rbp-1C8h] BYREF
  __int16 v168; // [rsp+1C4h] [rbp-1C4h]
  __int64 v169; // [rsp+1C8h] [rbp-1C0h]
  __int64 v170; // [rsp+1D0h] [rbp-1B8h]
  __int64 v171; // [rsp+1D8h] [rbp-1B0h]
  int v172; // [rsp+280h] [rbp-108h] BYREF
  __int16 v173; // [rsp+284h] [rbp-104h]
  __int64 v174; // [rsp+288h] [rbp-100h]
  __int64 v175; // [rsp+290h] [rbp-F8h]
  __int64 v176; // [rsp+298h] [rbp-F0h]
  void *retaddr; // [rsp+388h] [rbp+0h]

  v6 = 0;
  v151 = a4;
  v8 = a1;
  v9 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v157, 0, sizeof(v157));
  v10 = 0LL;
  v155 = -1LL;
  v11 = 0LL;
  v165 = 0LL;
  v12 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  LODWORD(BugCheckParameter2) = a3;
  v140 = (__int64 *)v12;
  v156 = a1;
  v159 = a6;
  v142 = 0;
  v141 = 0LL;
  IsPageFileHash = 0LL;
  v139 = 0LL;
  v135 = 17;
  v133 = 17;
  v154 = 0LL;
  v138 = (__int64)(v12 << 25) >> 16;
  v147 = -1LL;
  v13 = (a1 + 0x58000000000LL) / 48;
  v143 = v13;
  if ( a6 )
    *a6 = -1LL;
  v14 = *(_QWORD *)(a1 + 40);
  v167 = 1;
  v15 = 0x7FFFFFFFFFFFFFFFLL;
  v169 = 20LL;
  v168 = 0;
  v170 = 0LL;
  v171 = 0LL;
  v144 = *(_QWORD *)(qword_140388AF0 + 8 * ((v14 >> 40) & 0x3FF));
  if ( (unsigned __int64)((__int64)(v12 << 25) >> 16) <= 0x7FFFFFFEFFFFLL )
    goto LABEL_8;
  if ( (v14 & 0xFFFFFFFFFLL) == v13 )
  {
    if ( !*((_QWORD *)v151 + 2) )
      return 0LL;
    v9 = 8;
LABEL_8:
    TopLevelPfn = MiGetTopLevelPfn(v8, 0LL, v13, v15);
    if ( (*(_QWORD *)(TopLevelPfn + 40) & 0xFFFFFFFFFLL) == 0xFFFFFFFFFLL )
    {
      if ( TopLevelPfn != v8 )
        _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
      return 0LL;
    }
    v49 = (*(_QWORD *)TopLevelPfn >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL;
    BugCheckParameter1 = v49;
    v10 = v49 + 1280;
    v139 = v49 + 1280;
    if ( TopLevelPfn != v8 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v49 = BugCheckParameter1;
    }
    if ( (*(_QWORD *)(v8 + 40) & 0xFFFFFFFFFLL) == v143 && (*(_DWORD *)(v49 + 1740) & 0x1000) != 0 )
      return 0LL;
    CurrentProcess = PsGetCurrentProcess();
    v51 = (_KPROCESS *)BugCheckParameter1;
    if ( (_KPROCESS *)BugCheckParameter1 == CurrentProcess )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    else
    {
      if ( !(unsigned int)MiTryToAcquireExpansionLockAtDpc(&LockHandle) )
        return 0LL;
      v9 |= 0x80000u;
      if ( !(unsigned int)MiPrepareAttachThread(BugCheckParameter1, v10) )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        MiLockPageAtDpcInline(v8);
        return 0LL;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v51 = (_KPROCESS *)BugCheckParameter1;
    }
    __writecr8(a2);
    v146 = 0LL;
    v137 = 0;
    Object = 0LL;
    if ( v9 >= 0x80000 )
      KiStackAttachProcess(v51, 1, (__int64)&v166);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    SharedVm = MiGetSharedVm(v10);
    v135 = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
    if ( (v9 & 8) != 0 )
    {
      if ( (v9 & 1) == 0 || (v55 = *(_QWORD *)(BugCheckParameter1 + 1032), (v146 = v55) == 0) )
      {
        v54 = 0LL;
        goto LABEL_121;
      }
      v54 = 0LL;
      if ( !(unsigned __int8)ExTryAcquireAutoExpandPushLockExclusive(v55 + 16, 0LL) )
      {
LABEL_379:
        MiFlushTbList((__int64)&v167, (_KPROCESS *)v22);
        v130 = v135;
        MiPreUnlockWorkingSetExclusive(v10, v135);
        v131 = MiGetSharedVm(v10);
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v131, retaddr);
        else
          *v131 = 0;
        __writecr8(v130);
        if ( v54 )
          ExReleaseAutoExpandPushLockExclusive(v54 + 16, 0LL);
        goto LABEL_376;
      }
    }
    else
    {
      Address = MiLocateAddress(v138);
      v54 = Address;
      if ( !Address )
      {
LABEL_378:
        v54 = 0LL;
        goto LABEL_379;
      }
      if ( ((1 << (*(_BYTE *)(Address + 48) & 7)) & 0x15) == 0 )
      {
        if ( (*(_DWORD *)(Address + 48) & 7) == 6 )
        {
          v9 |= 0x10000u;
          goto LABEL_121;
        }
        goto LABEL_378;
      }
    }
LABEL_121:
    if ( !(unsigned int)MiSmallVaStillMapsFrame(v138, v143)
      || (unsigned int)MiIsPfnFileOnly(v8) == 1
      || (*(_QWORD *)(v8 + 40) & 0x200000000000000LL) != 0
      || (BugCheckParameter2 & 0x800000) != 0
      && v54
      && (*(_DWORD *)(v54 + 48) & 0x108000) == 0x108000
      && (unsigned int)MiClusterVadActive(v54, v8, &v155) == 1
      || (v9 & 0x10000) != 0 && MiRotatedToFrameBuffer(v140) )
    {
LABEL_377:
      v54 = v146;
      goto LABEL_379;
    }
    v26 = BugCheckParameter1;
    goto LABEL_131;
  }
  v18 = 0xFFFFF6FB40000000uLL;
  v19 = 0xFFFFF6FB5FFFFFF8uLL;
  for ( i = 0; i < 3; ++i )
  {
    if ( v12 >= v18 && v12 <= v19 )
    {
      v13 = -i;
      v9 = 9 - ((_DWORD)v13 != 0);
      goto LABEL_8;
    }
    v18 = ((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v19 = ((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  }
  SystemRegionType = MiGetSystemRegionType((__int64)(v12 << 25) >> 16);
  if ( SystemRegionType == 5 )
  {
    if ( !*((_QWORD *)v151 + 2) )
      return 0LL;
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), v23);
    __writecr8(a2);
    v9 = 32;
    v26 = 0LL;
    v146 = 0LL;
    BugCheckParameter1 = 0LL;
    CurrentThread = KeGetCurrentThread();
    v27 = 2;
    Object = 0LL;
    v137 = 2;
LABEL_132:
    if ( !*((_QWORD *)v151 + 2) )
    {
      if ( (*(_BYTE *)(v8 + 34) & 0x10) == 0 && (v9 & 0x20008) == 0 )
      {
        v56 = *v25;
        Process = (_KPROCESS *)0xFFFFF6FB7DBED000LL;
        if ( (unsigned __int64)v25 >= 0xFFFFF6FB7DBED000uLL )
        {
          Process = (_KPROCESS *)0xFFFFF6FB7DBED7F8LL;
          if ( (unsigned __int64)v25 <= 0xFFFFF6FB7DBED7F8uLL )
            LOBYTE(v56) = MiReadPteShadow(v25, *v25);
        }
        if ( (v56 & 0x42) == 0 )
        {
          if ( (v9 & 0x400) != 0 )
          {
            Process = KeGetCurrentThread()->ApcState.Process;
            AnyMultiplexedVm = (char *)(Process[1].ActiveProcessors.Bitmap[2] + 3008);
LABEL_146:
            v139 = (ULONG_PTR)AnyMultiplexedVm;
            goto LABEL_147;
          }
          if ( (v9 & 0x210) != 0 )
          {
            AnyMultiplexedVm = MiGetAnyMultiplexedVm(v27);
            v139 = (ULONG_PTR)AnyMultiplexedVm;
          }
          else
          {
            if ( (v9 & 0x40) == 0 )
            {
              AnyMultiplexedVm = (char *)(v26 + 1280);
              goto LABEL_146;
            }
            AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
            v139 = (ULONG_PTR)AnyMultiplexedVm;
          }
LABEL_147:
          if ( (*(_BYTE *)(v8 + 35) & 8) == 0 )
          {
            WsleContents = MiGetWsleContents(Process, v24);
            if ( (WsleContents & 0xF) != v60 )
            {
              v174 = 20LL;
              v172 = MiTbFlushType((__int64)AnyMultiplexedVm);
              v173 = 4;
              v175 = 0LL;
              v176 = 0LL;
              if ( dword_140388C68 )
              {
                MI_WSLE_LOG_ACCESS(v61, v63);
                v62 = v138;
              }
              MiInsertTbFlushEntry(&v172, v62, 1LL, 0);
              if ( !MiFreeWsleList((__int64)AnyMultiplexedVm, (__int64)&v172, 0) )
                v142 = 2;
            }
          }
        }
      }
LABEL_188:
      v10 = v139;
      if ( v137 )
      {
        if ( (v9 & 0x400) != 0 )
        {
          MiPreUnlockWorkingSetExclusive(v139, v133);
          v82 = MiGetSharedVm(v10);
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v82, retaddr);
          else
            *v82 = 0;
          __writecr8(v133);
          if ( (v9 & 0x4000) != 0 )
          {
            v127 = (volatile signed __int64 *)MEMORY[0x30];
            if ( (_InterlockedExchangeAdd64(MEMORY[0x30], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(v127);
            KeAbPostRelease((ULONG_PTR)v127);
          }
          KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
          MmDetachSession((__int64)Object, (__int64)&v166);
          ObfDereferenceObject(Object);
          goto LABEL_361;
        }
        if ( v139 )
        {
          MiPreUnlockWorkingSetExclusive(v139, v133);
          v129 = MiGetSharedVm(v10);
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v129, retaddr);
          else
            *v129 = 0;
          __writecr8(v133);
        }
        if ( (v9 & 0x2000) != 0 )
          ExReleaseFastMutexUnsafe((PFAST_MUTEX)(qword_1404013B8 + 8));
        if ( !v10 )
          goto LABEL_361;
LABEL_376:
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
LABEL_361:
        if ( (v9 & 0x80000) != 0 )
        {
          KiUnstackDetachProcess(&v166, 1LL);
          MiAttachThreadDone(v10);
        }
        if ( v141 )
          MiReleaseFreshPage(v141);
        MiLockPageInline(v8);
        v128 = v142;
        if ( v142 == 1 )
        {
          if ( v159 )
            *v159 = v147;
        }
        else
        {
          if ( (*(_BYTE *)(v8 + 34) & 7) != 6 )
            v128 = 2;
          if ( v128 == 2 && (*(_QWORD *)(v8 + 24) & 0x4000000000000000LL) != 0 )
            return 0;
        }
        return v128;
      }
      goto LABEL_377;
    }
    v64 = *(unsigned __int8 *)(v8 + 34) >> 6;
    v136 = v64;
    if ( a5 == -1 )
    {
      v67 = (*(_QWORD *)(v8 + 40) >> 36) & 3LL;
      v68 = MiPageToNode(v143, 0LL);
      v65 = 0;
      v64 = v136;
      v66 = (v68 << byte_140388501) | dword_140388540 & v143 | ((_DWORD)v67 << byte_140388502);
    }
    else
    {
      v65 = 16;
      v66 = dword_140388540 & v143 | a5 & ~dword_140388540;
    }
    if ( v155 == -1 )
    {
      Page = MiGetPage(v144, v66, v65);
      v147 = Page;
      if ( Page == -1 )
        goto LABEL_188;
      v70 = 48 * Page - 0x58000000000LL;
      v150 = v70;
    }
    else
    {
      v71 = (*(_QWORD *)(v8 + 40) >> 58) + 1;
      if ( v64 == 2 )
      {
        v72 = 28;
      }
      else
      {
        v72 = 4;
        if ( !v64 )
          v72 = 12;
      }
      v158 = 1LL;
      PageChain = MiGetPageChain(v144, v10, v71, v72, v65, v155, &v158);
      v150 = PageChain;
      v70 = PageChain;
      if ( !PageChain )
      {
        v147 = -1LL;
        goto LABEL_188;
      }
      v22 = (unsigned __int128)((PageChain + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
      v147 = (PageChain + 0x58000000000LL) / 48;
    }
    if ( v70 == v8 )
    {
LABEL_167:
      v142 = 1;
      goto LABEL_188;
    }
    v74 = MiLockPageInline(v8);
    v132 = v74;
    if ( (MiFlags & 0x8000) != 0 && (unsigned int)MiGetPagePrivilege(v8, 1, 0LL) )
      v9 |= 0x40000u;
    v22 = v9 & 0x20;
    v75 = 0xFFFFF6FB7DBED7F8uLL;
    LODWORD(BugCheckParameter2) = v9 & 0x20;
    if ( (v9 & 0x20) != 0 )
    {
      if ( (unsigned int)MiGetSystemRegionType(v138) != 5
        || (*(_BYTE *)(v8 + 34) & 7) != 6
        || (__int64 *)(*(_QWORD *)(v8 + 8) | 0x8000000000000000uLL) != v140
        || !(unsigned int)MiSmallVaStillMapsFrame(v76, v143)
        || (*(_BYTE *)(v8 + 35) & 0x10) != 0 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v77 = v74;
LABEL_184:
        __writecr8(v77);
LABEL_185:
        v141 = v70;
        v80 = v70;
        goto LABEL_186;
      }
      v78 = v140;
      PteShadow = *v140;
      v75 = 0xFFFFF6FB7DBED7F8uLL;
      if ( (unsigned __int64)v140 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v140 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow(v140, *v140);
      if ( (PteShadow & 0x200) != 0 || (PteShadow & 0x20) == 0 )
      {
LABEL_183:
        _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v77 = v132;
        goto LABEL_184;
      }
      v22 = (unsigned int)BugCheckParameter2;
    }
    else
    {
      v78 = v140;
      PteShadow = 0LL;
    }
    if ( *(_WORD *)(v8 + 32) != 1
      || ((*(_BYTE *)(v8 + 35) & 8) != 0 || (*(_DWORD *)v8 & 1) == 0) && (v9 & 0x20026) == 0
      || (*(_BYTE *)(v8 + 34) & 7) != 6
      || v144 != *(_QWORD *)(qword_140388AF0 + 8 * ((*(_QWORD *)(v8 + 40) >> 40) & 0x3FFLL)) )
    {
      goto LABEL_183;
    }
    if ( !(_DWORD)v22 )
    {
      PteShadow = *v78;
      if ( (unsigned __int64)v78 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v78 <= v75 )
        PteShadow = MiReadPteShadow(v78, *v78);
    }
    if ( (v9 & 0x100) == 0 )
    {
      v22 = 1LL;
      if ( (*(_QWORD *)(v8 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 && v137 == 1 )
      {
        if ( (v9 & 0x10) == 0 )
          goto LABEL_183;
        BugCheckParameter2 = qword_1404013B8 + 8;
        v83 = KeAbPreAcquire(qword_1404013B8 + 8, 0LL, 1);
        v84 = BugCheckParameter2;
        if ( !_interlockedbittestandreset((volatile signed __int32 *)BugCheckParameter2, 0) )
        {
          if ( v83 )
            KeAbPostReleaseEx(BugCheckParameter2, (unsigned __int64)v83);
          goto LABEL_183;
        }
        if ( v83 )
          BYTE2(v83[1].Left) |= 1u;
        v9 |= 0x2008u;
        *(_QWORD *)(v84 + 8) = KeGetCurrentThread();
      }
    }
    if ( (v9 & 0x20000) == 0 )
    {
      if ( (v9 & 0x20) != 0 )
      {
        v11 = PteShadow & 0xFFFFFFFFFFFFFFDFuLL;
        BugCheckParameter2 = _InterlockedCompareExchange64(v140, PteShadow & 0xFFFFFFFFFFFFFFDFuLL, PteShadow);
        if ( PteShadow != BugCheckParameter2 )
          goto LABEL_183;
        v137 = 2;
        KeFlushSingleTb(v138, 0LL, 2LL);
LABEL_235:
        MiLockNestedPageAtDpcInline(v70);
        MiFinalizePageAttribute(v70, v136, 1u);
        if ( (v9 & 0x20000) != 0 )
        {
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(IsPageFileHash + 232), &v157);
          if ( IsPageFileHash != MiVaIsPageFileHash(v144, v138) || !(unsigned int)MiSmallVaStillMapsFrame(v138, v143) )
          {
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&v157);
            __writecr8(v157.OldIrql);
LABEL_239:
            _InterlockedAnd64((volatile signed __int64 *)(v70 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            goto LABEL_183;
          }
        }
        MiCopyPfnEntry(v70, v8);
        v90 = v143;
        if ( (*(_QWORD *)(v8 + 40) & 0xFFFFFFFFFLL) == v143 )
          *(_QWORD *)(v70 + 40) ^= (v147 ^ *(_QWORD *)(v70 + 40)) & 0xFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v70 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( (v9 & 0x20020) != 0 )
          goto LABEL_254;
        if ( (v9 & 0x2000) == 0 )
        {
          v89 = v137;
          if ( (((v9 >> 3) & 1) != 0 || v137) && (v9 & 0xA) != 0xA && (v9 & 0x1000) == 0 )
          {
            if ( ((v9 >> 3) & 1) != 0 && (v9 & 2) == 0 && !v137 || (v9 & 0x104) == 0x104 )
              goto LABEL_253;
LABEL_254:
            v92 = (v9 >> 13) & 1;
            v136 = v92;
            if ( v92 )
            {
              v93 = MiLockProtoPoolPage(v138, &v134);
              v144 = v93;
              v89 = v93;
              if ( !v93 )
              {
LABEL_256:
                MiSetOriginalPtePfnFromFreeList(v70 + 16);
                goto LABEL_185;
              }
              v94 = 2;
              if ( *(_WORD *)(v93 + 32) > 2u )
              {
                v95 = v93;
LABEL_259:
                MiUnlockProtoPoolPage(v95, v134);
                goto LABEL_256;
              }
              PteShadow = *v140;
              if ( (unsigned __int64)v140 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v140 <= 0xFFFFF6FB7DBED7F8uLL )
                PteShadow = MiReadPteShadow(v140, *v140);
              if ( (PteShadow & 0x42) == 0 )
              {
                v92 = v136;
                v90 = v143;
LABEL_272:
                if ( !v92
                  && (v9 & 0x104) != 0x104
                  && ((v9 & 8) == 0 || ((unsigned __int8)v9 & (unsigned __int8)v94) != 0 || v137) )
                {
                  v136 = v9 & 0x2000;
                  if ( (v9 & 0x2000) != 0 || v132 != 17 )
                  {
                    LODWORD(BugCheckParameter2) = 4;
                    MiLockNestedPageAtDpcInline(v70);
                    v99 = BugCheckParameter2;
                  }
                  else
                  {
                    v99 = 0;
                  }
                  v100 = v99 | 2;
                  if ( (v9 & 0x40000) == 0 )
                    v100 = v99;
                  MiCopyPage(v147, v143, v151, v100);
                  v101 = (v100 & 4) == 0;
                  v70 = v150;
                  if ( !v101 )
                    _InterlockedAnd64((volatile signed __int64 *)(v150 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                  if ( (v9 & 0x20) == 0 && v132 != 17 )
                    *(_BYTE *)(v8 + 34) = *(_BYTE *)(v8 + 34) & 0xF8 | 5;
                  goto LABEL_315;
                }
                PteFromCopyList = MiGetPteFromCopyList(v151, v147, v90, v89);
                v150 = PteFromCopyList;
                if ( (v9 & 0x2000) != 0 )
                {
                  v103 = MiReplacePageOfProtoPool(v138, v143, v147, (__int64)((PteFromCopyList << 25) - v154) >> 16);
                }
                else
                {
                  v104 = v143;
                  v105 = v139;
                  v161[2] = (__int64)((PteFromCopyList << 25) - v154) >> 16;
                  v161[5] = &v167;
                  v161[6] = CurrentThread;
                  v161[1] = v138;
                  v162 = CurrentThread->ApcState.Process;
                  v106 = *(_QWORD *)(v8 + 40);
                  v161[4] = v147;
                  v161[0] = v139;
                  v163 = 0LL;
                  v161[3] = v143;
                  v164 = 0LL;
                  if ( (v106 & 0xFFFFFFFFFLL) == v143 )
                  {
                    if ( (*(_BYTE *)(v139 + 195) & 2) != 0
                      || _interlockedbittestandset((volatile signed __int32 *)(BugCheckParameter1 + 1740), 1u) )
                    {
                      v103 = 0;
                      goto LABEL_303;
                    }
                    v9 |= 0x8000u;
                    if ( v162->DirectoryTableBase >> 12 != v104 )
                    {
                      v9 |= 0x100000u;
                      HIDWORD(v163) = 1;
                      v164 = v162[2].Affinity.Bitmap[0];
                    }
                    MiPreUnlockWorkingSetExclusive(v105, v135);
                    v107 = v139;
                    v108 = MiGetSharedVm(v139);
                    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
                      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v108, retaddr);
                    else
                      *v108 = 0;
                    __writecr8(v135);
                    KeSwapDirectoryTableBase(v162, HIDWORD(v163), v161);
                    v109 = MiGetSharedVm(v107);
                    v135 = ExAcquireSpinLockExclusive(v109);
                    v110 = BugCheckParameter1;
                    v109[1] = 0;
                    _InterlockedAnd((volatile signed __int32 *)(v110 + 1740), 0xFFFFFFFD);
                    v8 = v156;
                  }
                  else
                  {
                    MiReplacePageTablePage(v161);
                  }
                  v103 = (int)v163 >= 0;
                }
                PteFromCopyList = v150;
LABEL_303:
                *(_QWORD *)PteFromCopyList = 0LL;
                if ( PteFromCopyList >= 0xFFFFF6FB7DBED000uLL && PteFromCopyList <= 0xFFFFF6FB7DBED7F8uLL )
                  MiWritePteShadow(PteFromCopyList, 0LL);
                v111 = PteFromCopyList + 8;
                *(_QWORD *)(PteFromCopyList + 8) = 0LL;
                if ( PteFromCopyList + 8 >= 0xFFFFF6FB7DBED000uLL && v111 <= 0xFFFFF6FB7DBED7F8uLL )
                  MiWritePteShadow(v111, 0LL);
                if ( !v103 )
                {
                  if ( (v9 & 0x2000) == 0 )
                    goto LABEL_256;
                  v95 = v144;
                  goto LABEL_259;
                }
                v136 = v9 & 0x2000;
                if ( (v9 & 0x2000) != 0 )
                {
                  *(_BYTE *)(v8 + 34) = *(_BYTE *)(v8 + 34) & 0xF8 | 5;
                  *(_QWORD *)(v8 + 24) = *(_QWORD *)(v8 + 24) & 0xC000000000000000uLL | 1;
                  MiLockNestedPageAtDpcInline(v70);
                }
                else
                {
                  v112 = MiLockPageInline(v8);
                  v22 = 0xC000000000000001uLL;
                  *(_BYTE *)(v8 + 34) = *(_BYTE *)(v8 + 34) & 0xF8 | 5;
                  *(_QWORD *)(v8 + 24) = *(_QWORD *)(v8 + 24) & 0xC000000000000000uLL | 1;
                  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                  __writecr8(v112);
                  v132 = 17;
                }
LABEL_315:
                v113 = (v147 & 0xFFFFFFFFFLL) << 12;
                v114 = v113 | PteShadow & 0xFFFF000000000FFFuLL;
                if ( (v9 & 0x20) != 0 )
                {
                  v115 = v113 | v11 & 0xFFFF000000000FFFuLL | 0x20;
                  MiLockNestedPageAtDpcInline(v70);
                  if ( v11 != _InterlockedCompareExchange64(v140, v115, v11) )
                  {
                    MiSetOriginalPtePfnFromFreeList(v70 + 16);
                    *(_BYTE *)(v70 + 34) = *(_BYTE *)(v70 + 34) & 0xF8 | 5;
                    goto LABEL_239;
                  }
                  _InterlockedAnd64((volatile signed __int64 *)(v70 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                  *(_BYTE *)(v8 + 34) = *(_BYTE *)(v8 + 34) & 0xF8 | 5;
                }
                else if ( (v9 & 0x8000) != 0 )
                {
                  if ( (v9 & 0x100000) != 0 )
                  {
                    v120 = *(_QWORD *)(BugCheckParameter1 + 1544);
                    if ( !v120 )
                      goto LABEL_330;
                    v121 = MI_GET_PAGE_FRAME_FROM_PTE(((v120 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
                    if ( v121 != v123 )
                      v122 = 0LL;
                    if ( !v122 )
                    {
LABEL_330:
                      v142 = 2;
                      v80 = v8;
                      v141 = v8;
LABEL_186:
                      if ( v80 )
                      {
                        v81 = MiLockPageInline(v80);
                        *(_BYTE *)(v80 + 34) = *(_BYTE *)(v80 + 34) & 0xF8 | 5;
                        _InterlockedAnd64((volatile signed __int64 *)(v80 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                        __writecr8(v81);
                      }
                      goto LABEL_188;
                    }
                  }
                }
                else
                {
                  if ( (v9 & 0x80u) == 0 )
                  {
                    v116 = v136;
                    if ( !v136 && (v9 & 0x210) != 0 )
                      MiLockNestedPageAtDpcInline(v70);
                    MiWriteValidPteNewPage((unsigned __int64 *)v140, v114);
                    goto LABEL_320;
                  }
                  v124 = v140;
                  *v140 = v114;
                  if ( (unsigned __int64)v124 >= 0xFFFFF6FB7DBED000uLL
                    && (unsigned __int64)v124 <= 0xFFFFF6FB7DBED7F8uLL )
                  {
                    MiWritePteShadow(v124, v114);
                  }
                }
                v116 = v136;
LABEL_320:
                v117 = v139;
                if ( (v9 & 0xA0) == 0 )
                {
                  v118 = MiTbFlushType(v139);
                  KeFlushSingleTb(v138, v118, v137);
                }
                if ( v116 )
                {
                  _InterlockedAnd64((volatile signed __int64 *)(v70 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                  MiUnlockProtoPoolPage(v144, v134);
                  v119 = 17;
                }
                else
                {
                  if ( (v9 & 0x210) != 0 && (v9 & 0x80u) == 0 )
                  {
                    if ( v117 )
                      v125 = MiTbFlushType(v117);
                    else
                      v125 = 0;
                    KeFlushSingleTb(v138, v125, v137);
                    _InterlockedAnd64((volatile signed __int64 *)(v70 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                  }
                  v119 = v132;
                }
                if ( ((*(_QWORD *)(v8 + 40) >> 54) & 7) == 3 )
                {
                  v126 = 12;
                  if ( v119 == 17 )
                    v126 = 8;
                  MiClearPfnImageVerified(v8, v126);
                }
                if ( (v9 & 0x20000) != 0 )
                {
                  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v157);
                  __writecr8(v157.OldIrql);
                }
                if ( v119 == 17 )
                  v119 = MiLockPageInline(v8);
                *(_QWORD *)(v8 + 40) &= 0xFC3FFFFFFFFFFFFFuLL;
                *(_BYTE *)(v8 + 34) &= 0xC7u;
                *(_BYTE *)(v8 + 35) &= ~0x20u;
                *(_QWORD *)(v8 + 24) &= 0xC000000000000000uLL;
                *(_WORD *)(v8 + 32) = 0;
                _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                __writecr8(v119);
                goto LABEL_167;
              }
              MiLockPageAtDpcInline(v89);
              v96 = v144;
              if ( *(_WORD *)(v144 + 32) > 2u )
              {
                _InterlockedAnd64((volatile signed __int64 *)(v144 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                MiUnlockProtoPoolPage(v96, v134);
                MiSetOriginalPtePfnFromFreeList(v70 + 16);
                goto LABEL_185;
              }
              MiWriteValidPteNewPage((unsigned __int64 *)v140, PteShadow & 0xFFFFFFFFFFFFFFBDuLL);
              KeFlushSingleTb(v138, 0LL, 1LL);
              v97 = MiCaptureDirtyBitToPfn(v144);
              v98 = v144;
              _InterlockedAnd64((volatile signed __int64 *)(v144 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( v97 )
                MiReleasePageFileInfo(
                  *(struct _KEVENT **)(qword_140388AF0 + 8 * ((*(_QWORD *)(v98 + 40) >> 40) & 0x3FFLL)),
                  v97,
                  1);
              MiLockPageAtDpcInline(v70);
              MiCaptureDirtyBitToPfn(v70);
              _InterlockedAnd64((volatile signed __int64 *)(v70 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v92 = v136;
              v90 = v143;
            }
            else
            {
              v134 = 17;
              v144 = 0LL;
            }
            v94 = 2;
            goto LABEL_272;
          }
          *(_BYTE *)(v8 + 34) = *(_BYTE *)(v8 + 34) & 0xF8 | 5;
        }
LABEL_253:
        v91 = v132;
        _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v132 = 17;
        __writecr8(v91);
        goto LABEL_254;
      }
      if ( ((v9 & 8) == 0 || (v9 & 0x1000) != 0) && ((PteShadow & 0x42) != 0 || (v9 & 0x40000) != 0) )
      {
        v85 = v140;
        if ( (v9 & 0x1000) != 0 )
        {
          MiWriteValidPteNewPage((unsigned __int64 *)v140, PteShadow & 0xFFFFFFFFFFFFFFBDuLL);
        }
        else
        {
          v86 = PteShadow & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
          v9 |= 0x80u;
          *v140 = v86;
          if ( (unsigned __int64)v85 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v85 <= 0xFFFFF6FB7DBED7F8uLL )
            MiWritePteShadow(v85, v86);
        }
        if ( v139 )
          v87 = MiTbFlushType(v139);
        else
          v87 = 0;
        KeFlushSingleTb(v138, v87, v137);
      }
    }
    v88 = v137;
    if ( v137 == 1 )
    {
      if ( (v9 & 4) != 0 )
        v88 = 2;
      v137 = v88;
    }
    goto LABEL_235;
  }
  v137 = 1;
  if ( SystemRegionType == 1
    || v24 >= 0xFFFFF68000000000uLL
    && v24 <= 0xFFFFF6FFFFFFFFFFuLL
    && (v28 = MiGetSystemRegionType((__int64)((v24 << 25) - v154) >> 16), v28 == v29) )
  {
    Object = MiAttachToOwningSession(v8, a2, (__int64)&v166, v23);
    if ( !Object )
      return 0LL;
    v42 = KeGetCurrentThread()->ApcState.Process;
    CurrentThread = KeGetCurrentThread();
    v10 = v42[1].ActiveProcessors.Bitmap[2] + 3008;
    --CurrentThread->SpecialApcDisable;
    v139 = v10;
    v43 = MiGetSharedVm(v10);
    v44 = ExAcquireSpinLockExclusive(v43);
    v43[1] = 0;
    v9 = 1024;
    v133 = v44;
    ExAcquireSpinLockSharedAtDpcLevel(&dword_140388924);
    if ( (unsigned int)MiSmallVaStillMapsFrame(v138, -1LL) )
    {
      if ( (unsigned int)MiGetSystemRegionType(v138) == 1
        || v46 >= 0xFFFFF68000000000uLL
        && v46 <= 0xFFFFF6FFFFFFFFFFuLL
        && (v47 = MiGetSystemRegionType((__int64)((v46 << 25) - v154) >> 16), v47 == v48) )
      {
        if ( (unsigned int)MiSmallVaStillMapsFrame(v46, v143) == 1 )
        {
          v9 = 3072;
          v169 = 20LL;
          v167 = 2;
          v168 = 0;
          v170 = 0LL;
          v171 = 0LL;
        }
      }
      ExReleaseSpinLockSharedFromDpcLevel(&dword_140388924);
      if ( v9 >= 0x800 && (*(_QWORD *)(v8 + 40) & 0x200000000000000LL) == 0 && (unsigned int)MiIsPfnFileOnly(v8) != 1 )
      {
        v26 = 0LL;
        v146 = 0LL;
        BugCheckParameter1 = 0LL;
        goto LABEL_131;
      }
    }
    else
    {
      ExReleaseSpinLockSharedFromDpcLevel(&dword_140388924);
    }
    MiPreUnlockWorkingSetExclusive(v10, v133);
    v45 = MiGetSharedVm(v10);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v45, retaddr);
    else
      *v45 = 0;
    __writecr8(v133);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    MmDetachSession((__int64)Object, (__int64)&v166);
    ObfDereferenceObject(Object);
    MiLockPageInline(v8);
    return 2 * (unsigned int)(~(*(_QWORD *)(v8 + 24) >> 62) & 1);
  }
  IsPageFileHash = MiVaIsPageFileHash(v144, v24);
  v30 = MiGetSystemRegionType(v138);
  if ( v30 == 7 )
  {
    v9 = 512;
  }
  else if ( v30 == 6 )
  {
    v9 = 16;
  }
  else if ( v31 )
  {
    v9 = 0x20000;
  }
  else if ( v30 == 12
         || PsNtosImageBase
         && (v138 >= (unsigned __int64)PsNtosImageBase && v138 < PsNtosImageEnd
          || v138 >= (unsigned __int64)PsHalImageBase && v138 < PsHalImageEnd) )
  {
    v9 = 64;
  }
  v136 = v9 & 0x40;
  if ( ((v136 >> 2) | ((unsigned __int8)v9 | (unsigned __int8)((v9 | (v9 >> 8)) >> 5)) & 0x10) < 0x10 )
  {
    v40 = MiHyperPage(v8);
    if ( !v40 )
      return 0LL;
    v41 = v9 | 8;
    if ( v40 == 2 )
    {
      v9 = v41 | 4;
    }
    else
    {
      v9 = v41 | 2;
      if ( v138 >= qword_140388950 && v138 < qword_140388950 + 276840448 )
        v9 |= 0x1000u;
    }
    goto LABEL_8;
  }
  v32 = 1;
  if ( ((*(_DWORD *)v8 & 1) == 0 || (*(_BYTE *)(v8 + 35) & 8) != 0) && (v9 & 0x20100) == 0 )
    return 0LL;
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(a2);
  v33 = KeGetCurrentThread();
  BugCheckParameter1 = 0LL;
  v146 = 0LL;
  CurrentThread = v33;
  Object = 0LL;
  if ( (v9 & 0x210) != 0 )
  {
    v32 = 2;
LABEL_42:
    v34 = MiGetAnyMultiplexedVm(v32);
    goto LABEL_45;
  }
  if ( (v9 & 0x20040) != 0 )
    goto LABEL_42;
  v34 = 0LL;
LABEL_45:
  v139 = (ULONG_PTR)v34;
  --v33->SpecialApcDisable;
  v35 = MiGetSharedVm((__int64)v34);
  v36 = ExAcquireSpinLockExclusive(v35);
  v35[1] = 0;
  v133 = v36;
  ExAcquireSpinLockSharedAtDpcLevel(&dword_140388924);
  if ( (unsigned int)MiSmallVaStillMapsFrame(v138, -1LL) )
  {
    if ( (v9 & 0x210) != 0 )
    {
      if ( (unsigned int)MiGetSystemRegionType(v138) - 6 > 1 )
        goto LABEL_46;
    }
    else if ( v9 < 0x20000 )
    {
      if ( !v136
        || (unsigned int)MiGetSystemRegionType(v138) != 12
        && (!PsNtosImageBase
         || (v38 < (unsigned __int64)PsNtosImageBase || v38 >= PsNtosImageEnd)
         && (v38 < (unsigned __int64)PsHalImageBase || v38 >= PsHalImageEnd)) )
      {
        goto LABEL_46;
      }
      v137 = 2;
    }
    else if ( !MiVaIsPageFileHash(v144, v138) )
    {
      goto LABEL_46;
    }
    if ( !(unsigned int)MiSmallVaStillMapsFrame(v138, v143)
      || (unsigned int)MiIsPfnFileOnly(v8) == 1
      || (*(_QWORD *)(v8 + 40) & 0x200000000000000LL) != 0 )
    {
      ExReleaseSpinLockSharedFromDpcLevel(&dword_140388924);
      v37 = (v9 & 0x210) == 0 ? 2 : 0;
      goto LABEL_70;
    }
    ExReleaseSpinLockSharedFromDpcLevel(&dword_140388924);
    if ( v9 < 0x20000 && ((*(_BYTE *)(v8 + 35) & 8) != 0 || (*(_DWORD *)v8 & 1) == 0) )
    {
      v37 = 0;
      goto LABEL_70;
    }
    v10 = v139;
    v26 = 0LL;
LABEL_131:
    v24 = v138;
    v27 = 2;
    v25 = v140;
    goto LABEL_132;
  }
LABEL_46:
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140388924);
  v37 = 2;
LABEL_70:
  MiPreUnlockWorkingSetExclusive(v139, v133);
  v39 = MiGetSharedVm(v139);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v39, retaddr);
  else
    *v39 = 0;
  __writecr8(v133);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  MiLockPageInline(v8);
  if ( (*(_QWORD *)(v8 + 24) & 0x4000000000000000LL) == 0 )
    return v37;
  return v6;
}
