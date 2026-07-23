/*
 * XREFs of MiTrimSharedPageFromViews @ 0x14002B250
 * Callers:
 *     MiTrimSection @ 0x1400F23D8 (MiTrimSection.c)
 * Callees:
 *     MiReduceWs @ 0x14000B908 (MiReduceWs.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140011210 (MI_WSLE_LOG_ACCESS.c)
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiStartingOffset @ 0x14002C570 (MiStartingOffset.c)
 *     MiWriteValidPteNewPage @ 0x140031C10 (MiWriteValidPteNewPage.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiGetProtoPteAddress @ 0x140040460 (MiGetProtoPteAddress.c)
 *     MiFreeWsleList @ 0x140052390 (MiFreeWsleList.c)
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x140057900 (MiPreUnlockWorkingSetExclusive.c)
 *     KiAbEntryRemoveFromTree @ 0x14005EA50 (KiAbEntryRemoveFromTree.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140084D60 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionById @ 0x140089C70 (MmGetSessionById.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     MiAgeWorkingSet @ 0x14009C900 (MiAgeWorkingSet.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     MiGetMultiplexedVm @ 0x1400A344C (MiGetMultiplexedVm.c)
 *     MiGetSystemCacheReverseMap @ 0x1400A3490 (MiGetSystemCacheReverseMap.c)
 *     MiTbFlushType @ 0x1400A5D50 (MiTbFlushType.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     MmDetachSession @ 0x1400B4910 (MmDetachSession.c)
 *     MmAttachSession @ 0x1400B4990 (MmAttachSession.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     MiAttachThreadDone @ 0x1400CAF78 (MiAttachThreadDone.c)
 *     MiPrepareAttachThread @ 0x1400CAFFC (MiPrepareAttachThread.c)
 *     MiAcquireProperVm @ 0x1400D5208 (MiAcquireProperVm.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiLocateAddress @ 0x1400E9700 (MiLocateAddress.c)
 *     MiGetWsleContents @ 0x1400E9E90 (MiGetWsleContents.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     MiForcedTrim @ 0x14021D544 (MiForcedTrim.c)
 *     MiReplaceLockedPage @ 0x14021FEC0 (MiReplaceLockedPage.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     MmQuitNextSession @ 0x14059E950 (MmQuitNextSession.c)
 */

