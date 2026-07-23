/*
 * XREFs of MiConvertPrivateToProto @ 0x140102200
 * Callers:
 *     MiSharePages @ 0x1400A3D30 (MiSharePages.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400053B0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     MiCapturePageFileInfoInline @ 0x14001DE1C (MiCapturePageFileInfoInline.c)
 *     MiLockNestedPageAtDpcInline @ 0x14002126C (MiLockNestedPageAtDpcInline.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x1400224C0 (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MiFillCombinePage @ 0x140025418 (MiFillCombinePage.c)
 *     MiWriteValidPteNewPage @ 0x14002820C (MiWriteValidPteNewPage.c)
 *     KeInsertQueueApc @ 0x14003FEC0 (KeInsertQueueApc.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140061BB0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     PsQueryThreadStartAddress @ 0x14006B8C4 (PsQueryThreadStartAddress.c)
 *     MiSetWsleProtection @ 0x14006D394 (MiSetWsleProtection.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x14007C3EC (IS_PTE_NOT_DEMAND_ZERO.c)
 *     EtwpReserveTraceBuffer @ 0x140086960 (EtwpReserveTraceBuffer.c)
 *     EtwpCloseLogger @ 0x14008788C (EtwpCloseLogger.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiLockProtoPoolPage @ 0x1400A1530 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x1400A3920 (MiUnlockProtoPoolPage.c)
 *     MiReleasePageFileInfo @ 0x1400ABFD4 (MiReleasePageFileInfo.c)
 *     MiGetPfnPriority @ 0x1400C3D60 (MiGetPfnPriority.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1400CCB60 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiReturnResidentAvailable @ 0x1400CCD70 (MiReturnResidentAvailable.c)
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 *     MiRemoveWsle @ 0x1400D4A00 (MiRemoveWsle.c)
 *     MiIdentifyPfn @ 0x1400DBC70 (MiIdentifyPfn.c)
 *     KeAreInterruptsEnabled @ 0x1400E2B84 (KeAreInterruptsEnabled.c)
 *     KiDeliverApc @ 0x1400ECA80 (KiDeliverApc.c)
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     MiGetWsleContents @ 0x1400FBED0 (MiGetWsleContents.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140100920 (MI_WSLE_LOG_ACCESS.c)
 *     MiUpdatePfnPriority @ 0x1401020F8 (MiUpdatePfnPriority.c)
 *     MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED @ 0x140102188 (MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED.c)
 *     MiUpdateWorkingSetPrivateSize @ 0x140103108 (MiUpdateWorkingSetPrivateSize.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140103140 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiComparePages @ 0x1401031F0 (MiComparePages.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1401038C0 (MiMapPageInHyperSpaceWorker.c)
 *     MiLockLeafPage @ 0x140104100 (MiLockLeafPage.c)
 *     MiDecrementShareCount @ 0x1401055F0 (MiDecrementShareCount.c)
 *     MiFinalizePageAttribute @ 0x140105D40 (MiFinalizePageAttribute.c)
 *     MiResolveProtoCombine @ 0x140105DB0 (MiResolveProtoCombine.c)
 *     MiCopyPfnEntry @ 0x14010C150 (MiCopyPfnEntry.c)
 *     KeInitializeApc @ 0x14010F400 (KeInitializeApc.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiGetContainingPageTable @ 0x14017CDC0 (MiGetContainingPageTable.c)
 *     MiMakePrototypePteDirect @ 0x14017CF4C (MiMakePrototypePteDirect.c)
 *     RtlpInterlockedPopEntrySList @ 0x140189470 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401894B0 (RtlpInterlockedPushEntrySList.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14021EE3C (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     EtwpQueueStackWalkApc @ 0x140256B58 (EtwpQueueStackWalkApc.c)
 *     EtwpTraceStackWalk @ 0x140256F38 (EtwpTraceStackWalk.c)
 *     EtwpSendDbgId @ 0x14070F004 (EtwpSendDbgId.c)
 *     KdSendTraceData @ 0x140789C3C (KdSendTraceData.c)
 */

