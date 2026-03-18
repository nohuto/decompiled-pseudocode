/*
 * XREFs of MiConvertPrivateToProto @ 0x140054AF0
 * Callers:
 *     MiSharePages @ 0x1400326D0 (MiSharePages.c)
 * Callees:
 *     MiWriteValidPteNewPage @ 0x140002750 (MiWriteValidPteNewPage.c)
 *     MiCopyPfnEntry @ 0x1400037E0 (MiCopyPfnEntry.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140006430 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140006660 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MiRemoveWsle @ 0x14000F040 (MiRemoveWsle.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiInsertTbFlushEntry @ 0x140026270 (MiInsertTbFlushEntry.c)
 *     MiUnlockProtoPoolPage @ 0x140030A70 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140030AF8 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiLockProtoPoolPage @ 0x1400320B0 (MiLockProtoPoolPage.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140032530 (MiMapPageInHyperSpaceWorker.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x140050C14 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiUpdatePfnPriority @ 0x140052938 (MiUpdatePfnPriority.c)
 *     MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED @ 0x140052A30 (MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED.c)
 *     MiDecrementShareCount @ 0x140054240 (MiDecrementShareCount.c)
 *     MiComparePages @ 0x1400558F0 (MiComparePages.c)
 *     MiFinalizePageAttribute @ 0x140056268 (MiFinalizePageAttribute.c)
 *     MiResolveProtoCombine @ 0x140058068 (MiResolveProtoCombine.c)
 *     EtwpCloseLogger @ 0x1400621D0 (EtwpCloseLogger.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiUpdateWorkingSetPrivateSize @ 0x1400AD7A8 (MiUpdateWorkingSetPrivateSize.c)
 *     MiCapturePageFileInfoInline @ 0x1400B221C (MiCapturePageFileInfoInline.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x1400B8750 (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MiLockNestedPageAtDpcInline @ 0x1400BABE0 (MiLockNestedPageAtDpcInline.c)
 *     MI_MAKE_PROTECT_WRITE_COPY @ 0x1400C3000 (MI_MAKE_PROTECT_WRITE_COPY.c)
 *     MiReleasePageFileInfo @ 0x1400D6FBC (MiReleasePageFileInfo.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAreInterruptsEnabled @ 0x1400F0B30 (KeAreInterruptsEnabled.c)
 *     EtwpReserveTraceBuffer @ 0x1400F0B50 (EtwpReserveTraceBuffer.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     MiIdentifyPfn @ 0x1401056D0 (MiIdentifyPfn.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     MiGetPfnPriority @ 0x14011B8F0 (MiGetPfnPriority.c)
 *     MiLockLeafPage @ 0x1401249A0 (MiLockLeafPage.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MiGetWsleContents @ 0x140125350 (MiGetWsleContents.c)
 *     MiRebuildPageTableLeafAges @ 0x140125A40 (MiRebuildPageTableLeafAges.c)
 *     MI_WSLE_LOG_ACCESS @ 0x14012A21C (MI_WSLE_LOG_ACCESS.c)
 *     MmCanThreadFault @ 0x140130A80 (MmCanThreadFault.c)
 *     MiReturnResidentAvailable @ 0x14013511C (MiReturnResidentAvailable.c)
 *     MiFillCombinePage @ 0x140138480 (MiFillCombinePage.c)
 *     MiSetWsleProtection @ 0x14013FA7C (MiSetWsleProtection.c)
 *     IPT_TRACING_ENABLED @ 0x140172AD0 (IPT_TRACING_ENABLED.c)
 *     LBR_TRACING_ENABLED @ 0x140172AF0 (LBR_TRACING_ENABLED.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MiGetContainingPageTable @ 0x1401A64B8 (MiGetContainingPageTable.c)
 *     MiMakePrototypePteDirect @ 0x1401A6614 (MiMakePrototypePteDirect.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     MI_GET_PFN_FROM_PTE @ 0x140264BA4 (MI_GET_PFN_FROM_PTE.c)
 *     MiGetCrossPartitionCombineCharges @ 0x14026BCF0 (MiGetCrossPartitionCombineCharges.c)
 *     MiReturnCrossPartitionCombineCharges @ 0x14026BE44 (MiReturnCrossPartitionCombineCharges.c)
 *     EtwpQueueStackWalkApc @ 0x1402AE070 (EtwpQueueStackWalkApc.c)
 *     EtwpTraceStackWalk @ 0x1402AE564 (EtwpTraceStackWalk.c)
 *     EtwpGetNextEventOffsetType @ 0x1402B3B84 (EtwpGetNextEventOffsetType.c)
 *     EtwpTraceLastBranchRecord @ 0x1402B617C (EtwpTraceLastBranchRecord.c)
 *     EtwpTraceProcessorTrace @ 0x1402B6360 (EtwpTraceProcessorTrace.c)
 *     EtwpSendDbgId @ 0x1407AD100 (EtwpSendDbgId.c)
 *     KdSendTraceData @ 0x140803EE0 (KdSendTraceData.c)
 */

