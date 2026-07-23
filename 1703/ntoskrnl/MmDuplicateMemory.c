/*
 * XREFs of MmDuplicateMemory @ 0x14040BFE8
 * Callers:
 *     PopTransitionToSleep @ 0x14040BE50 (PopTransitionToSleep.c)
 *     IopLiveDumpCaptureMemoryPages @ 0x140416058 (IopLiveDumpCaptureMemoryPages.c)
 *     IopLiveDumpEstimateMemoryPages @ 0x14041663C (IopLiveDumpEstimateMemoryPages.c)
 *     PnprInitiateReplaceOperation @ 0x140417290 (PnprInitiateReplaceOperation.c)
 *     MmCreateMirror @ 0x1406B4F80 (MmCreateMirror.c)
 * Callees:
 *     MiUnlockDynamicMemoryExclusive @ 0x1400203E4 (MiUnlockDynamicMemoryExclusive.c)
 *     MiLockDynamicMemoryExclusive @ 0x140020728 (MiLockDynamicMemoryExclusive.c)
 *     MmUnlockPagableImageSection @ 0x14006CCE0 (MmUnlockPagableImageSection.c)
 *     MiIsDecayPfn @ 0x140075F20 (MiIsDecayPfn.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     MiUnlinkPageFromList @ 0x1400C3100 (MiUnlinkPageFromList.c)
 *     MiPfnReferenceCountIsZero @ 0x1400C9020 (MiPfnReferenceCountIsZero.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1400CCB60 (MiRemoveLockedPageChargeAndDecRef.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
 *     MiAddLockedPageCharge @ 0x140109894 (MiAddLockedPageCharge.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x14012B570 (KeReleaseInStackQueuedSpinLock.c)
 *     MiMirrorNodeLargePages @ 0x14013A564 (MiMirrorNodeLargePages.c)
 *     MiLockAllMemoryLists @ 0x14013ACC0 (MiLockAllMemoryLists.c)
 *     MiUnlockAllMemoryLists @ 0x14013AF68 (MiUnlockAllMemoryLists.c)
 *     MiDiscardTransitionPte @ 0x14013B9CC (MiDiscardTransitionPte.c)
 *     MiResumeFromHibernate @ 0x14013D43C (MiResumeFromHibernate.c)
 *     CcNotifyWriteBehind @ 0x14013E078 (CcNotifyWriteBehind.c)
 *     RtlInterlockedClearBitRunEx @ 0x14013E944 (RtlInterlockedClearBitRunEx.c)
 *     RtlFindSetBitsEx @ 0x14013E9A0 (RtlFindSetBitsEx.c)
 *     RtlFindNextForwardRunClearEx @ 0x14013ECF0 (RtlFindNextForwardRunClearEx.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     MiEmptyAllWorkingSets @ 0x140214E74 (MiEmptyAllWorkingSets.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14021EE14 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MiLockPage @ 0x14021EF00 (MiLockPage.c)
 *     MiUnlockPage @ 0x14021EF0C (MiUnlockPage.c)
 *     RtlInterlockedSetBitRunEx @ 0x14023D508 (RtlInterlockedSetBitRunEx.c)
 *     MiRemoveEnclavePagesFromMirror @ 0x1404040E4 (MiRemoveEnclavePagesFromMirror.c)
 *     MmLockPagableSectionByHandle @ 0x1404B2EC0 (MmLockPagableSectionByHandle.c)
 *     MiUpdateMirrorBitmaps @ 0x14057AB34 (MiUpdateMirrorBitmaps.c)
 *     MiActOnMirrorBitmap @ 0x14057AB74 (MiActOnMirrorBitmap.c)
 */