__int64 __fastcall MiConvertPrivateToProto(
        __int64 a1,
        _BYTE *a2,
        unsigned __int64 a3,
        void *a4,
        __int64 a5,
        __int64 a6)
{
  unsigned __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r10
  unsigned __int64 v12; // rbx
  __int64 *v13; // r9
  __int64 v14; // rcx
  __int64 v15; // r12
  __int64 v16; // r14
  __int64 v17; // r13
  __int64 v18; // r8
  __int64 v19; // r10
  char v20; // r8
  __int64 v21; // r9
  _QWORD *v22; // rdi
  unsigned __int64 v23; // r9
  int v24; // r11d
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // r11
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // r10
  __int64 v32; // rdi
  __int64 v33; // r14
  __int64 v34; // rax
  __int64 v35; // rdi
  char v36; // cl
  __int64 v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // rcx
  char WsleContents; // di
  __int64 v41; // r8
  __int64 v42; // r11
  int v43; // r14d
  __int64 v44; // rbx
  __int64 v45; // rbx
  char v46; // r8
  __int64 v47; // rcx
  unsigned __int64 v48; // rdx
  __int64 v49; // rbx
  unsigned __int64 v50; // rsi
  unsigned int v51; // r15d
  int v52; // r13d
  bool v53; // zf
  __int64 v54; // rcx
  char *v55; // rax
  __int64 v56; // rsi
  char v57; // bl
  __int64 v58; // rdi
  struct _KTHREAD *v59; // rax
  __int64 v60; // r14
  __int64 v61; // rax
  unsigned int v62; // r15d
  const void **v63; // rsi
  char *v64; // r12
  __int64 v65; // r14
  __int64 v66; // rdi
  _KPROCESS *v67; // rax
  unsigned __int64 v68; // r8
  __int64 v69; // r9
  unsigned int v70; // edx
  char *v71; // r15
  int v72; // r11d
  bool v73; // cf
  unsigned int v74; // edx
  __int64 v75; // xmm0_8
  volatile signed __int64 *v76; // rdx
  signed __int64 *v77; // roff
  signed __int64 v78; // rax
  unsigned __int64 v79; // r9
  signed __int64 v80; // rtt
  int v81; // r15d
  unsigned int v82; // r15d
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int8 CurrentIrql; // r14
  int NestingLevel; // ecx
  void *EtwSupport; // rsi
  unsigned int v87; // r14d
  _SLIST_ENTRY *v88; // r12
  int v89; // eax
  struct _KTHREAD *v90; // rsi
  struct _KTHREAD *v91; // rcx
  __int16 v92; // ax
  char v94; // [rsp+40h] [rbp-C0h]
  BOOL v95; // [rsp+44h] [rbp-BCh]
  unsigned int v96; // [rsp+44h] [rbp-BCh]
  __int64 v97; // [rsp+48h] [rbp-B8h]
  bool v98; // [rsp+50h] [rbp-B0h]
  __int64 v99; // [rsp+50h] [rbp-B0h]
  __int64 v101; // [rsp+58h] [rbp-A8h]
  __int64 v103; // [rsp+60h] [rbp-A0h]
  __int64 v104; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v105; // [rsp+70h] [rbp-90h] BYREF
  _KPROCESS *Process; // [rsp+78h] [rbp-88h]
  int v107; // [rsp+80h] [rbp-80h]
  __int64 v108; // [rsp+88h] [rbp-78h] BYREF
  __int64 v109; // [rsp+90h] [rbp-70h]
  __int64 v110; // [rsp+98h] [rbp-68h]
  unsigned __int64 v111; // [rsp+A0h] [rbp-60h]
  __int64 v112; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v113; // [rsp+B0h] [rbp-50h] BYREF
  volatile signed __int64 *v114; // [rsp+B8h] [rbp-48h]
  unsigned int v115; // [rsp+C0h] [rbp-40h]
  void *v116; // [rsp+C8h] [rbp-38h]
  __int64 v117; // [rsp+D0h] [rbp-30h]
  __int64 ContainingPageTable; // [rsp+D8h] [rbp-28h]
  __int64 v119; // [rsp+E0h] [rbp-20h]
  _OWORD *v120; // [rsp+E8h] [rbp-18h] BYREF
  int v121; // [rsp+F0h] [rbp-10h]
  char *v122; // [rsp+F8h] [rbp-8h]
  unsigned int v123; // [rsp+100h] [rbp+0h]
  _OWORD v124[3]; // [rsp+110h] [rbp+10h] BYREF
  __int128 v125; // [rsp+140h] [rbp+40h]
  __int64 v126; // [rsp+150h] [rbp+50h]
  _QWORD v127[2]; // [rsp+160h] [rbp+60h] BYREF

  v112 = a5;
  v116 = a4;
  Process = KeGetCurrentThread()->ApcState.Process;
  v95 = (DWORD1(PerfGlobalGroupMask) & 0x8000001) != 0;
  v105 = MI_READ_PTE_LOCK_FREE(a2);
  v7 = v105;
  v97 = MI_GET_PFN_FROM_PTE(&v105, v8, v9, v10);
  v12 = 0LL;
  v14 = *v13;
  v15 = v11 << 25 >> 16;
  v119 = *v13;
  if ( a6 == -1 )
  {
    v33 = MiLockProtoPoolPage(a3, 0LL);
    if ( !v33 )
      return 0LL;
    v34 = MiLockLeafPage(a3, 0LL);
    v35 = v34;
    if ( v34 )
    {
      if ( (*(_BYTE *)(v34 + 35) & 0x40) == 0 )
      {
        v36 = *(_BYTE *)(v34 + 34);
        if ( (v36 & 7) == 6 || (v36 & 0x20) == 0 )
        {
          v37 = MiMapPageInHyperSpaceWorker((v34 + 0x58000000000LL) / 48, 0LL, 0x80000000LL);
          v94 = MiComparePages(v37, v15);
          LOBYTE(v38) = 17;
          MiUnmapPageInHyperSpaceWorker(v37, v38, 0x80000000LL);
          if ( v94 == 1 )
          {
            MiGetPfnPriority(v97);
            MiUpdatePfnPriority(v35);
          }
          _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          MiLockPageAtDpcInline(v33);
          *(_BYTE *)(v33 + 34) &= ~0x20u;
          MiRemoveLockedPageChargeAndDecRef(v33);
          _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( !v94 )
            return 0LL;
          if ( dword_14036CA68 )
            MI_WSLE_LOG_ACCESS(a1, a2);
          MiMakePrototypePteDirect(a3);
          WsleContents = MiGetWsleContents(v39, v15);
          MiLockPageAtDpcInline(v97);
          if ( (*(_QWORD *)(v97 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 && *(_WORD *)(v97 + 32) == 1 )
          {
            v43 = MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED((__int64)a2);
            if ( v95 )
            {
              v108 = 0LL;
              v109 = 0LL;
              v110 = 0LL;
              v111 = 0LL;
              MiIdentifyPfn((_OWORD *)v42, &v108, v41);
              v42 = v97;
            }
            v44 = *(_QWORD *)(v42 + 40);
            *(_QWORD *)(v42 + 24) |= 0x4000000000000000uLL;
            *(_BYTE *)(v42 + 34) |= 7u;
            v45 = v44 & 0xFFFFFFFFFLL;
            _InterlockedAnd64((volatile signed __int64 *)(v42 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( v43 == 1 )
              MiInsertTbFlushEntry(v112, v15, 1LL, 0);
            MiUpdateWorkingSetPrivateSize(a1, v15, -1LL);
            v46 = WsleContents;
            v32 = v47;
            MiRemoveWsle(v47, v48, v46, 10);
            v49 = 48 * v45 - 0x58000000000LL;
            MiLockPageAtDpcInline(v49);
            MiDecrementShareCount(v49);
            _InterlockedAnd64((volatile signed __int64 *)(v49 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            MiResolveProtoCombine(a2, v32, a3);
            goto LABEL_62;
          }
          goto LABEL_44;
        }
      }
      _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    MiUnlockProtoPoolPage(v33, 0x11u);
    return 0LL;
  }
  v16 = 48 * a6 - 0x58000000000LL;
  if ( !(unsigned int)MiFillCombinePage(v14, v16, v97, v11 << 25 >> 16) )
    return 0LL;
  v117 = a3 & 0x7FFFFFFFFFFFFFFFLL;
  ContainingPageTable = MiGetContainingPageTable(a3);
  v17 = 48 * ContainingPageTable - 0x58000000000LL;
  v98 = v116 != &unk_14036C718;
  MiLockPageAtDpcInline(v97);
  v19 = v97;
  if ( (*(_QWORD *)(v97 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 || *(_WORD *)(v97 + 32) != 1 )
  {
LABEL_44:
    _InterlockedAnd64((volatile signed __int64 *)(v97 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return 0LL;
  }
  if ( v95 )
  {
    v108 = 0LL;
    v109 = 0LL;
    v110 = 0LL;
    v111 = 0LL;
    MiIdentifyPfn((_OWORD *)v97, &v108, v18);
    v19 = v97;
  }
  if ( (v7 & 0x42) != 0 )
    v105 = v7 & 0xFFFFFFFFFFFFFFBDuLL;
  if ( (*(_BYTE *)(v19 + 34) & 0x10) == 0 && !(unsigned int)IS_PTE_NOT_DEMAND_ZERO(*(_QWORD *)(v19 + 16)) )
    *(_BYTE *)(v19 + 34) = v20 | 0x10;
  v21 = *(_QWORD *)(v19 + 16);
  v22 = (_QWORD *)(v19 + 16);
  if ( (v21 & 2) != 0 )
  {
    if ( v98 )
    {
      if ( MI_IS_PTE_IN_WS_SWAP_SET(
             *(_QWORD *)(qword_14036C8F8 + 8 * ((*(_QWORD *)(v19 + 40) >> 40) & 0x3FFLL)),
             (_WORD *)(v19 + 16)) )
      {
        v12 = MiCapturePageFileInfoInline(v22, v24, v24);
        *(_BYTE *)(v97 + 34) |= 0x10u;
        *v22 &= ~2uLL;
      }
      else
      {
        *v22 &= ~2uLL;
        v12 = v23;
      }
    }
    else
    {
      v12 = MiCapturePageFileInfoInline((_QWORD *)(v19 + 16), 1, 1);
      *(_BYTE *)(v97 + 34) |= 0x10u;
      *v22 &= ~2uLL;
    }
  }
  else if ( !v98 && (v21 & 4) != 0 )
  {
    v12 = MiCapturePageFileInfoInline((_QWORD *)(v19 + 16), 1, 1);
    *(_BYTE *)(v97 + 34) |= 0x10u;
  }
  MiLockNestedPageAtDpcInline(v16);
  MiFinalizePageAttribute(v16, *(unsigned __int8 *)(v97 + 34) >> 6, 1LL);
  MiCopyPfnEntry(v16, v97);
  if ( (unsigned int)MiGetPfnPriority(v25) < 5 )
    *(_BYTE *)(v16 + 35) = *(_BYTE *)(v16 + 35) & 0xF8 | 5;
  v26 = ContainingPageTable;
  *(_QWORD *)(v16 + 8) = v117;
  *(_QWORD *)(v16 + 40) = v26 & 0xFFFFFFFFFLL | *(_QWORD *)(v16 + 40) & 0xFFFFFFF000000000uLL | 0x200000000000000LL;
  v27 = MI_READ_PTE_LOCK_FREE(v16 + 16);
  if ( (v27 & 0x80u) != 0LL )
  {
    *(_QWORD *)(v16 + 16) = v27 | 0x20;
    if ( (unsigned int)MiPteInShadowRange(v16 + 16) )
      MiWritePteShadow(v16 + 16);
  }
  _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v98 && (*(_DWORD *)v22 & 4) != 0 )
  {
    *v22 &= ~4uLL;
    if ( v12 )
      v12 &= ~4uLL;
  }
  v105 ^= (v105 ^ (a6 << 12)) & 0xFFFFFFFFF000LL;
  if ( (v105 & 0x800) != 0 )
    v105 = v105 & 0xFFFFFFFFFFFFF5FFuLL | 0x200;
  MiWriteValidPteNewPage((__int64)a2);
  *(_QWORD *)a3 = 0LL;
  *(_QWORD *)a3 = v28;
  if ( (unsigned int)MiPteInShadowRange(a3) )
    MiWritePteShadow(v29);
  *(_QWORD *)(v97 + 24) |= 0x4000000000000000uLL;
  *(_BYTE *)(v97 + 34) |= 7u;
  _InterlockedAnd64((volatile signed __int64 *)(v97 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiInsertTbFlushEntry(v112, v15, 1LL, 0);
  if ( v12 )
    MiReleasePageFileInfo(*(struct _KEVENT **)(qword_14036C8F8 + 8 * ((*(_QWORD *)(v97 + 40) >> 40) & 0x3FFLL)), v12, 1);
  MiLockPageAtDpcInline(v17);
  v30 = *(_QWORD *)(v17 + 24) ^ (((*(_QWORD *)(v17 + 24) & 0x3FFFFFFFFFFFFFFFLL) + 1) ^ *(_QWORD *)(v17 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(v17 + 24) = v30;
  _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v98 )
  {
    v31 = v119;
    if ( (ULONG_PTR *)v119 == &MiSystemPartition )
      MiReturnResidentAvailable(1uLL);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v119 + 5824), 1uLL);
    MiReturnCommit(v31, 1uLL);
    _InterlockedExchangeAdd64(&qword_14036D120, 0xFFFFFFFFFFFFFFFFuLL);
  }
  v32 = a1;
  if ( (*(_BYTE *)(a1 + 192) & 7) == 0 )
    MiSetWsleProtection(v30, v15);
  MiUpdateWorkingSetPrivateSize(a1, v15, -1LL);
LABEL_62:
  if ( (*(_BYTE *)(v32 + 192) & 7) == 0 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], 0xFFFFFFFFFFFFFFFFuLL);
  if ( v95 )
  {
    v50 = a6 == -1 ? a3 & 0xFFFFFFFFFFFFFFFEuLL : a3 | 1;
    v51 = EtwpActiveSystemLoggers;
    v52 = 0;
    v111 = v50;
    v53 = !_BitScanForward((unsigned int *)&v54, EtwpActiveSystemLoggers);
    v127[0] = &v108;
    v107 = v54;
    v127[1] = 32LL;
    while ( !v53 )
    {
      v51 &= v51 - 1;
      v96 = v51;
      v55 = (char *)&EtwpGroupMasks + 32 * (unsigned int)v54;
      if ( v55 && (*((_DWORD *)v55 + 1) & 0x8000001) != 0 )
      {
        v56 = EtwpHostSiloState;
        v57 = 0;
        v58 = (unsigned __int8)EtwpSystemLogger[2 * v54];
        v101 = EtwpHostSiloState;
        if ( KeGetCurrentIrql() >= 2u
          || (v59 = KeGetCurrentThread(),
              --v59->KernelApcDisable,
              v57 = 1,
              ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v56 + 8 * v58 + 408), 1u)) )
        {
          v60 = v58;
          v99 = v58;
          v103 = *(_QWORD *)(v56 + 8 * v58 + 920);
          if ( (v103 & 1) != 0 )
          {
            EtwpCloseLogger(v58, v56, v57);
          }
          else if ( v103 )
          {
            v61 = EtwpReserveTraceBuffer((int *)v103, 0x38u, (__int64)&v113, &v104, 289413890);
            if ( !v61 )
              goto LABEL_151;
            *(_DWORD *)v61 = -1073479678;
            *(_QWORD *)(v61 + 16) = v104;
            *(_WORD *)(v61 + 4) = 56;
            *(_WORD *)(v61 + 6) = 634;
            *(_DWORD *)(v61 + 8) = KeGetCurrentThread()[1].KernelStack;
            *(_DWORD *)(v61 + 12) = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
            Process = (_KPROCESS *)(v61 + 24);
            if ( v61 == -24 )
              goto LABEL_151;
            v62 = 32;
            v63 = (const void **)v127;
            v64 = (char *)(v61 + 24);
            while ( 1 )
            {
              v65 = *((unsigned int *)v63 + 2);
              if ( (unsigned int)v65 > v62 )
                break;
              memmove(v64, *v63, (unsigned int)v65);
              v64 += v65;
              v62 -= v65;
              ++v52;
              v63 += 2;
              if ( v52 )
              {
                v66 = v103;
                goto LABEL_85;
              }
            }
            v67 = Process;
            v66 = v103;
            *(_QWORD *)&Process->Header.Lock = 0LL;
            v67->Header.WaitListHead.Flink = 0LL;
            v67->Header.WaitListHead.Blink = 0LL;
            v67->ProfileListHead.Flink = 0LL;
            _InterlockedIncrement((volatile signed __int32 *)(v103 + 240));
            if ( (*(_DWORD *)(v103 + 816) & 8) != 0 )
              *(_DWORD *)(v103 + 448) = 1;
LABEL_85:
            if ( ((_BYTE)KdDebuggerNotPresent || KdPitchDebugger) && !KdEventLoggingPresent
              || (*(_DWORD *)(v66 + 12) & 0x80000) == 0 )
            {
LABEL_114:
              v68 = v113;
            }
            else
            {
              if ( (*(_DWORD *)(v66 + 820) & 0x800) != 0 && KeAreInterruptsEnabled() && KeGetCurrentIrql() < 2u )
                EtwpSendDbgId(v66);
              v68 = v113;
              v69 = *(unsigned int *)v113;
              if ( (_DWORD)v69 && v115 >= 0x48 && v115 < (unsigned __int64)(v69 - 4) )
              {
                v70 = *(_DWORD *)(v113 + v115);
                v71 = (char *)(v113 + v115);
                if ( (v70 & 0xFF000000) == 0x90000000 )
                {
                  v70 = (unsigned __int16)v70;
                  v72 = 15;
                  v73 = (unsigned __int16)v70 < 8u;
                  goto LABEL_108;
                }
                if ( (v70 & 0xFF000000) == 0xC0000000 )
                {
                  v72 = BYTE2(v70);
                  switch ( BYTE2(v70) )
                  {
                    case 1:
                    case 2:
                      if ( v115 >= (unsigned __int64)(v69 - 8) )
                        goto LABEL_115;
                      v70 = *((unsigned __int16 *)v71 + 2);
                      v73 = v70 < 0x20;
                      break;
                    case 3:
                    case 4:
                      if ( v115 >= (unsigned __int64)(v69 - 8) )
                        goto LABEL_115;
                      v70 = *((unsigned __int16 *)v71 + 2);
                      v73 = v70 < 0x18;
                      break;
                    case 0xA:
                    case 0xB:
                    case 0x14:
                    case 0x15:
                      v70 = (unsigned __int16)v70;
                      v73 = (unsigned __int16)v70 < 0x30u;
                      break;
                    case 0xD:
                    case 0x12:
                    case 0x13:
                      v70 = (unsigned __int16)v70;
                      v73 = (unsigned __int16)v70 < 0x50u;
                      break;
                    case 0x10:
                    case 0x11:
                      if ( v115 >= (unsigned __int64)(v69 - 8) )
                        goto LABEL_115;
                      v70 = *((unsigned __int16 *)v71 + 2);
                      v73 = v70 < 0x10;
                      break;
                    default:
                      goto LABEL_115;
                  }
LABEL_108:
                  if ( !v73 )
                  {
                    v74 = (v70 + 7) & 0xFFFFFFF8;
                    if ( v74 < (unsigned int)v69
                      && v74 + v115 <= (unsigned int)v69
                      && v72
                      && (unsigned __int64)v74 + 72 <= (unsigned int)(KdTransportMaxPacketSize - 64) )
                    {
                      v124[0] = *(_OWORD *)v113;
                      v124[1] = *(_OWORD *)(v113 + 16);
                      v124[2] = *(_OWORD *)(v113 + 32);
                      v125 = *(_OWORD *)(v113 + 48);
                      v75 = *(_QWORD *)(v113 + 64);
                      LODWORD(v124[0]) = v74 + 72;
                      LODWORD(v125) = v74 + 72;
                      v123 = v74;
                      v120 = v124;
                      v126 = v75;
                      v121 = 72;
                      v122 = (char *)(v113 + v115);
                      KdSendTraceData(&v120, 2LL);
                      goto LABEL_114;
                    }
                  }
                }
              }
            }
LABEL_115:
            v76 = v114;
            v77 = (signed __int64 *)v114;
            _m_prefetchw((const void *)v114);
            v78 = *v77;
            v79 = v113;
            if ( (v113 ^ *v77) >= 0xF )
            {
LABEL_119:
              _InterlockedDecrement((volatile signed __int32 *)(v79 + 12));
            }
            else
            {
              while ( 1 )
              {
                v80 = v78;
                v78 = _InterlockedCompareExchange64(v76, v78 + 1, v78);
                if ( v80 == v78 )
                  break;
                if ( (v68 ^ v78) >= 0xF )
                {
                  v79 = v113;
                  goto LABEL_119;
                }
              }
            }
            v81 = *(_DWORD *)(v66 + 816);
            if ( (v81 & 0x80u) == 0 || !_bittest((const signed __int32 *)(*(_QWORD *)(v66 + 832) + 76LL), 0x1Au) )
              goto LABEL_150;
            v82 = *(_DWORD *)v66 | v81 & 0xFFFF0000;
            CurrentThread = KeGetCurrentThread();
            if ( (CurrentThread->MiscFlags & 0x400) != 0 || (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
              goto LABEL_149;
            if ( !KeAreInterruptsEnabled() )
            {
              CurrentIrql = 15;
              goto LABEL_127;
            }
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql < 2u )
            {
              if ( ((v82 & 0x1000000) == 0 || (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0)
                && KeAreInterruptsEnabled()
                && KeGetCurrentIrql() < 2u )
              {
                v90 = KeGetCurrentThread();
                if ( (*((_DWORD *)&v90[1].SwapListEntry + 3) & 2) == 0 )
                  PsQueryThreadStartAddress((__int64)v90, 0);
              }
            }
            else
            {
LABEL_127:
              NestingLevel = KeGetCurrentPrcb()->NestingLevel;
              if ( CurrentIrql == 2 )
              {
                if ( !NestingLevel )
                {
                  EtwSupport = KeGetCurrentPrcb()->EtwSupport;
                  if ( CurrentThread == KeGetCurrentThread()
                    && !(CurrentThread->Process->FreezeCount + ((*(_DWORD *)&CurrentThread->Process->0 >> 3) & 1))
                    && !CurrentThread->SuspendCount )
                  {
                    v87 = (HIWORD(v82) & 7) + 24;
                    if ( !_interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, v87) )
                    {
                      if ( (CurrentThread->MiscFlags & 0x4000) != 0
                        && (v88 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)EtwSupport + 6)) != 0LL )
                      {
                        KeInitializeApc(
                          (_DWORD)v88,
                          (_DWORD)CurrentThread,
                          0,
                          (unsigned int)EtwpStackWalkApc,
                          0LL,
                          (__int64)EtwpStackWalkApc,
                          0,
                          v82);
                        if ( !(unsigned __int8)KeInsertQueueApc((__int64)v88, (unsigned int)v104, HIDWORD(v104), 0) )
                        {
                          RtlpInterlockedPushEntrySList((PSLIST_HEADER)EtwSupport + 6, v88);
                          goto LABEL_137;
                        }
                        _InterlockedIncrement((volatile signed __int32 *)EtwSupport + 364);
                        v89 = *((_DWORD *)EtwSupport + 364);
                        if ( v89 > *((_DWORD *)EtwSupport + 365) )
                          *((_DWORD *)EtwSupport + 365) = v89;
                      }
                      else
                      {
LABEL_137:
                        _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, v87);
                      }
                    }
                  }
                }
LABEL_149:
                EtwpTraceStackWalk(v82, 289409794LL, CurrentThread, &v104);
LABEL_150:
                v56 = v101;
                v60 = v99;
                v52 = 0;
                v51 = v96;
LABEL_151:
                if ( v57 )
                {
                  ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v56 + 8 * v60 + 408), 1u);
                  v91 = KeGetCurrentThread();
                  v92 = v91->KernelApcDisable + 1;
                  v91->KernelApcDisable = v92;
                  if ( !v92
                    && ($69CD3F157F9F39B6F7113F2231989901 *)v91->ApcState.ApcListHead[0].Flink != &v91->152
                    && !v91->SpecialApcDisable )
                  {
                    if ( KeGetCurrentIrql() )
                    {
                      KeGetCurrentThread()->ApcState.KernelApcPending = 1;
                      HalRequestSoftwareInterrupt(1LL);
                    }
                    else
                    {
                      KeGetCurrentIrql();
                      __writecr8(1uLL);
                      KiDeliverApc(0, 0LL, 0LL);
                      __writecr8(0LL);
                    }
                  }
                }
                goto LABEL_158;
              }
              if ( NestingLevel )
                goto LABEL_149;
            }
            EtwpQueueStackWalkApc(CurrentThread, CurrentIrql, v82, &v104);
            goto LABEL_149;
          }
        }
        else
        {
          KeLeaveCriticalRegion();
        }
      }
LABEL_158:
      v53 = !_BitScanForward((unsigned int *)&v54, v51);
      v107 = v54;
    }
  }
  return v97;
}
