/*
 * XREFs of MiLockCode @ 0x1400BCA50
 * Callers:
 *     MiLockImageSection @ 0x1405073A0 (MiLockImageSection.c)
 *     MmResetDriverPaging @ 0x140516F70 (MmResetDriverPaging.c)
 *     MiDisablePagingOfDriver @ 0x140542B58 (MiDisablePagingOfDriver.c)
 *     MiHandleDriverNonPagedSections @ 0x140543D68 (MiHandleDriverNonPagedSections.c)
 *     PopAllocateHiberContext @ 0x1406FAC78 (PopAllocateHiberContext.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiAddLockedPageCharge @ 0x140027170 (MiAddLockedPageCharge.c)
 *     MiUnlockProtoPoolPage @ 0x140030AF0 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x140030E90 (MiLockProtoPoolPage.c)
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MmAccessFault @ 0x140040CF0 (MmAccessFault.c)
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x140057900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiCopyOnWriteEx @ 0x140059760 (MiCopyOnWriteEx.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     MiIsPfnFileOnly @ 0x140078F10 (MiIsPfnFileOnly.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     MiRemoveSystemImagePage @ 0x1400BB9FC (MiRemoveSystemImagePage.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400BD300 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiUnlockCodePage @ 0x1400BD400 (MiUnlockCodePage.c)
 *     MiGetAnyMultiplexedVm @ 0x1400C0094 (MiGetAnyMultiplexedVm.c)
 *     MiReleasePageFileInfo @ 0x1400C0554 (MiReleasePageFileInfo.c)
 *     MiReleaseFreshPage @ 0x1400C538C (MiReleaseFreshPage.c)
 *     MiTradeActivePage @ 0x1400CDE24 (MiTradeActivePage.c)
 *     MiMakeDriverPagesPrivate @ 0x1400DC7CC (MiMakeDriverPagesPrivate.c)
 *     MiGetWsleContents @ 0x1400E9E90 (MiGetWsleContents.c)
 *     MiWriteValidPteVolatile @ 0x1400E9F50 (MiWriteValidPteVolatile.c)
 *     MiCapturePageFileInfoInline @ 0x140117280 (MiCapturePageFileInfoInline.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MiSetFreshPfnFromFreeList @ 0x14022A964 (MiSetFreshPfnFromFreeList.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiPrefetchDriverPages @ 0x140507470 (MiPrefetchDriverPages.c)
 *     MiAllocateDriverPage @ 0x140509740 (MiAllocateDriverPage.c)
 */

