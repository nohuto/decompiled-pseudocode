/*
 * XREFs of MiUnlinkPageFromList @ 0x1400C3100
 * Callers:
 *     MiDecayPfnFullyInitialized @ 0x140016720 (MiDecayPfnFullyInitialized.c)
 *     MiDeleteParentDecayNode @ 0x14001683C (MiDeleteParentDecayNode.c)
 *     MiUnlinkStandbyPfn @ 0x140028268 (MiUnlinkStandbyPfn.c)
 *     MiOutSwapWorkingSetCallback @ 0x140079C70 (MiOutSwapWorkingSetCallback.c)
 *     MiDeleteTransitionPte @ 0x14007A23C (MiDeleteTransitionPte.c)
 *     MiActOnPte @ 0x14007B8E8 (MiActOnPte.c)
 *     MiEmptyDecayClusterTimers @ 0x140082E80 (MiEmptyDecayClusterTimers.c)
 *     MiFlushSectionInternal @ 0x140094CA0 (MiFlushSectionInternal.c)
 *     MiCopyDataPageToImagePage @ 0x140095B10 (MiCopyDataPageToImagePage.c)
 *     MmCheckCachedPageStates @ 0x14009E320 (MmCheckCachedPageStates.c)
 *     MiGatherMappedPages @ 0x1400AFB14 (MiGatherMappedPages.c)
 *     MiUnlinkStandbyBatch @ 0x1400B60C0 (MiUnlinkStandbyBatch.c)
 *     MiDispatchFault @ 0x1400BF7D0 (MiDispatchFault.c)
 *     MiResolveTransitionFault @ 0x1400C2260 (MiResolveTransitionFault.c)
 *     MiDeleteSubsectionPages @ 0x1400C4590 (MiDeleteSubsectionPages.c)
 *     MiWalkEntireImage @ 0x1400C9D50 (MiWalkEntireImage.c)
 *     MiRelinkStandbyPage @ 0x1400CBAFC (MiRelinkStandbyPage.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1401039D0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiReservePageFileSpaceForPage @ 0x1401048E0 (MiReservePageFileSpaceForPage.c)
 *     MiResolveProtoCombine @ 0x140105DB0 (MiResolveProtoCombine.c)
 *     MiDeleteClusterSection @ 0x14010A950 (MiDeleteClusterSection.c)
 *     MmPurgeSection @ 0x14010B4A0 (MmPurgeSection.c)
 *     MiReferencePageForModifiedWrite @ 0x14010EC0C (MiReferencePageForModifiedWrite.c)
 *     MiConvertStandbyToProto @ 0x140130148 (MiConvertStandbyToProto.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140138F10 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiBuildReservationCluster @ 0x140139AAC (MiBuildReservationCluster.c)
 *     MiPurgeSubsection @ 0x14020A93C (MiPurgeSubsection.c)
 *     MiMakeOutswappedPageResident @ 0x14020B6DC (MiMakeOutswappedPageResident.c)
 *     MiReleaseCommitForResetPageCallback @ 0x14020C030 (MiReleaseCommitForResetPageCallback.c)
 *     MmEnableModifiedWriteOfSection @ 0x1402115C0 (MmEnableModifiedWriteOfSection.c)
 *     MiPurgeImageSection @ 0x140215D80 (MiPurgeImageSection.c)
 *     MiEnableLargeSubsection @ 0x140218958 (MiEnableLargeSubsection.c)
 *     MiFreeModifiedReservations @ 0x14021A050 (MiFreeModifiedReservations.c)
 *     MiNoPagesLastChance @ 0x14021F600 (MiNoPagesLastChance.c)
 *     MiReuseStandbyPage @ 0x14021FCFC (MiReuseStandbyPage.c)
 *     MiMakeImagePageOk @ 0x140222D1C (MiMakeImagePageOk.c)
 *     MiHandleForkTransitionPte @ 0x1402232C0 (MiHandleForkTransitionPte.c)
 *     MmDuplicateMemory @ 0x14040BFE8 (MmDuplicateMemory.c)
 * Callees:
 *     MiDeleteParentDecayNode @ 0x14001683C (MiDeleteParentDecayNode.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14006CF50 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiSetPfnBlink @ 0x140075C3C (MiSetPfnBlink.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AA4A0 (KxAcquireQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1400AB2F0 (KxWaitForLockOwnerShip.c)
 *     MiGetPfnPriority @ 0x1400C3D60 (MiGetPfnPriority.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KxWaitForLockChainValid @ 0x14012B5E0 (KxWaitForLockChainValid.c)
 *     MiUpdateAvailableEvents @ 0x1401548AC (MiUpdateAvailableEvents.c)
 *     MiUpdateTransitionPteFrame @ 0x14017D158 (MiUpdateTransitionPteFrame.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401FE8B0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1401FEA38 (KiReleaseQueuedSpinLockInstrumented.c)
 *     MiObtainFreePages @ 0x140215244 (MiObtainFreePages.c)
 *     MiUnlinkPageFromBadList @ 0x14021F3D4 (MiUnlinkPageFromBadList.c)
 */