__int64 __fastcall MmDuplicateMemory(__int64 a1)
{
  int v1; // r15d
  __int64 (**v2)(void); // r12
  int v4; // r14d
  int v5; // r13d
  struct _KTHREAD *CurrentThread; // rdi
  int v7; // ebp
  int v8; // esi
  unsigned int v9; // edi
  unsigned __int64 v10; // r13
  int v11; // edi
  unsigned int v12; // ebp
  __int64 v13; // rdi
  unsigned int v14; // r14d
  ULONG_PTR *v15; // rsi
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rdx
  unsigned __int64 i; // r14
  _QWORD *v19; // r12
  __int64 v20; // rcx
  unsigned __int64 *v21; // r14
  __int64 v22; // rbp
  unsigned __int64 j; // rdi
  unsigned __int64 v24; // rdi
  ULONG64 v25; // rsi
  int v26; // r12d
  unsigned __int64 v27; // rbp
  ULONG64 SetBits; // rax
  unsigned __int64 v29; // r14
  unsigned __int64 NextForwardRunClear; // rax
  unsigned __int64 SizeOfBitMap; // rsi
  unsigned __int64 v32; // rdi
  unsigned __int64 v33; // rsi
  __int64 v34; // rbp
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // rdi
  unsigned __int64 v37; // r12
  unsigned __int8 v38; // r14
  unsigned __int64 v39; // r12
  unsigned __int64 v40; // r13
  unsigned __int8 v41; // di
  int v42; // esi
  unsigned __int8 CurrentIrql; // r12
  __int64 v44; // r13
  unsigned __int8 v45; // di
  __int64 v46; // rcx
  __int64 v47; // rdx
  unsigned int v48; // r13d
  unsigned int v49; // ebp
  __int64 v50; // rsi
  ULONG_PTR *v51; // rdi
  unsigned __int64 v52; // rdi
  __int64 v53; // r12
  unsigned __int64 v54; // r15
  unsigned __int64 v55; // r14
  ULONG64 v56; // rdi
  ULONG64 v57; // rax
  ULONG64 v58; // rsi
  unsigned __int64 v59; // rax
  unsigned __int64 v60; // rdi
  unsigned __int64 v61; // r14
  unsigned __int64 v62; // rdi
  ULONG64 v63; // rdi
  ULONG64 v64; // rax
  ULONG64 v65; // rsi
  unsigned __int64 v66; // rax
  unsigned __int64 v67; // rdi
  unsigned __int64 v68; // r14
  unsigned __int64 v69; // rdi
  int v70; // eax
  int v71; // [rsp+30h] [rbp-A8h]
  int v72; // [rsp+30h] [rbp-A8h]
  int v73; // [rsp+34h] [rbp-A4h]
  char v74; // [rsp+38h] [rbp-A0h]
  int v75; // [rsp+3Ch] [rbp-9Ch]
  unsigned __int64 v76; // [rsp+40h] [rbp-98h]
  __int64 v77; // [rsp+40h] [rbp-98h]
  __int64 v78; // [rsp+48h] [rbp-90h]
  unsigned __int64 v79; // [rsp+50h] [rbp-88h]
  unsigned __int8 v80; // [rsp+50h] [rbp-88h]
  int v81; // [rsp+58h] [rbp-80h]
  unsigned __int64 v82; // [rsp+60h] [rbp-78h] BYREF
  int v83; // [rsp+68h] [rbp-70h]
  unsigned __int64 v84; // [rsp+70h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp-60h] BYREF
  unsigned int v87; // [rsp+E8h] [rbp+10h]
  int v88; // [rsp+F0h] [rbp+18h]
  unsigned int v89; // [rsp+F8h] [rbp+20h]
  int v90; // [rsp+F8h] [rbp+20h]
  unsigned int v91; // [rsp+F8h] [rbp+20h]

  v1 = *(_DWORD *)(a1 + 32);
  v2 = (__int64 (**)(void))a1;
  v74 = v1;
  if ( (v1 & 5) == 5 )
    return 3221225485LL;
  if ( (v1 & 8) != 0 )
  {
    LOBYTE(v1) = v1 & 0xFA;
    v74 = v1;
  }
  if ( (v1 & 0xA) != 0 )
  {
    v4 = 0;
  }
  else
  {
    CcNotifyWriteBehind(2);
    v4 = 1;
  }
  v71 = v4;
  v88 = 0;
  v75 = 0;
  v5 = 0;
  KeWaitForSingleObject(&stru_14036C920, WrVirtualMemory, 0, 0, 0LL);
  CurrentThread = KeGetCurrentThread();
  v78 = (__int64)CurrentThread;
  v87 = 8;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14036C8B8, 0LL);
  MiLockDynamicMemoryExclusive((__int64)&MiSystemPartition, (__int64)CurrentThread);
  if ( (MiFlags & 4) == 0 )
    MmLockPagableSectionByHandle(ExPageLockHandle);
  _InterlockedIncrement(&dword_14036CFD0);
  if ( !(unsigned int)MiUpdateMirrorBitmaps() )
  {
    v7 = -1073741670;
    goto LABEL_179;
  }
  MiActOnMirrorBitmap(&stru_14036C970, 1LL);
  v81 = 0;
  v8 = 0;
  v73 = 1;
  v9 = 0;
  if ( (v1 & 1) != 0 )
  {
    v9 = 3;
LABEL_19:
    v73 = 0;
    goto LABEL_20;
  }
  if ( (v1 & 4) != 0 )
  {
    v87 = 7;
LABEL_18:
    v9 = 2;
    goto LABEL_19;
  }
  if ( (v1 & 8) != 0 )
  {
    v87 = 0;
    goto LABEL_18;
  }
