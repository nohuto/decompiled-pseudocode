/*
 * XREFs of MmDuplicateMemory @ 0x14042F6D8
 * Callers:
 *     IopLiveDumpCaptureMemoryPages @ 0x14042B098 (IopLiveDumpCaptureMemoryPages.c)
 *     IopLiveDumpEstimateMemoryPages @ 0x14042B67C (IopLiveDumpEstimateMemoryPages.c)
 *     PnprInitiateReplaceOperation @ 0x14042C2C0 (PnprInitiateReplaceOperation.c)
 *     PopTransitionToSleep @ 0x140435830 (PopTransitionToSleep.c)
 *     MmCreateMirror @ 0x1406E10D0 (MmCreateMirror.c)
 * Callees:
 *     MiAddLockedPageCharge @ 0x140027170 (MiAddLockedPageCharge.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140030A90 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlinkPageFromList @ 0x14004B0F0 (MiUnlinkPageFromList.c)
 *     MiPfnReferenceCountIsZero @ 0x14004D4F0 (MiPfnReferenceCountIsZero.c)
 *     ExQueueWorkItem @ 0x1400613A0 (ExQueueWorkItem.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x1400B8A74 (MiUnlockDynamicMemoryExclusive.c)
 *     MiLockDynamicMemoryExclusive @ 0x1400B8DA0 (MiLockDynamicMemoryExclusive.c)
 *     MmUnlockPagableImageSection @ 0x1400BC610 (MmUnlockPagableImageSection.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1400F1C30 (KeReleaseInStackQueuedSpinLock.c)
 *     MiIsDecayPfn @ 0x14012CFD4 (MiIsDecayPfn.c)
 *     RtlInterlockedClearBitRunEx @ 0x14017CF1C (RtlInterlockedClearBitRunEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     CcNotifyWriteBehind @ 0x1401E051C (CcNotifyWriteBehind.c)
 *     MiResumeFromHibernate @ 0x14021872C (MiResumeFromHibernate.c)
 *     MiEmptyAllWorkingSets @ 0x14021D424 (MiEmptyAllWorkingSets.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14022A1D0 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MiLockPage @ 0x14022A294 (MiLockPage.c)
 *     MiUnlockPage @ 0x14022A2A8 (MiUnlockPage.c)
 *     MiDiscardTransitionPte @ 0x14022AE0C (MiDiscardTransitionPte.c)
 *     MiLockAllMemoryLists @ 0x14022AE90 (MiLockAllMemoryLists.c)
 *     MiUnlockAllMemoryLists @ 0x14022B660 (MiUnlockAllMemoryLists.c)
 *     MiMirrorNodeLargePages @ 0x140232DD4 (MiMirrorNodeLargePages.c)
 *     RtlFindNextForwardRunClearEx @ 0x140252A10 (RtlFindNextForwardRunClearEx.c)
 *     RtlFindSetBitsEx @ 0x140252DC0 (RtlFindSetBitsEx.c)
 *     RtlInterlockedSetBitRunEx @ 0x1402531D8 (RtlInterlockedSetBitRunEx.c)
 *     MmLockPagableSectionByHandle @ 0x140507380 (MmLockPagableSectionByHandle.c)
 *     MiActOnMirrorBitmap @ 0x1406E0F88 (MiActOnMirrorBitmap.c)
 *     MiUpdateMirrorBitmaps @ 0x1406E1088 (MiUpdateMirrorBitmaps.c)
 */

