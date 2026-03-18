/*
 * XREFs of MmCheckCachedPageStates @ 0x14009E320
 * Callers:
 *     CcMapDataForOverwrite @ 0x140024DB0 (CcMapDataForOverwrite.c)
 *     CcPinFileData @ 0x14009C5A0 (CcPinFileData.c)
 *     CcFetchDataForRead @ 0x14009D9B0 (CcFetchDataForRead.c)
 *     CcMapAndRead @ 0x14009E170 (CcMapAndRead.c)
 *     CcMapAndCopyInToCache @ 0x14009EF20 (CcMapAndCopyInToCache.c)
 *     MiFinishHardFault @ 0x1400CBC40 (MiFinishHardFault.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiPfnZeroingNeeded @ 0x14007AE20 (MiPfnZeroingNeeded.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiMakeSystemCacheRangeValid @ 0x14009BBD0 (MiMakeSystemCacheRangeValid.c)
 *     MiReadyStandbyPageForActive @ 0x14009BFE0 (MiReadyStandbyPageForActive.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MiLockProtoPoolPage @ 0x1400A1530 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x1400A3920 (MiUnlockProtoPoolPage.c)
 *     MiZeroPhysicalPage @ 0x1400A59A0 (MiZeroPhysicalPage.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AA4A0 (KxAcquireQueuedSpinLock.c)
 *     MiGetAnyMultiplexedVm @ 0x1400B1BCC (MiGetAnyMultiplexedVm.c)
 *     MiIsPfnInline @ 0x1400B54F0 (MiIsPfnInline.c)
 *     MiUnlinkStandbyBatch @ 0x1400B60C0 (MiUnlinkStandbyBatch.c)
 *     MiGetPage @ 0x1400BBC00 (MiGetPage.c)
 *     MmAccessFault @ 0x1400BDCD0 (MmAccessFault.c)
 *     MiUnlinkPageFromList @ 0x1400C3100 (MiUnlinkPageFromList.c)
 *     MiGetPfnPriority @ 0x1400C3D60 (MiGetPfnPriority.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1400CCB60 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x1400D6900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiWriteValidPteNewProtection @ 0x140100C50 (MiWriteValidPteNewProtection.c)
 *     MiInitializePageColorBase @ 0x1401069F0 (MiInitializePageColorBase.c)
 *     MiReferenceControlAreaPfn @ 0x140107570 (MiReferenceControlAreaPfn.c)
 *     MiProtectionToCacheAttribute @ 0x140107AC8 (MiProtectionToCacheAttribute.c)
 *     MiInitializePfn @ 0x1401099F8 (MiInitializePfn.c)
 *     MiReleaseFreshPage @ 0x14010ADC8 (MiReleaseFreshPage.c)
 *     MiDiscardTransitionPte @ 0x14013B9CC (MiDiscardTransitionPte.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x14017CDA4 (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MiGetPrototypePteDirect @ 0x14017CE98 (MiGetPrototypePteDirect.c)
 *     MiInvalidPteConforms @ 0x14017CEB0 (MiInvalidPteConforms.c)
 *     MiCaptureSystemCachePte @ 0x1402122D8 (MiCaptureSystemCachePte.c)
 *     MiMarkPteDirty @ 0x140212530 (MiMarkPteDirty.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14021EE14 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14021EE3C (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14025C828 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MmCheckCachedPageStates(unsigned __int64 a1, __int64 a2, int a3, char *a4)
{
  char v4; // bl
  unsigned __int8 v5; // si
  __int64 v6; // r14
  ULONG_PTR PrototypePteDirect; // r13
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // r15
  __int64 v10; // rdi
  unsigned __int64 v11; // r10
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  unsigned int v16; // r11d
  unsigned __int64 v17; // r10
  unsigned __int64 v18; // rcx
  ULONG_PTR v19; // r15
  __int16 v20; // ax
  __int64 AnyMultiplexedVm; // r14
  __int64 SharedVm; // rbx
  KIRQL v23; // al
  KIRQL v24; // r15
  __int64 v25; // rax
  _DWORD *v26; // rax
  unsigned __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  ULONG_PTR v31; // rbx
  unsigned int v32; // r11d
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rbx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rsi
  bool v45; // zf
  char v46; // cl
  unsigned __int64 v47; // r8
  __int64 v48; // rax
  unsigned __int64 v49; // r8
  unsigned int v50; // eax
  unsigned __int64 v51; // r15
  __int64 v52; // rbx
  __int64 PfnPriority; // r12
  int v54; // r14d
  __int64 v55; // rax
  __int64 v56; // rax
  char v57; // bl
  __int64 v58; // r12
  unsigned int v59; // edx
  _WORD *v60; // r8
  __int16 v61; // ax
  __int64 v62; // rcx
  __int64 Page; // rax
  __int64 v64; // r14
  unsigned int v65; // eax
  __int64 v66; // rax
  __int64 v67; // r9
  __int64 v68; // rbx
  __int64 v69; // rax
  __int64 v70; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  int v72; // eax
  unsigned int Flink; // ecx
  unsigned int v74; // esi
  __int64 v75; // rdx
  int v76; // eax
  int v77; // ecx
  char v78; // al
  unsigned __int64 v79; // rax
  __int64 v80; // rax
  unsigned __int8 CurrentIrql; // bl
  __int64 v82; // rax
  __int64 ValidPte; // rcx
  unsigned __int8 v85; // [rsp+30h] [rbp-D0h] BYREF
  char v86; // [rsp+31h] [rbp-CFh]
  unsigned int v87; // [rsp+34h] [rbp-CCh]
  __int64 v88; // [rsp+38h] [rbp-C8h] BYREF
  int v89; // [rsp+40h] [rbp-C0h]
  __int64 v90; // [rsp+48h] [rbp-B8h]
  int v91; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v92; // [rsp+58h] [rbp-A8h]
  __int64 v93; // [rsp+60h] [rbp-A0h] BYREF
  ULONG_PTR v94; // [rsp+68h] [rbp-98h]
  unsigned __int64 v95; // [rsp+70h] [rbp-90h]
  int v96; // [rsp+78h] [rbp-88h]
  int v97; // [rsp+7Ch] [rbp-84h] BYREF
  int v98; // [rsp+80h] [rbp-80h] BYREF
  __int64 v99; // [rsp+88h] [rbp-78h]
  __int64 v100; // [rsp+90h] [rbp-70h] BYREF
  __int64 v101; // [rsp+98h] [rbp-68h] BYREF
  __int64 v102; // [rsp+A0h] [rbp-60h]
  __int64 v103; // [rsp+A8h] [rbp-58h]
  __int64 v104; // [rsp+B0h] [rbp-50h]
  __int64 v105; // [rsp+B8h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v107; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v108; // [rsp+E0h] [rbp-20h]
  char *v109; // [rsp+E8h] [rbp-18h]
  _WORD *v110; // [rsp+F0h] [rbp-10h] BYREF
  __int16 v111; // [rsp+F8h] [rbp-8h]
  unsigned __int16 v112; // [rsp+FAh] [rbp-6h]
  _QWORD v113[16]; // [rsp+100h] [rbp+0h] BYREF
  void *retaddr; // [rsp+1C8h] [rbp+C8h]

  v109 = a4;
  v86 = 1;
  v4 = a3;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v89 = a3;
  v91 = 0;
  v5 = 17;
  v6 = 0LL;
  v87 = 0;
  v85 = 17;
  PrototypePteDirect = 0LL;
  v99 = 0LL;
  v90 = 0LL;
  v8 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v92 = v8;
  v9 = (((a1 + a2 - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v95 = v9;
  v105 = MI_READ_PTE_LOCK_FREE(((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v10 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v105) - 0x58000000000LL;
  v103 = v10;
  v107 = MI_READ_PTE_LOCK_FREE(((v11 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
  v15 = MI_GET_PFN_FROM_PTE(&v107, v12, v13, v14);
  v18 = *(_QWORD *)(*(_QWORD *)(v15 + 16) + 48 * ((v17 >> 18) & 7) + 24);
  if ( (v18 & 1) != 0 )
    v18 &= ~1uLL;
  v104 = *(_QWORD *)v18;
  v102 = *(_QWORD *)(qword_14036C8F8 + 8LL * (*(_WORD *)(v104 + 60) & 0x3FF));
  while ( v8 <= v9 )
  {
    LODWORD(v19) = 0;
    v94 = 0LL;
    v88 = MI_READ_PTE_LOCK_FREE(v8);
    if ( (v88 & 1) != 0 )
    {
      if ( (v4 & 4) != 0 )
      {
        if ( v5 != 17 )
        {
          MiUnlockProtoPoolPage(v6, v5);
          v5 = 17;
          v85 = 17;
        }
        v20 = MI_READ_PTE_LOCK_FREE(v8);
        if ( (v20 & 0x42) == 0 && (v20 & 0x800) != 0 )
        {
          AnyMultiplexedVm = MiGetAnyMultiplexedVm(0LL);
          SharedVm = MiGetSharedVm(AnyMultiplexedVm);
          v23 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
          *(_DWORD *)(SharedVm + 4) = 0;
          v24 = v23;
          v25 = MI_READ_PTE_LOCK_FREE(v8);
          if ( (v25 & 1) != 0 && (v25 & 0x42) == 0 && (v25 & 0x800) != 0 )
            MiWriteValidPteNewProtection(v8, v25 | 0x62);
          MiPreUnlockWorkingSetExclusive(AnyMultiplexedVm, v24);
          v26 = (_DWORD *)MiGetSharedVm(AnyMultiplexedVm);
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v26, retaddr);
          else
            *v26 = 0;
          __writecr8(v24);
          v6 = v90;
          LODWORD(v19) = v94;
        }
      }
      goto LABEL_110;
    }
    v27 = MiCaptureSystemCachePte(v8);
    v88 = v27;
    if ( (v27 & 1) != 0 )
    {
      if ( (v4 & 4) != 0 )
      {
        if ( v5 != 17 )
        {
          MiUnlockProtoPoolPage(v6, v5);
          v5 = 17;
          v85 = 17;
        }
        MiMarkPteDirty(v8);
      }
      goto LABEL_110;
    }
    v31 = PrototypePteDirect;
    v19 = (v27 >> 3) & 1;
    v94 = v19;
    v96 = (v27 >> 3) & 1;
    PrototypePteDirect = MiGetPrototypePteDirect(v27, v28, v29, v30);
    if ( v5 == 17 )
      goto LABEL_27;
    if ( ((PrototypePteDirect ^ v31) & 0xFFFFFFFFFFFFF000uLL) != 0 )
    {
      MiUnlockProtoPoolPage(v6, v5);
      v32 = v87;
      v5 = 17;
      v85 = 17;
LABEL_27:
      if ( ((PrototypePteDirect ^ v31) & 0xFFFFFFFFFFFFF000uLL) != 0 && v32 )
      {
        MiMakeSystemCacheRangeValid(v8 - 8LL * v32, v113, v32, v10);
        v87 = 0;
      }
      v33 = MI_READ_PTE_LOCK_FREE(PrototypePteDirect);
      v93 = v33;
      if ( (v33 & 1) == 0 && ((v33 & 0x400) != 0 || (v33 & 0x800) == 0) )
      {
        v6 = 0LL;
        v90 = 0LL;
        goto LABEL_78;
      }
      v90 = MiLockProtoPoolPage(PrototypePteDirect, &v85);
      v6 = v90;
      if ( !v90 )
      {
        do
        {
          MmAccessFault(2uLL, PrototypePteDirect);
          v37 = MiLockProtoPoolPage(PrototypePteDirect, &v85);
          v90 = v37;
        }
        while ( !v37 );
        v10 = v103;
        v6 = v37;
        v8 = v92;
      }
      v5 = v85;
    }
    if ( (*(_BYTE *)v8 & 1) != 0 )
      goto LABEL_110;
    v33 = MI_READ_PTE_LOCK_FREE(PrototypePteDirect);
    v93 = v33;
    if ( (v33 & 1) != 0 || (v33 & 0x400) == 0 && (v33 & 0x800) != 0 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v38 = MI_READ_PTE_LOCK_FREE(PrototypePteDirect);
          v100 = v38;
          v39 = v38;
          if ( (v38 & 1) == 0 )
            break;
          v40 = MI_GET_PAGE_FRAME_FROM_PTE(&v100);
LABEL_48:
          if ( (unsigned int)MiIsPfnInline(v40, v41, v42, v40) )
          {
            v44 = 48 * v43 - 0x58000000000LL;
            MiLockPageAtDpcInline(v44);
            if ( MI_READ_PTE_LOCK_FREE(PrototypePteDirect) == v39 )
              goto LABEL_52;
            _InterlockedAnd64((volatile signed __int64 *)(v44 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
        }
        if ( (v38 & 0x400) != 0 || (v38 & 0x800) == 0 )
          break;
        if ( (unsigned int)MiInvalidPteConforms(v38) )
        {
          v40 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v100);
          goto LABEL_48;
        }
      }
      v44 = 0LL;
LABEL_52:
      v33 = MI_READ_PTE_LOCK_FREE(PrototypePteDirect);
      v93 = v33;
      if ( !v44 )
      {
        v5 = v85;
        goto LABEL_78;
      }
      if ( (v33 & 1) != 0 )
      {
        v45 = (*(_BYTE *)(v44 + 35) & 0x40) == 0;
        v88 = v33;
        if ( !v45 )
          goto LABEL_55;
        *(_QWORD *)(v44 + 24) ^= (*(_QWORD *)(v44 + 24) ^ (*(_QWORD *)(v44 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v44 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        while ( 1 )
        {
LABEL_123:
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          v97 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v97);
            while ( *(__int64 *)(v10 + 24) < 0 );
          }
          *(_QWORD *)(v10 + 24) ^= (*(_QWORD *)(v10 + 24) ^ (*(_QWORD *)(v10 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
          _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(CurrentIrql);
          if ( (v19 & 1) != 0 )
          {
            v82 = MI_GET_PAGE_FRAME_FROM_PTE(&v88);
            ValidPte = MiMakeValidPte(v8, v82, 536870913LL);
          }
          else
          {
            ValidPte = v88;
            if ( (v89 & 4) != 0 && (v88 & 0x42) == 0 && (v88 & 0x800) != 0 )
              ValidPte = v88 | 0x42;
          }
          v5 = v85;
          v6 = v90;
          v79 = ValidPte & 0xFFFFFFFFFFFFFEFBuLL | ((unsigned __int64)(word_14036C2A8 & 1) << 8);
LABEL_111:
          v88 = v79;
          v8 += 8LL;
          if ( (unsigned int)v19 >= 2 )
          {
            v79 &= ~1uLL;
            v88 = v79;
          }
          v16 = v87;
          if ( v87 || v79 )
          {
            v113[v87] = v79;
            v87 = ++v16;
            if ( v16 == 16 )
            {
              if ( v5 != 17 )
              {
                MiUnlockProtoPoolPage(v6, v5);
                v5 = 17;
                v85 = 17;
              }
              MiMakeSystemCacheRangeValid(v8 - 128, v113, 0x10u, v10);
              v16 = 0;
              v87 = 0;
            }
          }
          if ( !v99 )
            break;
          PrototypePteDirect += 8LL;
          --v99;
          v88 = MI_READ_PTE_LOCK_FREE(PrototypePteDirect);
          v80 = MiCaptureSystemCachePte(v8);
          v105 = v80;
          if ( (v80 & 1) != 0 )
            LODWORD(v19) = 2;
          else
            LODWORD(v19) = (v80 & 8) != 0;
        }
        v4 = v89;
        v9 = v95;
        v92 = v8;
      }
      else
      {
        v46 = *(_BYTE *)(v44 + 34);
        if ( (v46 & 0x20) != 0 || (*(_BYTE *)(v44 + 35) & 0x40) != 0 )
        {
LABEL_55:
          _InterlockedAnd64((volatile signed __int64 *)(v44 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v5 = v85;
          goto LABEL_110;
        }
        v47 = ((__int64)(v95 - v8) >> 3) + 1;
        if ( (v46 & 7) != 2 || v47 <= 1 )
          goto LABEL_72;
        v48 = MiGetPrototypePteDirect(*(_QWORD *)(v44 + 16), v34, v47, v36);
        if ( (__int64)(*(_QWORD *)(v48 + 8) + 8LL * *(unsigned int *)(v48 + 44) - PrototypePteDirect) >> 3 < v49 )
          v49 = (__int64)(*(_QWORD *)(v48 + 8) + 8LL * *(unsigned int *)(v48 + 44) - PrototypePteDirect) >> 3;
        v50 = 4096 - (PrototypePteDirect & 0xFFF);
        if ( v49 > (unsigned __int64)v50 >> 3 )
          v49 = (unsigned __int64)v50 >> 3;
        v51 = 16 - v87;
        if ( v49 <= v51 )
          v51 = v49;
        if ( v51 > 1 )
        {
          v52 = 0LL;
          v101 = 0LL;
          PfnPriority = (unsigned int)MiGetPfnPriority(v44);
          LockHandle.LockQueue.Next = 0LL;
          LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v102 + 8 * (PfnPriority + 4 * (PfnPriority + 69)));
          KxAcquireQueuedSpinLock(&LockHandle);
          v54 = MiUnlinkPageFromList(v44);
          if ( v54 == 1 )
          {
            v55 = MiUnlinkStandbyBatch(
                    (unsigned int)&v101,
                    (int)PrototypePteDirect + 8,
                    PfnPriority,
                    v92,
                    v51 - 1,
                    (__int64)&v101);
            v52 = v101;
            v99 = v55;
          }
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          if ( v52 )
          {
            MiDiscardTransitionPte(v52);
            _InterlockedAnd64((volatile signed __int64 *)(v52 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
          v8 = v92;
        }
        else
        {
LABEL_72:
          v54 = MiUnlinkPageFromList(v44);
        }
        if ( v54 )
        {
          MiReadyStandbyPageForActive(v44);
          v88 = MI_READ_PTE_LOCK_FREE(PrototypePteDirect);
          _InterlockedAnd64((volatile signed __int64 *)(v44 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          LODWORD(v19) = v94;
          goto LABEL_123;
        }
        MiDiscardTransitionPte(v44);
        _InterlockedAnd64((volatile signed __int64 *)(v44 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v5 = v85;
        PrototypePteDirect = 0LL;
        v6 = v90;
        v16 = v87;
        v4 = v89;
        v9 = v95;
      }
    }
    else
    {
LABEL_78:
      v56 = MiGetPrototypePteDirect(v33, v34, v35, v36);
      v57 = v89;
      v58 = v56;
      v108 = v56;
      v59 = *(_DWORD *)(v104 + 56);
      if ( (v59 & 0x40000000) != 0 || (v89 & 1) == 0 )
        goto LABEL_96;
      MiInitializePageColorBase(0LL, (v59 >> 20) & 0x3F, &v110);
      v60 = v110;
      v61 = v111;
      v62 = v102;
      ++*v110;
      Page = MiGetPage(v62, v112 | (unsigned int)(unsigned __int16)(v61 & *v60), 2LL);
      v19 = Page;
      if ( Page == -1 )
      {
        LODWORD(v19) = v94;
LABEL_96:
        if ( (v57 & 2) != 0 )
        {
          v8 = v92;
        }
        else
        {
          if ( v5 != 17 )
          {
            MiUnlockProtoPoolPage(v6, v5);
            v85 = 17;
          }
          CurrentThread = KeGetCurrentThread();
          v8 = v92;
          v72 = BYTE4(CurrentThread[1].Queue);
          Flink = (unsigned int)CurrentThread[1].WaitListEntry.Flink;
          BYTE4(CurrentThread[1].Queue) = 1;
          v74 = v72 + 4 * Flink;
          v75 = (__int64)(v95 - v8) >> 3;
          if ( (unsigned int)v75 > Flink )
          {
            if ( (unsigned int)v75 <= 0xF )
              LODWORD(CurrentThread[1].WaitListEntry.Flink) = (__int64)(v95 - v8) >> 3;
            else
              LODWORD(CurrentThread[1].WaitListEntry.Flink) = 15;
          }
          v76 = MmAccessFault(0LL, (__int64)(v8 << 25) >> 16);
          if ( v76 < 0 )
          {
            v77 = v91;
            if ( v91 >= 0 )
              v77 = v76;
            v91 = v77;
          }
          v78 = v74 & 3;
          LODWORD(CurrentThread[1].WaitListEntry.Flink) = v74 >> 2;
          v5 = v85;
          BYTE4(CurrentThread[1].Queue) = v78;
        }
        v86 = 0;
LABEL_110:
        v79 = 0LL;
        goto LABEL_111;
      }
      v64 = 48 * Page - 0x58000000000LL;
      v65 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(&v93);
      MiProtectionToCacheAttribute(v65);
      if ( MiPfnZeroingNeeded() )
      {
        if ( v5 != 17 )
        {
          MiUnlockProtoPoolPage(v90, v5);
          v5 = 17;
          v85 = 17;
        }
        MiZeroPhysicalPage(v19);
        *(_QWORD *)(v64 + 16) = 0LL;
      }
      if ( v5 != 17 )
        goto LABEL_93;
      v90 = MiLockProtoPoolPage(PrototypePteDirect, &v85);
      if ( !v90 )
      {
        do
        {
          MmAccessFault(2uLL, PrototypePteDirect);
          v90 = MiLockProtoPoolPage(PrototypePteDirect, &v85);
        }
        while ( !v90 );
        v10 = v103;
        v58 = v108;
      }
      v66 = MI_READ_PTE_LOCK_FREE(PrototypePteDirect);
      v93 = v66;
      if ( (v66 & 1) == 0 && ((v66 & 0x800) == 0 || (v66 & 0x400) != 0) )
      {
LABEL_93:
        MiReferenceControlAreaPfn(v104, v58, 1LL);
        v68 = (unsigned int)MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(&v93);
        MiInitializePfn(v64, PrototypePteDirect, v68, 18LL);
        v8 = v92;
        v69 = MiMakeValidPte(v92, v19, (unsigned int)v68 | 0x20000000);
        LODWORD(v19) = v94;
        v88 = v69;
        *(_QWORD *)PrototypePteDirect = v69;
        if ( (unsigned int)MiPteInShadowRange(PrototypePteDirect) )
        {
          MiWritePteShadow(v70);
          LODWORD(v19) = v96;
        }
        goto LABEL_123;
      }
      MiUnlockProtoPoolPage(v67, v85);
      MiReleaseFreshPage(v64);
      v6 = v90;
      v5 = 17;
      v8 = v92;
      PrototypePteDirect = 0LL;
      v16 = v87;
      v4 = v89;
      v9 = v95;
      v85 = 17;
    }
  }
  if ( v5 != 17 )
  {
    v98 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v98);
      while ( *(__int64 *)(v6 + 24) < 0 );
    }
    *(_BYTE *)(v6 + 34) &= ~0x20u;
    MiRemoveLockedPageChargeAndDecRef(v6);
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v85);
    v16 = v87;
  }
  if ( v16 )
    MiMakeSystemCacheRangeValid(v8 - 8LL * v16, v113, v16, v10);
  if ( v109 )
    *v109 = v86;
  return (unsigned int)v91;
}