_BOOL8 __fastcall MiUnlinkPageFromList(ULONG_PTR BugCheckParameter2, int a2)
{
  unsigned __int16 v3; // cx
  int v4; // r11d
  unsigned __int64 v6; // r9
  __int64 v7; // rdi
  __int64 v8; // r13
  int v9; // eax
  unsigned int v10; // esi
  BOOL v11; // r15d
  __int64 v12; // r9
  int v13; // r10d
  int v14; // r11d
  __int64 PfnPriority; // r15
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rdx
  _QWORD *v18; // rdx
  unsigned __int64 v19; // r10
  unsigned __int64 v20; // r9
  _QWORD *v21; // r11
  __int64 updated; // rax
  __int64 v23; // r11
  __int64 v24; // r11
  signed __int64 v25; // rdx
  __int64 v26; // r9
  signed __int64 v27; // r8
  signed __int64 v28; // rcx
  unsigned int v29; // eax
  int v30; // ecx
  bool v31; // cf
  unsigned int v32; // eax
  ULONG_PTR v33; // rdx
  unsigned int v34; // eax
  ULONG_PTR v35; // rdx
  volatile signed __int64 *v36; // r13
  _QWORD *v37; // rdx
  unsigned __int16 v38; // cx
  char v39; // al
  unsigned int v40; // ecx
  __int64 v41; // r8
  unsigned __int64 v42; // rsi
  char v43; // r15
  unsigned int v44; // ecx
  unsigned int i; // edx
  _QWORD *v46; // rdx
  __int64 v47; // r11
  signed __int64 v48; // rdx
  signed __int64 v49; // r8
  signed __int64 v50; // rcx
  int v51; // eax
  signed __int64 v52; // r8
  signed __int64 v53; // rcx
  int v54; // r11d
  char v55; // al
  __int64 v56; // r9
  __int64 v57; // r10
  unsigned __int64 v58; // r15
  _QWORD *v59; // r13
  __int64 v60; // r9
  __int64 v61; // r11
  signed __int64 v62; // rdx
  signed __int64 v63; // r8
  signed __int64 v64; // rcx
  __int64 v65; // rcx
  __int64 v66; // rax
  unsigned __int64 v67; // r9
  unsigned __int64 v68; // r10
  char v69; // r11
  volatile signed __int32 *v70; // r8
  int v71; // r10d
  unsigned __int64 v72; // rdx
  signed __int64 v73; // rdx
  signed __int64 v74; // r8
  signed __int64 v75; // rcx
  __int64 v76; // rax
  unsigned __int64 v77; // rsi
  __int64 v78; // rax
  int v79; // ecx
  int v80; // [rsp+30h] [rbp-58h]
  __int64 v81; // [rsp+38h] [rbp-50h] BYREF
  volatile signed __int64 *v82; // [rsp+40h] [rbp-48h]
  __int64 v83; // [rsp+48h] [rbp-40h]
  void *retaddr; // [rsp+88h] [rbp+0h]
  BOOL v85; // [rsp+90h] [rbp+8h]
  int v87; // [rsp+A0h] [rbp+18h]
  int v88; // [rsp+A8h] [rbp+20h]

  v3 = *(_WORD *)(BugCheckParameter2 + 32);
  v4 = a2;
  v81 = 0LL;
  v82 = 0LL;
  v83 = 0LL;
  if ( v3 )
  {
    if ( (*(_QWORD *)(BugCheckParameter2 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0 )
      KeBugCheckEx(0x4Eu, 2uLL, (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48, BugCheckParameter3, v3);
    return 1LL;
  }
  v6 = *(_QWORD *)(BugCheckParameter2 + 40);
  v7 = *(_QWORD *)(qword_14036C8F8 + 8 * ((v6 >> 40) & 0x3FF));
  v8 = *(_QWORD *)(v7 + 8LL * (*(_BYTE *)(BugCheckParameter2 + 34) & 7) + 3960);
  v9 = *(_DWORD *)(v8 + 8);
  if ( (*(_BYTE *)(BugCheckParameter2 + 34) & 7) == 5 )
  {
    MiUnlinkPageFromBadList(BugCheckParameter2);
    return 1LL;
  }
  v10 = 0;
  v85 = 1;
  v11 = 1;
  v88 = 0;
  v80 = 0;
  v87 = 0;
  if ( v9 == 2 )
  {
    if ( (*(_QWORD *)(BugCheckParameter2 + 24) & 0x4000000000000000LL) != 0 )
    {
      if ( (v6 & 0x10000000000000LL) == 0 )
        goto LABEL_9;
    }
    else if ( (v6 & 0x10000000000000LL) == 0 )
    {
LABEL_9:
      PfnPriority = (unsigned int)MiGetPfnPriority(BugCheckParameter2);
      v16 = qword_14036CBE0;
      v17 = (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48;
      if ( v17 < qword_14036CBE0 || v17 >= qword_14036CBE0 + 2048 )
      {
        v80 = 0;
        if ( (*(_BYTE *)(BugCheckParameter2 + 35) & 8) != 0 )
          v13 = 1;
        v87 = v13;
        if ( (v12 & 0x200000000000000LL) != 0 )
          _InterlockedDecrement64((volatile signed __int64 *)(v7 + 4096));
        else
          _InterlockedDecrement64((volatile signed __int64 *)(v7 + 4800));
        v16 = qword_14036CBE0;
      }
      else
      {
        v80 = 1;
      }
      v8 = v7 + 8 * (PfnPriority + 4 * (PfnPriority + 68));
      if ( !v14 )
      {
        v82 = (volatile signed __int64 *)(v8 + 32);
        v81 = 0LL;
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireQueuedSpinLockInstrumented(&v81, v8 + 32);
        }
        else
        {
          v18 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(v8 + 32), (__int64)&v81);
          if ( v18 )
            KxWaitForLockOwnerShip((__int64)&v81, v18);
        }
        v16 = qword_14036CBE0;
      }
      v19 = *(_QWORD *)BugCheckParameter2 & 0xFFFFFFFFFLL;
      v20 = *(_QWORD *)(BugCheckParameter2 + 24) & 0xFFFFFFFFFLL;
      if ( v87 == 1 )
      {
        if ( v19 >= v16 && v19 < v16 + 2048 && v20 == v19 )
        {
          MiDeleteParentDecayNode(BugCheckParameter2);
        }
        else
        {
          v21 = (_QWORD *)(48 * v20 - 0x58000000000LL);
          if ( v20 < v16 || v20 >= v16 + 2048 )
          {
            *v21 ^= (*v21 ^ v19) & 0xFFFFFFFFFLL;
          }
          else
          {
            updated = MiUpdateTransitionPteFrame(v21[2], *(_QWORD *)BugCheckParameter2 & 0xFFFFFFFFFLL);
            *(_QWORD *)(v23 + 16) = updated;
          }
          v24 = 48 * v19 - 0x58000000000LL;
          if ( v19 < v16 || v19 >= v16 + 2048 )
          {
            v25 = *(_QWORD *)(v24 + 24);
            v26 = v20 & 0xFFFFFFFFFLL;
            v27 = _InterlockedCompareExchange64(
                    (volatile signed __int64 *)(v24 + 24),
                    v26 | v25 & 0xFFFFFFF000000000uLL,
                    v25);
            if ( v25 != v27 )
            {
              do
              {
                v28 = v27;
                v27 = _InterlockedCompareExchange64(
                        (volatile signed __int64 *)(v24 + 24),
                        v26 | v27 & 0xFFFFFFF000000000uLL,
                        v27);
              }
              while ( v28 != v27 );
            }
          }
          else
          {
            *(_QWORD *)(v24 + 40) ^= (v20 ^ *(_QWORD *)(v24 + 40)) & 0xFFFFFFFFFLL;
          }
        }
        v19 = 0xFFFFFFFFFLL;
        v20 = 0xFFFFFFFFFLL;
      }
      else
      {
        if ( v19 != 0xFFFFFFFFFLL && (v19 < v16 || v19 >= v16 + 2048) )
        {
          v32 = MiGetPfnPriority(48 * v19 - 0x58000000000LL);
          if ( (_DWORD)PfnPriority != v32 )
            KeBugCheckEx(
              0x1Au,
              0x8886uLL,
              BugCheckParameter2,
              v33,
              v32 | (unsigned __int64)(unsigned int)((_DWORD)PfnPriority << 8));
        }
        if ( v20 != 0xFFFFFFFFFLL && (v20 < v16 || v20 >= v16 + 2048) )
        {
          v34 = MiGetPfnPriority(48 * v20 - 0x58000000000LL);
          if ( (_DWORD)PfnPriority != v34 )
            KeBugCheckEx(
              0x1Au,
              0x8887uLL,
              BugCheckParameter2,
              v35,
              v34 | (unsigned __int64)(unsigned int)((_DWORD)PfnPriority << 8));
        }
      }
      v29 = *(unsigned __int8 *)(v7 + 4548);
      v30 = 1;
      v31 = (unsigned int)PfnPriority < v29;
      v11 = (unsigned int)PfnPriority >= v29;
      v88 = 1;
      v85 = !v31;
      goto LABEL_94;
    }
    if ( (v6 & 0x200000000000000LL) != 0 )
      _InterlockedDecrement64((volatile signed __int64 *)(v7 + 4096));
    else
      _InterlockedDecrement64((volatile signed __int64 *)(v7 + 4800));
    *(_QWORD *)BugCheckParameter2 = 0LL;
    MiSetPfnBlink(BugCheckParameter2, 0LL, 1);
    return 1LL;
  }
  if ( v9 == 3 )
  {
    _InterlockedDecrement64((volatile signed __int64 *)v8);
    if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0x200000000000000LL) != 0 )
      _InterlockedDecrement64((volatile signed __int64 *)(v7 + 4096));
    else
      _InterlockedDecrement64((volatile signed __int64 *)(v7 + 4800));
    if ( (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) != 0 )
    {
      v8 = v7 + 40 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 58) + 80LL);
      if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0x10000000000000LL) == 0 )
      {
        v41 = qword_14036C1D0;
        v42 = (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48;
        if ( qword_14036C1D0 )
        {
          if ( qword_14036CAC8 )
          {
            v43 = 17;
            ExAcquireSpinLockSharedAtDpcLevel(&dword_14036BF60);
            v41 = qword_14036C1D0;
          }
          else
          {
            v43 = 18;
          }
          v44 = dword_14036C1B4;
          if ( v42 < *(_QWORD *)(v41 + 16LL * (unsigned int)dword_14036C1B4) )
          {
            do
              --v44;
            while ( v42 < *(_QWORD *)(v41 + 16LL * v44) );
          }
          else
          {
            for ( i = dword_14036C1B4 + 1; v42 >= *(_QWORD *)(v41 + 16LL * i); ++v44 )
              ++i;
          }
          v10 = *(_DWORD *)(v41 + 16LL * v44 + 8);
          dword_14036C1B4 = v44;
          if ( v43 != 18 )
            ExReleaseSpinLockSharedFromDpcLevel(&dword_14036BF60);
          v11 = 1;
          v4 = a2;
        }
        else
        {
          v10 = 0;
        }
      }
      if ( !v4 )
      {
        v82 = (volatile signed __int64 *)(v8 + 32);
        v81 = 0LL;
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireQueuedSpinLockInstrumented(&v81, v8 + 32);
        }
        else
        {
          v46 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(v8 + 32), (__int64)&v81);
          if ( v46 )
            KxWaitForLockOwnerShip((__int64)&v81, v46);
        }
      }
      *(_QWORD *)(BugCheckParameter2 + 40) = *(_QWORD *)(BugCheckParameter2 + 40) & 0x3FFFFFFFFFFFFFFLL | ((unsigned __int64)v10 << 58);
    }
    else
    {
      if ( !a2 )
      {
        v36 = (volatile signed __int64 *)(v8 + 32);
        v81 = 0LL;
        v82 = v36;
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireQueuedSpinLockInstrumented(&v81, v36);
        }
        else
        {
          v37 = (_QWORD *)_InterlockedExchange64(v36, (__int64)&v81);
          if ( v37 )
            KxWaitForLockOwnerShip((__int64)&v81, v37);
        }
      }
      --*(_QWORD *)(v7 + 6256);
      v38 = *(_QWORD *)(BugCheckParameter2 + 16);
      v39 = (unsigned __int8)v38 >> 1;
      v40 = v38 >> 12;
      if ( (v39 & 1) != 0 || v40 == *(_DWORD *)(v7 + 1188) )
        v8 = v7 + 40 * (v40 + 64LL);
      else
        v8 = v7 + 2496;
    }
  }
  else
  {
    if ( (v6 & 0x200000000000000LL) != 0 )
      _InterlockedDecrement64((volatile signed __int64 *)(v7 + 4096));
    else
      _InterlockedDecrement64((volatile signed __int64 *)(v7 + 4800));
    if ( !a2 )
    {
      v81 = 0LL;
      v82 = (volatile signed __int64 *)(v8 + 32);
      KxAcquireQueuedSpinLock((__int64)&v81, (volatile __int64 *)(v8 + 32));
    }
  }
  v19 = *(_QWORD *)BugCheckParameter2 & 0xFFFFFFFFFLL;
  v30 = 0;
  v20 = *(_QWORD *)(BugCheckParameter2 + 24) & 0xFFFFFFFFFLL;
