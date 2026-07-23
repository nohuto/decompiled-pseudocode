/*
 * XREFs of MiUnlinkPageFromList @ 0x14004B0F0
 * Callers:
 *     MiOutSwapWorkingSetCallback @ 0x140002340 (MiOutSwapWorkingSetCallback.c)
 *     MiHandleForkTransitionPte @ 0x14000E3C0 (MiHandleForkTransitionPte.c)
 *     MiUnlinkStandbyPfn @ 0x14001E98C (MiUnlinkStandbyPfn.c)
 *     MiCopyDataPageToImagePage @ 0x140027210 (MiCopyDataPageToImagePage.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x14002D0C0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiDeleteTransitionPte @ 0x1400317D0 (MiDeleteTransitionPte.c)
 *     MiUnlinkStandbyBatch @ 0x140036990 (MiUnlinkStandbyBatch.c)
 *     MiFlushSectionInternal @ 0x140038530 (MiFlushSectionInternal.c)
 *     MiWalkEntireImage @ 0x140039480 (MiWalkEntireImage.c)
 *     MiDispatchFault @ 0x1400429F0 (MiDispatchFault.c)
 *     MiResolveTransitionFault @ 0x140049330 (MiResolveTransitionFault.c)
 *     MiDeleteSubsectionPages @ 0x14004C770 (MiDeleteSubsectionPages.c)
 *     MiReservePageFileSpaceForPage @ 0x14005CFD0 (MiReservePageFileSpaceForPage.c)
 *     MmCheckCachedPageStates @ 0x14007B8D0 (MmCheckCachedPageStates.c)
 *     MiDeleteClusterSection @ 0x1400CB53C (MiDeleteClusterSection.c)
 *     MiActOnPte @ 0x1400EC4F0 (MiActOnPte.c)
 *     MiResolveProtoCombine @ 0x1400EDBF4 (MiResolveProtoCombine.c)
 *     MiGatherMappedPages @ 0x1400EEBD4 (MiGatherMappedPages.c)
 *     MiReferencePageForModifiedWrite @ 0x1400EF550 (MiReferencePageForModifiedWrite.c)
 *     MiEmptyDecayClusterTimers @ 0x1400F0D10 (MiEmptyDecayClusterTimers.c)
 *     MiRelinkStandbyPage @ 0x1400F0F68 (MiRelinkStandbyPage.c)
 *     MiDecayPfnFullyInitialized @ 0x140115284 (MiDecayPfnFullyInitialized.c)
 *     MiDeleteParentDecayNode @ 0x140115354 (MiDeleteParentDecayNode.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140135E60 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiMakeImagePageOk @ 0x14015AE38 (MiMakeImagePageOk.c)
 *     MiPurgeSubsection @ 0x1402115B4 (MiPurgeSubsection.c)
 *     MiMakeOutswappedPageResident @ 0x1402125D4 (MiMakeOutswappedPageResident.c)
 *     MiReleaseCommitForResetPageCallback @ 0x140212FA0 (MiReleaseCommitForResetPageCallback.c)
 *     MmEnableModifiedWriteOfSection @ 0x140218E50 (MmEnableModifiedWriteOfSection.c)
 *     MiPurgeImageSection @ 0x14021F0FC (MiPurgeImageSection.c)
 *     MiEnableLargeSubsection @ 0x140222C04 (MiEnableLargeSubsection.c)
 *     MiMarkFileOnlyPfnBad @ 0x140223474 (MiMarkFileOnlyPfnBad.c)
 *     MiBuildReservationCluster @ 0x1402246F4 (MiBuildReservationCluster.c)
 *     MiFreeModifiedReservations @ 0x140225BB0 (MiFreeModifiedReservations.c)
 *     MiNoPagesLastChance @ 0x14022B0B8 (MiNoPagesLastChance.c)
 *     MiReuseStandbyPage @ 0x14022B5FC (MiReuseStandbyPage.c)
 *     MiConvertStandbyToProto @ 0x140231350 (MiConvertStandbyToProto.c)
 *     MmDuplicateMemory @ 0x14042F6D8 (MmDuplicateMemory.c)
 * Callees:
 *     MiGetPfnPriority @ 0x14004BD90 (MiGetPfnPriority.c)
 *     KxAcquireQueuedSpinLock @ 0x140064650 (KxAcquireQueuedSpinLock.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KxWaitForLockOwnerShip @ 0x14008A720 (KxWaitForLockOwnerShip.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400BF390 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiSetPfnBlink @ 0x1400C7514 (MiSetPfnBlink.c)
 *     KxWaitForLockChainValid @ 0x1400F1CA0 (KxWaitForLockChainValid.c)
 *     MiDeleteParentDecayNode @ 0x140115354 (MiDeleteParentDecayNode.c)
 *     MiUpdateAvailableEvents @ 0x140137060 (MiUpdateAvailableEvents.c)
 *     MiUpdateTransitionPteFrame @ 0x14017CA00 (MiUpdateTransitionPteFrame.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140204BB0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140204D38 (KiReleaseQueuedSpinLockInstrumented.c)
 *     MiObtainFreePages @ 0x14021D8D8 (MiObtainFreePages.c)
 *     MiUnlinkPageFromBadList @ 0x14022AA0C (MiUnlinkPageFromBadList.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14028607C (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140286170 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

_BOOL8 __fastcall MiUnlinkPageFromList(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  unsigned __int16 v3; // cx
  int v4; // r10d
  unsigned __int64 v6; // r8
  __int64 v7; // rdi
  __int64 v8; // r15
  int v9; // eax
  __int64 PfnPriority; // rsi
  __int64 v11; // r8
  int v12; // r10d
  unsigned __int64 v13; // r11
  unsigned __int64 v14; // rdx
  int v15; // r9d
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // r13
  unsigned __int64 *v19; // r8
  __int64 updated; // rax
  __int64 v21; // r8
  __int64 v22; // r11
  signed __int64 v23; // rdx
  signed __int64 v24; // r8
  signed __int64 v25; // rcx
  unsigned int v26; // eax
  ULONG_PTR v27; // rdx
  unsigned int v28; // eax
  ULONG_PTR v29; // rdx
  int v30; // ecx
  volatile signed __int64 *v31; // r15
  unsigned __int16 v32; // cx
  char v33; // al
  __int64 v34; // rcx
  unsigned __int64 v35; // rdx
  __int64 v36; // rdx
  unsigned __int64 v37; // rsi
  unsigned int v38; // esi
  char v39; // r12
  int v40; // ett
  unsigned int v41; // ecx
  unsigned int i; // edx
  __int64 v43; // r11
  signed __int64 v44; // rdx
  signed __int64 v45; // r8
  signed __int64 v46; // rcx
  int v47; // eax
  signed __int64 v48; // r8
  signed __int64 v49; // rcx
  int v50; // r9d
  signed __int64 v51; // rdx
  char v52; // al
  unsigned int v53; // edx
  __int64 v54; // r10
  __int64 v55; // rsi
  unsigned __int64 v56; // rax
  _QWORD *v57; // r15
  __int64 v58; // r9
  __int64 v59; // r11
  signed __int64 v60; // r8
  signed __int64 v61; // rcx
  __int64 v62; // rcx
  __int64 v63; // rax
  unsigned __int64 v64; // r9
  __int64 v65; // rbx
  __int64 v66; // r11
  volatile signed __int32 *v67; // r8
  int v68; // r10d
  __int64 v69; // rax
  unsigned __int64 v70; // rsi
  __int64 v71; // rax
  int v72; // ecx
  int v73; // [rsp+30h] [rbp-58h]
  __int64 v74; // [rsp+38h] [rbp-50h] BYREF
  volatile signed __int64 *v75; // [rsp+40h] [rbp-48h]
  __int64 v76; // [rsp+48h] [rbp-40h]
  void *retaddr; // [rsp+88h] [rbp+0h]
  int v78; // [rsp+90h] [rbp+8h]
  int v79; // [rsp+98h] [rbp+10h]
  BOOL v80; // [rsp+A0h] [rbp+18h]
  unsigned int v81; // [rsp+A8h] [rbp+20h]

  v79 = a2;
  v3 = *(_WORD *)(BugCheckParameter2 + 32);
  v4 = a2;
  v74 = 0LL;
  v75 = 0LL;
  v76 = 0LL;
  if ( v3 )
  {
    if ( (*(_QWORD *)(BugCheckParameter2 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0 )
      KeBugCheckEx(0x4Eu, 2uLL, (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48, BugCheckParameter3, v3);
    return 1LL;
  }
  v6 = *(_QWORD *)(BugCheckParameter2 + 40);
  v7 = *(_QWORD *)(qword_140388AF0 + 8 * ((v6 >> 40) & 0x3FF));
  v8 = *(_QWORD *)(v7 + 8LL * (*(_BYTE *)(BugCheckParameter2 + 34) & 7) + 4088);
  v9 = *(_DWORD *)(v8 + 8);
  if ( (*(_BYTE *)(BugCheckParameter2 + 34) & 7) == 5 )
  {
    MiUnlinkPageFromBadList(BugCheckParameter2, 0LL);
    return 1LL;
  }
  v80 = 1;
  v81 = 0;
  v73 = 0;
  v78 = 0;
  if ( v9 != 2 )
  {
    if ( v9 != 3 )
    {
      if ( (v6 & 0x200000000000000LL) != 0 )
        _InterlockedDecrement64((volatile signed __int64 *)(v7 + 4224));
      else
        _InterlockedDecrement64((volatile signed __int64 *)(v7 + 4928));
      if ( !(_DWORD)a2 )
      {
        v74 = 0LL;
        v75 = (volatile signed __int64 *)(v8 + 32);
        KxAcquireQueuedSpinLock(&v74);
      }
      goto LABEL_96;
    }
    _InterlockedDecrement64((volatile signed __int64 *)v8);
    if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0x200000000000000LL) != 0 )
      _InterlockedDecrement64((volatile signed __int64 *)(v7 + 4224));
    else
      _InterlockedDecrement64((volatile signed __int64 *)(v7 + 4928));
    if ( (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) == 0 )
    {
      if ( !(_DWORD)a2 )
      {
        v31 = (volatile signed __int64 *)(v8 + 32);
        v74 = 0LL;
        v75 = v31;
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireQueuedSpinLockInstrumented(&v74, v31);
        }
        else if ( _InterlockedExchange64(v31, (__int64)&v74) )
        {
          KxWaitForLockOwnerShip(&v74);
        }
      }
      --*(_QWORD *)(v7 + 6448);
      v32 = *(_QWORD *)(BugCheckParameter2 + 16);
      v33 = (unsigned __int8)v32 >> 1;
      v34 = v32 >> 12;
      if ( (v33 & 1) != 0 || (_DWORD)v34 == *(_DWORD *)(v7 + 1140) )
        v8 = v7 + 8 * (v34 + 4 * (v34 + 84));
      else
        v8 = v7 + 2624;
LABEL_96:
      v16 = *(_QWORD *)BugCheckParameter2 & 0xFFFFFFFFFLL;
      v30 = 0;
      v17 = *(_QWORD *)(BugCheckParameter2 + 24) & 0xFFFFFFFFFLL;
      goto LABEL_97;
    }
    v35 = *(_QWORD *)(BugCheckParameter2 + 40);
    v8 = v7 + 8 * ((v35 >> 58) + 4 * ((v35 >> 58) + 104));
    if ( (*(_QWORD *)(BugCheckParameter2 + 24) & 0x4000000000000000LL) != 0 )
    {
      if ( (v35 & 0x10000000000000LL) == 0 )
        goto LABEL_65;
    }
    else if ( (v35 & 0x10000000000000LL) == 0 )
    {
LABEL_65:
      v36 = (unsigned __int128)((__int64)(BugCheckParameter2 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
      v37 = (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48;
      if ( qword_140388518 )
      {
        if ( qword_140388CC8 )
        {
          v39 = 17;
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            LOBYTE(v36) = -1;
            ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&dword_140388280, v36);
          }
          else
          {
            _m_prefetchw(&dword_140388280);
            v40 = dword_140388280 & 0x7FFFFFFF;
            if ( v40 != _InterlockedCompareExchange(
                          &dword_140388280,
                          (dword_140388280 & 0x7FFFFFFF) + 1,
                          dword_140388280 & 0x7FFFFFFF) )
            {
              LOBYTE(v36) = -1;
              ExpWaitForSpinLockSharedAndAcquire(&dword_140388280, v36);
            }
          }
        }
        else
        {
          v39 = 18;
        }
        v41 = dword_1403884FC;
        if ( v37 < *(_QWORD *)(qword_140388518 + 16LL * (unsigned int)dword_1403884FC) )
        {
          do
            --v41;
          while ( v37 < *(_QWORD *)(qword_140388518 + 16LL * v41) );
        }
        else
        {
          for ( i = dword_1403884FC + 1; v37 >= *(_QWORD *)(qword_140388518 + 16LL * i); ++v41 )
            ++i;
        }
        v38 = *(_DWORD *)(qword_140388518 + 16LL * v41 + 8);
        dword_1403884FC = v41;
        if ( v39 != 18 )
        {
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          {
            ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&dword_140388280, retaddr);
          }
          else
          {
            _InterlockedAnd(&dword_140388280, 0xBFFFFFFF);
            _InterlockedDecrement(&dword_140388280);
          }
        }
        v4 = v79;
      }
      else
      {
        v38 = 0;
      }
      goto LABEL_85;
    }
    v38 = 0;
LABEL_85:
    if ( !v4 )
    {
      v75 = (volatile signed __int64 *)(v8 + 32);
      v74 = 0LL;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented(&v74, v8 + 32);
      }
      else if ( _InterlockedExchange64((volatile __int64 *)(v8 + 32), (__int64)&v74) )
      {
        KxWaitForLockOwnerShip(&v74);
      }
    }
    *(_QWORD *)(BugCheckParameter2 + 40) = *(_QWORD *)(BugCheckParameter2 + 40) & 0x3FFFFFFFFFFFFFFLL | ((unsigned __int64)v38 << 58);
    goto LABEL_96;
  }
  if ( (*(_QWORD *)(BugCheckParameter2 + 24) & 0x4000000000000000LL) != 0 )
  {
    if ( (v6 & 0x10000000000000LL) == 0 )
    {
LABEL_9:
      PfnPriority = (unsigned int)MiGetPfnPriority(BugCheckParameter2, a2);
      v14 = (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48;
      if ( v14 < qword_140388DE0 || v14 >= qword_140388DE0 + 2048 )
      {
        v15 = (*(unsigned __int8 *)(BugCheckParameter2 + 35) >> 3) & 1;
        v73 = 0;
        v78 = v15;
        if ( (v11 & 0x200000000000000LL) != 0 )
        {
          _InterlockedDecrement64((volatile signed __int64 *)(v7 + 4224));
        }
        else
        {
          _InterlockedDecrement64((volatile signed __int64 *)(v7 + 4928));
          v78 = v15;
        }
      }
      else
      {
        v73 = 1;
      }
      v8 = v7 + 8 * (PfnPriority + 4 * (PfnPriority + 72));
      if ( v12 )
        goto LABEL_25;
      v75 = (volatile signed __int64 *)(v8 + 32);
      v74 = 0LL;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented(&v74, v8 + 32);
      }
      else
      {
        if ( !_InterlockedExchange64((volatile __int64 *)(v8 + 32), (__int64)&v74) )
        {
LABEL_25:
          v16 = *(_QWORD *)BugCheckParameter2 & 0xFFFFFFFFFLL;
          v17 = *(_QWORD *)(BugCheckParameter2 + 24) & 0xFFFFFFFFFLL;
          if ( v78 == 1 )
          {
            v18 = qword_140388DE0;
            if ( v16 >= qword_140388DE0 && v16 < qword_140388DE0 + 2048 && v17 == v16 )
            {
              MiDeleteParentDecayNode(BugCheckParameter2);
            }
            else
            {
              v19 = (unsigned __int64 *)(48 * v17 - 0x58000000000LL);
              if ( v17 < qword_140388DE0 || v17 >= qword_140388DE0 + 2048 )
              {
                *v19 = v16 | v13 & *v19;
              }
              else
              {
                updated = MiUpdateTransitionPteFrame(v19[2], *(_QWORD *)BugCheckParameter2 & 0xFFFFFFFFFLL, v19);
                *(_QWORD *)(v21 + 16) = updated;
              }
              v22 = 48 * v16 - 0x58000000000LL;
              if ( v16 < v18 || v16 >= v18 + 2048 )
              {
                v23 = *(_QWORD *)(v22 + 24);
                v24 = _InterlockedCompareExchange64(
                        (volatile signed __int64 *)(v22 + 24),
                        v17 | v23 & 0xFFFFFFF000000000uLL,
                        v23);
                if ( v23 != v24 )
                {
                  do
                  {
                    v25 = v24;
                    v24 = _InterlockedCompareExchange64(
                            (volatile signed __int64 *)(v22 + 24),
                            v17 | v24 & 0xFFFFFFF000000000uLL,
                            v24);
                  }
                  while ( v25 != v24 );
                }
              }
              else
              {
                *(_QWORD *)(v22 + 40) = v17 | *(_QWORD *)(v22 + 40) & 0xFFFFFFF000000000uLL;
              }
            }
            v16 = 0xFFFFFFFFFLL;
            v17 = 0xFFFFFFFFFLL;
          }
          else
          {
            if ( v16 != 0xFFFFFFFFFLL && (v16 < qword_140388DE0 || v16 >= qword_140388DE0 + 2048) )
            {
              v26 = MiGetPfnPriority(48 * v16 - 0x58000000000LL, 48 * v16 - 0x58000000000LL);
              if ( (_DWORD)PfnPriority != v26 )
                KeBugCheckEx(
                  0x1Au,
                  0x8886uLL,
                  BugCheckParameter2,
                  v27,
                  v26 | (unsigned __int64)(unsigned int)((_DWORD)PfnPriority << 8));
            }
            if ( v17 != 0xFFFFFFFFFLL && (v17 < qword_140388DE0 || v17 >= qword_140388DE0 + 2048) )
            {
              v28 = MiGetPfnPriority(48 * v17 - 0x58000000000LL, 48 * v17 - 0x58000000000LL);
              if ( (_DWORD)PfnPriority != v28 )
                KeBugCheckEx(
                  0x1Au,
                  0x8887uLL,
                  BugCheckParameter2,
                  v29,
                  v28 | (unsigned __int64)(unsigned int)((_DWORD)PfnPriority << 8));
            }
          }
          v30 = 1;
          v81 = 1;
          v80 = (unsigned int)PfnPriority >= *(unsigned __int8 *)(v7 + 4676);
LABEL_97:
          if ( v16 == 0xFFFFFFFFFLL )
          {
            v47 = v78;
            if ( !v78 )
              *(_QWORD *)(v8 + 24) = v17;
          }
          else
          {
            v43 = 48 * v16 - 0x58000000000LL;
            v44 = *(_QWORD *)(v43 + 24);
            if ( v30 == 1 )
            {
              v45 = _InterlockedCompareExchange64(
                      (volatile signed __int64 *)(v43 + 24),
                      v17 | v44 & 0xFFFFFFF000000000uLL,
                      v44);
              if ( v44 != v45 )
              {
                do
                {
                  v46 = v45;
                  v45 = _InterlockedCompareExchange64(
                          (volatile signed __int64 *)(v43 + 24),
                          v17 | v45 & 0xFFFFFFF000000000uLL,
                          v45);
                }
                while ( v46 != v45 );
                v47 = v78;
                goto LABEL_108;
              }
LABEL_105:
              v47 = v78;
              goto LABEL_108;
            }
            v48 = _InterlockedCompareExchange64(
                    (volatile signed __int64 *)(v43 + 24),
                    v17 | v44 & 0xFFFFFFF000000000uLL,
                    v44);
            if ( v44 == v48 )
              goto LABEL_105;
            do
            {
              v49 = v48;
              v48 = _InterlockedCompareExchange64(
                      (volatile signed __int64 *)(v43 + 24),
                      v17 | v48 & 0xFFFFFFF000000000uLL,
                      v48);
            }
            while ( v49 != v48 );
            v47 = v78;
          }
LABEL_108:
          if ( v17 == 0xFFFFFFFFFLL )
          {
            if ( !v47 )
              *(_QWORD *)(v8 + 16) = v16;
          }
          else
          {
            *(_QWORD *)(48 * v17 - 0x58000000000LL) = v16 | *(_QWORD *)(48 * v17 - 0x58000000000LL) & 0xFFFFFFF000000000uLL;
          }
          v50 = v73;
          v51 = v81;
          if ( !v73 )
          {
            --*(_QWORD *)v8;
            if ( v81 == 1 )
            {
              v52 = *(_BYTE *)(BugCheckParameter2 + 35);
              if ( (v52 & 8) != 0 )
                v53 = v73 + 5;
              else
                v53 = v52 & 7;
              v54 = *(unsigned __int8 *)(BugCheckParameter2 + 39) | (*(_QWORD *)BugCheckParameter2 >> 28) & 0xFFFFFFF00LL;
              v55 = (*(_QWORD *)(BugCheckParameter2 + 24) >> 20) & 0xFFFFF0000LL | *(unsigned __int16 *)(BugCheckParameter2 + 36);
              v56 = *(_QWORD *)(BugCheckParameter2 + 40);
              v51 = 3 * (v53 + 8 * (((v56 >> 36) & 3) + 43LL * (HIBYTE(v56) >> 2)) + 297);
              v57 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(qword_140388AF0 + 8 * ((v56 >> 40) & 0x3FF)) + 16LL) + 8 * v51);
              if ( v54 == 0xFFFFFFFFFLL )
              {
                v57[2] = v55;
              }
              else
              {
                v58 = 48 * v54 - 0x58000000000LL;
                v59 = ((*(_QWORD *)(BugCheckParameter2 + 24) >> 20) & 0xFFFFF0000LL) << 20;
                *(_WORD *)(v58 + 36) = *(_WORD *)(BugCheckParameter2 + 36);
                v51 = *(_QWORD *)(v58 + 24);
                v60 = _InterlockedCompareExchange64(
                        (volatile signed __int64 *)(v58 + 24),
                        v59 | v51 & 0xFF00000FFFFFFFFFuLL,
                        v51);
                if ( v51 != v60 )
                {
                  v51 = 0xFF00000FFFFFFFFFuLL;
                  do
                  {
                    v61 = v60;
                    v60 = _InterlockedCompareExchange64(
                            (volatile signed __int64 *)(v58 + 24),
                            v59 | v60 & 0xFF00000FFFFFFFFFuLL,
                            v60);
                  }
                  while ( v61 != v60 );
                }
                v50 = 0;
              }
              if ( v55 == 0xFFFFFFFFFLL )
              {
                v57[1] = v54;
              }
              else
              {
                v62 = 48 * v55 - 0x58000000000LL;
                v63 = *(_QWORD *)v62 ^ (v54 << 28);
                *(_BYTE *)(v62 + 39) = v54;
                *(_QWORD *)v62 = (v54 << 28) ^ v63 & 0xFFFFFFFFFLL;
              }
              --*v57;
              if ( v78 == 1 )
                *(_BYTE *)(BugCheckParameter2 + 35) &= ~8u;
            }
          }
          *(_QWORD *)BugCheckParameter2 = 0LL;
          if ( v50 )
          {
            MiSetPfnBlink(BugCheckParameter2, 0LL, 0LL);
          }
          else
          {
            *(_QWORD *)(BugCheckParameter2 + 24) &= 0xFFFFFFF000000000uLL;
            if ( dword_140388B14 == 1 )
            {
              LOBYTE(v64) = 1;
              v65 = BugCheckParameter2 + 0x58000000000LL;
              v51 = (unsigned __int128)(v65 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
              v66 = (v65 / 48) & 0x1F;
              v67 = (volatile signed __int32 *)stru_140388B68.Buffer + ((unsigned __int64)(v65 / 48) >> 5);
              if ( (unsigned __int64)(v66 + 1) > 0x20 )
              {
                if ( !v66 )
                  goto LABEL_137;
                v68 = (v65 / 48) & 0x1F;
                v51 = (unsigned int)(32 - v68);
                _InterlockedOr(v67++, ((1 << (32 - v68)) - 1) << v66);
                v64 = 1 - v51;
                if ( (unsigned __int64)(1 - v51) >= 0x20 )
                {
                  v51 = v64 >> 5;
                  v64 += -32LL * (v64 >> 5);
                  do
                  {
                    *v67++ = -1;
                    --v51;
                  }
                  while ( v51 );
                }
                if ( v64 )
LABEL_137:
                  _InterlockedOr(v67, (1 << v64) - 1);
              }
              else
              {
                _InterlockedOr(v67, 1 << v66);
              }
            }
          }
          if ( v79 )
            goto LABEL_146;
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          {
            KiReleaseQueuedSpinLockInstrumented(&v74, retaddr);
            goto LABEL_146;
          }
          _m_prefetchw(&v74);
          v69 = v74;
          if ( !v74 )
          {
            if ( (__int64 *)_InterlockedCompareExchange64(v75, 0LL, (signed __int64)&v74) == &v74 )
              goto LABEL_146;
            v69 = KxWaitForLockChainValid(&v74, v51);
          }
          v74 = 0LL;
          _InterlockedXor64((volatile signed __int64 *)(v69 + 8), 1uLL);
LABEL_146:
          if ( v81 != 1 || v73 )
            return v80;
          v70 = _InterlockedDecrement64((volatile signed __int64 *)(v7 + 5952));
          if ( v70 == *(_QWORD *)(v7 + 4968) || v70 == *(_QWORD *)(v7 + 4976) )
            MiUpdateAvailableEvents(v7, v51);
          if ( v70 <= 0x420 )
          {
            v71 = *(_QWORD *)(v7 + 5680);
            if ( !v71 || !*(_BYTE *)(v71 + 52) )
              MiObtainFreePages(v7, v51);
            if ( v70 < 0xA0 && v70 + 1 >= 0xA0 && *(_DWORD *)(v7 + 1144) )
              KeSetEvent((PRKEVENT)(v7 + 992), 0, 0);
          }
          if ( v70 >= 0x9F )
            return v80;
          v72 = *((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3);
          if ( (v72 & 0xC) == 8 )
            return v80;
          return (v70 >= 0x20 || (ULONG_PTR *)v7 != &MiSystemPartition)
              && ((v72 & 2) != 0 && v70 >= 0x21 || (*(_DWORD *)(v7 + 4) & 8) != 0)
              && v80;
        }
        KxWaitForLockOwnerShip(&v74);
      }
      v13 = 0xFFFFFFF000000000uLL;
      goto LABEL_25;
    }
  }
  else if ( (v6 & 0x10000000000000LL) == 0 )
  {
    goto LABEL_9;
  }
  if ( (*(_BYTE *)(BugCheckParameter2 + 35) & 0x40) != 0 )
    MiUnlinkPageFromBadList(BugCheckParameter2, 0LL);
  *(_QWORD *)BugCheckParameter2 = 0LL;
  MiSetPfnBlink(BugCheckParameter2, 0LL, 1LL);
  return 1LL;
}