__int64 __fastcall MiLockCode(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, char a4)
{
  unsigned __int64 v5; // r15
  unsigned __int64 v7; // rbx
  char v9; // si
  int v10; // r12d
  int SystemRegionType; // eax
  unsigned __int64 v12; // rdx
  _KPROCESS *Process; // rcx
  LONG *AnyMultiplexedVm; // rbp
  LONG *v15; // rbx
  __int64 DriverPage; // r13
  unsigned __int64 v17; // rdx
  KIRQL v18; // r14
  ULONG_PTR PteShadow; // rbx
  unsigned __int64 v20; // r12
  LONG *SharedVm; // rax
  int v22; // eax
  LONG *v23; // rbx
  __int64 v24; // rsi
  _KPROCESS *v25; // r9
  __int64 v26; // r10
  unsigned __int64 v27; // r11
  __int64 v28; // rdi
  unsigned __int64 v29; // rcx
  char v30; // r10
  __int64 v31; // r9
  __int64 v32; // rbx
  unsigned __int64 v33; // r8
  unsigned __int64 *v34; // rcx
  unsigned __int64 v35; // rax
  char WsleContents; // r14
  __int64 v37; // rbp
  unsigned __int64 v38; // rsi
  LONG *v39; // rbx
  __int64 v40; // rdx
  __int16 v41; // ax
  __int64 v42; // rcx
  char v43; // al
  __int64 v44; // rax
  char v45; // [rsp+30h] [rbp-168h]
  KIRQL v46; // [rsp+31h] [rbp-167h]
  char v48; // [rsp+38h] [rbp-160h]
  int v49; // [rsp+3Ch] [rbp-15Ch]
  int v50; // [rsp+40h] [rbp-158h] BYREF
  unsigned __int64 v51; // [rsp+48h] [rbp-150h]
  LONG *v52; // [rsp+50h] [rbp-148h]
  unsigned __int64 v53; // [rsp+58h] [rbp-140h]
  unsigned __int64 v54; // [rsp+60h] [rbp-138h]
  __int64 v55; // [rsp+68h] [rbp-130h]
  __int64 v56; // [rsp+70h] [rbp-128h]
  ULONG_PTR v57; // [rsp+78h] [rbp-120h] BYREF
  unsigned __int64 v58; // [rsp+80h] [rbp-118h]
  int v59; // [rsp+90h] [rbp-108h] BYREF
  __int16 v60; // [rsp+94h] [rbp-104h]
  __int64 v61; // [rsp+98h] [rbp-100h]
  __int64 v62; // [rsp+A0h] [rbp-F8h]
  __int64 v63; // [rsp+A8h] [rbp-F0h]
  void *retaddr; // [rsp+198h] [rbp+0h]

  v54 = a3;
  v5 = a2;
  v58 = a2;
  v55 = a1;
  v56 = 0LL;
  v7 = (__int64)(a2 << 25) >> 16;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v7) )
    return 0LL;
  v9 = 1;
  v45 = 1;
  v10 = 0;
  v49 = 0;
  SystemRegionType = MiGetSystemRegionType(v7);
  if ( SystemRegionType == 1 )
  {
    v10 = 2;
    v49 = 2;
    Process = KeGetCurrentThread()->ApcState.Process;
    v51 = Process[1].ActiveProcessors.Bitmap[2];
    AnyMultiplexedVm = (LONG *)(Process[1].ActiveProcessors.Bitmap[2] + 3008);
  }
  else
  {
    v51 = v12;
    if ( (unsigned int)(SystemRegionType - 6) <= 1 )
      AnyMultiplexedVm = (LONG *)MiGetAnyMultiplexedVm(2LL);
    else
      AnyMultiplexedVm = (LONG *)&unk_140389550;
  }
  v52 = AnyMultiplexedVm;
  v48 = v12;
  if ( a1 && v10 == 2 && (*(_DWORD *)(a1 + 104) & 0x8000000) == 0 )
  {
    if ( (dword_140400104 & 1) != 0 )
      LOBYTE(v12) = 1;
    v48 = v12;
  }
  MiPrefetchDriverPages(v5, a3, 1LL);
  v61 = 20LL;
  v15 = &dword_140389780;
  v59 = v10;
  DriverPage = -1LL;
  v60 = 0;
  v62 = 0LL;
  v63 = 0LL;
  if ( (AnyMultiplexedVm[48] & 7) != 2 )
    v15 = AnyMultiplexedVm + 50;
  v18 = ExAcquireSpinLockExclusive(v15);
  v46 = v18;
  v15[1] = 0;
  do
  {
    PteShadow = *(_QWORD *)v5;
    if ( v5 >= 0xFFFFF6FB7DBED000uLL && v5 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow(v5, *(_QWORD *)v5);
    v57 = PteShadow;
    v20 = (__int64)((v5 << 25) - v56) >> 16;
    if ( (PteShadow & 1) == 0 )
    {
      MiFlushTbList((__int64)&v59, (_KPROCESS *)v17);
      MiPreUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v18);
      SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(SharedVm, retaddr);
      else
        *SharedVm = 0;
      __writecr8(v18);
      v22 = MmAccessFault(0LL, v20, 0LL, 0LL);
      if ( v22 < 0 )
        KeBugCheckEx(0x1Au, 0x3000uLL, v20, PteShadow, v22);
      v23 = MiGetSharedVm((__int64)AnyMultiplexedVm);
      v18 = ExAcquireSpinLockExclusive(v23);
      v46 = v18;
      v23[1] = 0;
      continue;
    }
    v24 = MI_GET_PAGE_FRAME_FROM_PTE(&v57);
    v28 = (__int64)v25 + 48 * v24;
    if ( *(__int64 *)(v28 + 8) >= 0 )
    {
      MiFlushTbList((__int64)&v59, v25);
      MiCopyOnWriteEx(v20, (__int64 *)v5, -1LL, v18, 0);
      v9 = v45;
      continue;
    }
    v29 = *(_QWORD *)(v28 + 40);
    if ( (v29 & v26) != 0 && (!v51 || v48 == 1) )
    {
      v30 = a4;
      if ( (a4 & 1) != 0 )
      {
        MiFlushTbList((__int64)&v59, v25);
        MiMakeDriverPagesPrivate(v55, v5, v54, v18, 0);
LABEL_33:
        v9 = v45;
        continue;
      }
    }
    else
    {
      v30 = a4;
    }
    if ( (PteShadow & 0x800) == 0 && (PteShadow & 0x200) != 0 )
    {
      MiFlushTbList((__int64)&v59, v25);
      MiMakeDriverPagesPrivate(v55, v5, v54, v18, 1);
      goto LABEL_33;
    }
    v31 = qword_140388AF0;
    v32 = 0LL;
    v33 = *(_QWORD *)(qword_140388AF0 + 8 * ((v29 >> 40) & 0x3FF));
    v53 = v33;
    v34 = (unsigned __int64 *)(((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v17 = 0xFFFFF6FB7DBED000uLL;
    v35 = *v34;
    if ( (unsigned __int64)v34 >= 0xFFFFF6FB7DBED000uLL )
    {
      v17 = v27;
      if ( (unsigned __int64)v34 <= v27 )
      {
        v35 = MiReadPteShadow(v34, *v34);
        v33 = v53;
      }
    }
    if ( (v35 & 1) != 0 )
      WsleContents = HIBYTE(v35) & 0xF | (16 * ((v35 >> 60) & 7));
    else
      WsleContents = 10;
    if ( DriverPage != -1 )
    {
      v34 = (unsigned __int64 *)(48 * DriverPage - 0x58000000000LL);
      if ( v33 == *(_QWORD *)(v31 + 8 * ((v34[5] >> 40) & 0x3FF)) )
        goto LABEL_49;
      MiReleaseFreshPage(v34, v17);
      v30 = a4;
      DriverPage = -1LL;
    }
    if ( (v30 & 2) != 0 )
    {
      if ( (WsleContents & 0xF) == 9 )
        goto LABEL_49;
    }
    else if ( *(_WORD *)(v28 + 32) != 1 )
    {
      goto LABEL_49;
    }
    v33 = qword_1403883D0 & 0x1FF;
    if ( ((unsigned __int16)v24 & 0x1FFu) < v33 )
    {
      MiFlushTbList((__int64)&v59, (_KPROCESS *)v17);
      MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v46);
      DriverPage = MiAllocateDriverPage(v53);
      v39 = MiGetSharedVm((__int64)AnyMultiplexedVm);
      v9 = v45;
      v18 = ExAcquireSpinLockExclusive(v39);
      v46 = v18;
      v39[1] = 0;
      continue;
    }
LABEL_49:
    v50 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v28 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v50);
        while ( *(__int64 *)(v28 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v28 + 24), 0x3FuLL) );
      v30 = a4;
    }
    if ( DriverPage != -1 && (v30 & 2) != 0 )
    {
      WsleContents = MiGetWsleContents(v34, v20);
      if ( (WsleContents & 0xF) != 9
        && !(unsigned int)MiIsPfnFileOnly(v28)
        && ((unsigned __int16)v24 & 0x1FFu) < (unsigned __int64)(DriverPage & 0x1FF) )
      {
        v37 = 48 * DriverPage - 0x58000000000LL;
        _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( (*(_QWORD *)(v28 + 40) & 0x200000000000000LL) != 0 && (*(_DWORD *)(v28 + 16) & 0x400LL) != 0 )
        {
          v38 = MiLockProtoPoolPage(*(_QWORD *)(v28 + 8) | 0x8000000000000000uLL, 0LL);
          if ( !v38 )
          {
LABEL_68:
            if ( v38 > 1 )
              MiUnlockProtoPoolPage(v38, 0x11u);
            MiLockPageAtDpcInline(v28);
            AnyMultiplexedVm = v52;
            goto LABEL_71;
          }
        }
        else
        {
          v38 = 1LL;
        }
        if ( (unsigned int)MiTradeActivePage(v28, 48 * (int)DriverPage, v20, 0, 2) == 1 )
        {
          *(_QWORD *)(v28 + 16) = 0LL;
          MiSetFreshPfnFromFreeList(v28);
          MiReleaseFreshPage(v28, v40);
          DriverPage = -1LL;
          v28 = v37;
        }
        goto LABEL_68;
      }
    }