__int64 __fastcall MiTrimSharedPageFromViews(_QWORD *a1, int a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  _DWORD *v5; // r12
  __int64 result; // rax
  __int64 v7; // r15
  int v8; // edi
  char *v9; // rsi
  struct _KTHREAD *CurrentThread; // r10
  _QWORD *v11; // rdx
  _QWORD *v12; // r9
  _KPROCESS *v13; // r13
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // r14
  __int64 v16; // rbx
  unsigned __int64 v17; // r14
  __int64 v18; // rbx
  __int64 v19; // r15
  unsigned __int64 v20; // r12
  __int64 v21; // rcx
  ULONG_PTR SessionById; // rax
  int SystemRegionType; // eax
  __int64 v24; // rdx
  _QWORD *v25; // rdx
  unsigned __int64 v26; // r8
  ULONG_PTR v27; // rsi
  struct _KTHREAD *v28; // rdi
  unsigned int SessionId; // r8d
  ULONG_PTR v30; // rsi
  unsigned int v31; // r8d
  unsigned __int8 v32; // r14
  unsigned int v33; // edx
  bool v34; // zf
  __int64 v35; // rcx
  int v36; // eax
  __int64 v37; // rcx
  _KLOCK_ENTRY *v38; // rbx
  __int64 v39; // rdx
  int *v40; // r8
  unsigned int v41; // r8d
  unsigned __int8 v42; // r14
  unsigned int v43; // edx
  __int64 v44; // rcx
  int v45; // eax
  __int64 v46; // rcx
  _KLOCK_ENTRY *v47; // rbx
  __int64 v48; // rdx
  unsigned __int8 v49; // r14
  unsigned int v50; // edx
  __int64 v51; // rcx
  int v52; // eax
  __int64 v53; // rcx
  _KLOCK_ENTRY *v54; // rbx
  __int64 v55; // rdx
  struct _KTHREAD *v56; // r13
  __int64 v57; // rbx
  unsigned int v58; // r13d
  __int64 SharedVm; // rbx
  KIRQL v60; // al
  __int64 Address; // rax
  int v62; // ecx
  __int64 v63; // r11
  unsigned __int64 v64; // r8
  __int64 v65; // r9
  __int64 ProtoPteAddress; // rax
  __int64 v67; // r10
  __int64 *v68; // r9
  __int64 v69; // rax
  __int64 *v70; // rsi
  __int64 PteShadow; // rbx
  __int64 v72; // rdi
  int v73; // r10d
  __int64 v74; // r11
  __int64 v75; // rax
  unsigned __int8 v76; // cl
  char v77; // al
  unsigned __int64 v78; // r9
  int i; // r10d
  __int64 v80; // rax
  int v81; // ecx
  __int64 v82; // rcx
  _QWORD *SystemCacheReverseMap; // rcx
  __int64 v84; // rax
  unsigned __int64 v85; // rax
  __int64 v86; // rcx
  char WsleContents; // al
  int v88; // r9d
  int v89; // r10d
  int v90; // eax
  __int64 v91; // rax
  int v92; // edx
  int locked; // eax
  __int64 v94; // rax
  int v95; // ecx
  char *v96; // r14
  _DWORD *v97; // rax
  struct _KTHREAD *v98; // rbx
  int v99; // eax
  unsigned __int8 v100; // di
  unsigned __int64 v101; // rcx
  unsigned __int64 v102; // r8
  char v103; // dl
  char v104; // al
  char v105; // al
  _DWORD *v106; // rax
  volatile signed __int64 *v107; // rbx
  ULONG_PTR v108; // rbx
  _QWORD *v109; // rdi
  _QWORD *v110; // rbx
  void *v111; // rcx
  signed __int32 v112[8]; // [rsp+0h] [rbp-100h] BYREF
  char v113[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v114; // [rsp+34h] [rbp-CCh]
  struct _KTHREAD *v115; // [rsp+38h] [rbp-C8h]
  char *v116; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v117; // [rsp+48h] [rbp-B8h]
  __int64 v118; // [rsp+50h] [rbp-B0h]
  unsigned int v119; // [rsp+58h] [rbp-A8h]
  PVOID Object; // [rsp+60h] [rbp-A0h]
  __int64 v121; // [rsp+68h] [rbp-98h]
  unsigned __int64 v122; // [rsp+70h] [rbp-90h]
  unsigned int v123; // [rsp+78h] [rbp-88h]
  int v124; // [rsp+7Ch] [rbp-84h] BYREF
  int v125; // [rsp+80h] [rbp-80h] BYREF
  int v126; // [rsp+84h] [rbp-7Ch] BYREF
  int v127; // [rsp+88h] [rbp-78h]
  int v128; // [rsp+8Ch] [rbp-74h]
  int v129; // [rsp+90h] [rbp-70h]
  _QWORD *v130; // [rsp+98h] [rbp-68h] BYREF
  _QWORD *v131; // [rsp+A0h] [rbp-60h]
  ULONG_PTR v132; // [rsp+A8h] [rbp-58h]
  PVOID P; // [rsp+B0h] [rbp-50h]
  int v134; // [rsp+B8h] [rbp-48h]
  int v135; // [rsp+BCh] [rbp-44h]
  int v136; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v137; // [rsp+C8h] [rbp-38h] BYREF
  PVOID v138; // [rsp+D0h] [rbp-30h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+D8h] [rbp-28h] BYREF
  int v140; // [rsp+F0h] [rbp-10h] BYREF
  __int16 v141; // [rsp+F4h] [rbp-Ch]
  __int64 v142; // [rsp+F8h] [rbp-8h]
  __int64 v143; // [rsp+100h] [rbp+0h]
  __int64 v144; // [rsp+108h] [rbp+8h]
  int v145; // [rsp+1B0h] [rbp+B0h] BYREF
  __int16 v146; // [rsp+1B4h] [rbp+B4h]
  __int64 v147; // [rsp+1B8h] [rbp+B8h]
  __int64 v148; // [rsp+1C0h] [rbp+C0h]
  __int64 v149; // [rsp+1C8h] [rbp+C8h]
  _BYTE v150[48]; // [rsp+270h] [rbp+170h] BYREF
  unsigned __int64 v151; // [rsp+2A0h] [rbp+1A0h]
  unsigned __int64 v152; // [rsp+2A8h] [rbp+1A8h]
  __int64 v153; // [rsp+2B0h] [rbp+1B0h]
  void *retaddr; // [rsp+2E8h] [rbp+1E8h]

  v5 = a5;
  result = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v7 = a4;
  v8 = 0;
  HIDWORD(v147) = 0;
  v9 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v115 = CurrentThread;
  v118 = a4;
  v123 = a3;
  v129 = a2;
  v122 = (unsigned __int64)a5;
  v113[0] = 17;
  v119 = 0;
  v114 = 0;
  HIDWORD(v142) = 0;
  v116 = 0LL;
  if ( !a1 )
    return result;
  while ( 2 )
  {
    v11 = a1;
    P = a1;
    v12 = 0LL;
    v138 = (PVOID)*a1;
    v132 = 0LL;
    v13 = (_KPROCESS *)a1[1];
    v14 = a1[3];
    v15 = v11[2];
    v16 = v11[4];
    Object = v13;
    v117 = v14;
    v131 = 0LL;
    v127 = 0;
    v128 = 0;
    if ( v13 && v13 != KeGetCurrentThread()->ApcState.Process )
    {
      KeAcquireInStackQueuedSpinLock(&qword_140389240, &LockHandle);
      v127 = MiPrepareAttachThread(v13, &v13[1].IdealNode[12]);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      if ( !v127 )
        goto LABEL_204;
      KiStackAttachProcess((ULONG_PTR)v13);
      goto LABEL_6;
    }
    if ( *((_DWORD *)v11 + 11) < 2u )
      goto LABEL_7;
    v21 = *((unsigned int *)v11 + 10);
    if ( (_DWORD)v21 == -1 )
    {
      v12 = &unk_140388438;
LABEL_16:
      v131 = v12;
      goto LABEL_17;
    }
    if ( (_DWORD)v21 != -2 )
    {
      SessionById = MmGetSessionById(v21, v11, a3, 0LL);
      v132 = SessionById;
      if ( !SessionById )
        goto LABEL_204;
      if ( (int)MmAttachSession(SessionById) < 0 )
      {
        MmQuitNextSession(v132);
        v132 = 0LL;
        goto LABEL_204;
      }
      LODWORD(a3) = v123;
      v11 = P;
      CurrentThread = v115;
      v12 = (_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 2944);
      goto LABEL_16;
    }
LABEL_17:
    if ( *((_DWORD *)v11 + 11) == 3 )
    {
      SystemRegionType = MiGetSystemRegionType(v15);
      if ( *(_DWORD *)(v24 + 40) == -2 )
      {
        if ( SystemRegionType == 1 )
          goto LABEL_204;
      }
      else if ( SystemRegionType != 1 )
      {
        goto LABEL_204;
      }
      goto LABEL_6;
    }
    if ( (a3 & 0xA0000) != 0 )
      goto LABEL_204;
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(v12[1], 0LL);
    v25 = (_QWORD *)v131[2];
    if ( !v25 )
    {
LABEL_30:
      v27 = v131[1];
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v27, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v27);
      v126 = 0;
      v28 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v27) == 1 )
        SessionId = MmGetSessionIdEx(v28->ApcState.Process);
      else
        SessionId = -1;
      --v28->SpecialApcDisable;
      v49 = ++v28->AbAllocationRegionCount;
      v50 = ((char)v28->AbEntrySummary | (char)v28->AbOrphanedEntrySummary) ^ 0x3F;
      v34 = !_BitScanReverse((unsigned int *)&v51, v50);
      v136 = v51;
      if ( v34 )
        goto LABEL_89;
      while ( 1 )
      {
        v52 = 1 << v51;
        v53 = v51;
        v54 = &v28->LockEntries[v53];
        v50 &= ~v52;
        if ( (v54->AcquiredByte & 1) != 0
          && (*(_DWORD *)&v54->LockState.0 & 1) == 0
          && (*(_QWORD *)&v54->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v27 & 0x7FFFFFFFFFFFFFFCLL)
          && v54->LockState.SessionId == SessionId )
        {
          v54->AcquiredByte &= ~1u;
          if ( v54->LockState.0 )
            break;
        }
        v34 = !_BitScanReverse((unsigned int *)&v51, v50);
        v136 = v51;
        if ( v34 )
          goto LABEL_89;
      }
      if ( !v54 )
      {
LABEL_89:
        if ( (*((_DWORD *)&v28->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v28, v27, SessionId, 0LL);
      }
      else
      {
        v54->CrossThreadReleasableAndBusyByte |= 2u;
        if ( (__int64)v54->LockState.LockState < 0 )
          KiAbEntryRemoveFromTree(&v28->LockEntries[v53].TreeNode);
        v126 = 0;
        v126 = v54->BoostBitmap.AllFields & 0x1FFFF;
        v54->BoostBitmap.AllFields &= 0xFFFE0000;
        v54->ThreadLocalFlags &= ~1u;
        v54->LockState.0 = 0LL;
        v55 = ((char *)v54 - (char *)v28 - 800) / 96;
        if ( v49 == 1 )
          v28->AbEntrySummary |= 1 << v55;
        else
          _InterlockedOr8((volatile signed __int8 *)&v28->AbOrphanedEntrySummary, 1 << v55);
      }
      --v28->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts(v28, v27, &v126);
      v34 = v28->SpecialApcDisable++ == -1;
      if ( v34 )
        goto LABEL_97;
      goto LABEL_99;
    }
    while ( 1 )
    {
      v26 = v25[10] & 0xFFFFFFFFFFFFF000uLL;
      if ( v15 >= v26 + v25[4] )
      {
        v25 = (_QWORD *)v25[1];
        goto LABEL_29;
      }
      if ( v15 >= v26 )
        break;
      v25 = (_QWORD *)*v25;
LABEL_29:
      if ( !v25 )
        goto LABEL_30;
    }
    v130 = (_QWORD *)(v25[6] & 0xFFFFFFFFFFFFFFF8uLL);
    if ( *v130 != v7 )
    {
      v30 = v131[1];
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v30, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v30);
      v124 = 0;
      v28 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v30) == 1 )
        v31 = MmGetSessionIdEx(v28->ApcState.Process);
      else
        v31 = -1;
      --v28->SpecialApcDisable;
      v32 = ++v28->AbAllocationRegionCount;
      v33 = ((char)v28->AbEntrySummary | (char)v28->AbOrphanedEntrySummary) ^ 0x3F;
      v34 = !_BitScanReverse((unsigned int *)&v35, v33);
      v134 = v35;
      if ( v34 )
        goto LABEL_47;
      while ( 1 )
      {
        v36 = 1 << v35;
        v37 = v35;
        v38 = &v28->LockEntries[v37];
        v33 &= ~v36;
        if ( (v38->AcquiredByte & 1) != 0
          && (*(_DWORD *)&v38->LockState.0 & 1) == 0
          && (*(_QWORD *)&v38->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v30 & 0x7FFFFFFFFFFFFFFCLL)
          && v38->LockState.SessionId == v31 )
        {
          v38->AcquiredByte &= ~1u;
          if ( v38->LockState.0 )
            break;
        }
        v34 = !_BitScanReverse((unsigned int *)&v35, v33);
        v134 = v35;
        if ( v34 )
          goto LABEL_47;
      }
      if ( !v38 )
      {
LABEL_47:
        if ( (*((_DWORD *)&v28->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v28, v30, v31, 0LL);
      }
      else
      {
        v38->CrossThreadReleasableAndBusyByte |= 2u;
        if ( (__int64)v38->LockState.LockState < 0 )
          KiAbEntryRemoveFromTree(&v28->LockEntries[v37].TreeNode);
        v124 = 0;
        v124 = v38->BoostBitmap.AllFields & 0x1FFFF;
        v38->BoostBitmap.AllFields &= 0xFFFE0000;
        v38->ThreadLocalFlags &= ~1u;
        v38->LockState.0 = 0LL;
        v39 = ((char *)v38 - (char *)v28 - 800) / 96;
        if ( v32 == 1 )
          v28->AbEntrySummary |= 1 << v39;
        else
          _InterlockedOr8((volatile signed __int8 *)&v28->AbOrphanedEntrySummary, 1 << v39);
      }
      v40 = &v124;
LABEL_55:
      --v28->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts(v28, v30, v40);
      v34 = v28->SpecialApcDisable++ == -1;
      if ( v34 )
      {
LABEL_97:
        if ( ($B476B70DB57F76B110DA5B9238C3E934 *)v28->ApcState.ApcListHead[0].Flink != &v28->152 )
          KiCheckForKernelApcDelivery();
      }
LABEL_99:
      v56 = v115;
      KiLeaveGuardedRegionUnsafe(v115);
      v9 = v116;
      v8 = v114;
      goto LABEL_205;
    }
    if ( v15 + (v25[3] << 12) - v16 != (v25[10] & 0xFFFFFFFFFFFFF000uLL) )
    {
      v30 = v131[1];
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v30, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v30);
      v125 = 0;
      v28 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v30) == 1 )
        v41 = MmGetSessionIdEx(v28->ApcState.Process);
      else
        v41 = -1;
      --v28->SpecialApcDisable;
      v42 = ++v28->AbAllocationRegionCount;
      v43 = ((char)v28->AbEntrySummary | (char)v28->AbOrphanedEntrySummary) ^ 0x3F;
      v34 = !_BitScanReverse((unsigned int *)&v44, v43);
      v135 = v44;
      if ( v34 )
        goto LABEL_71;
      while ( 1 )
      {
        v45 = 1 << v44;
        v46 = v44;
        v47 = &v28->LockEntries[v46];
        v43 &= ~v45;
        if ( (v47->AcquiredByte & 1) != 0
          && (*(_DWORD *)&v47->LockState.0 & 1) == 0
          && (*(_QWORD *)&v47->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v30 & 0x7FFFFFFFFFFFFFFCLL)
          && v47->LockState.SessionId == v41 )
        {
          v47->AcquiredByte &= ~1u;
          if ( v47->LockState.0 )
            break;
        }
        v34 = !_BitScanReverse((unsigned int *)&v44, v43);
        v135 = v44;
        if ( v34 )
          goto LABEL_71;
      }
      if ( !v47 )
      {
LABEL_71:
        if ( (*((_DWORD *)&v28->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v28, v30, v41, 0LL);
      }
      else
      {
        v47->CrossThreadReleasableAndBusyByte |= 2u;
        if ( (__int64)v47->LockState.LockState < 0 )
          KiAbEntryRemoveFromTree(&v28->LockEntries[v46].TreeNode);
        v125 = 0;
        v125 = v47->BoostBitmap.AllFields & 0x1FFFF;
        v47->BoostBitmap.AllFields &= 0xFFFE0000;
        v47->ThreadLocalFlags &= ~1u;
        v47->LockState.0 = 0LL;
        v48 = ((char *)v47 - (char *)v28 - 800) / 96;
        if ( v42 != 1 )
        {
          _InterlockedOr8((volatile signed __int8 *)&v28->AbOrphanedEntrySummary, 1 << v48);
          v40 = &v125;
          goto LABEL_55;
        }
        v28->AbEntrySummary |= 1 << v48;
      }
      v40 = &v125;
      goto LABEL_55;
    }
    v128 = 1;
LABEL_6:
    v14 = v117;
LABEL_7:
    v17 = v15 - 4096;
    v18 = v16 - 4096;
    v19 = 0LL;
    v20 = v17 >> 12;
    v9 = 0LL;
    v116 = 0LL;
    while ( 2 )
    {
      v17 += 4096LL;
LABEL_106:
      if ( v17 >= v14 )
        goto LABEL_202;
      v57 = v18 + 4096;
      ++v20;
      v121 = v57;
      if ( !v13 )
      {
        v58 = 1;
        if ( v8 == 1 )
        {
          if ( (v17 & 0x1FFFFF) == 0 )
          {
            if ( HIDWORD(v142) )
            {
              v80 = MiFreeWsleList(v9, &v140, 0LL);
              v81 = v119;
              HIDWORD(v142) = 0;
              if ( v80 )
                v81 = 277;
              v119 = v81;
            }
            else
            {
              MiFlushTbList(&v145);
            }
            MiUnlockWorkingSetExclusive(v9, (unsigned __int8)v113[0]);
            v8 = 0;
            v114 = 0;
            goto LABEL_164;
          }
        }
        else if ( !v8 )
        {
LABEL_164:
          v9 = (char *)MiAcquireProperVm(v17, v113);
          v116 = v9;
        }
        if ( (unsigned __int64)v9 < 2 )
        {
          v9 = 0LL;
          v116 = 0LL;
LABEL_202:
          v5 = (_DWORD *)v122;
          goto LABEL_203;
        }
        if ( (v123 & 0x40000) != 0 && !v8 )
        {
          v145 = MiTbFlushType(v9);
          v147 = 20LL;
          v146 = 0;
          v148 = 0LL;
          v149 = 0LL;
        }
        v8 = 1;
        v114 = 1;
        if ( !*((_DWORD *)P + 11) )
        {
          if ( (unsigned int)MiGetSystemRegionType(v17) != 8 )
            goto LABEL_180;
          if ( v9 != (char *)MiGetMultiplexedVm(v82, v17) )
            goto LABEL_180;
          SystemCacheReverseMap = (_QWORD *)MiGetSystemCacheReverseMap(v17);
          v84 = SystemCacheReverseMap[2];
          _InterlockedOr(v112, 0);
          if ( !v84 )
            goto LABEL_180;
          v85 = SystemCacheReverseMap[3];
          v130 = (_QWORD *)v85;
          if ( (v85 & 1) != 0 )
          {
            v85 &= ~1uLL;
            v130 = (_QWORD *)v85;
          }
          if ( *(_QWORD *)v85 != v118
            || ((SystemCacheReverseMap[2] & 3) != 0
              ? (v86 = SystemCacheReverseMap[4])
              : (v86 = SystemCacheReverseMap[5] << 18),
                v86 + (v17 & 0x3FFFF) != v57) )
          {
LABEL_180:
            v7 = v118;
            v5 = (_DWORD *)v122;
            v56 = v115;
            goto LABEL_206;
          }
        }
LABEL_138:
        v70 = (__int64 *)(((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        PteShadow = *v70;
        if ( (unsigned __int64)v70 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v70 <= 0xFFFFF6FB7DBED7F8uLL )
          PteShadow = MiReadPteShadow(((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, *v70);
        v14 = v117;
        v137 = PteShadow;
        if ( (PteShadow & 1) == 0 )
        {
          v18 = v121;
          v13 = (_KPROCESS *)Object;
          goto LABEL_104;
        }
        v72 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v137) - 0x58000000000LL;
        if ( (v73 & 0x10000000) != 0 && ((v14 = v117, (PteShadow & 0x42) != 0) || (*(_BYTE *)(v72 + 34) & 0x10) != 0)
          || (v75 = *(_QWORD *)(v72 + 16), v14 = v117, (*(_QWORD *)(v72 + 40) & 0x200000000000000LL) == 0) )
        {
          v18 = v121;
LABEL_102:
          v13 = (_KPROCESS *)Object;
          goto LABEL_103;
        }
        if ( (v73 & 0x40000) != 0 )
        {
          v13 = (_KPROCESS *)Object;
          if ( (v75 & 0x400) != 0 && (PteShadow & 0x42) != 0 )
          {
            v76 = MiLockPageInline(v72);
            v77 = *(_BYTE *)(v72 + 34);
            if ( (v77 & 0x10) == 0 )
              *(_BYTE *)(v72 + 34) = v77 | 0x10;
            _InterlockedAnd64((volatile signed __int64 *)(v72 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            __writecr8(v76);
            v137 = PteShadow & 0xFFFFFFFFFFFFFFBDuLL;
            MiWriteValidPteNewPage(((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, PteShadow & 0xFFFFFFFFFFFFFFBDuLL);
            MiInsertTbFlushEntry(&v145, v17, 1LL, 0LL);
            v14 = v117;
            v18 = v121;
          }
          else
          {
            v18 = v121;
          }
LABEL_103:
          v8 = v114;
LABEL_104:
          v9 = v116;
          continue;
        }
        if ( (v75 & 0x400) == 0 )
        {
          v18 = v121;
          if ( (*(_DWORD *)(v74 + 56) & 0x80u) != 0 )
            goto LABEL_102;
        }
        WsleContents = MiGetWsleContents(v117, v17);
        if ( *((_DWORD *)P + 11) == 3 )
        {
          v18 = v121;
          v14 = v117;
          if ( (WsleContents & 0xF) == 9 )
            goto LABEL_102;
        }
        if ( (WsleContents & 0xF) == 8 || (v89 & 0x800000) != 0 )
        {
          v9 = v116;
          if ( v88
            || !v129
            || (v116[192] & 7) == 2
            || (locked = MiReplaceLockedPage(v116, v72, v17, v58),
                v18 = v121,
                v14 = v117,
                v8 = v114,
                v13 = (_KPROCESS *)Object,
                !locked) )
          {
            v18 = v121;
            v14 = v117;
            v8 = v114;
            v13 = (_KPROCESS *)Object;
            v119 = 277;
          }
        }
        else
        {
          v9 = v116;
          if ( dword_140388C68 )
            MI_WSLE_LOG_ACCESS((__int64)v116, (_BYTE *)(((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL));
          if ( !HIDWORD(v142) )
          {
            v90 = MiTbFlushType(v9);
            v142 = 20LL;
            v143 = 0LL;
            v144 = 0LL;
            v140 = v90;
            v141 = 4;
          }
          MiInsertTbFlushEntry(&v140, v17, 1LL, 0LL);
          v18 = v121;
          v14 = v117;
          v8 = v114;
          v13 = (_KPROCESS *)Object;
          if ( HIDWORD(v142) == (_DWORD)v142 )
          {
            v91 = MiFreeWsleList(v9, &v140, 0LL);
            v92 = v119;
            v14 = v117;
            if ( v91 )
              v92 = 277;
            HIDWORD(v142) = 0;
            v119 = v92;
          }
        }
        continue;
      }
      break;
    }
    v58 = 0;
    v9 = (char *)Object + 1280;
    v116 = (char *)Object + 1280;
    if ( !v8 )
    {
      v8 = 1;
      v114 = 1;
      if ( (v123 & 0x40000) != 0 )
      {
        v145 = MiTbFlushType((char *)Object + 1280);
        v147 = 20LL;
        v146 = 0;
        v148 = 0LL;
        v149 = 0LL;
      }
      SharedVm = MiGetSharedVm(v9);
      v60 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
      *(_DWORD *)(SharedVm + 4) = 0;
      v57 = v121;
      v113[0] = v60;
    }
    if ( v19
      && v20 >= (*(unsigned int *)(v19 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 32) << 32))
      && v20 <= (*(unsigned int *)(v19 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 33) << 32)) )
    {
      v63 = v118;
    }
    else
    {
      Address = MiLocateAddress(v17);
      v19 = Address;
      if ( !Address )
        goto LABEL_202;
      v62 = *(_DWORD *)(Address + 48);
      if ( (v62 & 0x8000) != 0 )
        goto LABEL_202;
      v63 = v118;
      if ( (*(_DWORD *)(v118 + 56) & 0x20) == 0 && (v62 & 7) != 0 || (v130 = *(_QWORD **)(Address + 72), *v130 != v118) )
      {
        v5 = (_DWORD *)v122;
        v7 = v118;
        goto LABEL_204;
      }
    }
    if ( (*(_DWORD *)(v63 + 56) & 0x20) == 0 )
    {
      ProtoPteAddress = MiGetProtoPteAddress(v19, v17 >> 12, 0LL, &v130);
      if ( !ProtoPteAddress || !v130 || v57 != MiStartingOffset(v130, ProtoPteAddress, 0xFFFFFFFFLL) )
        goto LABEL_202;
      goto LABEL_131;
    }
    v64 = *(_QWORD *)(v19 + 80);
    if ( v122 >= v64 )
    {
      v65 = *(unsigned int *)(v19 + 24);
      if ( v122 < v64
                - 8 * (v65 | ((unsigned __int64)*(unsigned __int8 *)(v19 + 32) << 32))
                + 8 * ((*(unsigned int *)(v19 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 33) << 32)) + 1) )
      {
        v17 = ((__int64)(v122 - v64) >> 3 << 12)
            + ((v65 | ((unsigned __int64)*(unsigned __int8 *)(v19 + 32) << 32)) << 12);
LABEL_131:
        v151 = ((v17 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
        v152 = ((v151 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        LODWORD(v67) = 3;
        v153 = ((v152 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        while ( 1 )
        {
          v67 = (unsigned int)(v67 - 1);
          v68 = (__int64 *)*(&v151 + v67);
          v69 = *v68;
          if ( (unsigned __int64)v68 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v68 <= 0xFFFFF6FB7DBED7F8uLL )
            v69 = MiReadPteShadow(*(&v151 + v67), *v68);
          v137 = v69;
          if ( (v69 & 1) == 0 || (v69 & 0x80u) != 0LL )
            break;
          if ( !(_DWORD)v67 )
            goto LABEL_138;
        }
        v78 = (unsigned __int64)(v68 + 1);
        for ( i = v67 + 2; i; --i )
          v78 = (__int64)(v78 << 25) >> 16;
        v14 = v117;
        v13 = (_KPROCESS *)Object;
        v20 = (v78 >> 12) - 1;
        v18 = v78 - v17 + v57 - 4096;
        v17 = v78;
        goto LABEL_106;
      }
    }
    v5 = (_DWORD *)v122;
LABEL_203:
    v7 = v118;
LABEL_204:
    v56 = v115;
LABEL_205:
    if ( v8 != 1 )
    {
      v96 = (char *)Object;
      goto LABEL_238;
    }
LABEL_206:
    if ( HIDWORD(v142) )
    {
      v94 = MiFreeWsleList(v9, &v140, 0LL);
      v95 = v119;
      HIDWORD(v142) = 0;
      if ( v94 )
        v95 = 277;
      v119 = v95;
    }
    else
    {
      MiFlushTbList(&v145);
    }
    v96 = (char *)Object;
    if ( Object )
    {
      v98 = KeGetCurrentThread();
      if ( (*(_DWORD *)(&v98[1].SwapListEntry + 1) & 0x400000) == 0 )
      {
        v99 = HIBYTE(*((_DWORD *)v9 + 48));
        if ( (v99 & 8) != 0 )
        {
          v9[195] = v99 & 0xF7;
          _interlockedbittestandset((volatile signed __int32 *)&v98[1].SwapListEntry + 2, 0x16u);
          v100 = v113[0];
          if ( !MiForcedTrim(v9, (unsigned __int8)v113[0]) && (v9[192] & 0x40) != 0 )
          {
            v101 = *((_QWORD *)v9 + 15);
            v102 = *((_QWORD *)v9 + 19);
            if ( v101 > v102 )
            {
              if ( (*((_DWORD *)v9 + 1) & 0xF) != 0 )
              {
                v102 = v101 - 1;
                v103 = v100;
              }
              else
              {
                v103 = v113[0];
              }
              MiReduceWs((__int64)v9, v103, v102);
            }
          }
        }
        v104 = v9[195];
        if ( (v104 & 4) != 0 )
        {
          v9[195] = v104 & 0xFB;
          _interlockedbittestandset((volatile signed __int32 *)&v98[1].SwapListEntry + 2, 0x16u);
          MiAgeWorkingSet(
            v9,
            (unsigned __int8)v113[0],
            1LL,
            *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(qword_140388AF0 + 8LL * *((unsigned __int16 *)v9 + 86))
                                            + 5680LL)
                                + 2354LL));
        }
        v105 = v9[195];
        if ( (v105 & 0x10) != 0 )
        {
          v9[195] = v105 & 0xEF;
          _interlockedbittestandset((volatile signed __int32 *)&v98[1].SwapListEntry + 2, 0x16u);
          MiReduceWs((__int64)v9, v113[0], *((_QWORD *)v9 + 19));
        }
        if ( (*(_DWORD *)(&v98[1].SwapListEntry + 1) & 0x400000) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)&v98[1].SwapListEntry + 2, 0x16u);
      }
      v106 = (_DWORD *)MiGetSharedVm(v9);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v106, retaddr);
        __writecr8((unsigned __int8)v113[0]);
        v8 = 0;
        v114 = 0;
        goto LABEL_238;
      }
      *v106 = 0;
      __writecr8((unsigned __int8)v113[0]);
      goto LABEL_236;
    }
    if ( !v9 )
    {
LABEL_236:
      v8 = 0;
      v114 = 0;
      goto LABEL_238;
    }
    MiPreUnlockWorkingSetExclusive(v9, (unsigned __int8)v113[0]);
    v97 = (_DWORD *)MiGetSharedVm(v9);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v97, retaddr);
      v9 = 0LL;
    }
    else
    {
      v9 = 0LL;
      *v97 = 0;
    }
    v116 = 0LL;
    __writecr8((unsigned __int8)v113[0]);
    v8 = 0;
    v114 = 0;
LABEL_238:
    if ( v128 == 1 )
    {
      v107 = (volatile signed __int64 *)v131[1];
      if ( (_InterlockedExchangeAdd64(v107, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v107);
      KeAbPostRelease((ULONG_PTR)v107);
      KiLeaveGuardedRegionUnsafe(v56);
    }
    v108 = v132;
    if ( v132 )
    {
      MmDetachSession(v132, v150);
      MmQuitNextSession(v108);
    }
    else if ( v127 == 1 )
    {
      KiUnstackDetachProcess(v150, 1LL);
      MiAttachThreadDone(v96 + 1280);
    }
    if ( v96 )
      ObfDereferenceObject(v96);
    ExFreePoolWithTag(P, 0);
    if ( v129 == 1 && (*v5 & 1) == 0 )
    {
      v109 = v138;
      if ( v138 )
      {
        do
        {
          v110 = v109;
          v109 = (_QWORD *)*v109;
          v111 = (void *)v110[1];
          if ( v111 )
            ObfDereferenceObject(v111);
          ExFreePoolWithTag(v110, 0);
        }
        while ( v109 );
      }
      return 0LL;
    }
    else
    {
      a1 = v138;
      if ( v138 )
      {
        a3 = v123;
        CurrentThread = v115;
        continue;
      }
      return v119;
    }
  }
}
