/*
 * XREFs of MiTrimSharedPageFromViews @ 0x1400FF670
 * Callers:
 *     MiTrimSection @ 0x1400144D8 (MiTrimSection.c)
 * Callees:
 *     MiPrepareAttachThread @ 0x140022D6C (MiPrepareAttachThread.c)
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     KiAbEntryRemoveFromTree @ 0x140048030 (KiAbEntryRemoveFromTree.c)
 *     MiAcquireProperVm @ 0x14006BF58 (MiAcquireProperVm.c)
 *     MmDetachSession @ 0x140073870 (MmDetachSession.c)
 *     MmAttachSession @ 0x1400738F0 (MmAttachSession.c)
 *     MiTbFlushType @ 0x14007FA04 (MiTbFlushType.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MmGetSessionById @ 0x140094460 (MmGetSessionById.c)
 *     MiGetSubsectionDriverProtos @ 0x140097F34 (MiGetSubsectionDriverProtos.c)
 *     MiGetSystemCacheReverseMap @ 0x1400A02B0 (MiGetSystemCacheReverseMap.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     MiAttachThreadDone @ 0x1400AD5BC (MiAttachThreadDone.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     MiGetProtoPteAddress @ 0x1400BD630 (MiGetProtoPteAddress.c)
 *     MiLocateAddress @ 0x1400C2010 (MiLocateAddress.c)
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x1400D6900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiFreeWsleList @ 0x1400D6F10 (MiFreeWsleList.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1400F0AE0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     MiGetWsleContents @ 0x1400FBED0 (MiGetWsleContents.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140100920 (MI_WSLE_LOG_ACCESS.c)
 *     MiWriteValidPteNewProtection @ 0x140100C50 (MiWriteValidPteNewProtection.c)
 *     MiSystemCacheVaControlArea @ 0x140102068 (MiSystemCacheVaControlArea.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     MiReplaceLockedPage @ 0x14021670C (MiReplaceLockedPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetSharedProtos @ 0x140221220 (MiGetSharedProtos.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14025C828 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MmQuitNextSession @ 0x14045EE60 (MmQuitNextSession.c)
 */

