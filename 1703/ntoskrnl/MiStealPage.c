/*
 * XREFs of MiStealPage @ 0x14010C28C
 * Callers:
 *     MiClaimPhysicalRun @ 0x14010E174 (MiClaimPhysicalRun.c)
 * Callees:
 *     ExReleaseAutoExpandPushLockExclusive @ 0x140020340 (ExReleaseAutoExpandPushLockExclusive.c)
 *     MiLockNestedPageAtDpcInline @ 0x14002126C (MiLockNestedPageAtDpcInline.c)
 *     MiPrepareAttachThread @ 0x140022D6C (MiPrepareAttachThread.c)
 *     MiReplacePageTablePage @ 0x140023E74 (MiReplacePageTablePage.c)
 *     MiReplacePageOfProtoPool @ 0x140027284 (MiReplacePageOfProtoPool.c)
 *     MiWriteValidPteNewPage @ 0x14002820C (MiWriteValidPteNewPage.c)
 *     MiGetPteFromCopyList @ 0x14002C478 (MiGetPteFromCopyList.c)
 *     MiVaIsPageFileHash @ 0x140031B70 (MiVaIsPageFileHash.c)
 *     MiHyperPage @ 0x140039380 (MiHyperPage.c)
 *     KeAbPostReleaseEx @ 0x14003FBE8 (KeAbPostReleaseEx.c)
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseFastMutexUnsafe @ 0x140052C30 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14006CF50 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MmDetachSession @ 0x140073870 (MmDetachSession.c)
 *     MiAttachToOwningSession @ 0x140076418 (MiAttachToOwningSession.c)
 *     MiTryToAcquireExpansionLockAtDpc @ 0x1400764EC (MiTryToAcquireExpansionLockAtDpc.c)
 *     MiGetTopLevelPfn @ 0x140079090 (MiGetTopLevelPfn.c)
 *     MiRotatedToFrameBuffer @ 0x14007C2AC (MiRotatedToFrameBuffer.c)
 *     MiTbFlushType @ 0x14007FA04 (MiTbFlushType.c)
 *     PsIsSystemProcess @ 0x14008B4F0 (PsIsSystemProcess.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiCopyPage @ 0x1400A0320 (MiCopyPage.c)
 *     MiLockProtoPoolPage @ 0x1400A1530 (MiLockProtoPoolPage.c)
 *     MiGetPagePrivilege @ 0x1400A3660 (MiGetPagePrivilege.c)
 *     MiUnlockProtoPoolPage @ 0x1400A3920 (MiUnlockProtoPoolPage.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     MiReleasePageFileInfo @ 0x1400ABFD4 (MiReleasePageFileInfo.c)
 *     MiAttachThreadDone @ 0x1400AD5BC (MiAttachThreadDone.c)
 *     MiGetAnyMultiplexedVm @ 0x1400B1BCC (MiGetAnyMultiplexedVm.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     MiPageToNode @ 0x1400B70B0 (MiPageToNode.c)
 *     MiGetPageChain @ 0x1400BB6F0 (MiGetPageChain.c)
 *     MiGetPage @ 0x1400BBC00 (MiGetPage.c)
 *     MiLocateAddress @ 0x1400C2010 (MiLocateAddress.c)
 *     MiClearPfnImageVerified @ 0x1400C7700 (MiClearPfnImageVerified.c)
 *     MiIsPfnFileOnly @ 0x1400CB1E0 (MiIsPfnFileOnly.c)
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x1400D6900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiFreeWsleList @ 0x1400D6F10 (MiFreeWsleList.c)
 *     PsGetCurrentProcess @ 0x1400D8F50 (PsGetCurrentProcess.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     MiGetWsleContents @ 0x1400FBED0 (MiGetWsleContents.c)
 *     KeAbPreAcquire @ 0x1400FDE60 (KeAbPreAcquire.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140100920 (MI_WSLE_LOG_ACCESS.c)
 *     MiCaptureDirtyBitToPfn @ 0x140100BFC (MiCaptureDirtyBitToPfn.c)
 *     MiWriteValidPteNewProtection @ 0x140100C50 (MiWriteValidPteNewProtection.c)
 *     MiFinalizePageAttribute @ 0x140105D40 (MiFinalizePageAttribute.c)
 *     MiReleaseFreshPage @ 0x14010ADC8 (MiReleaseFreshPage.c)
 *     MiCopyPfnEntry @ 0x14010C150 (MiCopyPfnEntry.c)
 *     MiSmallVaStillMapsFrame @ 0x14010DD64 (MiSmallVaStillMapsFrame.c)
 *     KeFlushSingleTb @ 0x14010DE88 (KeFlushSingleTb.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KeSwapDirectoryTableBase @ 0x140136ADC (KeSwapDirectoryTableBase.c)
 *     ExTryAcquireAutoExpandPushLockExclusive @ 0x1401529C0 (ExTryAcquireAutoExpandPushLockExclusive.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14017D278 (MiSetOriginalPtePfnFromFreeList.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     MiClusterVadActive @ 0x140221E54 (MiClusterVadActive.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14025C828 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiStealPage(__int64 a1, unsigned __int8 a2, int a3, unsigned int *a4, int a5, _QWORD *a6)
{
  unsigned int v6; // edi
  __int64 v7; // r13
  unsigned int v9; // esi
  __int64 v10; // r12
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // rdx
  __int64 TopLevelPfn; // rcx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  unsigned int i; // r8d
  int SystemRegionType; // eax
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // r9
  unsigned __int64 v23; // r10
  __int64 v24; // r11
  int v25; // eax
  int v26; // edx
  int v27; // eax
  __int64 v28; // rdx
  struct _KTHREAD *v29; // rdx
  int v30; // ecx
  char *v31; // rax
  LONG *v32; // rbx
  KIRQL v33; // al
  unsigned int v34; // esi
  unsigned __int64 v35; // rdx
  LONG *v36; // rax
  int v37; // eax
  int v38; // esi
  _KPROCESS *v39; // rcx
  LONG *v40; // rbx
  KIRQL v41; // al
  LONG *v42; // rax
  unsigned __int64 v43; // r8
  int v44; // eax
  int v45; // edx
  struct _KPROCESS *v46; // rdx
  _KPROCESS *CurrentProcess; // rax
  _KPROCESS *v48; // rcx
  LONG *SharedVm; // rbx
  unsigned __int64 Address; // rax
  unsigned __int64 v51; // rbx
  unsigned __int64 v52; // rax
  volatile signed __int64 *v53; // rbx
  _KPROCESS *Process; // rcx
  int v55; // r9d
  unsigned __int64 v56; // r10
  __int64 v57; // r11
  char *AnyMultiplexedVm; // rbx
  char WsleContents; // al
  char v60; // r9
  __int64 v61; // rcx
  void *v62; // r10
  int v63; // r10d
  unsigned int v64; // edx
  unsigned int v65; // ebx
  __int64 v66; // rbx
  int v67; // eax
  __int64 Page; // rax
  __int64 v69; // r12
  int v70; // r8d
  unsigned int v71; // r9d
  __int64 PageChain; // rax
  unsigned __int8 v73; // bl
  __int64 v74; // r8
  unsigned __int64 v75; // rax
  __int64 v76; // rax
  volatile signed __int64 *v77; // r9
  signed __int64 v78; // rbx
  __int64 v79; // r15
  unsigned __int8 v80; // al
  LONG *v81; // rax
  unsigned __int64 v82; // r10
  _KLOCK_ENTRY *v83; // rax
  ULONG_PTR v84; // rcx
  volatile signed __int64 *v85; // rcx
  unsigned int v86; // r11d
  __int64 v87; // rcx
  unsigned int v88; // eax
  int v89; // ecx
  __int64 v90; // rdx
  unsigned __int64 v91; // rax
  int v92; // eax
  __int64 v93; // rax
  __int64 v94; // rdx
  __int64 v95; // r8
  __int64 v96; // rcx
  __int64 v97; // r9
  char v98; // r10
  __int64 v99; // rax
  __int64 v100; // rdx
  __int64 v101; // r8
  unsigned __int64 v102; // rax
  __int64 v103; // rcx
  char v104; // cl
  char v105; // r12
  bool v106; // zf
  _QWORD *PteFromCopyList; // r11
  __int64 v108; // r9
  __int64 v109; // r8
  __int64 v110; // rax
  __int64 v111; // r13
  LONG *v112; // rax
  LONG *v113; // r13
  ULONG_PTR v114; // rax
  __int64 v115; // rcx
  __int64 v116; // r11
  __int64 v117; // rcx
  int v118; // r10d
  unsigned __int8 v119; // al
  __int64 v120; // rax
  unsigned __int64 v121; // rbx
  unsigned __int64 v122; // rbx
  __int64 v123; // r8
  unsigned int v124; // r15d
  __int64 v125; // rbx
  unsigned int v126; // eax
  unsigned __int8 v127; // bl
  unsigned __int64 v128; // r9
  __int64 v129; // rax
  __int64 v130; // r9
  __int64 v131; // r10
  volatile signed __int64 *v132; // rcx
  __int64 v133; // rcx
  unsigned int v134; // eax
  char v135; // dl
  ULONG_PTR v136; // rbx
  unsigned int v137; // edx
  LONG *v138; // rax
  unsigned __int8 v139; // r14
  LONG *v140; // rax
  unsigned __int8 v141; // [rsp+40h] [rbp-C0h]
  unsigned __int8 v142; // [rsp+41h] [rbp-BFh]
  unsigned __int8 v143; // [rsp+42h] [rbp-BEh] BYREF
  KIRQL v144; // [rsp+43h] [rbp-BDh]
  unsigned int v145; // [rsp+44h] [rbp-BCh]
  unsigned int v146; // [rsp+48h] [rbp-B8h]
  void *Src; // [rsp+50h] [rbp-B0h]
  unsigned __int16 *v148; // [rsp+58h] [rbp-A8h]
  volatile signed __int64 *v149; // [rsp+60h] [rbp-A0h]
  __int64 v150; // [rsp+68h] [rbp-98h]
  int v151; // [rsp+70h] [rbp-90h]
  __int64 v152; // [rsp+78h] [rbp-88h]
  ULONG_PTR BugCheckParameter1; // [rsp+80h] [rbp-80h]
  unsigned __int64 v154; // [rsp+88h] [rbp-78h]
  __int64 v155; // [rsp+90h] [rbp-70h]
  struct _KTHREAD *CurrentThread; // [rsp+98h] [rbp-68h]
  __int64 v157; // [rsp+A0h] [rbp-60h]
  ULONG_PTR BugCheckParameter2; // [rsp+A8h] [rbp-58h]
  _QWORD *v159; // [rsp+B0h] [rbp-50h]
  __int64 v160; // [rsp+B8h] [rbp-48h]
  unsigned int *v161; // [rsp+C0h] [rbp-40h]
  PVOID Object; // [rsp+C8h] [rbp-38h]
  __int64 IsPageFileHash; // [rsp+D0h] [rbp-30h]
  __int64 v164; // [rsp+D8h] [rbp-28h]
  __int64 v165; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v166; // [rsp+E8h] [rbp-18h]
  struct _KLOCK_QUEUE_HANDLE v167; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int64 v168; // [rsp+108h] [rbp+8h] BYREF
  _QWORD *v169; // [rsp+110h] [rbp+10h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+118h] [rbp+18h] BYREF
  _QWORD v171[7]; // [rsp+130h] [rbp+30h] BYREF
  _KPROCESS *v172; // [rsp+168h] [rbp+68h]
  __int64 v173; // [rsp+170h] [rbp+70h]
  unsigned __int64 v174; // [rsp+178h] [rbp+78h]
  __int64 v175; // [rsp+180h] [rbp+80h]
  $5BC46E0569261879018906DEC3127961 v176; // [rsp+188h] [rbp+88h] BYREF
  int v177; // [rsp+1C0h] [rbp+C0h] BYREF
  __int16 v178; // [rsp+1C4h] [rbp+C4h]
  __int64 v179; // [rsp+1C8h] [rbp+C8h]
  __int64 v180; // [rsp+1D0h] [rbp+D0h]
  __int64 v181; // [rsp+1D8h] [rbp+D8h]
  int v182; // [rsp+280h] [rbp+180h] BYREF
  __int16 v183; // [rsp+284h] [rbp+184h]
  __int64 v184; // [rsp+288h] [rbp+188h]
  __int64 v185; // [rsp+290h] [rbp+190h]
  __int64 v186; // [rsp+298h] [rbp+198h]
  void *retaddr; // [rsp+388h] [rbp+288h]

  v6 = 0;
  v166 = a1;
  v161 = a4;
  v7 = a1;
  v9 = 0;
  v10 = 0LL;
  v11 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v149 = (volatile signed __int64 *)v11;
  v12 = 0LL;
  LODWORD(BugCheckParameter2) = a3;
  v169 = a6;
  memset(&v167, 0, sizeof(v167));
  v151 = 0;
  v150 = 0LL;
  IsPageFileHash = 0LL;
  v148 = 0LL;
  v144 = 17;
  v142 = 17;
  v165 = -1LL;
  v175 = 0LL;
  v164 = 0LL;
  v13 = (__int64)(v11 << 25) >> 16;
  Src = (void *)v13;
  v155 = -1LL;
  v152 = (a1 + 0x58000000000LL) / 48;
  if ( a6 )
    *a6 = -1LL;
  v14 = *(_QWORD *)(a1 + 40);
  v177 = 1;
  v179 = 20LL;
  v178 = 0;
  v180 = 0LL;
  v181 = 0LL;
  v160 = *(_QWORD *)(qword_14036C8F8 + 8 * ((v14 >> 40) & 0x3FF));
  if ( v13 <= 0x7FFFFFFEFFFFLL )
    goto LABEL_8;
  if ( (v14 & 0xFFFFFFFFFLL) == (a1 + 0x58000000000LL) / 48 )
  {
    if ( !*((_QWORD *)v161 + 2) )
      return 0LL;
    v9 = 8;
LABEL_8:
    TopLevelPfn = MiGetTopLevelPfn(v7, 0LL);
    if ( (*(_QWORD *)(TopLevelPfn + 40) & 0xFFFFFFFFFLL) == 0xFFFFFFFFFLL )
    {
      if ( TopLevelPfn != v7 )
        _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
      return 0LL;
    }
    v46 = *(struct _KPROCESS **)TopLevelPfn;
    BugCheckParameter1 = (ULONG_PTR)v46;
    v10 = (__int64)&v46[1].IdealNode[12];
    v148 = &v46[1].IdealNode[12];
    if ( TopLevelPfn != v7 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v46 = (struct _KPROCESS *)BugCheckParameter1;
    }
    if ( (*(_QWORD *)(v7 + 40) & 0xFFFFFFFFFLL) == v152 && PsIsSystemProcess(v46) )
      return 0LL;
    CurrentProcess = PsGetCurrentProcess();
    v48 = (_KPROCESS *)BugCheckParameter1;
    if ( (_KPROCESS *)BugCheckParameter1 == CurrentProcess )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    else
    {
      if ( !MiTryToAcquireExpansionLockAtDpc(&LockHandle) )
        return 0LL;
      v9 |= 0x80000u;
      if ( !(unsigned int)MiPrepareAttachThread(BugCheckParameter1, v10) )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        MiLockPageAtDpcInline(v7);
        return 0LL;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v48 = (_KPROCESS *)BugCheckParameter1;
    }
    __writecr8(a2);
    v154 = 0LL;
    v145 = 0;
    Object = 0LL;
    if ( v9 >= 0x80000 )
      KiStackAttachProcess(v48, 1u, (__int64)&v176);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    SharedVm = MiGetSharedVm(v10);
    v144 = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
    if ( (v9 & 8) == 0 )
    {
      Address = MiLocateAddress((unsigned __int64)Src);
      v51 = Address;
      if ( Address )
      {
        if ( ((1 << (*(_BYTE *)(Address + 48) & 7)) & 0x15) != 0 )
          goto LABEL_123;
        if ( (*(_DWORD *)(Address + 48) & 7) == 6 )
        {
          v9 |= 0x10000u;
          goto LABEL_123;
        }
      }
      v51 = 0LL;
LABEL_365:
      MiFlushTbList((__int64)&v177, (_KPROCESS *)v21);
      v139 = v144;
      MiPreUnlockWorkingSetExclusive(v10, v144);
      v140 = MiGetSharedVm(v10);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v140, retaddr);
      else
        *v140 = 0;
      __writecr8(v139);
      if ( v51 )
        ExReleaseAutoExpandPushLockExclusive(v51 + 16, 0LL);
      goto LABEL_362;
    }
    if ( (v9 & 1) != 0 && (v52 = *(_QWORD *)(BugCheckParameter1 + 1032), (v154 = v52) != 0) )
    {
      v51 = 0LL;
      if ( !(unsigned __int8)ExTryAcquireAutoExpandPushLockExclusive(v52 + 16, 0LL) )
        goto LABEL_365;
    }
    else
    {
      v51 = 0LL;
    }
LABEL_123:
    if ( !(unsigned int)MiSmallVaStillMapsFrame(Src, v152)
      || (unsigned int)MiIsPfnFileOnly(v7) == 1
      || (*(_QWORD *)(v7 + 40) & 0x200000000000000LL) != 0
      || (BugCheckParameter2 & 0x800000) != 0
      && v51
      && (*(_DWORD *)(v51 + 48) & 0x108000) == 0x108000
      && (unsigned int)MiClusterVadActive(v51, v7, &v165) == 1 )
    {
      goto LABEL_363;
    }
    if ( (v9 & 0x10000) != 0 )
    {
      v53 = v149;
      if ( !MiRotatedToFrameBuffer((__int64)v149) )
      {
LABEL_134:
        if ( !*((_QWORD *)v161 + 2) )
        {
          if ( (*(_BYTE *)(v7 + 34) & 0x10) != 0 || (v9 & 0x20008) != 0 || (MI_READ_PTE_LOCK_FREE(v53) & 0x42) != 0 )
            goto LABEL_184;
          if ( (v9 & 0x400) != 0 )
          {
            Process = KeGetCurrentThread()->ApcState.Process;
            AnyMultiplexedVm = (char *)(Process[1].ActiveProcessors.Bitmap[2] + 3008);
LABEL_145:
            v148 = (unsigned __int16 *)AnyMultiplexedVm;
            goto LABEL_146;
          }
          if ( (v9 & 0x210) != 0 )
          {
            AnyMultiplexedVm = MiGetAnyMultiplexedVm(v55);
            v148 = (unsigned __int16 *)AnyMultiplexedVm;
          }
          else
          {
            if ( (v9 & 0x40) == 0 )
            {
              AnyMultiplexedVm = (char *)(v57 + 1280);
              goto LABEL_145;
            }
            AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
            v148 = (unsigned __int16 *)AnyMultiplexedVm;
          }
LABEL_146:
          if ( (*(_BYTE *)(v7 + 35) & 8) == 0 )
          {
            WsleContents = MiGetWsleContents((__int64)Process, v56);
            if ( (WsleContents & 0xF) != v60 )
            {
              v184 = 20LL;
              v182 = MiTbFlushType((__int64)AnyMultiplexedVm);
              v183 = 4;
              v185 = 0LL;
              v186 = 0LL;
              if ( dword_14036CA68 )
              {
                MI_WSLE_LOG_ACCESS(v61, v149);
                v62 = Src;
              }
              MiInsertTbFlushEntry((__int64)&v182, (unsigned __int64)v62, 1LL, 0);
              if ( !MiFreeWsleList((__int64)AnyMultiplexedVm, (__int64)&v182, 0) )
                v151 = 2;
            }
          }
          goto LABEL_184;
        }
        v63 = *(unsigned __int8 *)(v7 + 34) >> 6;
        v146 = v63;
        if ( a5 == -1 )
        {
          v66 = (*(_QWORD *)(v7 + 40) >> 36) & 3LL;
          v67 = MiPageToNode(v152, 0LL);
          v64 = 0;
          v63 = v146;
          v65 = (v67 << byte_14036C1B9) | dword_14036C1F8 & v152 | ((_DWORD)v66 << byte_14036C1BA);
        }
        else
        {
          v64 = 16;
          v65 = dword_14036C1F8 & v152 | a5 & ~dword_14036C1F8;
        }
        if ( v165 == -1 )
        {
          Page = MiGetPage(v160, v65, v64);
          v155 = Page;
          if ( Page == -1 )
            goto LABEL_184;
          v69 = 48 * Page - 0x58000000000LL;
          v159 = (_QWORD *)v69;
        }
        else
        {
          v70 = (*(_QWORD *)(v7 + 40) >> 58) + 1;
          if ( v63 == 2 )
          {
            v71 = 28;
          }
          else
          {
            v71 = 4;
            if ( !v63 )
              v71 = 12;
          }
          v168 = 1LL;
          PageChain = MiGetPageChain(v160, v10, v70, v71, v64, v165, &v168);
          v159 = (_QWORD *)PageChain;
          v69 = PageChain;
          if ( !PageChain )
          {
            v155 = -1LL;
            goto LABEL_184;
          }
          v21 = (unsigned __int128)((PageChain + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
          v155 = (PageChain + 0x58000000000LL) / 48;
        }
        if ( v69 == v7 )
        {
LABEL_166:
          v151 = 1;
          goto LABEL_184;
        }
        v73 = MiLockPageInline(v7);
        v141 = v73;
        if ( (MiFlags & 0x8000) != 0 && (unsigned int)MiGetPagePrivilege(v7, 1, 0LL) )
          v9 |= 0x40000u;
        v21 = v9 & 0x20;
        LODWORD(BugCheckParameter2) = v9 & 0x20;
        if ( (v9 & 0x20) != 0 )
        {
          if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)Src) != 5
            || (*(_BYTE *)(v7 + 34) & 7) != 6
            || (volatile signed __int64 *)(*(_QWORD *)(v7 + 8) | 0x8000000000000000uLL) != v149
            || !(unsigned int)MiSmallVaStillMapsFrame(v74, v152)
            || (*(_BYTE *)(v7 + 35) & 0x10) != 0 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v75 = v73;
LABEL_180:
            __writecr8(v75);
LABEL_181:
            v150 = v69;
            v79 = v69;
            goto LABEL_182;
          }
          v76 = MI_READ_PTE_LOCK_FREE(v149);
          v78 = v76;
          if ( (v76 & 0x200) != 0 || (v76 & 0x20) == 0 )
          {
LABEL_179:
            _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v75 = v141;
            goto LABEL_180;
          }
          v21 = (unsigned int)BugCheckParameter2;
        }
        else
        {
          v77 = v149;
          v78 = 0LL;
        }
        v82 = 1LL;
        if ( *(_WORD *)(v7 + 32) != 1
          || ((*(_BYTE *)(v7 + 35) & 8) != 0 || !*(_QWORD *)v7) && (v9 & 0x20026) == 0
          || (*(_BYTE *)(v7 + 34) & 7) != 6
          || v160 != *(_QWORD *)(qword_14036C8F8 + 8 * ((*(_QWORD *)(v7 + 40) >> 40) & 0x3FFLL)) )
        {
          goto LABEL_179;
        }
        if ( !(_DWORD)v21 )
          v78 = MI_READ_PTE_LOCK_FREE(v77);
        if ( (v9 & 0x100) == 0 && (*(_QWORD *)(v7 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > v82 && v145 == (_DWORD)v82 )
        {
          if ( (v9 & 0x10) == 0 )
            goto LABEL_179;
          BugCheckParameter2 = qword_1403E4260 + 8;
          v83 = (_KLOCK_ENTRY *)KeAbPreAcquire(qword_1403E4260 + 8, 0LL, v82);
          v84 = BugCheckParameter2;
          if ( !_interlockedbittestandreset((volatile signed __int32 *)BugCheckParameter2, 0) )
          {
            if ( v83 )
              KeAbPostReleaseEx(BugCheckParameter2, v83);
            goto LABEL_179;
          }
          if ( v83 )
            v83->AcquiredByte |= 1u;
          v9 |= 0x2008u;
          *(_QWORD *)(v84 + 8) = KeGetCurrentThread();
        }
        if ( (v9 & 0x20000) == 0 )
        {
          if ( (v9 & 0x20) != 0 )
          {
            v12 = v78 & 0xFFFFFFFFFFFFFFDFuLL;
            BugCheckParameter2 = _InterlockedCompareExchange64(v149, v78 & 0xFFFFFFFFFFFFFFDFuLL, v78);
            if ( v78 != BugCheckParameter2 )
              goto LABEL_179;
            v145 = 2;
            KeFlushSingleTb(Src, 0LL, 2LL);
LABEL_228:
            MiLockNestedPageAtDpcInline(v69);
            MiFinalizePageAttribute(v69, v146, 1);
            if ( (v9 & 0x20000) != 0 )
            {
              KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(IsPageFileHash + 232), &v167);
              if ( IsPageFileHash != MiVaIsPageFileHash(v160, (unsigned __int64)Src)
                || !(unsigned int)MiSmallVaStillMapsFrame(Src, v152) )
              {
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&v167);
                __writecr8(v167.OldIrql);
LABEL_232:
                _InterlockedAnd64((volatile signed __int64 *)(v69 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                goto LABEL_179;
              }
            }
            MiCopyPfnEntry(v69, v7);
            v90 = v152;
            if ( (*(_QWORD *)(v7 + 40) & 0xFFFFFFFFFLL) == v152 )
              *(_QWORD *)(v69 + 40) ^= (v155 ^ *(_QWORD *)(v69 + 40)) & 0xFFFFFFFFFLL;
            _InterlockedAnd64((volatile signed __int64 *)(v69 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( (v9 & 0x20020) != 0 )
              goto LABEL_247;
            if ( (v9 & 0x2000) == 0 )
            {
              if ( ((v9 & 8) != 0 || v145) && (v9 & 0xA) != 0xA && (v9 & 0x1000) == 0 )
              {
                if ( (v9 & 8) != 0 && (v9 & 2) == 0 && !v145 || (v9 & 0x104) == 0x104 )
                  goto LABEL_246;
LABEL_247:
                v92 = (v9 >> 13) & 1;
                v146 = v92;
                if ( v92 )
                {
                  v93 = MiLockProtoPoolPage((unsigned __int64)Src, &v143);
                  v157 = v93;
                  if ( !v93 )
                  {
LABEL_249:
                    MiSetOriginalPtePfnFromFreeList(v69 + 16, v94, v95);
                    goto LABEL_181;
                  }
                  if ( *(_WORD *)(v93 + 32) > 2u )
                  {
                    v96 = v93;
LABEL_252:
                    MiUnlockProtoPoolPage(v96, v143);
                    goto LABEL_249;
                  }
                  v78 = MI_READ_PTE_LOCK_FREE(v149);
                  if ( (v78 & 0x42) == 0 )
                  {
                    v92 = v146;
                    v90 = v152;
LABEL_262:
                    if ( !v92
                      && (v9 & 0x104) != 0x104
                      && ((v9 & 8) == 0 || ((unsigned __int8)v9 & (unsigned __int8)v98) != 0 || v145) )
                    {
                      v146 = v9 & 0x2000;
                      if ( (v9 & 0x2000) != 0 || v141 != 17 )
                      {
                        LODWORD(BugCheckParameter2) = 4;
                        MiLockNestedPageAtDpcInline(v69);
                        v104 = BugCheckParameter2;
                      }
                      else
                      {
                        v104 = 0;
                      }
                      v105 = v104 | 2;
                      if ( (v9 & 0x40000) == 0 )
                        v105 = v104;
                      MiCopyPage(v155, v152, v161, v105);
                      v106 = (v105 & 4) == 0;
                      v69 = (__int64)v159;
                      if ( !v106 )
                        _InterlockedAnd64(v159 + 3, 0x7FFFFFFFFFFFFFFFuLL);
                      if ( (v9 & 0x20) == 0 && v141 != 17 )
                        *(_BYTE *)(v7 + 34) = *(_BYTE *)(v7 + 34) & 0xF8 | 5;
                      goto LABEL_302;
                    }
                    PteFromCopyList = MiGetPteFromCopyList(v161, v155, v90);
                    v159 = PteFromCopyList;
                    if ( (v9 & 0x2000) != 0 )
                    {
                      MiReplacePageOfProtoPool(
                        (char *)Src,
                        v152,
                        v155,
                        (char *)((((_QWORD)PteFromCopyList << 25) - v164) >> 16));
                    }
                    else
                    {
                      v108 = v152;
                      v109 = (__int64)v148;
                      v171[2] = (((_QWORD)PteFromCopyList << 25) - v164) >> 16;
                      v171[5] = &v177;
                      v171[6] = CurrentThread;
                      v171[1] = Src;
                      v172 = CurrentThread->ApcState.Process;
                      v110 = *(_QWORD *)(v7 + 40);
                      v171[4] = v155;
                      v171[0] = v148;
                      v173 = 0LL;
                      v171[3] = v152;
                      v174 = 0LL;
                      if ( (v110 & 0xFFFFFFFFFLL) == v152 )
                      {
                        if ( (*((_BYTE *)v148 + 195) & 2) != 0
                          || _interlockedbittestandset((volatile signed __int32 *)(BugCheckParameter1 + 1740), 1u) )
                        {
                          goto LABEL_292;
                        }
                        v9 |= 0x8000u;
                        if ( v172->DirectoryTableBase >> 12 != v108 )
                        {
                          v9 |= 0x100000u;
                          HIDWORD(v173) = 1;
                          v174 = v172[2].Affinity.Bitmap[0];
                        }
                        MiPreUnlockWorkingSetExclusive(v109, v144);
                        v111 = (__int64)v148;
                        v112 = MiGetSharedVm((__int64)v148);
                        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
                          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v112, retaddr);
                        else
                          *v112 = 0;
                        __writecr8(v144);
                        KeSwapDirectoryTableBase(v172, HIDWORD(v173), v171);
                        v113 = MiGetSharedVm(v111);
                        v144 = ExAcquireSpinLockExclusive(v113);
                        v114 = BugCheckParameter1;
                        v113[1] = 0;
                        _InterlockedAnd((volatile signed __int32 *)(v114 + 1740), 0xFFFFFFFD);
                        v7 = v166;
                      }
                      else
                      {
                        MiReplacePageTablePage((__int64)v171);
                      }
                    }
                    PteFromCopyList = v159;
LABEL_292:
                    *PteFromCopyList = 0LL;
                    if ( (unsigned int)MiPteInShadowRange(PteFromCopyList) )
                      MiWritePteShadow(v115);
                    *(_QWORD *)(v116 + 8) = 0LL;
                    if ( (unsigned int)MiPteInShadowRange(v116 + 8) )
                      MiWritePteShadow(v117);
                    if ( !v118 )
                    {
                      if ( (v9 & 0x2000) == 0 )
                        goto LABEL_249;
                      v96 = v157;
                      goto LABEL_252;
                    }
                    v146 = v9 & 0x2000;
                    if ( (v9 & 0x2000) != 0 )
                    {
                      *(_BYTE *)(v7 + 34) = *(_BYTE *)(v7 + 34) & 0xF8 | 5;
                      *(_QWORD *)(v7 + 24) = *(_QWORD *)(v7 + 24) & 0xC000000000000000uLL | 1;
                      MiLockNestedPageAtDpcInline(v69);
                    }
                    else
                    {
                      v119 = MiLockPageInline(v7);
                      v21 = 0xC000000000000001uLL;
                      *(_BYTE *)(v7 + 34) = *(_BYTE *)(v7 + 34) & 0xF8 | 5;
                      *(_QWORD *)(v7 + 24) = *(_QWORD *)(v7 + 24) & 0xC000000000000000uLL | 1;
                      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                      __writecr8(v119);
                      v141 = 17;
                    }
LABEL_302:
                    v120 = (v155 & 0xFFFFFFFFFLL) << 12;
                    v121 = v120 | v78 & 0xFFFF000000000FFFuLL;
                    if ( (v9 & 0x20) != 0 )
                    {
                      v122 = v120 | v12 & 0xFFFF000000000FFFuLL | 0x20;
                      MiLockNestedPageAtDpcInline(v69);
                      if ( v12 != _InterlockedCompareExchange64(v149, v122, v12) )
                      {
                        MiSetOriginalPtePfnFromFreeList(v69 + 16, v21, v123);
                        *(_BYTE *)(v69 + 34) = *(_BYTE *)(v69 + 34) & 0xF8 | 5;
                        goto LABEL_232;
                      }
                      _InterlockedAnd64((volatile signed __int64 *)(v69 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                      *(_BYTE *)(v7 + 34) = *(_BYTE *)(v7 + 34) & 0xF8 | 5;
                    }
                    else if ( (v9 & 0x8000) != 0 )
                    {
                      if ( v9 >= 0x100000 )
                      {
                        v128 = *(_QWORD *)(BugCheckParameter1 + 1544);
                        if ( !v128 )
                          goto LABEL_317;
                        v129 = MI_GET_PAGE_FRAME_FROM_PTE(((v128 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
                        if ( v129 != v131 )
                          v130 = 0LL;
                        if ( !v130 )
                        {
LABEL_317:
                          v151 = 2;
                          v79 = v7;
                          v150 = v7;
LABEL_182:
                          if ( v79 )
                          {
                            v80 = MiLockPageInline(v79);
                            *(_BYTE *)(v79 + 34) = *(_BYTE *)(v79 + 34) & 0xF8 | 5;
                            _InterlockedAnd64((volatile signed __int64 *)(v79 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                            __writecr8(v80);
                          }
LABEL_184:
                          v10 = (__int64)v148;
                          if ( v145 )
                          {
                            if ( (v9 & 0x400) != 0 )
                            {
                              MiPreUnlockWorkingSetExclusive((__int64)v148, v142);
                              v81 = MiGetSharedVm(v10);
                              if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
                                ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v81, retaddr);
                              else
                                *v81 = 0;
                              __writecr8(v142);
                              if ( (v9 & 0x4000) != 0 )
                              {
                                v136 = MEMORY[0x30];
                                if ( (_InterlockedExchangeAdd64(MEMORY[0x30], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                                  ExfTryToWakePushLock(v136);
                                KeAbPostRelease(v136);
                              }
                              KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
                              MmDetachSession((__int64)Object, (__int64)&v176);
                              ObfDereferenceObject(Object);
                              goto LABEL_347;
                            }
                            if ( v148 )
                            {
                              MiPreUnlockWorkingSetExclusive((__int64)v148, v142);
                              v138 = MiGetSharedVm(v10);
                              if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
                                ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v138, retaddr);
                              else
                                *v138 = 0;
                              __writecr8(v142);
                            }
                            if ( (v9 & 0x2000) != 0 )
                              ExReleaseFastMutexUnsafe((PFAST_MUTEX)(qword_1403E4260 + 8));
                            if ( !v10 )
                              goto LABEL_347;
LABEL_362:
                            KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
LABEL_347:
                            if ( (v9 & 0x80000) != 0 )
                            {
                              KiUnstackDetachProcess(&v176, 1LL);
                              MiAttachThreadDone(v10);
                            }
                            if ( v150 )
                              MiReleaseFreshPage(v150);
                            MiLockPageInline(v7);
                            v137 = v151;
                            if ( v151 == 1 )
                            {
                              if ( v169 )
                                *v169 = v155;
                            }
                            else
                            {
                              if ( (*(_BYTE *)(v7 + 34) & 7) != 6 )
                                v137 = 2;
                              if ( v137 == 2 && (*(_QWORD *)(v7 + 24) & 0x4000000000000000LL) != 0 )
                                return 0;
                            }
                            return v137;
                          }
                          goto LABEL_363;
                        }
                      }
                    }
                    else
                    {
                      if ( (v9 & 0x80u) == 0 )
                      {
                        v124 = v146;
                        if ( !v146 && (v9 & 0x210) != 0 )
                          MiLockNestedPageAtDpcInline(v69);
                        MiWriteValidPteNewPage((__int64)v149);
                        goto LABEL_307;
                      }
                      v132 = v149;
                      *v149 = v121;
                      if ( (unsigned int)MiPteInShadowRange(v132) )
                        MiWritePteShadow(v133);
                    }
                    v124 = v146;
LABEL_307:
                    v125 = (__int64)v148;
                    if ( (v9 & 0xA0) == 0 )
                    {
                      v126 = MiTbFlushType((__int64)v148);
                      KeFlushSingleTb(Src, v126, v145);
                    }
                    if ( v124 )
                    {
                      _InterlockedAnd64((volatile signed __int64 *)(v69 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                      MiUnlockProtoPoolPage(v157, v143);
                      v127 = 17;
                    }
                    else
                    {
                      if ( (v9 & 0x210) != 0 && (v9 & 0x80u) == 0 )
                      {
                        if ( v125 )
                          v134 = MiTbFlushType(v125);
                        else
                          v134 = 0;
                        KeFlushSingleTb(Src, v134, v145);
                        _InterlockedAnd64((volatile signed __int64 *)(v69 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                      }
                      v127 = v141;
                    }
                    if ( ((*(_QWORD *)(v7 + 40) >> 54) & 7) == 3 )
                    {
                      v135 = 12;
                      if ( v127 == 17 )
                        v135 = 8;
                      MiClearPfnImageVerified(v7, v135);
                    }
                    if ( (v9 & 0x20000) != 0 )
                    {
                      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v167);
                      __writecr8(v167.OldIrql);
                    }
                    if ( v127 == 17 )
                      v127 = MiLockPageInline(v7);
                    *(_QWORD *)(v7 + 40) &= 0xFC3FFFFFFFFFFFFFuLL;
                    *(_BYTE *)(v7 + 34) &= 0xC7u;
                    *(_BYTE *)(v7 + 35) &= ~0x20u;
                    *(_QWORD *)(v7 + 24) &= 0xC000000000000000uLL;
                    *(_WORD *)(v7 + 32) = 0;
                    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                    __writecr8(v127);
                    goto LABEL_166;
                  }
                  MiLockPageAtDpcInline(v97);
                  v99 = v157;
                  if ( *(_WORD *)(v157 + 32) > 2u )
                  {
                    _InterlockedAnd64((volatile signed __int64 *)(v157 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                    MiUnlockProtoPoolPage(v99, v143);
                    MiSetOriginalPtePfnFromFreeList(v69 + 16, v100, v101);
                    goto LABEL_181;
                  }
                  MiWriteValidPteNewProtection((__int64)v149);
                  KeFlushSingleTb(Src, 0LL, 1LL);
                  v102 = MiCaptureDirtyBitToPfn(v157);
                  v103 = v157;
                  _InterlockedAnd64((volatile signed __int64 *)(v157 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                  if ( v102 )
                    MiReleasePageFileInfo(
                      *(struct _KEVENT **)(qword_14036C8F8 + 8 * ((*(_QWORD *)(v103 + 40) >> 40) & 0x3FFLL)),
                      v102,
                      1);
                  MiLockPageAtDpcInline(v69);
                  MiCaptureDirtyBitToPfn(v69);
                  _InterlockedAnd64((volatile signed __int64 *)(v69 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                  v92 = v146;
                  v90 = v152;
                }
                else
                {
                  v143 = 17;
                  v157 = 0LL;
                }
                v98 = 2;
                goto LABEL_262;
              }
              *(_BYTE *)(v7 + 34) = *(_BYTE *)(v7 + 34) & 0xF8 | 5;
            }
LABEL_246:
            v91 = v141;
            _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v141 = 17;
            __writecr8(v91);
            goto LABEL_247;
          }
          if ( ((v9 & 8) == 0 || (v9 & 0x1000) != 0) && ((v78 & 0x42) != 0 || (v9 & 0x40000) != 0) )
          {
            v85 = v149;
            if ( (v9 & 0x1000) != 0 )
            {
              MiWriteValidPteNewProtection((__int64)v149);
            }
            else
            {
              v9 |= 0x80u;
              *v149 = v78 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
              if ( (unsigned int)MiPteInShadowRange(v85) )
                MiWritePteShadow(v87);
            }
            if ( v148 )
              v88 = MiTbFlushType((__int64)v148);
            else
              v88 = 0;
            KeFlushSingleTb(Src, v88, v86);
          }
        }
        v89 = v145;
        if ( v145 == 1 )
        {
          if ( (v9 & 4) != 0 )
            v89 = 2;
          v145 = v89;
        }
        goto LABEL_228;
      }
LABEL_363:
      v51 = v154;
      goto LABEL_365;
    }
LABEL_133:
    v53 = v149;
    goto LABEL_134;
  }
  v17 = 0xFFFFF6FB40000000uLL;
  v18 = 0xFFFFF6FB5FFFFFF8uLL;
  for ( i = 0; i < 3; ++i )
  {
    if ( (unsigned __int64)v149 >= v17 && (unsigned __int64)v149 <= v18 )
    {
      v9 = 9 - (i != 0);
      goto LABEL_8;
    }
    v17 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v18 = ((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  }
  SystemRegionType = MiGetSystemRegionType(v13);
  if ( SystemRegionType == 5 )
  {
    if ( !*((_QWORD *)v161 + 2) )
      return 0LL;
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), v22);
    __writecr8(a2);
    v9 = 32;
    BugCheckParameter1 = 0LL;
    v154 = 0LL;
    CurrentThread = KeGetCurrentThread();
    Object = 0LL;
    v145 = 2;
    goto LABEL_133;
  }
  v145 = 1;
  if ( SystemRegionType == 1
    || v23 >= 0xFFFFF68000000000uLL
    && v23 <= 0xFFFFF6FFFFFFFFFFuLL
    && (v25 = MiGetSystemRegionType((__int64)((v23 << 25) - v164) >> 16), v25 == v26) )
  {
    Object = (PVOID)MiAttachToOwningSession(v7, a2);
    if ( !Object )
      return 0LL;
    v39 = KeGetCurrentThread()->ApcState.Process;
    CurrentThread = KeGetCurrentThread();
    v10 = v39[1].ActiveProcessors.Bitmap[2] + 3008;
    --CurrentThread->SpecialApcDisable;
    v148 = (unsigned __int16 *)v10;
    v40 = MiGetSharedVm(v10);
    v41 = ExAcquireSpinLockExclusive(v40);
    v40[1] = 0;
    v9 = 1024;
    v142 = v41;
    ExAcquireSpinLockSharedAtDpcLevel(&dword_14036C59C);
    if ( (unsigned int)MiSmallVaStillMapsFrame(Src, -1LL) )
    {
      if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)Src) == 1
        || v43 >= 0xFFFFF68000000000uLL
        && v43 <= 0xFFFFF6FFFFFFFFFFuLL
        && (v44 = MiGetSystemRegionType((__int64)((v43 << 25) - v164) >> 16), v44 == v45) )
      {
        if ( (unsigned int)MiSmallVaStillMapsFrame(v43, v152) == 1 )
        {
          v9 = 3072;
          v179 = 20LL;
          v177 = 2;
          v178 = 0;
          v180 = 0LL;
          v181 = 0LL;
        }
      }
      ExReleaseSpinLockSharedFromDpcLevel(&dword_14036C59C);
      if ( v9 >= 0x800 && (*(_QWORD *)(v7 + 40) & 0x200000000000000LL) == 0 && (unsigned int)MiIsPfnFileOnly(v7) != 1 )
      {
        BugCheckParameter1 = 0LL;
        v154 = 0LL;
        goto LABEL_133;
      }
    }
    else
    {
      ExReleaseSpinLockSharedFromDpcLevel(&dword_14036C59C);
    }
    MiPreUnlockWorkingSetExclusive(v10, v142);
    v42 = MiGetSharedVm(v10);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v42, retaddr);
    else
      *v42 = 0;
    __writecr8(v142);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    MmDetachSession((__int64)Object, (__int64)&v176);
    ObfDereferenceObject(Object);
    MiLockPageInline(v7);
    return 2 * (unsigned int)(~(*(_QWORD *)(v7 + 24) >> 62) & 1);
  }
  IsPageFileHash = MiVaIsPageFileHash(v24, v23);
  v27 = MiGetSystemRegionType((unsigned __int64)Src);
  if ( v27 == 7 )
  {
    v9 = 512;
  }
  else if ( v27 == 6 )
  {
    v9 = 16;
  }
  else if ( v28 )
  {
    v9 = 0x20000;
  }
  else if ( v27 == 12
         || PsNtosImageBase
         && (Src >= PsNtosImageBase && (unsigned __int64)Src < PsNtosImageEnd
          || Src >= PsHalImageBase && (unsigned __int64)Src < PsHalImageEnd) )
  {
    v9 = 64;
  }
  LODWORD(v157) = v9 & 0x100;
  v146 = v9 & 0x40;
  if ( (((v146 | ((unsigned int)v157 >> 2)) >> 2) | ((unsigned __int8)v9 | (unsigned __int8)((v9 | (v9 >> 8)) >> 5)) & 0x10) < 0x10 )
  {
    v37 = MiHyperPage(v7);
    if ( !v37 )
      return 0LL;
    v38 = v9 | 8;
    if ( v37 == 2 )
    {
      v9 = v38 | 4;
    }
    else
    {
      v9 = v38 | 2;
      if ( (unsigned __int64)Src >= qword_14036C5C8 && (unsigned __int64)Src < qword_14036C5C8 + 276840448 )
        v9 |= 0x1000u;
    }
    goto LABEL_8;
  }
  if ( (!*(_QWORD *)v7 || (*(_BYTE *)(v7 + 35) & 8) != 0) && (v9 & 0x20100) == 0 )
    return 0LL;
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(a2);
  v29 = KeGetCurrentThread();
  BugCheckParameter1 = 0LL;
  v154 = 0LL;
  CurrentThread = v29;
  Object = 0LL;
  if ( (v9 & 0x210) != 0 )
  {
    v30 = 2;
LABEL_42:
    v31 = MiGetAnyMultiplexedVm(v30);
    goto LABEL_46;
  }
  if ( (v9 & 0x20040) != 0 )
  {
    v30 = 1;
    goto LABEL_42;
  }
  v31 = 0LL;
LABEL_46:
  v148 = (unsigned __int16 *)v31;
  --v29->SpecialApcDisable;
  v32 = MiGetSharedVm((__int64)v31);
  v33 = ExAcquireSpinLockExclusive(v32);
  v32[1] = 0;
  v142 = v33;
  ExAcquireSpinLockSharedAtDpcLevel(&dword_14036C59C);
  if ( (unsigned int)MiSmallVaStillMapsFrame(Src, -1LL) )
  {
    if ( (v9 & 0x210) != 0 )
    {
      if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)Src) - 6 > 1 )
        goto LABEL_47;
    }
    else if ( v9 < 0x20000 )
    {
      if ( !v146
        || (unsigned int)MiGetSystemRegionType((unsigned __int64)Src) != 12
        && (!PsNtosImageBase
         || (v35 < (unsigned __int64)PsNtosImageBase || v35 >= PsNtosImageEnd)
         && (v35 < (unsigned __int64)PsHalImageBase || v35 >= PsHalImageEnd)) )
      {
        goto LABEL_47;
      }
      v145 = 2;
    }
    else if ( !MiVaIsPageFileHash(v160, (unsigned __int64)Src) )
    {
      goto LABEL_47;
    }
    if ( !(unsigned int)MiSmallVaStillMapsFrame(Src, v152) || (unsigned int)MiIsPfnFileOnly(v7) == 1 )
    {
      ExReleaseSpinLockSharedFromDpcLevel(&dword_14036C59C);
      v34 = (v9 & 0x210) == 0 ? 2 : 0;
      goto LABEL_71;
    }
    ExReleaseSpinLockSharedFromDpcLevel(&dword_14036C59C);
    if ( (_DWORD)v157 )
    {
      v9 |= 0xAu;
    }
    else if ( v9 < 0x20000 && ((*(_BYTE *)(v7 + 35) & 8) != 0 || !*(_QWORD *)v7) )
    {
      v34 = 0;
      goto LABEL_71;
    }
    v10 = (__int64)v148;
    goto LABEL_133;
  }
LABEL_47:
  ExReleaseSpinLockSharedFromDpcLevel(&dword_14036C59C);
  v34 = 2;
LABEL_71:
  MiPreUnlockWorkingSetExclusive((__int64)v148, v142);
  v36 = MiGetSharedVm((__int64)v148);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v36, retaddr);
  else
    *v36 = 0;
  __writecr8(v142);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  MiLockPageInline(v7);
  if ( (*(_QWORD *)(v7 + 24) & 0x4000000000000000LL) == 0 )
    return v34;
  return v6;
}