LABEL_94:
  if ( v19 == 0xFFFFFFFFFLL )
  {
    v51 = v87;
    if ( !v87 )
      *(_QWORD *)(v8 + 24) = v20;
  }
  else
  {
    v47 = 48 * v19 - 0x58000000000LL;
    v48 = *(_QWORD *)(v47 + 24);
    if ( v30 == 1 )
    {
      v49 = _InterlockedCompareExchange64((volatile signed __int64 *)(v47 + 24), v20 | v48 & 0xFFFFFFF000000000uLL, v48);
      if ( v48 != v49 )
      {
        do
        {
          v50 = v49;
          v49 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v47 + 24),
                  v20 | v49 & 0xFFFFFFF000000000uLL,
                  v49);
        }
        while ( v50 != v49 );
        v51 = v87;
        v11 = v85;
        goto LABEL_105;
      }
LABEL_102:
      v51 = v87;
      goto LABEL_105;
    }
    v52 = _InterlockedCompareExchange64((volatile signed __int64 *)(v47 + 24), v20 | v48 & 0xFFFFFFF000000000uLL, v48);
    if ( v48 == v52 )
      goto LABEL_102;
    do
    {
      v53 = v52;
      v52 = _InterlockedCompareExchange64((volatile signed __int64 *)(v47 + 24), v20 | v52 & 0xFFFFFFF000000000uLL, v52);
    }
    while ( v53 != v52 );
    v51 = v87;
    v11 = v85;
  }