__int64 __fastcall MiTrimSharedPageFromViews(_QWORD *a1, int a2, unsigned int a3, __int64 a4, _DWORD *a5)
{
  int v5; // ebx
  __int64 result; // rax
  __int64 v7; // r15
  char *v8; // rdi
  unsigned __int64 CurrentThread; // rdx
  _QWORD *v10; // r14
  _QWORD *v11; // r9
  _KPROCESS *v12; // r12
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rsi
  __int64 v15; // r13
  int v16; // r14d
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // r13
  unsigned __int64 v19; // r15
  __int64 v20; // r14
  int v21; // ecx
  int SystemRegionType; // eax
  _QWORD *v23; // rdx
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // rsi
  struct _KTHREAD *v26; // rdi
  unsigned int SessionId; // r8d
  unsigned __int64 v28; // rsi
  unsigned int v29; // r8d
  unsigned __int8 v30; // r14
  __int64 v31; // rdx
  bool v32; // zf
  __int64 v33; // rcx
  int v34; // eax
  __int64 v35; // rcx
  _KLOCK_ENTRY *v36; // rbx
  __int64 v37; // rdx
  __int16 v38; // ax
  unsigned __int64 v39; // rsi
  unsigned int v40; // r8d
  unsigned __int8 v41; // r14
  __int64 v42; // rdx
  __int64 v43; // rcx
  int v44; // eax
  __int64 v45; // rcx
  _KLOCK_ENTRY *v46; // rbx
  __int64 v47; // rdx
  __int16 v48; // ax
  unsigned __int8 v49; // r14
  __int64 v50; // rdx
  __int64 v51; // rcx
  int v52; // eax
  __int64 v53; // rcx
  _KLOCK_ENTRY *v54; // rbx
  __int64 v55; // rdx
  __int16 v56; // ax
  __int64 v57; // r14
  unsigned int v58; // r12d
  LONG *SharedVm; // rbx
  unsigned __int64 Address; // rax
  int v61; // ecx
  __int64 v62; // r11
  unsigned __int64 v63; // r8
  __int64 v64; // r9
  unsigned __int64 ProtoPteAddress; // rbx
  _QWORD *v66; // rdi
  unsigned __int64 v67; // rdx
  unsigned __int64 v68; // rbx
  unsigned __int64 v69; // rbx
  __int64 v70; // rax
  __int64 v71; // rcx
  int v72; // r10d
  __int64 v73; // rax
  __int64 v74; // r9
  unsigned __int64 v75; // r9
  int i; // r10d
  unsigned __int64 v77; // rax
  __int64 v78; // rax
  int v79; // ecx
  _QWORD *SystemCacheReverseMap; // rcx
  __int64 v81; // rax
  unsigned __int64 v82; // rax
  __int64 v83; // rcx
  __int64 v84; // rax
  unsigned __int64 v85; // rax
  char v86; // r9
  __int64 v87; // r11
  __int64 v88; // rbx
  __int64 v89; // rax
  unsigned __int8 v90; // dl
  char v91; // al
  char WsleContents; // al
  int v93; // r10d
  int v94; // eax
  __int64 v95; // rax
  int v96; // r8d
  int locked; // eax
  __int64 v98; // rax
  int v99; // ecx
  PVOID v100; // rsi
  LONG *v101; // rax
  LONG *v102; // rax
  volatile signed __int64 *v103; // rbx
  __int64 v104; // rbx
  _QWORD *v105; // rdi
  _QWORD *v106; // rbx
  void *v107; // rcx
  signed __int32 v108[8]; // [rsp+0h] [rbp-100h] BYREF
  KIRQL v109[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v110; // [rsp+34h] [rbp-CCh]
  unsigned int v111; // [rsp+38h] [rbp-C8h]
  char *v112; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v113; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v114; // [rsp+50h] [rbp-B0h]
  __int64 v115; // [rsp+58h] [rbp-A8h]
  unsigned int v116; // [rsp+60h] [rbp-A0h]
  PVOID Object; // [rsp+68h] [rbp-98h]
  int v118; // [rsp+70h] [rbp-90h] BYREF
  int v119; // [rsp+74h] [rbp-8Ch] BYREF
  int v120; // [rsp+78h] [rbp-88h] BYREF
  int v121; // [rsp+7Ch] [rbp-84h]
  int v122; // [rsp+80h] [rbp-80h]
  int v123; // [rsp+84h] [rbp-7Ch]
  _QWORD *v124; // [rsp+88h] [rbp-78h] BYREF
  __int64 v125; // [rsp+90h] [rbp-70h] BYREF
  _QWORD *v126; // [rsp+98h] [rbp-68h]
  __int64 SessionById; // [rsp+A0h] [rbp-60h]
  int v128; // [rsp+A8h] [rbp-58h]
  int v129; // [rsp+ACh] [rbp-54h]
  int v130; // [rsp+B0h] [rbp-50h]
  PVOID P; // [rsp+B8h] [rbp-48h]
  _DWORD *v132; // [rsp+C0h] [rbp-40h]
  PVOID v133; // [rsp+C8h] [rbp-38h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+D0h] [rbp-30h] BYREF
  int v135; // [rsp+F0h] [rbp-10h] BYREF
  __int16 v136; // [rsp+F4h] [rbp-Ch]
  __int64 v137; // [rsp+F8h] [rbp-8h]
  __int64 v138; // [rsp+100h] [rbp+0h]
  __int64 v139; // [rsp+108h] [rbp+8h]
  int v140; // [rsp+1B0h] [rbp+B0h] BYREF
  __int16 v141; // [rsp+1B4h] [rbp+B4h]
  __int64 v142; // [rsp+1B8h] [rbp+B8h]
  __int64 v143; // [rsp+1C0h] [rbp+C0h]
  __int64 v144; // [rsp+1C8h] [rbp+C8h]
  $5BC46E0569261879018906DEC3127961 v145; // [rsp+270h] [rbp+170h] BYREF
  unsigned __int64 v146; // [rsp+2A0h] [rbp+1A0h]
  unsigned __int64 v147; // [rsp+2A8h] [rbp+1A8h]
  __int64 v148; // [rsp+2B0h] [rbp+1B0h]
  void *retaddr; // [rsp+2E8h] [rbp+1E8h]

  v132 = a5;
  v5 = 0;
  result = 0LL;
  v123 = a2;
  v7 = a4;
  v8 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  HIDWORD(v142) = 0;
  CurrentThread = (unsigned __int64)KeGetCurrentThread();
  v113 = CurrentThread;
  v115 = a4;
  v111 = a3;
  v109[0] = 17;
  v116 = 0;
  v110 = 0;
  HIDWORD(v137) = 0;
  v112 = 0LL;
  if ( !a1 )
    return result;
  while ( 2 )
  {
    v10 = a1;
    P = a1;
    v11 = 0LL;
    v133 = (PVOID)*a1;
    SessionById = 0LL;
    v12 = (_KPROCESS *)a1[1];
    v13 = a1[3];
    v14 = v10[2];
    v15 = v10[4];
    Object = v12;
    v114 = v13;
    v126 = 0LL;
    v122 = 0;
    v121 = 0;
    if ( v12 && v12 != KeGetCurrentThread()->ApcState.Process )
    {
      KeAcquireInStackQueuedSpinLock(&qword_14036CF80, &LockHandle);
      v122 = MiPrepareAttachThread((__int64)v12, (__int64)&v12[1].IdealNode[12]);
      v16 = v122;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      if ( !v16 )
        goto LABEL_207;
      KiStackAttachProcess(v12, 1u, (__int64)&v145);
      goto LABEL_6;
    }
    if ( *((_DWORD *)v10 + 11) < 2u )
      goto LABEL_7;
    v21 = *((_DWORD *)v10 + 10);
    if ( v21 == -1 )
    {
      v11 = &unk_14036C0F8;
LABEL_16:
      v126 = v11;
      goto LABEL_17;
    }
    if ( v21 != -2 )
    {
      SessionById = MmGetSessionById(v21);
      if ( !SessionById )
        goto LABEL_207;
      if ( (int)MmAttachSession(SessionById) < 0 )
      {
        MmQuitNextSession(SessionById);
        SessionById = 0LL;
        goto LABEL_207;
      }
      a3 = v111;
      CurrentThread = v113;
      v11 = (_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 2944);
      goto LABEL_16;
    }
LABEL_17:
    if ( *((_DWORD *)v10 + 11) == 3 )
    {
      SystemRegionType = MiGetSystemRegionType(v14);
      if ( *((_DWORD *)v10 + 10) == -2 )
      {
        if ( SystemRegionType == 1 )
          goto LABEL_207;
      }
      else if ( SystemRegionType != 1 )
      {
        goto LABEL_207;
      }
      goto LABEL_6;
    }
    if ( (a3 & 0xA0000) != 0 )
      goto LABEL_207;
    --*(_WORD *)(CurrentThread + 486);
    ExAcquirePushLockExclusiveEx(v11[1], 0LL);
    v23 = (_QWORD *)v126[2];
    if ( !v23 )
    {
LABEL_30:
      v25 = v126[1];
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v25, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v25);
      v120 = 0;
      v26 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v25) == 1 )
        SessionId = MmGetSessionIdEx(v26->ApcState.Process);
      else
        SessionId = -1;
      --v26->SpecialApcDisable;
      v49 = ++v26->AbAllocationRegionCount;
      LODWORD(v50) = ((char)v26->AbEntrySummary | (char)v26->AbOrphanedEntrySummary) ^ 0x3F;
      v32 = !_BitScanReverse((unsigned int *)&v51, v50);
      v130 = v51;
      if ( v32 )
        goto LABEL_89;
      while ( 1 )
      {
        v52 = 1 << v51;
        v53 = v51;
        v54 = &v26->LockEntries[v53];
        v50 = ~v52 & (unsigned int)v50;
        if ( (v54->AcquiredByte & 1) != 0
          && (*(_DWORD *)&v54->LockState.0 & 1) == 0
          && (*(_QWORD *)&v54->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v25 & 0x7FFFFFFFFFFFFFFCLL)
          && v54->LockState.SessionId == SessionId )
        {
          v54->AcquiredByte &= ~1u;
          if ( v54->LockState.0 )
            break;
        }
        v32 = !_BitScanReverse((unsigned int *)&v51, v50);
        v130 = v51;
        if ( v32 )
          goto LABEL_89;
      }
      if ( !v54 )
      {
LABEL_89:
        if ( (*((_DWORD *)&v26->0 + 1) & 0x8000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v26, v25, SessionId, 0LL);
      }
      else
      {
        v54->CrossThreadReleasableAndBusyByte |= 2u;
        if ( (__int64)v54->LockState.LockState < 0 )
          KiAbEntryRemoveFromTree(&v26->LockEntries[v53].TreeNode, v50);
        v120 = 0;
        v120 = v54->BoostBitmap.AllFields & 0x1FFFF;
        v54->BoostBitmap.AllFields &= 0xFFFE0000;
        v54->ThreadLocalFlags &= ~1u;
        v54->LockState.0 = 0LL;
        v55 = ((char *)v54 - (char *)v26 - 800) / 96;
        if ( v49 == 1 )
          v26->AbEntrySummary |= 1 << v55;
        else
          _InterlockedOr8((volatile signed __int8 *)&v26->AbOrphanedEntrySummary, 1 << v55);
      }
      --v26->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts(&v26->Header.Lock, v25, (unsigned int *)&v120);
      v56 = v26->SpecialApcDisable + 1;
      v26->SpecialApcDisable = v56;
      if ( !v56 )
        goto LABEL_97;
      goto LABEL_99;
    }
    while ( 1 )
    {
      v24 = v23[10] & 0xFFFFFFFFFFFFF000uLL;
      if ( v14 >= v24 + v23[4] )
      {
        v23 = (_QWORD *)v23[1];
        goto LABEL_29;
      }
      if ( v14 >= v24 )
        break;
      v23 = (_QWORD *)*v23;
LABEL_29:
      if ( !v23 )
        goto LABEL_30;
    }
    v124 = (_QWORD *)(v23[6] & 0xFFFFFFFFFFFFFFF8uLL);
    if ( *v124 != v7 )
    {
      v28 = v126[1];
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v28, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v28);
      v118 = 0;
      v26 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v28) == 1 )
        v29 = MmGetSessionIdEx(v26->ApcState.Process);
      else
        v29 = -1;
      --v26->SpecialApcDisable;
      v30 = ++v26->AbAllocationRegionCount;
      LODWORD(v31) = ((char)v26->AbEntrySummary | (char)v26->AbOrphanedEntrySummary) ^ 0x3F;
      v32 = !_BitScanReverse((unsigned int *)&v33, v31);
      v128 = v33;
      if ( v32 )
        goto LABEL_47;
      while ( 1 )
      {
        v34 = 1 << v33;
        v35 = v33;
        v36 = &v26->LockEntries[v35];
        v31 = ~v34 & (unsigned int)v31;
        if ( (v36->AcquiredByte & 1) != 0
          && (*(_DWORD *)&v36->LockState.0 & 1) == 0
          && (*(_QWORD *)&v36->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v28 & 0x7FFFFFFFFFFFFFFCLL)
          && v36->LockState.SessionId == v29 )
        {
          v36->AcquiredByte &= ~1u;
          if ( v36->LockState.0 )
            break;
        }
        v32 = !_BitScanReverse((unsigned int *)&v33, v31);
        v128 = v33;
        if ( v32 )
          goto LABEL_47;
      }
      if ( !v36 )
      {
LABEL_47:
        if ( (*((_DWORD *)&v26->0 + 1) & 0x8000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v26, v28, v29, 0LL);
      }
      else
      {
        v36->CrossThreadReleasableAndBusyByte |= 2u;
        if ( (__int64)v36->LockState.LockState < 0 )
          KiAbEntryRemoveFromTree(&v26->LockEntries[v35].TreeNode, v31);
        v118 = 0;
        v118 = v36->BoostBitmap.AllFields & 0x1FFFF;
        v36->BoostBitmap.AllFields &= 0xFFFE0000;
        v36->ThreadLocalFlags &= ~1u;
        v36->LockState.0 = 0LL;
        v37 = ((char *)v36 - (char *)v26 - 800) / 96;
        if ( v30 == 1 )
          v26->AbEntrySummary |= 1 << v37;
        else
          _InterlockedOr8((volatile signed __int8 *)&v26->AbOrphanedEntrySummary, 1 << v37);
      }
      --v26->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts(&v26->Header.Lock, v28, (unsigned int *)&v118);
      v38 = v26->SpecialApcDisable + 1;
      v26->SpecialApcDisable = v38;
      if ( !v38 )
        goto LABEL_97;
      goto LABEL_99;
    }
    if ( v14 + (v23[3] << 12) - v15 != (v23[10] & 0xFFFFFFFFFFFFF000uLL) )
    {
      v39 = v126[1];
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v39, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v39);
      v119 = 0;
      v26 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v39) == 1 )
        v40 = MmGetSessionIdEx(v26->ApcState.Process);
      else
        v40 = -1;
      --v26->SpecialApcDisable;
      v41 = ++v26->AbAllocationRegionCount;
      LODWORD(v42) = ((char)v26->AbEntrySummary | (char)v26->AbOrphanedEntrySummary) ^ 0x3F;
      v32 = !_BitScanReverse((unsigned int *)&v43, v42);
      v129 = v43;
      if ( v32 )
        goto LABEL_70;
      while ( 1 )
      {
        v44 = 1 << v43;
        v45 = v43;
        v46 = &v26->LockEntries[v45];
        v42 = ~v44 & (unsigned int)v42;
        if ( (v46->AcquiredByte & 1) != 0
          && (*(_DWORD *)&v46->LockState.0 & 1) == 0
          && (*(_QWORD *)&v46->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v39 & 0x7FFFFFFFFFFFFFFCLL)
          && v46->LockState.SessionId == v40 )
        {
          v46->AcquiredByte &= ~1u;
          if ( v46->LockState.0 )
            break;
        }
        v32 = !_BitScanReverse((unsigned int *)&v43, v42);
        v129 = v43;
        if ( v32 )
          goto LABEL_70;
      }
      if ( !v46 )
      {
LABEL_70:
        if ( (*((_DWORD *)&v26->0 + 1) & 0x8000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v26, v39, v40, 0LL);
      }
      else
      {
        v46->CrossThreadReleasableAndBusyByte |= 2u;
        if ( (__int64)v46->LockState.LockState < 0 )
          KiAbEntryRemoveFromTree(&v26->LockEntries[v45].TreeNode, v42);
        v119 = 0;
        v119 = v46->BoostBitmap.AllFields & 0x1FFFF;
        v46->BoostBitmap.AllFields &= 0xFFFE0000;
        v46->ThreadLocalFlags &= ~1u;
        v46->LockState.0 = 0LL;
        v47 = ((char *)v46 - (char *)v26 - 800) / 96;
        if ( v41 == 1 )
          v26->AbEntrySummary |= 1 << v47;
        else
          _InterlockedOr8((volatile signed __int8 *)&v26->AbOrphanedEntrySummary, 1 << v47);
      }
      --v26->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts(&v26->Header.Lock, v39, (unsigned int *)&v119);
      v48 = v26->SpecialApcDisable + 1;
      v26->SpecialApcDisable = v48;
      if ( !v48 )
      {
LABEL_97:
        if ( ($69CD3F157F9F39B6F7113F2231989901 *)v26->ApcState.ApcListHead[0].Flink != &v26->152 )
          KiCheckForKernelApcDelivery();
      }
LABEL_99:
      v57 = v113;
      KiLeaveGuardedRegionUnsafe(v113);
      v8 = v112;
      goto LABEL_208;
    }
    v121 = 1;
