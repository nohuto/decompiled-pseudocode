/*
 * XREFs of MiUnlinkPageFromList @ 0x14011AAD0
 * Callers:
 *     MiOutSwapWorkingSetPte @ 0x14000E4B0 (MiOutSwapWorkingSetPte.c)
 *     MiDeleteSubsectionPages @ 0x140016E90 (MiDeleteSubsectionPages.c)
 *     MiDispatchFault @ 0x14001D2A0 (MiDispatchFault.c)
 *     MiUnlinkStandbyBatch @ 0x1400306A0 (MiUnlinkStandbyBatch.c)
 *     MiWalkEntireImage @ 0x140030B50 (MiWalkEntireImage.c)
 *     MiDecayPfnFullyInitialized @ 0x14004DA54 (MiDecayPfnFullyInitialized.c)
 *     MiCopyDataPageToImagePage @ 0x14004F194 (MiCopyDataPageToImagePage.c)
 *     MiActOnPte @ 0x140050360 (MiActOnPte.c)
 *     MiDeleteClusterSection @ 0x1400512C0 (MiDeleteClusterSection.c)
 *     MiDeleteTransitionPte @ 0x140052AA8 (MiDeleteTransitionPte.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140052D00 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiReservePageFileSpaceForPage @ 0x140053840 (MiReservePageFileSpaceForPage.c)
 *     MmPurgeSection @ 0x1400542A0 (MmPurgeSection.c)
 *     MiResolveProtoCombine @ 0x140058068 (MiResolveProtoCombine.c)
 *     MiEmptyDecayClusterTimers @ 0x140080EE0 (MiEmptyDecayClusterTimers.c)
 *     MiRelinkStandbyPage @ 0x1400810F8 (MiRelinkStandbyPage.c)
 *     MiDeleteParentDecayNode @ 0x1400B77E4 (MiDeleteParentDecayNode.c)
 *     MiUnlinkStandbyPfn @ 0x1400BBD84 (MiUnlinkStandbyPfn.c)
 *     MiFlushSectionInternal @ 0x1401187E0 (MiFlushSectionInternal.c)
 *     MiResolveTransitionFault @ 0x140119A70 (MiResolveTransitionFault.c)
 *     MmCheckCachedPageStates @ 0x14011E3C0 (MmCheckCachedPageStates.c)
 *     MiReferencePageForModifiedWrite @ 0x140131E00 (MiReferencePageForModifiedWrite.c)
 *     MiGatherMappedPages @ 0x140133168 (MiGatherMappedPages.c)
 *     MiConvertStandbyToProto @ 0x1401433FC (MiConvertStandbyToProto.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x14014FC20 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiBuildReservationCluster @ 0x14015020C (MiBuildReservationCluster.c)
 *     MiMirrorPerformBrownWrites @ 0x14015649C (MiMirrorPerformBrownWrites.c)
 *     MiPurgeSubsection @ 0x14024FA3C (MiPurgeSubsection.c)
 *     MiMakeOutswappedPageResident @ 0x140250B10 (MiMakeOutswappedPageResident.c)
 *     MiWalkResetCommitPte @ 0x140251AD0 (MiWalkResetCommitPte.c)
 *     MiPurgeImageSection @ 0x14025ACE0 (MiPurgeImageSection.c)
 *     MiEnableLargeSubsection @ 0x14025D860 (MiEnableLargeSubsection.c)
 *     MiMarkFileOnlyPfnBad @ 0x14025E0C4 (MiMarkFileOnlyPfnBad.c)
 *     MiFreeModifiedReservations @ 0x14025F79C (MiFreeModifiedReservations.c)
 *     MiNoPagesLastChance @ 0x140265B58 (MiNoPagesLastChance.c)
 *     MiReuseStandbyPage @ 0x140266478 (MiReuseStandbyPage.c)
 *     MiMakeImagePageOk @ 0x14026A8A4 (MiMakeImagePageOk.c)
 *     MiHandleForkTransitionPte @ 0x14026AEC0 (MiHandleForkTransitionPte.c)
 * Callees:
 *     MiSetPfnBlink @ 0x140003784 (MiSetPfnBlink.c)
 *     KxWaitForLockChainValid @ 0x1400889A0 (KxWaitForLockChainValid.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400A22F0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiDeleteParentDecayNode @ 0x1400B77E4 (MiDeleteParentDecayNode.c)
 *     KxAcquireQueuedSpinLock @ 0x1400E01A0 (KxAcquireQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1400E0660 (KxWaitForLockOwnerShip.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     MiGetPfnPriority @ 0x14011B8F0 (MiGetPfnPriority.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140122D80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiUpdateAvailableEvents @ 0x1401700A4 (MiUpdateAvailableEvents.c)
 *     MiUpdateTransitionPteFrame @ 0x1401A6828 (MiUpdateTransitionPteFrame.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140242390 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140242518 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     MiObtainFreePages @ 0x140259A20 (MiObtainFreePages.c)
 *     MiUnlinkPageFromBadList @ 0x140265518 (MiUnlinkPageFromBadList.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402BA760 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1402BA870 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiUnlinkPageFromList(ULONG_PTR BugCheckParameter2, unsigned __int64 a2)
{
  unsigned __int16 v3; // cx
  int v4; // r15d
  unsigned __int64 v6; // r8
  __int64 v7; // rsi
  __int64 v8; // r12
  int v9; // eax
  int v10; // r13d
  __int64 PfnPriority; // rdi
  unsigned __int64 v12; // r11
  volatile __int64 *v13; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v16; // eax
  unsigned __int64 v17; // r10
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // r13
  __int64 updated; // rax
  __int64 v21; // r11
  unsigned __int64 v22; // rcx
  int v23; // ecx
  unsigned int v24; // eax
  unsigned int v25; // eax
  bool v26; // zf
  __int64 v27; // rax
  volatile __int64 *v28; // r10
  struct _KPRCB *v29; // rcx
  _DWORD *v30; // rdx
  int v31; // eax
  unsigned __int16 v32; // cx
  char v33; // al
  __int64 v34; // rcx
  unsigned __int64 v35; // rax
  unsigned int v36; // edi
  __int64 v37; // rdx
  unsigned __int64 v38; // rdi
  char v39; // r15
  struct _KPRCB *v40; // r10
  _DWORD *v41; // rcx
  int v42; // eax
  int v43; // ett
  unsigned int v44; // ecx
  unsigned int i; // edx
  struct _KPRCB *v46; // rcx
  _DWORD *v47; // rdx
  int v48; // eax
  volatile __int64 *v49; // r10
  struct _KPRCB *v50; // rcx
  _DWORD *v51; // rdx
  int v52; // eax
  _QWORD *v53; // rdx
  volatile signed __int64 *v54; // r11
  signed __int64 v55; // rax
  volatile signed __int64 v56; // rcx
  unsigned __int64 v57; // rcx
  unsigned __int64 v58; // rcx
  int v59; // r12d
  char v60; // al
  unsigned int v61; // r11d
  __int64 v62; // r10
  unsigned __int64 v63; // rdi
  _QWORD *v64; // r13
  __int64 v65; // r9
  __int64 v66; // r11
  unsigned __int64 v67; // rcx
  __int64 v68; // rcx
  __int64 v69; // rax
  unsigned __int64 v70; // rax
  __int64 v71; // rcx
  __int64 v72; // rcx
  unsigned __int64 v73; // r9
  __int64 v74; // rbx
  __int64 v75; // r11
  int v76; // r10d
  __int64 v77; // rax
  struct _KPRCB *v78; // rcx
  int v79; // eax
  unsigned __int64 v80; // rdi
  __int64 v81; // rax
  int v82; // ecx
  int v83; // [rsp+30h] [rbp-58h]
  __int64 v84; // [rsp+38h] [rbp-50h] BYREF
  volatile signed __int64 *v85; // [rsp+40h] [rbp-48h]
  __int64 v86; // [rsp+48h] [rbp-40h]
  void *retaddr; // [rsp+88h] [rbp+0h]
  unsigned int v88; // [rsp+90h] [rbp+8h]
  int v89; // [rsp+98h] [rbp+10h]
  int v90; // [rsp+A0h] [rbp+18h]
  int v91; // [rsp+A8h] [rbp+20h]

  v89 = a2;
  v3 = *(_WORD *)(BugCheckParameter2 + 32);
  v4 = a2;
  v84 = 0LL;
  v85 = 0LL;
  v86 = 0LL;
  if ( v3 )
  {
    if ( (*(_QWORD *)(BugCheckParameter2 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0 )
      KeBugCheckEx(0x4Eu, 2uLL, (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48, BugCheckParameter3, v3);
    return 1LL;
  }
  v6 = *(_QWORD *)(BugCheckParameter2 + 40);
  v7 = *(_QWORD *)(qword_1403CBD88 + 8 * ((v6 >> 40) & 0x3FF));
  v8 = *(_QWORD *)(v7 + 8LL * (*(_BYTE *)(BugCheckParameter2 + 34) & 7) + 4152);
  v9 = *(_DWORD *)(v8 + 8);
  if ( (*(_BYTE *)(BugCheckParameter2 + 34) & 7) == 5 )
  {
    MiUnlinkPageFromBadList(BugCheckParameter2, 0LL);
    return 1LL;
  }
  v88 = 1;
  v10 = 0;
  v90 = 0;
  v83 = 0;
  v91 = 0;
  if ( v9 == 2 )
  {
    if ( ((v6 >> 52) & 1) != 0 )
    {
      if ( (*(_BYTE *)(BugCheckParameter2 + 35) & 0x40) != 0 )
        MiUnlinkPageFromBadList(BugCheckParameter2, 0LL);
      *(_QWORD *)BugCheckParameter2 = 0LL;
      MiSetPfnBlink(BugCheckParameter2, 0LL, 1);
      return 1LL;
    }
    PfnPriority = (unsigned int)MiGetPfnPriority(BugCheckParameter2);
    v12 = 0xFFFFFA8000000000uLL;
    a2 = (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48;
    if ( a2 < qword_1403CC0A0 || a2 >= qword_1403CC0A0 + 2048 )
    {
      v83 = 0;
      v10 = (*(unsigned __int8 *)(BugCheckParameter2 + 35) >> 3) & 1;
      v91 = v10;
      if ( (v6 & 0x200000000000000LL) != 0 )
      {
        _InterlockedDecrement64((volatile signed __int64 *)(v7 + 4288));
      }
      else
      {
        _InterlockedDecrement64((volatile signed __int64 *)(v7 + 4992));
        v91 = v10;
      }
    }
    else
    {
      v83 = 1;
    }
    v8 = v7 + 8 * (PfnPriority + 4 * (PfnPriority + 74));
    if ( v4 )
      goto LABEL_29;
    v84 = 0LL;
    v13 = (volatile __int64 *)(v8 + 32);
    v85 = (volatile signed __int64 *)(v8 + 32);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v16 = SchedulerAssist[5];
        SchedulerAssist[5] = v16 + 1;
        if ( v16 == -1 )
        {
          v6 = *((unsigned __int8 *)SchedulerAssist + 27);
          if ( !*((_BYTE *)SchedulerAssist + 25) && !(_BYTE)v6 )
            KiPerformUnboostKick(CurrentPrcb);
        }
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&v84, v13);
    }
    else
    {
      a2 = _InterlockedExchange64(v13, (__int64)&v84);
      if ( !a2 )
      {
LABEL_29:
        v17 = *(_QWORD *)BugCheckParameter2 & 0xFFFFFFFFFLL;
        v18 = *(_QWORD *)(BugCheckParameter2 + 24) & 0xFFFFFFFFFLL;
        if ( v10 == 1 )
        {
          v19 = qword_1403CC0A0;
          if ( v17 >= qword_1403CC0A0 && v17 < qword_1403CC0A0 + 2048 && v18 == v17 )
          {
            MiDeleteParentDecayNode(BugCheckParameter2);
          }
          else
          {
            v6 = v12 + 48 * v18;
            if ( v18 < qword_1403CC0A0 || v18 >= qword_1403CC0A0 + 2048 )
            {
              *(_QWORD *)v6 = v17 | *(_QWORD *)v6 & 0xFFFFFFF000000000uLL;
            }
            else
            {
              updated = MiUpdateTransitionPteFrame(*(_QWORD *)(v6 + 16), *(_QWORD *)BugCheckParameter2 & 0xFFFFFFFFFLL);
              *(_QWORD *)(v6 + 16) = updated;
            }
            v21 = 48 * v17 - 0x58000000000LL;
            if ( v17 < v19 || v17 >= v19 + 2048 )
            {
              a2 = *(_QWORD *)(v21 + 24);
              v6 = _InterlockedCompareExchange64(
                     (volatile signed __int64 *)(v21 + 24),
                     v18 | a2 & 0xFFFFFFF000000000uLL,
                     a2);
              if ( a2 != v6 )
              {
                do
                {
                  v22 = v6;
                  v6 = _InterlockedCompareExchange64(
                         (volatile signed __int64 *)(v21 + 24),
                         v18 | v6 & 0xFFFFFFF000000000uLL,
                         v6);
                }
                while ( v22 != v6 );
              }
            }
            else
            {
              *(_QWORD *)(v21 + 40) = v18 | *(_QWORD *)(v21 + 40) & 0xFFFFFFF000000000uLL;
            }
          }
          v10 = v91;
          v17 = 0xFFFFFFFFFLL;
          v18 = 0xFFFFFFFFFLL;
        }
        else
        {
          if ( v17 != 0xFFFFFFFFFLL && (v17 < qword_1403CC0A0 || v17 >= qword_1403CC0A0 + 2048) )
          {
            v24 = MiGetPfnPriority(v12 + 48 * v17);
            if ( (_DWORD)PfnPriority != v24 )
              KeBugCheckEx(
                0x1Au,
                0x8886uLL,
                BugCheckParameter2,
                a2,
                v24 | (unsigned __int64)(unsigned int)((_DWORD)PfnPriority << 8));
          }
          if ( v18 != 0xFFFFFFFFFLL && (v18 < qword_1403CC0A0 || v18 >= qword_1403CC0A0 + 2048) )
          {
            v25 = MiGetPfnPriority(v12 + 48 * v18);
            if ( (_DWORD)PfnPriority != v25 )
              KeBugCheckEx(
                0x1Au,
                0x8887uLL,
                BugCheckParameter2,
                a2,
                v25 | (unsigned __int64)(unsigned int)((_DWORD)PfnPriority << 8));
          }
        }
        v23 = 1;
        v90 = 1;
        if ( (unsigned int)PfnPriority < *(unsigned __int8 *)(v7 + 4764) )
          v88 = 0;
        goto LABEL_123;
      }
      KxWaitForLockOwnerShip((__int64)&v84, (_QWORD *)a2);
    }
    v12 = 0xFFFFFA8000000000uLL;
    goto LABEL_29;
  }
  v26 = v9 == 3;
  v27 = 4288LL;
  if ( v26 )
  {
    _InterlockedDecrement64((volatile signed __int64 *)v8);
    if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0x200000000000000LL) == 0 )
      v27 = 4992LL;
    _InterlockedDecrement64((volatile signed __int64 *)(v27 + v7));
    if ( (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) != 0 )
    {
      v35 = *(_QWORD *)(BugCheckParameter2 + 40);
      v8 = v7 + 8 * ((v35 >> 58) + 4 * ((v35 >> 58) + 106));
      if ( ((v35 >> 52) & 1) != 0 )
      {
        v36 = 0;
      }
      else
      {
        v37 = (unsigned __int128)((__int64)(BugCheckParameter2 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
        v38 = (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48;
        if ( qword_1403CB6B0 )
        {
          if ( qword_1403CBF88 )
          {
            v39 = 17;
            if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
            {
              LOBYTE(v37) = -1;
              ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&dword_1403CB420, v37);
            }
            else
            {
              v40 = KeGetCurrentPrcb();
              v41 = v40->SchedulerAssist;
              if ( v41 )
              {
                if ( v40->NestingLevel <= 1u )
                {
                  v42 = v41[5];
                  v41[5] = v42 + 1;
                  if ( v42 == -1 && !*((_BYTE *)v41 + 25) && !*((_BYTE *)v41 + 27) )
                    KiPerformUnboostKick(v40);
                }
              }
              _m_prefetchw(&dword_1403CB420);
              v43 = dword_1403CB420 & 0x7FFFFFFF;
              if ( v43 != _InterlockedCompareExchange(
                            &dword_1403CB420,
                            (dword_1403CB420 & 0x7FFFFFFF) + 1,
                            dword_1403CB420 & 0x7FFFFFFF) )
              {
                KiSetVpThreadSpinLockCount((__int64)v40, 0);
                ExpWaitForSpinLockSharedAndAcquire(&dword_1403CB420, 0xFFu);
              }
            }
          }
          else
          {
            v39 = 18;
          }
          v44 = dword_1403CB694;
          v6 = qword_1403CB6B0;
          if ( v38 < *(_QWORD *)(qword_1403CB6B0 + 16LL * (unsigned int)dword_1403CB694) )
          {
            do
              --v44;
            while ( v38 < *(_QWORD *)(qword_1403CB6B0 + 16LL * v44) );
          }
          else
          {
            for ( i = dword_1403CB694 + 1; v38 >= *(_QWORD *)(qword_1403CB6B0 + 16LL * i); ++v44 )
              ++i;
          }
          v36 = *(_DWORD *)(qword_1403CB6B0 + 16LL * v44 + 8);
          dword_1403CB694 = v44;
          if ( v39 != 18 )
          {
            if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            {
              ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&dword_1403CB420, retaddr);
            }
            else
            {
              _InterlockedAnd(&dword_1403CB420, 0xBFFFFFFF);
              _InterlockedDecrement(&dword_1403CB420);
            }
            v46 = KeGetCurrentPrcb();
            v47 = v46->SchedulerAssist;
            if ( v47 )
            {
              if ( v46->NestingLevel <= 1u )
              {
                v48 = v47[5] - 1;
                v47[5] = v48;
                if ( !v48 )
                {
                  v6 = *((unsigned __int8 *)v47 + 27);
                  if ( !*((_BYTE *)v47 + 25) && !(_BYTE)v6 )
                    KiPerformUnboostKick(v46);
                }
              }
            }
          }
          v4 = v89;
        }
        else
        {
          v36 = 0;
        }
      }
      if ( !v4 )
      {
        v84 = 0LL;
        v49 = (volatile __int64 *)(v8 + 32);
        v85 = (volatile signed __int64 *)(v8 + 32);
        v50 = KeGetCurrentPrcb();
        v51 = v50->SchedulerAssist;
        if ( v51 )
        {
          if ( v50->NestingLevel <= 1u )
          {
            v52 = v51[5];
            v51[5] = v52 + 1;
            if ( v52 == -1 )
            {
              v6 = *((unsigned __int8 *)v51 + 27);
              if ( !*((_BYTE *)v51 + 25) && !(_BYTE)v6 )
                KiPerformUnboostKick(v50);
            }
          }
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireQueuedSpinLockInstrumented(&v84, v49);
        }
        else
        {
          v53 = (_QWORD *)_InterlockedExchange64(v49, (__int64)&v84);
          if ( v53 )
            KxWaitForLockOwnerShip((__int64)&v84, v53);
        }
      }
      a2 = 0x3FFFFFFFFFFFFFFLL;
      *(_QWORD *)(BugCheckParameter2 + 40) = *(_QWORD *)(BugCheckParameter2 + 40) & 0x3FFFFFFFFFFFFFFLL | ((unsigned __int64)v36 << 58);
    }
    else
    {
      if ( !(_DWORD)a2 )
      {
        v84 = 0LL;
        v28 = (volatile __int64 *)(v8 + 32);
        v85 = (volatile signed __int64 *)(v8 + 32);
        v29 = KeGetCurrentPrcb();
        v30 = v29->SchedulerAssist;
        if ( v30 )
        {
          if ( v29->NestingLevel <= 1u )
          {
            v31 = v30[5];
            v30[5] = v31 + 1;
            if ( v31 == -1 )
            {
              v6 = *((unsigned __int8 *)v30 + 27);
              if ( !*((_BYTE *)v30 + 25) && !(_BYTE)v6 )
                KiPerformUnboostKick(v29);
            }
          }
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireQueuedSpinLockInstrumented(&v84, v28);
        }
        else
        {
          a2 = _InterlockedExchange64(v28, (__int64)&v84);
          if ( a2 )
            KxWaitForLockOwnerShip((__int64)&v84, (_QWORD *)a2);
        }
      }
      --*(_QWORD *)(v7 + 7536);
      v32 = *(_QWORD *)(BugCheckParameter2 + 16);
      v33 = (unsigned __int8)v32 >> 1;
      v34 = v32 >> 12;
      if ( (v33 & 1) != 0 || (_DWORD)v34 == *(_DWORD *)(v7 + 1140) )
        v8 = v7 + 8 * (v34 + 4 * (v34 + 86));
      else
        v8 = v7 + 2688;
    }
  }
  else
  {
    if ( (v6 & 0x200000000000000LL) == 0 )
      v27 = 4992LL;
    _InterlockedDecrement64((volatile signed __int64 *)(v7 + v27));
    if ( !(_DWORD)a2 )
    {
      v84 = 0LL;
      v85 = (volatile signed __int64 *)(v8 + 32);
      KxAcquireQueuedSpinLock((__int64)&v84, (volatile __int64 *)(v8 + 32));
    }
  }
  v17 = *(_QWORD *)BugCheckParameter2 & 0xFFFFFFFFFLL;
  v18 = *(_QWORD *)(BugCheckParameter2 + 24) & 0xFFFFFFFFFLL;
  v23 = 0;
LABEL_123:
  if ( v17 == 0xFFFFFFFFFLL )
  {
    if ( !v10 )
      *(_QWORD *)(v8 + 24) = v18;
  }
  else
  {
    v54 = (volatile signed __int64 *)(48 * v17 - 0x57FFFFFFFE8LL);
    v26 = v23 == 1;
    a2 = *v54;
    v55 = *v54;
    v56 = *v54;
    if ( v26 )
    {
      v6 = _InterlockedCompareExchange64(v54, v18 | v56 & 0xFFFFFFF000000000uLL, v55);
      if ( a2 != v6 )
      {
        do
        {
          v57 = v6;
          v6 = _InterlockedCompareExchange64(v54, v18 | v6 & 0xFFFFFFF000000000uLL, v6);
        }
        while ( v57 != v6 );
      }
    }
    else
    {
      v6 = _InterlockedCompareExchange64(v54, v18 | v56 & 0xFFFFFFF000000000uLL, v55);
      if ( a2 != v6 )
      {
        do
        {
          v58 = v6;
          v6 = _InterlockedCompareExchange64(v54, v18 | v6 & 0xFFFFFFF000000000uLL, v6);
        }
        while ( v58 != v6 );
      }
    }
  }
  if ( v18 == 0xFFFFFFFFFLL )
  {
    if ( !v10 )
      *(_QWORD *)(v8 + 16) = v17;
  }
  else
  {
    a2 = 48 * v18 - 0x58000000000LL;
    *(_QWORD *)a2 = v17 | *(_QWORD *)a2 & 0xFFFFFFF000000000uLL;
  }
  if ( v83 )
  {
    v59 = v90;
  }
  else
  {
    --*(_QWORD *)v8;
    v59 = v90;
    if ( v90 == 1 )
    {
      v60 = *(_BYTE *)(BugCheckParameter2 + 35);
      if ( (v60 & 8) != 0 )
        v61 = 5;
      else
        v61 = v60 & 7;
      v62 = *(unsigned __int8 *)(BugCheckParameter2 + 39) | (*(_QWORD *)BugCheckParameter2 >> 28) & 0xFFFFFFF00LL;
      v63 = (*(_QWORD *)(BugCheckParameter2 + 24) >> 20) & 0xFFFFF0000LL | *(unsigned __int16 *)(BugCheckParameter2 + 36);
      a2 = *(_QWORD *)(qword_1403CBD88 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 40) & 0x3FFLL));
      v6 = *(_QWORD *)(a2 + 16) + 1984LL * (*(_QWORD *)(BugCheckParameter2 + 40) >> 58);
      v64 = (_QWORD *)(v6 + 24 * (v61 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 36) & 3LL)));
      if ( v62 == 0xFFFFFFFFFLL )
      {
        v64[109] = v63;
      }
      else
      {
        v65 = 48 * v62 - 0x58000000000LL;
        v66 = ((v63 >> 16) & 0xFFFFF) << 36;
        *(_WORD *)(v65 + 36) = *(_WORD *)(BugCheckParameter2 + 36);
        a2 = *(_QWORD *)(v65 + 24);
        v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(v65 + 24), v66 | a2 & 0xFF00000FFFFFFFFFuLL, a2);
        if ( a2 != v6 )
        {
          a2 = 0xFF00000FFFFFFFFFuLL;
          do
          {
            v67 = v6;
            v6 = _InterlockedCompareExchange64(
                   (volatile signed __int64 *)(v65 + 24),
                   v66 | v6 & 0xFF00000FFFFFFFFFuLL,
                   v6);
          }
          while ( v67 != v6 );
        }
      }
      if ( v63 == 0xFFFFFFFFFLL )
      {
        v64[108] = v62;
      }
      else
      {
        v68 = 48 * v63 - 0x58000000000LL;
        v69 = *(_QWORD *)v68 ^ (v62 << 28);
        *(_BYTE *)(v68 + 39) = v62;
        *(_QWORD *)v68 = (v62 << 28) ^ v69 & 0xFFFFFFFFFLL;
      }
      --v64[107];
      v59 = 1;
      if ( v91 == 1 )
        *(_BYTE *)(BugCheckParameter2 + 35) &= ~8u;
    }
  }
  *(_QWORD *)BugCheckParameter2 = 0LL;
  if ( v83 )
  {
    MiSetPfnBlink(BugCheckParameter2, 0LL, 0);
    goto LABEL_169;
  }
  v70 = *(_QWORD *)(BugCheckParameter2 + 24) & 0xFFFFFFF000000000uLL;
  v71 = *(_QWORD *)(BugCheckParameter2 + 40) >> 52;
  *(_QWORD *)(BugCheckParameter2 + 24) = v70;
  v72 = v71 & 1;
  if ( (v70 & 0x4000000000000000LL) != 0 )
  {
    if ( v72 )
      goto LABEL_169;
  }
  else if ( v72 )
  {
    goto LABEL_169;
  }
  if ( dword_1403CBDAC == 1 )
  {
    LOBYTE(v73) = 1;
    v74 = BugCheckParameter2 + 0x58000000000LL;
    a2 = (unsigned __int128)(v74 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
    v75 = (v74 / 48) & 0x1F;
    v6 = qword_1403CBE08 + 4 * ((unsigned __int64)(v74 / 48) >> 5);
    if ( (unsigned __int64)(v75 + 1) > 0x20 )
    {
      if ( !v75 )
        goto LABEL_167;
      v76 = (v74 / 48) & 0x1F;
      a2 = (unsigned int)(32 - v76);
      _InterlockedOr((volatile signed __int32 *)v6, ((1 << (32 - v76)) - 1) << v75);
      v6 += 4LL;
      v73 = 1 - a2;
      if ( 1 - a2 >= 0x20 )
      {
        a2 = v73 >> 5;
        v73 += -32LL * (v73 >> 5);
        do
        {
          *(_DWORD *)v6 = -1;
          v6 += 4LL;
          --a2;
        }
        while ( a2 );
      }
      if ( v73 )
LABEL_167:
        _InterlockedOr((volatile signed __int32 *)v6, (1 << v73) - 1);
    }
    else
    {
      _InterlockedOr((volatile signed __int32 *)v6, 1 << v75);
    }
  }
LABEL_169:
  if ( !v89 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&v84, retaddr);
LABEL_176:
      v78 = KeGetCurrentPrcb();
      a2 = (unsigned __int64)v78->SchedulerAssist;
      if ( a2 )
      {
        if ( v78->NestingLevel <= 1u )
        {
          v79 = *(_DWORD *)(a2 + 20) - 1;
          *(_DWORD *)(a2 + 20) = v79;
          if ( !v79 )
          {
            v6 = *(unsigned __int8 *)(a2 + 27);
            if ( !*(_BYTE *)(a2 + 25) && !(_BYTE)v6 )
              KiPerformUnboostKick(v78);
          }
        }
      }
      goto LABEL_182;
    }
    _m_prefetchw(&v84);
    v77 = v84;
    if ( !v84 )
    {
      if ( (__int64 *)_InterlockedCompareExchange64(v85, 0LL, (signed __int64)&v84) == &v84 )
        goto LABEL_176;
      v77 = KxWaitForLockChainValid(&v84);
    }
    v84 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v77 + 8), 1uLL);
    goto LABEL_176;
  }
LABEL_182:
  if ( v59 != 1 || v83 )
    return v88;
  v80 = _InterlockedDecrement64((volatile signed __int64 *)(v7 + 7040));
  if ( v80 == *(_QWORD *)(v7 + 6120) || v80 == *(_QWORD *)(v7 + 6128) )
    MiUpdateAvailableEvents(v7, a2);
  if ( v80 <= 0x420 )
  {
    v81 = *(_QWORD *)(v7 + 6768);
    if ( !v81 || !*(_BYTE *)(v81 + 52) )
      MiObtainFreePages(v7, a2, v6);
    if ( v80 < 0xA0 && v80 + 1 >= 0xA0 && *(_DWORD *)(v7 + 1144) )
      KeSetEvent((PRKEVENT)(v7 + 992), 0, 0);
  }
  if ( v80 >= 0x9F )
    return v88;
  v82 = *((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3);
  if ( (v82 & 0xC) == 8 )
    return v88;
  if ( (v80 >= 0x20 || (ULONG_PTR *)v7 != &MiSystemPartition)
    && ((v82 & 2) != 0 && v80 >= 0x21 || (*(_DWORD *)(v7 + 4) & 8) != 0) )
  {
    return v88;
  }
  else
  {
    return 0LL;
  }
}