LABEL_105:
  if ( v20 == 0xFFFFFFFFFLL )
  {
    if ( !v51 )
      *(_QWORD *)(v8 + 16) = v19;
  }
  else
  {
    *(_QWORD *)(48 * v20 - 0x58000000000LL) = v19 | *(_QWORD *)(48 * v20 - 0x58000000000LL) & 0xFFFFFFF000000000uLL;
  }
  v54 = v80;
  if ( !v80 )
  {
    --*(_QWORD *)v8;
    if ( v88 == 1 )
    {
      v55 = *(_BYTE *)(BugCheckParameter2 + 35);
      if ( (v55 & 8) != 0 )
        v56 = 5LL;
      else
        v56 = v55 & 7;
      v57 = *(unsigned __int8 *)(BugCheckParameter2 + 39) | (*(_QWORD *)BugCheckParameter2 >> 28) & 0xFFFFFFF00LL;
      v58 = (*(_QWORD *)(BugCheckParameter2 + 24) >> 20) & 0xFFFFF0000LL | *(unsigned __int16 *)(BugCheckParameter2 + 36);
      v59 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(qword_14036C8F8
                                             + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 40) & 0x3FFLL))
                                 + 48LL)
                     + 24
                     * (v56
                      + 91LL * (*(_QWORD *)(BugCheckParameter2 + 40) >> 58)
                      + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 36) & 3LL)));
      if ( v57 == 0xFFFFFFFFFLL )
      {
        v59[157] = v58;
      }
      else
      {
        v60 = 48 * v57 - 0x58000000000LL;
        v61 = ((v58 >> 16) & 0xFFFFF) << 36;
        *(_WORD *)(v60 + 36) = *(_WORD *)(BugCheckParameter2 + 36);
        v62 = *(_QWORD *)(v60 + 24);
        v63 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)(v60 + 24),
                v61 | v62 & 0xFF00000FFFFFFFFFuLL,
                v62);
        if ( v62 != v63 )
        {
          do
          {
            v64 = v63;
            v63 = _InterlockedCompareExchange64(
                    (volatile signed __int64 *)(v60 + 24),
                    v61 | v63 & 0xFF00000FFFFFFFFFuLL,
                    v63);
          }
          while ( v64 != v63 );
        }
        v54 = 0;
      }
      if ( v58 == 0xFFFFFFFFFLL )
      {
        v59[156] = v57;
      }
      else
      {
        v65 = 48 * v58 - 0x58000000000LL;
        v66 = *(_QWORD *)v65 ^ (v57 << 28);
        *(_BYTE *)(v65 + 39) = v57;
        *(_QWORD *)v65 = (v57 << 28) ^ v66 & 0xFFFFFFFFFLL;
      }
      --v59[155];
      v11 = v85;
      if ( v87 == 1 )
        *(_BYTE *)(BugCheckParameter2 + 35) &= ~8u;
    }
  }
  *(_QWORD *)BugCheckParameter2 = 0LL;
  if ( v54 )
  {
    v73 = *(_QWORD *)(BugCheckParameter2 + 24);
    v74 = _InterlockedCompareExchange64(
            (volatile signed __int64 *)(BugCheckParameter2 + 24),
            v73 & 0xFFFFFFF000000000uLL,
            v73);
    if ( v73 != v74 )
    {
      do
      {
        v75 = v74;
        v74 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)(BugCheckParameter2 + 24),
                v74 & 0xFFFFFFF000000000uLL,
                v74);
      }
      while ( v75 != v74 );
    }
  }
  else
  {
    *(_QWORD *)(BugCheckParameter2 + 24) &= 0xFFFFFFF000000000uLL;
    if ( dword_14036C91C == 1 )
    {
      LOBYTE(v67) = 1;
      v68 = (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48;
      v69 = v68 & 0x1F;
      v70 = (volatile signed __int32 *)stru_14036C970.Buffer + (v68 >> 5);
      if ( (v68 & 0x1F) + 1 > 0x20 )
      {
        if ( (v68 & 0x1F) == 0 )
          goto LABEL_133;
        v71 = v68 & 0x1F;
        _InterlockedOr(v70++, ((1 << (32 - v71)) - 1) << v69);
        v67 = 1LL - (unsigned int)(32 - v71);
        if ( v67 >= 0x20 )
        {
          v72 = v67 >> 5;
          v67 += -32LL * (v67 >> 5);
          do
          {
            *v70++ = -1;
            --v72;
          }
          while ( v72 );
        }
        if ( v67 )
LABEL_133:
          _InterlockedOr(v70, (1 << v67) - 1);
      }
      else
      {
        _InterlockedOr(v70, 1 << v69);
      }
    }
  }
  if ( a2 )
    goto LABEL_143;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&v81, retaddr);
    goto LABEL_143;
  }
  _m_prefetchw(&v81);
  v76 = v81;
  if ( !v81 )
  {
    if ( (__int64 *)_InterlockedCompareExchange64(v82, 0LL, (signed __int64)&v81) == &v81 )
      goto LABEL_143;
    v76 = KxWaitForLockChainValid(&v81);
  }
  v81 = 0LL;
  _InterlockedXor64((volatile signed __int64 *)(v76 + 8), 1uLL);
LABEL_143:
  if ( v88 == 1 && !v80 )
  {
    v77 = _InterlockedDecrement64((volatile signed __int64 *)(v7 + 5760));
    if ( v77 == *(_QWORD *)(v7 + 4840) || v77 == *(_QWORD *)(v7 + 4848) )
      MiUpdateAvailableEvents(v7);
    if ( v77 <= 0x420 )
    {
      v78 = *(_QWORD *)(v7 + 5544);
      if ( !v78 || !*(_BYTE *)(v78 + 52) )
        MiObtainFreePages(v7);
      if ( v77 < 0xA0 && v77 + 1 >= 0xA0 && *(_DWORD *)(v7 + 1192) )
        KeSetEvent((PRKEVENT)(v7 + 1040), 0, 0);
    }
    if ( v77 < 0x9F )
    {
      v79 = *((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3);
      if ( (v79 & 0xC) != 8
        && (v77 < 0x20 && (ULONG_PTR *)v7 == &MiSystemPartition
         || ((v79 & 2) == 0 || v77 < 0x21) && (*(_DWORD *)(v7 + 4) & 0x10) == 0) )
      {
        return 0;
      }
    }
  }
  return v11;
}