__int64 __fastcall MmDuplicateMemory(__int64 a1)
{
  int v1; // r12d
  __int64 (**v2)(void); // r14
  int v4; // r15d
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v6; // r13d
  int v7; // ebp
  int v8; // esi
  unsigned int v9; // edi
  __int64 v10; // rax
  int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // r15d
  __int64 v16; // rdi
  unsigned int v17; // ebp
  ULONG_PTR *v18; // rsi
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // rdx
  unsigned __int64 i; // r14
  _QWORD *v22; // r15
  unsigned __int64 *v23; // r14
  __int64 v24; // rbp
  unsigned __int64 j; // rdi
  unsigned __int64 v26; // rdi
  unsigned __int64 v27; // rbp
  ULONG64 v28; // rsi
  ULONG64 SetBits; // rax
  unsigned __int64 v30; // r14
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rsi
  unsigned __int64 v33; // rdi
  unsigned __int64 v34; // rsi
  unsigned __int64 v35; // rsi
  __int64 v36; // rbp
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // rdi
  unsigned __int64 v39; // r15
  unsigned __int8 v40; // r14
  __int64 v41; // r8
  unsigned __int64 v42; // r15
  unsigned __int64 v43; // r13
  unsigned __int8 v44; // di
  int v45; // esi
  __int64 CurrentIrql; // r15
  __int64 v47; // r13
  unsigned __int8 v48; // di
  _QWORD *v49; // rax
  __int64 v50; // rdx
  _QWORD *v51; // rdi
  _QWORD *v52; // rax
  _QWORD *v53; // rcx
  unsigned int v54; // r13d
  unsigned int v55; // ebp
  __int64 v56; // rsi
  ULONG_PTR *v57; // rdi
  unsigned __int64 v58; // rdi
  unsigned __int64 v59; // r8
  __int64 v60; // r12
  unsigned __int64 v61; // r15
  unsigned __int64 v62; // r14
  _QWORD *v63; // r15
  ULONG64 v64; // rdi
  ULONG64 v65; // rax
  ULONG64 v66; // rsi
  unsigned __int64 NextForwardRunClear; // rax
  unsigned __int64 SizeOfBitMap; // rdi
  unsigned __int64 v69; // r14
  unsigned __int64 v70; // rdi
  ULONG64 v71; // rdi
  ULONG64 v72; // rax
  ULONG64 v73; // rsi
  unsigned __int64 v74; // rax
  unsigned __int64 v75; // rdi
  unsigned __int64 v76; // r14
  unsigned __int64 v77; // rdi
  int v78; // eax
  int v79; // [rsp+30h] [rbp-B8h]
  unsigned int v80; // [rsp+30h] [rbp-B8h]
  unsigned int v81; // [rsp+38h] [rbp-B0h]
  unsigned __int64 v82; // [rsp+38h] [rbp-B0h]
  char v83; // [rsp+40h] [rbp-A8h]
  int v84; // [rsp+44h] [rbp-A4h]
  unsigned __int64 v85; // [rsp+48h] [rbp-A0h]
  __int64 v86; // [rsp+48h] [rbp-A0h]
  __int64 v87; // [rsp+50h] [rbp-98h]
  int v88; // [rsp+58h] [rbp-90h]
  unsigned __int64 v89; // [rsp+60h] [rbp-88h] BYREF
  __int64 v90; // [rsp+68h] [rbp-80h]
  unsigned __int64 v91; // [rsp+70h] [rbp-78h]
  __int64 v92; // [rsp+78h] [rbp-70h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp-68h] BYREF
  unsigned int v95; // [rsp+F8h] [rbp+10h]
  unsigned int v96; // [rsp+100h] [rbp+18h]
  int v97; // [rsp+100h] [rbp+18h]
  unsigned int v98; // [rsp+100h] [rbp+18h]
  int v99; // [rsp+108h] [rbp+20h]

  v1 = *(_DWORD *)(a1 + 32);
  v2 = (__int64 (**)(void))a1;
  v83 = v1;
  if ( (v1 & 5) == 5 )
    return 3221225485LL;
  if ( (v1 & 8) != 0 )
  {
    LOBYTE(v1) = v1 & 0xFA;
    v83 = v1;
  }
  if ( (v1 & 0xA) != 0 )
  {
    v4 = 0;
  }
  else
  {
    CcNotifyWriteBehind();
    v4 = 1;
  }
  v79 = v4;
  v88 = 0;
  v84 = 0;
  KeWaitForSingleObject(&stru_140388B18, WrVirtualMemory, 0, 0, 0LL);
  CurrentThread = KeGetCurrentThread();
  v6 = 8;
  v87 = (__int64)CurrentThread;
  v95 = 8;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140388AB0, 0LL);
  MiLockDynamicMemoryExclusive((__int64)&MiSystemPartition, (__int64)CurrentThread);
  if ( (MiFlags & 4) == 0 )
    MmLockPagableSectionByHandle(ExPageLockHandle);
  _InterlockedAdd(&dword_140389290, 1u);
  if ( !(unsigned int)MiUpdateMirrorBitmaps() )
  {
    v7 = -1073741670;
    goto LABEL_124;
  }
  MiActOnMirrorBitmap(&stru_140388B68, 1LL);
  LODWORD(v90) = 0;
  v99 = 1;
  v8 = 0;
  v9 = 0;
  if ( (v1 & 1) != 0 )
  {
    v9 = 3;
  }
  else
  {
    if ( (v1 & 4) != 0 )
    {
      v6 = 7;
    }
    else
    {
      if ( (v1 & 8) == 0 )
        goto LABEL_20;
      v6 = 0;
    }
    v95 = v6;
    v9 = 2;
  }
  v99 = 0;