__int64 __fastcall MiConvertPrivateToProto(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rdi
  __int64 v9; // r11
  __int64 v10; // r10
  __int64 v11; // rdx
  __int64 *v12; // r9
  __int64 v13; // r12
  __int64 v14; // r15
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 v17; // rbx
  __int64 v18; // r8
  __int64 v19; // r13
  __int64 v20; // rdx
  __int64 v21; // r9
  __int64 v22; // r10
  __int64 v23; // r8
  __int64 v24; // r9
  _QWORD *v25; // rdi
  __int64 v26; // r9
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // r11
  __int64 v30; // rcx
  __int64 v31; // r11
  unsigned __int64 v32; // rdi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r13
  ULONG_PTR v36; // r13
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  ULONG_PTR v41; // r14
  char v42; // cl
  unsigned __int64 v43; // rbx
  char v44; // di
  struct _KPRCB *CurrentPrcb; // rax
  _QWORD *v46; // rbx
  _QWORD *MmInternal; // r11
  unsigned __int64 v48; // r15
  __int64 v49; // rdx
  __int64 v50; // rcx
  unsigned __int64 v51; // r8
  __int64 v52; // r9
  unsigned int v53; // r10d
  __int64 v54; // r11
  struct _KPRCB *v55; // rdi
  unsigned __int64 HyperPte; // rbx
  unsigned int PfnPriority; // eax
  __int64 v58; // rdx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rdx
  __int64 v62; // r8
  __int64 v63; // r9
  unsigned __int64 v64; // r14
  __int64 v65; // rcx
  char WsleContents; // di
  int v67; // r13d
  __int64 v68; // rbx
  __int64 v69; // rcx
  __int64 v70; // rbx
  unsigned __int64 v71; // rsi
  unsigned int v72; // r13d
  bool v73; // zf
  __int64 v74; // rcx
  __int64 v75; // r15
  __int64 v76; // rax
  __int64 v77; // r14
  unsigned __int8 v78; // bl
  struct _KTHREAD *CurrentThread; // rax
  __int64 v80; // rax
  __int64 v81; // rdi
  __int64 v82; // rsi
  __int64 v83; // rax
  unsigned int v84; // r12d
  char *v85; // r13
  const void **v86; // r14
  __int64 v87; // r15
  _KPROCESS *v88; // rax
  __int64 v89; // xmm0_8
  __int64 v90; // r9
  volatile signed __int64 *v91; // rdx
  signed __int64 *v92; // roff
  signed __int64 v93; // rax
  __int64 v94; // r8
  unsigned __int64 v95; // rcx
  signed __int64 v96; // rtt
  struct _KTHREAD *v97; // rdi
  unsigned __int8 CurrentIrql; // r14
  int NestingLevel; // ecx
  __int64 v100; // rdx
  char v102; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v103; // [rsp+31h] [rbp-CFh]
  __int64 v104; // [rsp+38h] [rbp-C8h]
  char v105; // [rsp+40h] [rbp-C0h]
  int v106; // [rsp+44h] [rbp-BCh]
  int v107; // [rsp+44h] [rbp-BCh]
  unsigned int v109; // [rsp+48h] [rbp-B8h]
  __int64 v110; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v111; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v112; // [rsp+60h] [rbp-A0h]
  __int64 v113; // [rsp+68h] [rbp-98h]
  unsigned int v114; // [rsp+70h] [rbp-90h] BYREF
  int v115; // [rsp+74h] [rbp-8Ch]
  __int64 v116; // [rsp+78h] [rbp-88h]
  __int64 ContainingPageTable; // [rsp+80h] [rbp-80h]
  _KPROCESS *Process; // [rsp+88h] [rbp-78h]
  __int64 v119; // [rsp+90h] [rbp-70h] BYREF
  __int64 v120; // [rsp+98h] [rbp-68h]
  __int64 v121; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v122; // [rsp+A8h] [rbp-58h]
  __int64 v123; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v124; // [rsp+B8h] [rbp-48h]
  __int64 v125; // [rsp+C0h] [rbp-40h] BYREF
  volatile signed __int64 *v126; // [rsp+C8h] [rbp-38h]
  unsigned int v127; // [rsp+D0h] [rbp-30h]
  __int64 v128; // [rsp+D8h] [rbp-28h]
  _OWORD *v129; // [rsp+E0h] [rbp-20h] BYREF
  int v130; // [rsp+E8h] [rbp-18h]
  __int64 v131; // [rsp+F0h] [rbp-10h]
  unsigned int v132; // [rsp+F8h] [rbp-8h]
  _OWORD v133[3]; // [rsp+100h] [rbp+0h] BYREF
  __int128 v134; // [rsp+130h] [rbp+30h]
  __int64 v135; // [rsp+140h] [rbp+40h]
  _QWORD v136[2]; // [rsp+150h] [rbp+50h] BYREF
  int v137; // [rsp+160h] [rbp+60h] BYREF
  __int16 v138; // [rsp+164h] [rbp+64h]
  __int64 v139; // [rsp+168h] [rbp+68h]
  __int64 v140; // [rsp+170h] [rbp+70h]
  __int64 v141; // [rsp+178h] [rbp+78h]

  v7 = a3 + 48;
  v116 = a1;
  v112 = a6;
  Process = KeGetCurrentThread()->ApcState.Process;
  v106 = DWORD1(PerfGlobalGroupMask) & 0x8000001;
  v113 = a3;
  v111 = MI_READ_PTE_LOCK_FREE(a2);
  v8 = v111;
  v104 = MI_GET_PFN_FROM_PTE(&v111);
  v11 = *(unsigned __int16 *)(v10 + 174);
  v13 = *v12;
  v103 = 0;
  v14 = v9 << 25 >> 16;
  v124 = v14;
  v102 = 1;
  v15 = *(_QWORD *)(qword_1403CBD88 + 8 * v11);
  v123 = v15;
  if ( a7 == -1 )
  {
    v102 = 1;
    if ( v13 != v15 )
    {
      v103 = 1;
      if ( !(unsigned int)MiGetCrossPartitionCombineCharges(v13, 1LL, v104) )
        return 0LL;
      v102 = 0;
    }
    v36 = MiLockProtoPoolPage(v7, 0LL);
    if ( v36 )
    {
      v37 = MiLockLeafPage(v7, 0LL);
      v41 = v37;
      if ( v37 )
      {
        if ( (*(_BYTE *)(v37 + 35) & 0x40) == 0
          && v13 == *(_QWORD *)(qword_1403CBD88 + 8 * ((*(_QWORD *)(v37 + 40) >> 40) & 0x3FFLL)) )
        {
          v42 = *(_BYTE *)(v37 + 34);
          if ( (v42 & 7) == 6 || (v42 & 0x20) == 0 )
          {
            v43 = MiMapPageInHyperSpaceWorker((v37 + 0x58000000000LL) / 48, 0LL, 0x80000000, v40);
            v44 = MiComparePages(v43, v14);
            v105 = v44;
            CurrentPrcb = KeGetCurrentPrcb();
            v46 = (_QWORD *)(((v43 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
            ContainingPageTable = (__int64)CurrentPrcb;
            MmInternal = CurrentPrcb->MmInternal;
            if ( MmInternal )
            {
              MmInternal[1543] = 0LL;
              v48 = 0LL;
            }
            else
            {
              v48 = (unsigned __int64)CurrentPrcb->HyperPte & 0xFFFFFFFFFFFFF000uLL;
            }
            *v46 = ZeroPte;
            if ( MiPteInShadowRange((unsigned __int64)v46) )
            {
              MiWritePteShadow(v50, v49);
              v51 = v48;
              v52 = 0LL;
            }
            if ( !v54 )
            {
              if ( v53 == 64 )
              {
                v55 = KeGetCurrentPrcb();
                HyperPte = (unsigned __int64)v55->HyperPte;
                v137 = v52;
                HyperPte &= 0xFFFFFFFFFFFFF000uLL;
                v140 = v52;
                v141 = v52;
                v139 = 20LL;
                v138 = 1;
                MiInsertTbFlushEntry((__int64)&v137, HyperPte, 64LL, 0);
                MiFlushTbList(&v137);
                v55->HyperPte = (void *)HyperPte;
                v53 = 0;
                v44 = v105;
                v51 = v48;
              }
              *(_QWORD *)(ContainingPageTable + 24320) = v51 | v53;
            }
            if ( v44 == 1 )
            {
              PfnPriority = MiGetPfnPriority(v104);
              MiUpdatePfnPriority(v41, PfnPriority, 0);
            }
            _InterlockedAnd64((volatile signed __int64 *)(v41 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            MiLockPageAtDpcInline(v36);
            *(_BYTE *)(v36 + 34) &= ~0x20u;
            MiRemoveLockedPageChargeAndDecRef(v36, v58, v59, v60);
            _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( !v44 )
              goto LABEL_151;
            if ( dword_1403CBF28 )
              MI_WSLE_LOG_ACCESS(v116, a2);
            MiMakePrototypePteDirect(v7, v61, v62, v63);
            v64 = v124;
            WsleContents = MiGetWsleContents(v65, v124);
            MiLockPageAtDpcInline(v104);
            if ( (*(_QWORD *)(v104 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 && *(_WORD *)(v104 + 32) == 1 )
            {
              v67 = MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED(a2);
              if ( v106 )
              {
                v119 = 0LL;
                v120 = 0LL;
                v121 = 0LL;
                v122 = 0LL;
                MiIdentifyPfn(v104, &v119);
              }
              *(_QWORD *)(v104 + 24) |= 0x4000000000000000uLL;
              *(_BYTE *)(v104 + 34) |= 7u;
              v68 = *(_QWORD *)(v104 + 40) & 0xFFFFFFFFFLL;
              _InterlockedAnd64((volatile signed __int64 *)(v104 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( v67 == 1 )
                MiInsertTbFlushEntry(v112, v64, 1LL, 0);
              v35 = v116;
              MiRemoveWsle(v116, v64, WsleContents, 10, 1);
              MiRebuildPageTableLeafAges(v69, v64);
              v70 = 48 * v68 - 0x58000000000LL;
              MiLockPageAtDpcInline(v70);
              MiDecrementShareCount(v70);
              _InterlockedAnd64((volatile signed __int64 *)(v70 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( !v102 && _InterlockedIncrement64((volatile signed __int64 *)(v113 + 56)) != 1 )
                MiReturnCrossPartitionCombineCharges(v13, 1LL);
              MiResolveProtoCombine(a2, v35, v7);
              goto LABEL_81;
            }
            goto LABEL_47;
          }
        }
        _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      LOBYTE(v38) = 17;
      MiUnlockProtoPoolPage(v36, v38, v39, v40);
    }
LABEL_151:
    if ( !v102 )
      MiReturnCrossPartitionCombineCharges(v13, v103);
    return 0LL;
  }
  v16 = 48 * a7 - 0x58000000000LL;
  if ( !(unsigned int)MiFillCombinePage(a7, v16, v104, v9 << 25 >> 16) )
    return 0LL;
  v128 = v7 & 0x7FFFFFFFFFFFFFFFLL;
  v17 = 0LL;
  ContainingPageTable = MiGetContainingPageTable(v7);
  v19 = 48 * ContainingPageTable - 0x58000000000LL;
  if ( v13 != v123 )
  {
    if ( (unsigned int)MiGetCrossPartitionCombineCharges(v13, 0LL, v18) )
    {
      v102 = 0;
      goto LABEL_6;
    }
    return 0LL;
  }
LABEL_6:
  MiLockPageAtDpcInline(v104);
  v22 = v104;
  if ( (*(_QWORD *)(v104 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 || *(_WORD *)(v104 + 32) != 1 )
  {
LABEL_47:
    _InterlockedAnd64((volatile signed __int64 *)(v104 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_151;
  }
  if ( v106 )
  {
    v119 = 0LL;
    v120 = 0LL;
    v121 = 0LL;
    v122 = 0LL;
    MiIdentifyPfn(v104, &v119);
    v22 = v104;
  }
  if ( (v8 & 0x42) != 0 )
    v111 = v8 & 0xFFFFFFFFFFFFFFBDuLL;
  v23 = *(unsigned __int8 *)(v22 + 34);
  if ( (v23 & 0x10) == 0 && !(unsigned int)IS_PTE_NOT_DEMAND_ZERO(*(_QWORD *)(v22 + 16), v20, v23, v21) )
  {
    LOBYTE(v23) = v23 | 0x10;
    *(_BYTE *)(v22 + 34) = v23;
  }
  v24 = *(_QWORD *)(v22 + 16);
  v25 = (_QWORD *)(v22 + 16);
  if ( (v24 & 2) != 0 )
  {
    if ( v102 )
    {
      if ( (unsigned int)MI_IS_PTE_IN_WS_SWAP_SET(v123, v22 + 16, v23, v24) )
      {
        v17 = MiCapturePageFileInfoInline(v25, 1LL);
        *(_BYTE *)(v104 + 34) |= 0x10u;
        *v25 &= ~2uLL;
      }
      else
      {
        *v25 &= ~2uLL;
        v17 = v26;
      }
    }
    else
    {
      v17 = MiCapturePageFileInfoInline(v22 + 16, 1LL);
      *(_BYTE *)(v104 + 34) |= 0x10u;
      *v25 &= ~2uLL;
    }
  }
  else if ( !v102 && (v24 & 4) != 0 )
  {
    v17 = MiCapturePageFileInfoInline(v22 + 16, 1LL);
    *(_BYTE *)(v104 + 34) |= 0x10u;
  }
  MiLockNestedPageAtDpcInline(v16);
  MiFinalizePageAttribute(v16, *(unsigned __int8 *)(v104 + 34) >> 6, 1LL);
  MiCopyPfnEntry(v16, v104);
  if ( (unsigned int)MiGetPfnPriority(v27) < 5 )
    *(_BYTE *)(v16 + 35) = *(_BYTE *)(v16 + 35) & 0xF8 | 5;
  v28 = ContainingPageTable;
  *(_QWORD *)(v16 + 8) = v128;
  *(_QWORD *)(v16 + 40) = *(_QWORD *)(v16 + 40) & 0xFFFFFFF000000000uLL | v28 & 0xFFFFFFFFFLL | 0x200000000000000LL;
  MI_MAKE_PROTECT_WRITE_COPY(v16 + 16);
  _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v102 )
  {
    if ( (*v25 & 4) != 0 )
    {
      *v25 &= ~4uLL;
      if ( v17 )
        v17 &= ~4uLL;
    }
  }
  v111 ^= (v111 ^ (a7 << 12)) & 0xFFFFFFFFF000LL;
  if ( (v111 & 0x800) != 0 )
    v111 = v111 & 0xFFFFFFFFFFFFF5FFuLL | 0x200;
  MiWriteValidPteNewPage(a2);
  if ( !v102 )
    *(_QWORD *)(v113 + 56) = 1LL;
  *(_QWORD *)v7 = 0LL;
  *(_QWORD *)v7 = v29;
  if ( MiPteInShadowRange(v7) )
    MiWritePteShadow(v30, v31);
  *(_QWORD *)(v104 + 24) |= 0x4000000000000000uLL;
  *(_BYTE *)(v104 + 34) |= 7u;
  _InterlockedAnd64((volatile signed __int64 *)(v104 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v32 = v124;
  MiInsertTbFlushEntry(v112, v124, 1LL, 0);
  if ( v17 )
    MiReleasePageFileInfo(*(_QWORD *)(qword_1403CBD88 + 8 * ((*(_QWORD *)(v104 + 40) >> 40) & 0x3FFLL)), v17, 1LL);
  MiLockPageAtDpcInline(v19);
  v33 = *(_QWORD *)(v19 + 24);
  v34 = v33 ^ ((v33 + 1) ^ v33) & 0x3FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(v19 + 24) = v34;
  _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v102 == 1 )
  {
    if ( (ULONG_PTR *)v13 == &MiSystemPartition )
      MiReturnResidentAvailable(1LL, v33);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v13 + 7104), 1uLL);
    MiReturnCommit(v13, 1uLL);
    if ( (ULONG_PTR *)v13 == &MiSystemPartition )
      _InterlockedExchangeAdd64(&qword_1403CC658, 0xFFFFFFFFFFFFFFFFuLL);
  }
  v35 = v116;
  if ( (*(_BYTE *)(v116 + 184) & 7) == 0 )
    MiSetWsleProtection(v34, v32, 0LL);
  MiUpdateWorkingSetPrivateSize(v35, v32, -1LL, 0LL);
LABEL_81:
  if ( (*(_BYTE *)(v35 + 184) & 7) == 0 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], 0xFFFFFFFFFFFFFFFFuLL);
  if ( v106 )
  {
    v71 = a7 == -1 ? v7 & 0xFFFFFFFFFFFFFFFEuLL : v7 | 1;
    v122 = v71;
    v136[0] = &v119;
    v136[1] = 32LL;
    v72 = *(_DWORD *)(EtwpHostSiloState + 4188);
    v73 = !_BitScanForward((unsigned int *)&v74, v72);
    v115 = v74;
    while ( !v73 )
    {
      v75 = EtwpHostSiloState;
      v72 &= v72 - 1;
      v113 = EtwpHostSiloState;
      v109 = v72;
      v76 = EtwpHostSiloState + 32 * (v74 + 132);
      if ( !v76 || (*(_DWORD *)(v76 + 4) & 0x8000001) == 0 )
        goto LABEL_146;
      v77 = *(unsigned __int8 *)(EtwpHostSiloState + 2 * v74 + 4172);
      v78 = 0;
      if ( KeGetCurrentIrql() < 2u )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        if ( !ExAcquireRundownProtectionCacheAwareEx(
                *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v75 + 424) + 8 * v77),
                1u) )
        {
          KeLeaveCriticalRegion();
          goto LABEL_146;
        }
        v78 = 1;
      }
      v80 = *(_QWORD *)(v75 + 432);
      v81 = 8 * v77;
      v112 = 8 * v77;
      v82 = *(_QWORD *)(8 * v77 + v80);
      if ( (v82 & 1) != 0 )
      {
        EtwpCloseLogger((unsigned int)v77, v75, v78);
      }
      else if ( v82 )
      {
        v83 = EtwpReserveTraceBuffer(v82, 56, (unsigned int)&v125, (unsigned int)&v110, 289413890);
        if ( v83 )
        {
          *(_DWORD *)v83 = -1073479678;
          *(_QWORD *)(v83 + 16) = v110;
          *(_DWORD *)(v83 + 4) = 41549880;
          *(_DWORD *)(v83 + 8) = *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
          *(_DWORD *)(v83 + 12) = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
          Process = (_KPROCESS *)(v83 + 24);
          if ( v83 != -24 )
          {
            v84 = 32;
            v107 = 0;
            v85 = (char *)(v83 + 24);
            v86 = (const void **)v136;
            while ( 1 )
            {
              v87 = *((unsigned int *)v86 + 2);
              if ( (unsigned int)v87 > v84 )
                break;
              memmove(v85, *v86, (unsigned int)v87);
              v85 += v87;
              v84 -= v87;
              v86 += 2;
              if ( ++v107 )
                goto LABEL_105;
            }
            v88 = Process;
            *(_QWORD *)&Process->Header.Lock = 0LL;
            v88->Header.WaitListHead.Flink = 0LL;
            v88->Header.WaitListHead.Blink = 0LL;
            v88->ProfileListHead.Flink = 0LL;
            _InterlockedIncrement((volatile signed __int32 *)(v82 + 256));
            if ( (*(_DWORD *)(v82 + 832) & 8) != 0 )
              *(_DWORD *)(v82 + 464) = 1;
LABEL_105:
            if ( (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent)
              && (*(_DWORD *)(v82 + 12) & 0x80000) != 0 )
            {
              if ( (*(_DWORD *)(v82 + 836) & 0x800) != 0
                && (unsigned __int8)((__int64 (*)(void))KeAreInterruptsEnabled)()
                && KeGetCurrentIrql() < 2u )
              {
                EtwpSendDbgId(v82);
              }
              if ( (unsigned int)EtwpGetNextEventOffsetType(v125, v127, &v114)
                && (unsigned __int64)v114 + 72 <= (unsigned int)(KdTransportMaxPacketSize - 64) )
              {
                v133[0] = *(_OWORD *)v125;
                v133[1] = *(_OWORD *)(v125 + 16);
                v133[2] = *(_OWORD *)(v125 + 32);
                v134 = *(_OWORD *)(v125 + 48);
                v89 = *(_QWORD *)(v125 + 64);
                LODWORD(v133[0]) = v114 + 72;
                LODWORD(v134) = v114 + 72;
                v129 = v133;
                v132 = v114;
                v131 = v125 + v127;
                v135 = v89;
                v130 = 72;
                KdSendTraceData(&v129, 2LL);
              }
            }
            v90 = v125;
            v91 = v126;
            v92 = (signed __int64 *)v126;
            _m_prefetchw((const void *)v126);
            v93 = *v92;
            v94 = v125;
            v95 = v125 ^ *v92;
            if ( v95 >= 0xF )
            {
LABEL_120:
              _InterlockedDecrement((volatile signed __int32 *)(v94 + 12));
            }
            else
            {
              while ( 1 )
              {
                v95 = v93 + 1;
                v96 = v93;
                v93 = _InterlockedCompareExchange64(v91, v93 + 1, v93);
                if ( v96 == v93 )
                  break;
                v95 = v90 ^ v93;
                if ( (v90 ^ (unsigned __int64)v93) >= 0xF )
                {
                  v94 = v125;
                  goto LABEL_120;
                }
              }
            }
            if ( (*(_DWORD *)(v82 + 832) & 0x80u) != 0
              && _bittest((const signed __int32 *)(*(_QWORD *)(v82 + 984) + 76LL), 0x1Au) )
            {
              v97 = KeGetCurrentThread();
              if ( (v97->MiscFlags & 0x400) != 0 || (*(_DWORD *)(&v97[1].SwapListEntry + 1) & 1) != 0 )
                goto LABEL_138;
              if ( !(unsigned __int8)KeAreInterruptsEnabled(v95, v91, v94, v90) )
              {
                CurrentIrql = 15;
                goto LABEL_128;
              }
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql < 2u )
              {
                if ( (*(_DWORD *)(v82 + 832) & 0x1000000) == 0 || (*(_DWORD *)(&v97[1].SwapListEntry + 1) & 1) != 0 )
                  MmCanThreadFault();
              }
              else
              {
LABEL_128:
                NestingLevel = KeGetCurrentPrcb()->NestingLevel;
                if ( CurrentIrql == 2 )
                {
                  if ( !NestingLevel )
                  {
                    v100 = 2LL;
                    goto LABEL_137;
                  }
                  goto LABEL_138;
                }
                if ( NestingLevel )
                  goto LABEL_138;
              }
              v100 = CurrentIrql;
LABEL_137:
              EtwpQueueStackWalkApc(v97, v100, v82, &v110);
LABEL_138:
              EtwpTraceStackWalk(v82, 289409794LL, v97, &v110);
            }
            if ( (unsigned __int8)LBR_TRACING_ENABLED(v82, 634LL, v94, v90) )
              EtwpTraceLastBranchRecord(v82, &v110, 0LL, 289413890LL);
            if ( (unsigned __int8)IPT_TRACING_ENABLED(v82, 634LL) )
              EtwpTraceProcessorTrace(v82, &v110, 0LL, 289413890LL);
            v81 = v112;
            v72 = v109;
            v75 = v113;
          }
        }
        if ( v78 )
        {
          ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v75 + 424) + v81), 1u);
          KeLeaveCriticalRegionThread(KeGetCurrentThread());
        }
      }
LABEL_146:
      v73 = !_BitScanForward((unsigned int *)&v74, v72);
      v115 = v74;
    }
  }
  return v104;
}