LABEL_6:
    v13 = v114;
LABEL_7:
    CurrentThread = v111;
    v17 = v14 - 4096;
    v18 = v15 - 4096;
    v19 = v17 >> 12;
    v20 = 0LL;
    v8 = 0LL;
    v112 = 0LL;
    while ( 2 )
    {
      v17 += 4096LL;
      while ( 1 )
      {
        if ( v17 >= v13 )
          goto LABEL_206;
        ++v19;
        v18 += 4096LL;
        if ( !v12 )
          break;
        v58 = 0;
        v8 = (char *)Object + 1280;
        v112 = (char *)Object + 1280;
        if ( !v5 )
        {
          v110 = 1;
          if ( (CurrentThread & 0x40000) != 0 )
          {
            v140 = MiTbFlushType((__int64)Object + 1280);
            v142 = 20LL;
            v141 = 0;
            v143 = 0LL;
            v144 = 0LL;
          }
          SharedVm = MiGetSharedVm((__int64)v8);
          v109[0] = ExAcquireSpinLockExclusive(SharedVm);
          SharedVm[1] = 0;
        }
        if ( v20
          && v19 >= (*(unsigned int *)(v20 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v20 + 32) << 32))
          && v19 <= (*(unsigned int *)(v20 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v20 + 33) << 32)) )
        {
          v62 = v115;
        }
        else
        {
          Address = MiLocateAddress(v17);
          v20 = Address;
          if ( !Address )
            goto LABEL_206;
          v61 = *(_DWORD *)(Address + 48);
          if ( (v61 & 0x8000) != 0 )
            goto LABEL_206;
          v62 = v115;
          if ( (*(_DWORD *)(v115 + 56) & 0x20) == 0 && (v61 & 7) != 0
            || (v124 = *(_QWORD **)(Address + 72), *v124 != v115) )
          {
            v7 = v115;
            goto LABEL_207;
          }
        }
        if ( (*(_DWORD *)(v62 + 56) & 0x20) != 0 )
        {
          v63 = *(_QWORD *)(v20 + 80);
          if ( (unsigned __int64)v132 < v63 )
            goto LABEL_206;
          v64 = *(unsigned int *)(v20 + 24);
          CurrentThread = *(unsigned int *)(v20 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v20 + 33) << 32);
          if ( (unsigned __int64)v132 >= v63
                                       - 8 * (v64 | ((unsigned __int64)*(unsigned __int8 *)(v20 + 32) << 32))
                                       + 8 * (CurrentThread + 1) )
            goto LABEL_206;
          v17 = ((__int64)((__int64)v132 - v63) >> 3 << 12)
              + ((v64 | ((unsigned __int64)*(unsigned __int8 *)(v20 + 32) << 32)) << 12);
        }
        else
        {
          ProtoPteAddress = MiGetProtoPteAddress(v20, v17 >> 12, 0, &v124);
          if ( !ProtoPteAddress )
            goto LABEL_206;
          v66 = v124;
          if ( !v124 )
          {
            v8 = v112;
            goto LABEL_206;
          }
          if ( (*(_DWORD *)(*v124 + 56LL) & 0x20) != 0 )
          {
            v67 = v124[1];
            if ( ProtoPteAddress < v67 || ProtoPteAddress >= v67 + 8LL * *((unsigned int *)v124 + 11) )
            {
              if ( (*((_BYTE *)v124 + 34) & 2) != 0 )
                v68 = (ProtoPteAddress << 9) - (*(_QWORD *)(MiGetSharedProtos(*v124, 0xFFFFFFFFLL, v124) + 32) << 9);
              else
                v68 = (ProtoPteAddress << 9) - (*(_QWORD *)(MiGetSubsectionDriverProtos(v124) + 32) << 9);
            }
            else
            {
              CurrentThread = v67 << 9;
              v68 = (ProtoPteAddress << 9) - CurrentThread;
            }
            v69 = ((unsigned __int64)*((unsigned int *)v66 + 9) << 9) + (v68 & 0xFFFFFFFFFFFFF000uLL);
          }
          else
          {
            v70 = v124[1];
            if ( v70 )
              v71 = (__int64)(ProtoPteAddress - v70) >> 3 << 12;
            else
              v71 = 0LL;
            v69 = v71 + ((*((unsigned int *)v124 + 9) | ((unsigned __int64)((_WORD)v124[4] & 0xFFC0) << 26)) << 12);
          }
          v8 = v112;
          if ( v18 != v69 )
            goto LABEL_206;
        }
        v146 = ((v17 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
        v147 = ((v146 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v72 = 3;
        v148 = ((v147 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        while ( 1 )
        {
          v73 = MI_READ_PTE_LOCK_FREE(*(&v146 + (unsigned int)(v72 - 1)));
          v125 = v73;
          if ( (v73 & 1) == 0 || (v73 & 0x80u) != 0LL )
            break;
          if ( !v72 )
          {
            v5 = v110;
            goto LABEL_175;
          }
        }
        v75 = v74 + 8;
        for ( i = v72 + 2; i; --i )
          v75 = (__int64)(v75 << 25) >> 16;
        v13 = v114;
        v5 = v110;
        v12 = (_KPROCESS *)Object;
        v77 = v75 - v17;
        CurrentThread = v111;
        v17 = v75;
        v19 = (v75 >> 12) - 1;
        v18 = v77 + v18 - 4096;
      }
      v58 = 1;
      if ( v5 == 1 )
      {
        if ( (v17 & 0x1FFFFF) == 0 )
        {
          if ( HIDWORD(v137) )
          {
            v78 = MiFreeWsleList((__int64)v8, (__int64)&v135, 0);
            v79 = v116;
            HIDWORD(v137) = 0;
            if ( v78 )
              v79 = 277;
            v116 = v79;
          }
          else
          {
            MiFlushTbList((__int64)&v140, (_KPROCESS *)CurrentThread);
          }
          MiUnlockWorkingSetExclusive((__int64)v8, v109[0]);
          v5 = 0;
          v110 = 0;
LABEL_158:
          v8 = (char *)MiAcquireProperVm(v17, v109);
          v112 = v8;
        }
      }
      else if ( !v5 )
      {
        goto LABEL_158;
      }
      if ( (unsigned __int64)v8 >= 2 )
      {
        if ( (v111 & 0x40000) != 0 && !v5 )
        {
          v140 = MiTbFlushType((__int64)v8);
          v142 = 20LL;
          v141 = 0;
          v143 = 0LL;
          v144 = 0LL;
        }
        v5 = 1;
        v110 = 1;
        if ( !*((_DWORD *)P + 11) )
        {
          if ( (unsigned int)MiGetSystemRegionType(v17) != 8 )
            goto LABEL_174;
          if ( v8 != (char *)(*(_QWORD *)(qword_14036C8F8
                                        + 8LL * (*(_WORD *)(MiSystemCacheVaControlArea(v17) + 60) & 0x3FF))
                            + 5888LL) )
            goto LABEL_174;
          SystemCacheReverseMap = (_QWORD *)MiGetSystemCacheReverseMap(v17);
          v81 = SystemCacheReverseMap[2];
          _InterlockedOr(v108, 0);
          if ( !v81 )
            goto LABEL_174;
          v82 = SystemCacheReverseMap[3];
          v124 = (_QWORD *)v82;
          if ( (v82 & 1) != 0 )
          {
            v82 &= ~1uLL;
            v124 = (_QWORD *)v82;
          }
          if ( *(_QWORD *)v82 != v115
            || ((SystemCacheReverseMap[2] & 3) != 0
              ? (v83 = SystemCacheReverseMap[4])
              : (v83 = SystemCacheReverseMap[5] << 18),
                v83 + (v17 & 0x3FFFF) != v18) )
          {
LABEL_174:
            v7 = v115;
            v57 = v113;
            goto LABEL_209;
          }
        }
LABEL_175:
        v84 = MI_READ_PTE_LOCK_FREE(((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v13 = v114;
        CurrentThread = v111;
        v125 = v84;
        if ( (v84 & 1) == 0 )
          goto LABEL_103;
        v85 = MI_READ_PTE_LOCK_FREE(&v125);
        CurrentThread = v111;
        v88 = 48 * ((v85 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        if ( (v111 & 0x10000000) != 0 && ((v13 = v114, (v86 & 0x42) != 0) || (*(_BYTE *)(v88 + 34) & 0x10) != 0)
          || (v89 = *(_QWORD *)(v88 + 16), v13 = v114, (*(_QWORD *)(v88 + 40) & 0x200000000000000LL) == 0) )
        {
LABEL_102:
          v5 = v110;
LABEL_103:
          v12 = (_KPROCESS *)Object;
LABEL_104:
          v8 = v112;
          continue;
        }
        if ( (v111 & 0x40000) != 0 )
        {
          v12 = (_KPROCESS *)Object;
          if ( (v89 & 0x400) != 0 && (v86 & 0x42) != 0 )
          {
            v90 = MiLockPageInline(v88);
            v91 = *(_BYTE *)(v88 + 34);
            if ( (v91 & 0x10) == 0 )
              *(_BYTE *)(v88 + 34) = v91 | 0x10;
            _InterlockedAnd64((volatile signed __int64 *)(v88 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            __writecr8(v90);
            v125 &= 0xFFFFFFFFFFFFFFBDuLL;
            MiWriteValidPteNewProtection(((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v125);
            MiInsertTbFlushEntry((__int64)&v140, v17, 1LL, 0);
            v13 = v114;
            CurrentThread = v111;
            v5 = v110;
          }
          else
          {
            v5 = v110;
          }
          goto LABEL_104;
        }
        if ( (v89 & 0x400) == 0 && (*(_DWORD *)(v87 + 56) & 0x80u) != 0 )
          goto LABEL_102;
        WsleContents = MiGetWsleContents(v114, v17);
        if ( *((_DWORD *)P + 11) == 3 )
        {
          CurrentThread = v111;
          v13 = v114;
          if ( (WsleContents & 0xF) == 9 )
            goto LABEL_102;
        }
        if ( (WsleContents & 0xF) == 8 || (v111 & 0x800000) != 0 )
        {
          v8 = v112;
          if ( v93
            || !v123
            || (v112[192] & 7) == 2
            || (locked = MiReplaceLockedPage(v112, v88, v17, v58),
                v13 = v114,
                v5 = v110,
                v12 = (_KPROCESS *)Object,
                CurrentThread = v111,
                !locked) )
          {
            v13 = v114;
            v5 = v110;
            v12 = (_KPROCESS *)Object;
            CurrentThread = v111;
            v116 = 277;
          }
        }
        else
        {
          v8 = v112;
          if ( dword_14036CA68 )
            MI_WSLE_LOG_ACCESS(v112, ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          if ( !HIDWORD(v137) )
          {
            v94 = MiTbFlushType((__int64)v8);
            v137 = 20LL;
            v138 = 0LL;
            v139 = 0LL;
            v135 = v94;
            v136 = 4;
          }
          MiInsertTbFlushEntry((__int64)&v135, v17, 1LL, 0);
          v13 = v114;
          v5 = v110;
          v12 = (_KPROCESS *)Object;
          CurrentThread = v111;
          if ( HIDWORD(v137) == (_DWORD)v137 )
          {
            v95 = MiFreeWsleList((__int64)v8, (__int64)&v135, 0);
            v96 = v116;
            v13 = v114;
            CurrentThread = v111;
            if ( v95 )
              v96 = 277;
            v116 = v96;
            HIDWORD(v137) = 0;
          }
        }
        continue;
      }
      break;
    }
    v8 = 0LL;
    v112 = 0LL;
LABEL_206:
    v7 = v115;
LABEL_207:
    v57 = v113;
LABEL_208:
    if ( v110 != 1 )
    {
      v100 = Object;
      goto LABEL_226;
    }
LABEL_209:
    if ( HIDWORD(v137) )
    {
      v98 = MiFreeWsleList((__int64)v8, (__int64)&v135, 0);
      v99 = v116;
      HIDWORD(v137) = 0;
      if ( v98 )
        v99 = 277;
      v116 = v99;
    }
    else
    {
      MiFlushTbList((__int64)&v140, (_KPROCESS *)CurrentThread);
    }
    v100 = Object;
    if ( Object )
    {
      MiPreUnlockWorkingSetExclusive((__int64)v8, v109[0]);
      v102 = MiGetSharedVm((__int64)v8);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v102, retaddr);
        __writecr8(v109[0]);
        v110 = 0;
        goto LABEL_226;
      }
      *v102 = 0;
      __writecr8(v109[0]);
      goto LABEL_224;
    }
    if ( !v8 )
    {
LABEL_224:
      v110 = 0;
      goto LABEL_226;
    }
    MiPreUnlockWorkingSetExclusive((__int64)v8, v109[0]);
    v101 = MiGetSharedVm((__int64)v8);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v101, retaddr);
      v8 = 0LL;
    }
    else
    {
      v8 = 0LL;
      *v101 = 0;
    }
    v112 = 0LL;
    __writecr8(v109[0]);
    v110 = 0;
LABEL_226:
    if ( v121 == 1 )
    {
      v103 = (volatile signed __int64 *)v126[1];
      if ( (_InterlockedExchangeAdd64(v103, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v103);
      KeAbPostRelease((ULONG_PTR)v103);
      KiLeaveGuardedRegionUnsafe(v57);
    }
    v104 = SessionById;
    if ( SessionById )
    {
      MmDetachSession(SessionById, (__int64)&v145);
      MmQuitNextSession(v104);
    }
    else if ( v122 == 1 )
    {
      KiUnstackDetachProcess(&v145, 1LL);
      MiAttachThreadDone((__int64)v100 + 1280);
    }
    if ( v100 )
      ObfDereferenceObject(v100);
    ExFreePoolWithTag(P, 0);
    if ( v123 == 1 && (*v132 & 1) == 0 )
    {
      v105 = v133;
      if ( v133 )
      {
        do
        {
          v106 = v105;
          v105 = (_QWORD *)*v105;
          v107 = (void *)v106[1];
          if ( v107 )
            ObfDereferenceObject(v107);
          ExFreePoolWithTag(v106, 0);
        }
        while ( v105 );
      }
      return 0LL;
    }
    else
    {
      a1 = v133;
      if ( v133 )
      {
        v5 = v110;
        a3 = v111;
        CurrentThread = v113;
        continue;
      }
      return v116;
    }
  }
}