LABEL_71:
    if ( (a4 & 2) != 0 )
    {
      if ( (WsleContents & 0xF) != 9 )
        MiRemoveSystemImagePage((__int64)AnyMultiplexedVm, v5, v28);
      goto LABEL_87;
    }
    if ( v49 != 2 )
    {
      v17 = 0x10000000000000LL;
      if ( (*(_QWORD *)(v28 + 40) & 0x10000000000000LL) != 0 )
        goto LABEL_86;
      v41 = *(_WORD *)(v28 + 32);
      v17 = 0x3FFFFFFFFFFFFFFFLL;
      v42 = *(_QWORD *)(v28 + 24) & 0x3FFFFFFFFFFFFFFFLL;
      if ( v41 )
      {
        if ( v41 != 1 )
        {
          if ( v41 != 2 || !v42 )
            goto LABEL_86;
LABEL_84:
          if ( (*(_BYTE *)(v28 + 34) & 8) != 0 )
            goto LABEL_85;
LABEL_86:
          ++*(_WORD *)(v28 + 32);
          goto LABEL_87;
        }
        if ( !v42 )
          goto LABEL_84;
      }
LABEL_85:
      *(_BYTE *)(v28 + 35) |= 0x20u;
      goto LABEL_86;
    }
    if ( !(unsigned int)MiAddLockedPageCharge(v28, 0LL, v33) )
    {
      v9 = 0;
      v45 = 0;
      goto LABEL_88;
    }