LABEL_20:
  v7 = (*v2)();
  if ( v7 < 0 )
    goto LABEL_123;
  v10 = v9;
  v11 = v1 & 4;
  v92 = v10;
  LODWORD(v91) = v11;
LABEL_22:
  MiActOnMirrorBitmap(&stru_140388B58, 2LL);
  if ( v8 == v4 )
  {
    v84 = 1;
    _InterlockedAdd(&dword_140389168, 1u);
  }
  v15 = 0;
  if ( !v11 )
  {
    if ( (v1 & 0x10) == 0 )
      MiEmptyAllWorkingSets((__int64)&MiSystemPartition, v12, v13, v14);
    v6 = 0;
  }
  v16 = v92;
  v96 = v6;
  dword_140388B14 = 1;
  v17 = 0;
  v81 = 0;
  do
  {
    v18 = (ULONG_PTR *)*(&MiSystemPartition + v16 + 511);
    if ( v16 <= 1 )
      v18 = (ULONG_PTR *)(*(&MiSystemPartition + v16 + 256) + 40LL * v17);
    if ( v16 == 2 )
      v18 = &MiSystemPartition + 4 * v6 + v6 + 288;
    if ( v16 == 3 )
    {
      if ( *v18 == qword_14038B9F0 )
        goto LABEL_52;
      v18 = &MiSystemPartition + 4 * v6 + v6 + 416;
    }
    KeAcquireInStackQueuedSpinLock(v18 + 4, &LockHandle);
    if ( *v18 )
    {
      v19 = v18[2];
      do
      {
        if ( v16 == 2 && MiIsDecayPfn(v19) )
        {
          for ( i = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE((__int64 *)(48 * v19 - 0x57FFFFFFFF0LL));
                i != v19;
                i = *v22 & 0xFFFFFFFFFLL )
          {
            v22 = (_QWORD *)(v20 + 48 * i);
            if ( _bittest64((const signed __int64 *)stru_140388B68.Buffer, i) )
            {
              RtlInterlockedClearBitRunEx((__int64)&stru_140388B68, i, 1uLL);
              v20 = 0xFFFFFA8000000000uLL;
              _bittestandset64((signed __int64 *)stru_140388B58.Buffer, i);
            }
          }
        }
        else if ( _bittest64((const signed __int64 *)stru_140388B68.Buffer, v19) )
        {
          RtlInterlockedClearBitRunEx((__int64)&stru_140388B68, v19, 1uLL);
          _bittestandset64((signed __int64 *)stru_140388B58.Buffer, v19);
        }
        v19 = *(_QWORD *)(48 * v19 - 0x58000000000LL) & 0xFFFFFFFFFLL;
      }
      while ( v19 != 0xFFFFFFFFFLL );
      v6 = v96;
      v15 = 0;
      v17 = v81;
      v2 = (__int64 (**)(void))a1;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( v16 > 1 )
    {
      if ( v16 == 2 )
      {
        if ( ++v6 == 8 )
          v6 = 0;
        else
          v16 = 1LL;
        v96 = v6;
      }
      else if ( v16 == 3 )
      {
        v96 = ++v6;
        if ( v6 != 16 )
          v16 = 2LL;
      }
    }
    else
    {
      v81 = ++v17;
      if ( v17 >= dword_140388544 )
      {
        v81 = 0;
        v17 = 0;
        if ( v16 == 1 )
          MiMirrorNodeLargePages(1LL, 0, (__int64)v2);
      }
      else
      {
        --v16;
      }
    }
LABEL_52:
    ++v16;
  }
  while ( v16 <= 4 );
  KeAcquireInStackQueuedSpinLock(&qword_14038B9A0, &LockHandle);
  v23 = (unsigned __int64 *)&unk_14038AB50;
  v24 = 16LL;
  do
  {
    for ( j = *v23; j != 0xFFFFFFFFFLL; j = *(_QWORD *)(48 * j - 0x58000000000LL) & 0xFFFFFFFFFLL )
    {
      if ( _bittest64((const signed __int64 *)stru_140388B68.Buffer, j) )
      {
        RtlInterlockedClearBitRunEx((__int64)&stru_140388B68, j, 1uLL);
        _bittestandset64((signed __int64 *)stru_140388B58.Buffer, j);
      }
    }
    v23 += 5;
    --v24;
  }
  while ( v24 );
  v26 = qword_14038AB10;
  LOBYTE(v1) = v83;
  if ( qword_14038AB10 != 0xFFFFFFFFFLL )
  {
    do
    {
      if ( _bittest64((const signed __int64 *)stru_140388B68.Buffer, v26) )
      {
        RtlInterlockedClearBitRunEx((__int64)&stru_140388B68, v26, 1uLL);
        _bittestandset64((signed __int64 *)stru_140388B58.Buffer, v26);
      }
      v26 = *(_QWORD *)(48 * v26 - 0x58000000000LL) & 0xFFFFFFFFFLL;
    }
    while ( v26 != 0xFFFFFFFFFLL );
    LOBYTE(v1) = v83;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v97 = 0;
  v27 = 0LL;
  v82 = 0LL;
  v28 = 0LL;
  while ( 1 )
  {
    SetBits = RtlFindSetBitsEx(&stru_140388B58, 1uLL, v28);
    v30 = SetBits;
    if ( SetBits < v28 || SetBits == -1LL )
    {
LABEL_110:
      v45 = v84;
      if ( v84 != 1 && v27 >= 0x400 )
      {
        v2 = (__int64 (**)(void))a1;
        v8 = v90 + 1;
        v11 = v91;
        v4 = v79;
        v6 = v95;
        LODWORD(v90) = v90 + 1;
        goto LABEL_22;
      }
      if ( (v1 & 2) == 0 && v84 == 1 )
      {
        _InterlockedAdd(&dword_140389168, 0xFFFFFFFF);
        v45 = 0;
      }
      CurrentIrql = KeGetCurrentIrql();
      v47 = a1;
      v90 = CurrentIrql;
      v7 = (*(__int64 (__fastcall **)(_QWORD))(a1 + 8))(0LL);
      if ( v7 < 0 )
      {
        if ( v45 == 1 )
          _InterlockedAdd(&dword_140389168, 0xFFFFFFFF);
        dword_140388B14 = 0;
        __writecr8((unsigned __int8)CurrentIrql);
        goto LABEL_123;
      }
      v48 = KeGetCurrentIrql();
      if ( *(_QWORD *)(a1 + 24) )
        MiActOnMirrorBitmap(&stru_140388B58, 1LL);
      if ( v48 < 2u )
      {
        KeGetCurrentIrql();
        __writecr8(2uLL);
      }
      MiLockAllMemoryLists();
      qword_140388B50 = v87;
      if ( v45 == 1 )
        _InterlockedAdd(&dword_140389168, 0xFFFFFFFF);
      v49 = (_QWORD *)qword_1403885E8;
      v50 = 2LL;
      dword_140388B14 = 2;
      if ( qword_1403885E8 )
      {
        do
        {
          v51 = v49;
          v49 = (_QWORD *)*v49;
        }
        while ( v49 );
        if ( v51 )
        {
          do
          {
            RtlInterlockedClearBitRunEx((__int64)&stru_140388B68, v51[3], v51[4]);
            v52 = (_QWORD *)v51[1];
            v53 = v51;
            if ( v52 )
            {
              do
              {
                v51 = v52;
                v52 = (_QWORD *)*v52;
              }
              while ( v52 );
            }
            else
            {
              while ( 1 )
              {
                v51 = (_QWORD *)(v51[2] & 0xFFFFFFFFFFFFFFFCuLL);
                if ( !v51 || (_QWORD *)*v51 == v53 )
                  break;
                v53 = v51;
              }
            }
          }
          while ( v51 );
          v50 = 2LL;
        }
      }
      if ( (v1 & 0xD) == 0 )
      {
LABEL_174:
        v64 = 0LL;
        do
        {
          v65 = RtlFindSetBitsEx(&stru_140388B68, 1uLL, v64);
          v66 = v65;
          if ( v65 < v64 || v65 == -1LL )
            break;
          NextForwardRunClear = RtlFindNextForwardRunClearEx((__int64)&stru_140388B68, v65, &v89);
          SizeOfBitMap = v89;
          v69 = NextForwardRunClear;
          if ( !NextForwardRunClear )
            SizeOfBitMap = stru_140388B68.SizeOfBitMap;
          v70 = SizeOfBitMap - v66;
          v7 = (*(__int64 (__fastcall **)(ULONG64, unsigned __int64))(v47 + 16))(v66 << 12, v70 << 12);
          if ( v7 < 0 )
          {
LABEL_195:
            qword_140388B50 = 0LL;
            dword_140388B14 = 0;
            goto LABEL_193;
          }
          v64 = v66 + v69 + v70;
        }
        while ( v64 < stru_140388B68.SizeOfBitMap );
        if ( *(_QWORD *)(v47 + 24) )
        {
          v71 = 0LL;
          do
          {
            v72 = RtlFindSetBitsEx(&stru_140388B58, 1uLL, v71);
            v73 = v72;
            if ( v72 < v71 || v72 == -1LL )
              break;
            v74 = RtlFindNextForwardRunClearEx((__int64)&stru_140388B58, v72, &v89);
            v75 = v89;
            v76 = v74;
            if ( !v74 )
              v75 = stru_140388B58.SizeOfBitMap;
            v77 = v75 - v73;
            v7 = (*(__int64 (__fastcall **)(ULONG64, unsigned __int64))(v47 + 24))(v73 << 12, v77 << 12);
            if ( v7 < 0 )
              goto LABEL_195;
            v71 = v73 + v76 + v77;
          }
          while ( v71 < stru_140388B58.SizeOfBitMap );
        }
        v78 = (*(__int64 (__fastcall **)(__int64))(v47 + 8))(1LL);
        qword_140388B50 = 0LL;
        v7 = v78;
        if ( v78 == 1073742484 && !v99 )
        {
          v7 = 0;
          MiResumeFromHibernate(v95);
          v88 = 1;
        }
        dword_140388B14 = 0;
LABEL_193:
        if ( (_BYTE)CurrentIrql != 17 )
        {
          MiUnlockAllMemoryLists();
          __writecr8((unsigned __int8)CurrentIrql);
        }
        goto LABEL_123;
      }
      v80 = 0;
      v54 = 0;
      v98 = 0;
      v55 = 0;
      v56 = 2LL - ((v1 & 8) != 0);
LABEL_147:
      v86 = v56;
      while ( 1 )
      {
        if ( v56 > 1 )
          v57 = &MiSystemPartition + 5 * v54 + 288;
        else
          v57 = (ULONG_PTR *)(*(&MiSystemPartition + v56 + 256) + 40LL * v55);
        v58 = v57[2];
        if ( v58 != 0xFFFFFFFFFLL )
        {
          v59 = 0xFFFFFA8000000000uLL;
          while ( 1 )
          {
            v60 = 48 * v58;
            v92 = 48 * v58;
            v61 = v59;
            v91 = v59;
            if ( v56 == v50 && MiIsDecayPfn(v58) )
            {
              v62 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE((__int64 *)(v60 + v61 + 16));
              if ( v62 == v58 )
                goto LABEL_161;
              do
              {
                v63 = (_QWORD *)(v59 + 48 * v62);
                RtlInterlockedClearBitRunEx((__int64)&stru_140388B68, v62, 1uLL);
                if ( *(_QWORD *)(a1 + 24) )
                  _bittestandreset64((signed __int64 *)stru_140388B58.Buffer, v62);
                v62 = *v63 & 0xFFFFFFFFFLL;
                v59 = 0xFFFFFA8000000000uLL;
              }
              while ( v62 != v58 );
              v56 = v86;
              v60 = v92;
              v61 = v91;
            }
            else
            {
              RtlInterlockedClearBitRunEx((__int64)&stru_140388B68, v58, 1uLL);
              if ( *(_QWORD *)(a1 + 24) )
                _bittestandreset64((signed __int64 *)stru_140388B58.Buffer, v58);
            }
            v50 = 2LL;
            v59 = 0xFFFFFA8000000000uLL;
LABEL_161:
            v58 = *(_QWORD *)(v60 + v61) & 0xFFFFFFFFFLL;
            if ( v58 == 0xFFFFFFFFFLL )
            {
              v55 = v98;
              v54 = v80;
              break;
            }
          }
        }
        if ( v56 > 1 )
          goto LABEL_166;
        v98 = ++v55;
        if ( v55 >= dword_140388544 )
        {
          v55 = 0;
          v98 = 0;
LABEL_166:
          if ( !v56 )
          {
            v47 = a1;
            MiMirrorNodeLargePages(1LL, 1, a1);
            LOBYTE(CurrentIrql) = v90;
            goto LABEL_174;
          }
          if ( v56 != v50 || (++v54, v80 = v54, v54 == v95) )
          {
            --v56;
            goto LABEL_147;
          }
        }
      }
    }
    v31 = RtlFindNextForwardRunClearEx((__int64)&stru_140388B58, SetBits, &v89);
    v32 = v89;
    v33 = v31;
    v85 = v31;
    if ( !v31 )
      v32 = stru_140388B58.SizeOfBitMap;
    v34 = v32 - v30;
    if ( (v1 & 8) == 0 )
      goto LABEL_103;
    if ( v15 != 1 )
      break;
    RtlInterlockedSetBitRunEx((__int64)&stru_140388B68, v30, v34);
    v35 = v33 + v34;
LABEL_108:
    v28 = v30 + v35;
LABEL_109:
    if ( v28 >= stru_140388B58.SizeOfBitMap )
      goto LABEL_110;
  }
  v36 = -1LL;
  if ( v34 > 0x100 )
    v34 = 256LL;
  v85 = 0LL;
  v37 = v34;
  v28 = v30;
  v38 = 48 * v30 - 0x58000000000LL;
  v39 = v38 + 48 * v37;
  while ( 1 )
  {
    v40 = MiLockPage(v38);
    if ( *(_WORD *)(v38 + 32) || (unsigned __int8)((*(_BYTE *)(v38 + 34) & 7) - 2) > 2u )
    {
      MiUnlockPage(v38, v40);
      if ( v36 != -1 )
        goto LABEL_102;
      goto LABEL_95;
    }
    if ( !MiUnlinkPageFromList(v38, 0LL) )
      break;
    *(_QWORD *)(v38 + 24) &= 0xC000000000000000uLL;
    if ( !(unsigned int)MiAddLockedPageCharge(v38, 0LL, v41) )
    {
      MiPfnReferenceCountIsZero(v38, v28);
      goto LABEL_100;
    }
    RtlInterlockedClearBitRunEx((__int64)&stru_140388B68, v28, 1uLL);
    MiUnlockPage(v38, v40);
    if ( v36 == -1 )
      v36 = v28;
LABEL_95:
    v38 += 48LL;
    ++v28;
    if ( v38 >= v39 )
    {
      v15 = v97;
      goto LABEL_97;
    }
  }
  MiDiscardTransitionPte(v38);
LABEL_100:
  MiUnlockPage(v38, v40);
  v15 = 1;
  v97 = 1;
LABEL_97:
  if ( v36 == -1 )
  {
    v27 = v82;
    goto LABEL_109;
  }
LABEL_102:
  v30 = v36;
  v34 = v28 - v36;
  v27 = v82;
LABEL_103:
  v82 = v34 + v27;
  v7 = (*(__int64 (__fastcall **)(unsigned __int64, unsigned __int64))(a1 + 16))(v30 << 12, v34 << 12);
  if ( (v1 & 8) != 0 )
  {
    v42 = 48 * v30 - 0x58000000000LL;
    v43 = v42 + 48 * v34;
    do
    {
      v44 = MiLockPage(v42);
      MiRemoveLockedPageChargeAndDecRef(v42);
      MiUnlockPage(v42, v44);
      v42 += 48LL;
    }
    while ( v42 < v43 );
  }
  if ( v7 >= 0 )
  {
    v35 = v85 + v34;
    v15 = v97;
    v27 = v82;
    goto LABEL_108;
  }
  if ( v84 == 1 )
    _InterlockedAdd(&dword_140389168, 0xFFFFFFFF);
  dword_140388B14 = 0;
LABEL_123:
  CurrentThread = (struct _KTHREAD *)v87;
LABEL_124:
  if ( (MiFlags & 4) == 0 )
    MmUnlockPagableImageSection(ExPageLockHandle);
  if ( v88 == 1 )
  {
    stru_140388B30.Parameter = (void *)v95;
    ExQueueWorkItem(&stru_140388B30, HyperCriticalWorkQueue);
  }
  else
  {
    _InterlockedAdd(&dword_140389290, 0xFFFFFFFF);
    KeSetEvent(&stru_140388B18, 0, 0);
  }
  MiUnlockDynamicMemoryExclusive((__int64)&MiSystemPartition, (__int64)CurrentThread);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140388AB0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140388AB0);
  KeAbPostRelease((ULONG_PTR)&qword_140388AB0);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return (unsigned int)v7;
}