LABEL_20:
  v7 = (*v2)();
  if ( v7 < 0 )
    goto LABEL_178;
  v10 = v9;
  v11 = v1 & 4;
  v84 = v10;
  v83 = v11;
  while ( 2 )
  {
    MiActOnMirrorBitmap(&stru_14036C960, 2LL);
    if ( v8 == v4 )
    {
      v75 = 1;
      _InterlockedIncrement(&dword_14036CEA8);
    }
    if ( v11 )
    {
      v12 = v87;
    }
    else
    {
      if ( (v1 & 0x10) == 0 )
        MiEmptyAllWorkingSets((__int64)&MiSystemPartition);
      v12 = 0;
    }
    dword_14036C91C = 1;
    v13 = v10;
    v89 = 0;
    v14 = 0;
    do
    {
      v15 = (ULONG_PTR *)*(&MiSystemPartition + v13 + 495);
      if ( v13 <= 1 )
        v15 = (ULONG_PTR *)(*(&MiSystemPartition + v13 + 240) + 40LL * v14);
      if ( v13 == 2 )
        v15 = &MiSystemPartition + 4 * v12 + v12 + 272;
      if ( v13 == 3 )
      {
        if ( *v15 == qword_140381A70 )
          goto LABEL_50;
        v15 = &MiSystemPartition + 5 * v12 + 400;
      }
      KeAcquireInStackQueuedSpinLock(v15 + 4, &LockHandle);
      if ( *v15 )
      {
        v16 = v15[2];
        do
        {
          if ( v13 == 2 && MiIsDecayPfn(v16) )
          {
            for ( i = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE((__int64 *)(48 * v16 - 0x57FFFFFFFF0LL));
                  i != v16;
                  i = *v19 & 0xFFFFFFFFFLL )
            {
              v19 = (_QWORD *)(v17 + 48 * i);
              if ( _bittest64((const signed __int64 *)stru_14036C970.Buffer, i) )
              {
                RtlInterlockedClearBitRunEx((__int64)&stru_14036C970, i, 1uLL);
                v17 = 0xFFFFFA8000000000uLL;
                _bittestandset64((signed __int64 *)stru_14036C960.Buffer, i);
              }
            }
          }
          else if ( _bittest64((const signed __int64 *)stru_14036C970.Buffer, v16) )
          {
            RtlInterlockedClearBitRunEx((__int64)&stru_14036C970, v16, 1uLL);
            _bittestandset64((signed __int64 *)stru_14036C960.Buffer, v16);
          }
          v16 = *(_QWORD *)(48 * v16 - 0x58000000000LL) & 0xFFFFFFFFFLL;
        }
        while ( v16 != 0xFFFFFFFFFLL );
        v14 = v89;
        v2 = (__int64 (**)(void))a1;
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( v13 > 1 )
      {
        if ( v13 == 2 )
        {
          if ( ++v12 == 8 )
            v12 = 0;
          else
            v13 = 1LL;
        }
        else if ( v13 == 3 && ++v12 != 16 )
        {
          v13 = 2LL;
        }
      }
      else
      {
        v89 = ++v14;
        if ( v14 >= dword_14036C1FC )
        {
          v89 = 0;
          v14 = 0;
          if ( v13 == 1 )
            MiMirrorNodeLargePages(v20, 0, (__int64)v2);
        }
        else
        {
          --v13;
        }
      }
LABEL_50:
      ++v13;
    }
    while ( v13 <= 4 );
    KeAcquireInStackQueuedSpinLock(&qword_140381A20, &LockHandle);
    v21 = (unsigned __int64 *)&unk_140380C10;
    v22 = 16LL;
    do
    {
      for ( j = *v21; j != 0xFFFFFFFFFLL; j = *(_QWORD *)(48 * j - 0x58000000000LL) & 0xFFFFFFFFFLL )
      {
        if ( _bittest64((const signed __int64 *)stru_14036C970.Buffer, j) )
        {
          RtlInterlockedClearBitRunEx((__int64)&stru_14036C970, j, 1uLL);
          _bittestandset64((signed __int64 *)stru_14036C960.Buffer, j);
        }
      }
      v21 += 5;
      --v22;
    }
    while ( v22 );
    v24 = qword_140380BD0;
    LOBYTE(v1) = v74;
    if ( qword_140380BD0 != 0xFFFFFFFFFLL )
    {
      do
      {
        if ( _bittest64((const signed __int64 *)stru_14036C970.Buffer, v24) )
        {
          RtlInterlockedClearBitRunEx((__int64)&stru_14036C970, v24, 1uLL);
          _bittestandset64((signed __int64 *)stru_14036C960.Buffer, v24);
        }
        v24 = *(_QWORD *)(48 * v24 - 0x58000000000LL) & 0xFFFFFFFFFLL;
      }
      while ( v24 != 0xFFFFFFFFFLL );
      LOBYTE(v1) = v74;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v25 = 0LL;
    v90 = 0;
    v26 = 0;
    v79 = 0LL;
    v27 = 0LL;
    while ( 2 )
    {
      SetBits = RtlFindSetBitsEx(&stru_14036C960, 1uLL, v25);
      v29 = SetBits;
      if ( SetBits < v25 || SetBits == -1LL )
        break;
      NextForwardRunClear = RtlFindNextForwardRunClearEx((__int64)&stru_14036C960, SetBits, &v82);
      SizeOfBitMap = v82;
      v32 = NextForwardRunClear;
      v76 = NextForwardRunClear;
      if ( !NextForwardRunClear )
        SizeOfBitMap = stru_14036C960.SizeOfBitMap;
      v33 = SizeOfBitMap - v29;
      if ( (v1 & 8) == 0 )
        goto LABEL_101;
      if ( v26 == 1 )
      {
        RtlInterlockedSetBitRunEx((__int64)&stru_14036C970, v29, v33);
        v25 = v29 + v32 + v33;
        goto LABEL_107;
      }
      v76 = 0LL;
      v34 = -1LL;
      if ( v33 > 0x100 )
        v33 = 256LL;
      v35 = v33;
      v25 = v29;
      v36 = 48 * v29 - 0x58000000000LL;
      v37 = v36 + 48 * v35;
      while ( 1 )
      {
        v38 = MiLockPage(v36);
        if ( *(_WORD *)(v36 + 32) || (unsigned __int8)((*(_BYTE *)(v36 + 34) & 7) - 2) > 2u )
        {
          MiUnlockPage(v36, v38);
          if ( v34 != -1 )
            goto LABEL_100;
          goto LABEL_93;
        }
        if ( !MiUnlinkPageFromList(v36, 0) )
          break;
        *(_QWORD *)(v36 + 24) &= 0xC000000000000000uLL;
        if ( !(unsigned int)MiAddLockedPageCharge(v36, 0) )
        {
          MiPfnReferenceCountIsZero(v36, v25);
          goto LABEL_98;
        }
        RtlInterlockedClearBitRunEx((__int64)&stru_14036C970, v25, 1uLL);
        MiUnlockPage(v36, v38);
        if ( v34 == -1 )
          v34 = v25;
LABEL_93:
        v36 += 48LL;
        ++v25;
        if ( v36 >= v37 )
        {
          v26 = v90;
          goto LABEL_95;
        }
      }
      MiDiscardTransitionPte(v36);
LABEL_98:
      MiUnlockPage(v36, v38);
      v26 = 1;
      v90 = 1;
LABEL_95:
      if ( v34 != -1 )
      {
LABEL_100:
        v29 = v34;
        v33 = v25 - v34;
        v27 = v79;
LABEL_101:
        v79 = v33 + v27;
        v7 = (*(__int64 (__fastcall **)(unsigned __int64, unsigned __int64))(a1 + 16))(v29 << 12, v33 << 12);
        if ( (v1 & 8) != 0 )
        {
          v39 = 48 * v29 - 0x58000000000LL;
          v40 = v39 + 48 * v33;
          do
          {
            v41 = MiLockPage(v39);
            MiRemoveLockedPageChargeAndDecRef(v39);
            MiUnlockPage(v39, v41);
            v39 += 48LL;
          }
          while ( v39 < v40 );
        }
        if ( v7 >= 0 )
        {
          v26 = v90;
          v25 = v29 + v76 + v33;
          goto LABEL_106;
        }
        if ( v75 == 1 )
          _InterlockedAdd(&dword_14036CEA8, 0xFFFFFFFF);
        dword_14036C91C = 0;
        goto LABEL_177;
      }
LABEL_106:
      v27 = v79;
LABEL_107:
      if ( v25 < stru_14036C960.SizeOfBitMap )
        continue;
      break;
    }
    v42 = v75;
    if ( v75 != 1 && v27 >= 0x400 )
    {
      v2 = (__int64 (**)(void))a1;
      v8 = v81 + 1;
      v11 = v83;
      v4 = v71;
      v10 = v84;
      ++v81;
      continue;
    }
    break;
  }
  if ( (v1 & 2) == 0 && v75 == 1 )
  {
    _InterlockedAdd(&dword_14036CEA8, 0xFFFFFFFF);
    v42 = 0;
  }
  CurrentIrql = KeGetCurrentIrql();
  v44 = a1;
  v80 = CurrentIrql;
  v7 = (*(__int64 (__fastcall **)(_QWORD))(a1 + 8))(0LL);
  if ( v7 >= 0 )
  {
    v45 = KeGetCurrentIrql();
    if ( *(_QWORD *)(a1 + 24) )
      MiActOnMirrorBitmap(&stru_14036C960, 1LL);
    if ( v45 < 2u )
    {
      KeGetCurrentIrql();
      __writecr8(2uLL);
    }
    MiLockAllMemoryLists();
    qword_14036C958 = v78;
    if ( v42 == 1 )
      _InterlockedAdd(&dword_14036CEA8, 0xFFFFFFFF);
    v47 = 2LL;
    dword_14036C91C = 2;
    if ( qword_14036C298 )
    {
      MiRemoveEnclavePagesFromMirror();
      v47 = 2LL;
    }
    if ( (v1 & 0xD) == 0 )
      goto LABEL_157;
    v72 = 0;
    v48 = 0;
    v91 = 0;
    v49 = 0;
    v50 = 2LL - ((v1 & 8) != 0);
LABEL_131:
    v77 = v50;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v50 > 1 )
        {
          v51 = &MiSystemPartition + 5 * v48 + 272;
        }
        else
        {
          v46 = 5LL * v49;
          v51 = (ULONG_PTR *)(*(&MiSystemPartition + v50 + 240) + 40LL * v49);
        }
        v52 = v51[2];
        if ( v52 != 0xFFFFFFFFFLL )
        {
          while ( 1 )
          {
            v53 = 48 * v52;
            v54 = 0xFFFFFA8000000000uLL;
            v84 = 0xFFFFFA8000000000uLL;
            if ( v50 == v47 && MiIsDecayPfn(v52) )
            {
              v55 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE((__int64 *)(v53 - 0x57FFFFFFFF0LL));
              if ( v55 == v52 )
                goto LABEL_144;
              do
              {
                RtlInterlockedClearBitRunEx((__int64)&stru_14036C970, v55, 1uLL);
                if ( *(_QWORD *)(a1 + 24) )
                  _bittestandreset64((signed __int64 *)stru_14036C960.Buffer, v55);
                v55 = *(_QWORD *)(48 * v55 - 0x58000000000LL) & 0xFFFFFFFFFLL;
              }
              while ( v55 != v52 );
              v50 = v77;
              v54 = v84;
            }
            else
            {
              RtlInterlockedClearBitRunEx((__int64)&stru_14036C970, v52, 1uLL);
              if ( *(_QWORD *)(a1 + 24) )
                _bittestandreset64((signed __int64 *)stru_14036C960.Buffer, v52);
            }
            v47 = 2LL;
LABEL_144:
            v52 = *(_QWORD *)(v53 + v54) & 0xFFFFFFFFFLL;
            if ( v52 == 0xFFFFFFFFFLL )
            {
              v49 = v91;
              v48 = v72;
              break;
            }
          }
        }
        if ( v50 <= 1 )
          break;
LABEL_152:
        if ( !v50 )
        {
          v44 = a1;
          MiMirrorNodeLargePages(v46, 1, a1);
          CurrentIrql = v80;
LABEL_157:
          v56 = 0LL;
          do
          {
            v57 = RtlFindSetBitsEx(&stru_14036C970, 1uLL, v56);
            v58 = v57;
            if ( v57 < v56 || v57 == -1LL )
              break;
            v59 = RtlFindNextForwardRunClearEx((__int64)&stru_14036C970, v57, &v82);
            v60 = v82;
            v61 = v59;
            if ( !v59 )
              v60 = stru_14036C970.SizeOfBitMap;
            v62 = v60 - v58;
            v7 = (*(__int64 (__fastcall **)(ULONG64, unsigned __int64))(v44 + 16))(v58 << 12, v62 << 12);
            if ( v7 < 0 )
            {
LABEL_183:
              qword_14036C958 = 0LL;
              goto LABEL_175;
            }
            v56 = v58 + v61 + v62;
          }
          while ( v56 < stru_14036C970.SizeOfBitMap );
          if ( *(_QWORD *)(v44 + 24) )
          {
            v63 = 0LL;
            do
            {
              v64 = RtlFindSetBitsEx(&stru_14036C960, 1uLL, v63);
              v65 = v64;
              if ( v64 < v63 || v64 == -1LL )
                break;
              v66 = RtlFindNextForwardRunClearEx((__int64)&stru_14036C960, v64, &v82);
              v67 = v82;
              v68 = v66;
              if ( !v66 )
                v67 = stru_14036C960.SizeOfBitMap;
              v69 = v67 - v65;
              v7 = (*(__int64 (__fastcall **)(ULONG64, unsigned __int64))(v44 + 24))(v65 << 12, v69 << 12);
              if ( v7 < 0 )
                goto LABEL_183;
              v63 = v65 + v68 + v69;
            }
            while ( v63 < stru_14036C960.SizeOfBitMap );
          }
          v70 = (*(__int64 (__fastcall **)(__int64))(v44 + 8))(1LL);
          qword_14036C958 = 0LL;
          v7 = v70;
          if ( v70 == 1073742484 && !v73 )
          {
            v7 = 0;
            MiResumeFromHibernate(v87);
            v88 = 1;
          }
LABEL_175:
          dword_14036C91C = 0;
          if ( CurrentIrql != 17 )
          {
            MiUnlockAllMemoryLists();
            __writecr8(CurrentIrql);
          }
LABEL_177:
          v5 = v88;
LABEL_178:
          CurrentThread = (struct _KTHREAD *)v78;
          goto LABEL_179;
        }
        if ( v50 == v47 )
        {
          v72 = ++v48;
          if ( v48 != v87 )
            continue;
        }
        --v50;
        goto LABEL_131;
      }
      v91 = ++v49;
      if ( v49 >= dword_14036C1FC )
      {
        v49 = 0;
        v91 = 0;
        goto LABEL_152;
      }
    }
  }
  if ( v42 == 1 )
    _InterlockedAdd(&dword_14036CEA8, 0xFFFFFFFF);
  dword_14036C91C = 0;
  __writecr8(CurrentIrql);
  CurrentThread = (struct _KTHREAD *)v78;
  v5 = 0;
LABEL_179:
  if ( (MiFlags & 4) == 0 )
    MmUnlockPagableImageSection(ExPageLockHandle);
  if ( v5 == 1 )
  {
    stru_14036C938.Parameter = (void *)v87;
    ExQueueWorkItem(&stru_14036C938, HyperCriticalWorkQueue);
  }
  else
  {
    _InterlockedAdd(&dword_14036CFD0, 0xFFFFFFFF);
    KeSetEvent(&stru_14036C920, 0, 0);
  }
  MiUnlockDynamicMemoryExclusive((__int64)&MiSystemPartition, (__int64)CurrentThread);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14036C8B8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_14036C8B8);
  KeAbPostRelease((ULONG_PTR)&qword_14036C8B8);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return (unsigned int)v7;
}