LABEL_87:
    v9 = v45;
LABEL_88:
    if ( (*(_DWORD *)(v28 + 16) & 0x400LL) == 0 )
    {
      v43 = *(_BYTE *)(v28 + 34);
      if ( (v43 & 0x10) == 0 )
      {
        if ( (v43 & 8) == 0 )
          v32 = MiCapturePageFileInfoInline(v28 + 16, 1LL);
        *(_BYTE *)(v28 + 34) |= 0x10u;
      }
    }
    v44 = *(_QWORD *)v5;
    if ( v5 >= 0xFFFFF6FB7DBED000uLL && v5 <= 0xFFFFF6FB7DBED7F8uLL )
      LOWORD(v44) = MiReadPteShadow(v5, *(_QWORD *)v5);
    if ( (v44 & 0x800) != 0 && (v44 & 0x42) == 0 )
    {
      MiWriteValidPteVolatile(v5, 2LL);
      MiInsertTbFlushEntry(&v59, v20, 1LL, 0);
    }
    _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v32 )
      MiReleasePageFileInfo(v53, v32, 1LL);
    v18 = v46;
    v5 += 8LL;
  }
  while ( v5 <= v54 && v9 == 1 );
  if ( v18 != 17 )
  {
    MiFlushTbList((__int64)&v59, (_KPROCESS *)v17);
    MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v18);
  }
  if ( DriverPage != -1 )
    MiReleaseFreshPage(48 * DriverPage - 0x58000000000LL, v17);
  if ( v9 )
    return 0LL;
  MiUnlockCodePage(v58, v5 - 16);
  return 3221225626LL;
}
