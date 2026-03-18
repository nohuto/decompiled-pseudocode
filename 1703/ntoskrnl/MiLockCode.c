/*
 * XREFs of MiLockCode @ 0x140100CD0
 * Callers:
 *     MiDisablePagingOfDriver @ 0x1404B1880 (MiDisablePagingOfDriver.c)
 *     MmResetDriverPaging @ 0x1404B2340 (MmResetDriverPaging.c)
 *     MiLockImageSection @ 0x1404B2ED0 (MiLockImageSection.c)
 *     MiHandleDriverNonPagedSections @ 0x1404B3378 (MiHandleDriverNonPagedSections.c)
 *     PopAllocateHiberContext @ 0x14057AF78 (PopAllocateHiberContext.c)
 * Callees:
 *     MiTradeActivePage @ 0x140027F94 (MiTradeActivePage.c)
 *     MiRemoveSystemImagePage @ 0x14002CDA4 (MiRemoveSystemImagePage.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiMakeDriverPagesPrivate @ 0x14006C72C (MiMakeDriverPagesPrivate.c)
 *     MiUnlockCodePage @ 0x14006D068 (MiUnlockCodePage.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiLockProtoPoolPage @ 0x1400A1530 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x1400A3920 (MiUnlockProtoPoolPage.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400A3C70 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiReleasePageFileInfo @ 0x1400ABFD4 (MiReleasePageFileInfo.c)
 *     MiGetAnyMultiplexedVm @ 0x1400B1BCC (MiGetAnyMultiplexedVm.c)
 *     MmAccessFault @ 0x1400BDCD0 (MmAccessFault.c)
 *     MiIsPfnFileOnly @ 0x1400CB1E0 (MiIsPfnFileOnly.c)
 *     MiAreChargesNeededToLockPage @ 0x1400CB220 (MiAreChargesNeededToLockPage.c)
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x1400D6900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     MiCopyOnWriteEx @ 0x1400FB340 (MiCopyOnWriteEx.c)
 *     MiGetWsleContents @ 0x1400FBED0 (MiGetWsleContents.c)
 *     MiWriteValidPteVolatile @ 0x1400FDBE0 (MiWriteValidPteVolatile.c)
 *     MiCaptureDirtyBitToPfn @ 0x140100BFC (MiCaptureDirtyBitToPfn.c)
 *     MiAddLockedPageCharge @ 0x140109894 (MiAddLockedPageCharge.c)
 *     MiReleaseFreshPage @ 0x14010ADC8 (MiReleaseFreshPage.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiSetFreshPfnFromFreeList @ 0x14017D268 (MiSetFreshPfnFromFreeList.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14025C828 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiPrefetchDriverPages @ 0x1404414C8 (MiPrefetchDriverPages.c)
 *     MiAllocateDriverPage @ 0x14053D888 (MiAllocateDriverPage.c)
 */

__int64 __fastcall MiLockCode(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, char a4)
{
  char v5; // di
  unsigned __int64 v8; // r11
  char v10; // r14
  int v11; // r15d
  int SystemRegionType; // eax
  unsigned __int64 v13; // rdx
  char v14; // r8
  __int64 v15; // rbp
  int v16; // ecx
  char v17; // cl
  unsigned __int64 v18; // r13
  LONG *SharedVm; // rbx
  KIRQL v20; // r12
  _KPROCESS *v21; // rdx
  ULONG_PTR v22; // rbx
  __int64 v23; // r15
  LONG *v24; // rax
  int v25; // eax
  LONG *v26; // rbx
  _KPROCESS *v27; // rdx
  __int64 v28; // rax
  __int64 v29; // r9
  _KPROCESS *v30; // r10
  __int16 v31; // r14
  __int64 v32; // rsi
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rdi
  __int64 v35; // rcx
  _KPROCESS *v36; // rdx
  char WsleContents; // bl
  __int64 v38; // r9
  __int64 v39; // r10
  __int64 v40; // rcx
  bool v41; // zf
  LONG *v42; // rax
  __int64 v43; // rdi
  LONG *v44; // rbx
  __int64 v45; // rcx
  __int64 v46; // r9
  __int64 v47; // r14
  unsigned __int64 v48; // rbp
  __int64 v49; // rax
  LONG *v50; // rax
  char v51; // [rsp+30h] [rbp-168h]
  __int64 DriverPage; // [rsp+38h] [rbp-160h]
  char v54; // [rsp+44h] [rbp-154h]
  int v55; // [rsp+48h] [rbp-150h]
  unsigned __int64 v56; // [rsp+50h] [rbp-148h]
  char *AnyMultiplexedVm; // [rsp+58h] [rbp-140h]
  __int64 v60; // [rsp+70h] [rbp-128h] BYREF
  struct _KEVENT *v61; // [rsp+78h] [rbp-120h]
  __int64 v62; // [rsp+80h] [rbp-118h]
  unsigned __int64 v63; // [rsp+88h] [rbp-110h]
  int v64; // [rsp+90h] [rbp-108h] BYREF
  __int16 v65; // [rsp+94h] [rbp-104h]
  __int64 v66; // [rsp+98h] [rbp-100h]
  __int64 v67; // [rsp+A0h] [rbp-F8h]
  __int64 v68; // [rsp+A8h] [rbp-F0h]
  void *retaddr; // [rsp+198h] [rbp+0h]

  v5 = a4;
  v63 = a2;
  v62 = 0LL;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS((__int64)(a2 << 25) >> 16) )
    return 0LL;
  v10 = 1;
  v11 = 0;
  v51 = 1;
  v55 = 0;
  SystemRegionType = MiGetSystemRegionType(v8);
  v14 = 1;
  if ( SystemRegionType == 1 )
  {
    v11 = 2;
    v55 = 2;
    v56 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
    v15 = v56 + 3008;
    AnyMultiplexedVm = (char *)(v56 + 3008);
  }
  else
  {
    v56 = v13;
    v16 = 1;
    if ( (unsigned int)(SystemRegionType - 6) <= 1 )
      v16 = 2;
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(v16);
    v15 = (__int64)AnyMultiplexedVm;
  }
  v54 = 0;
  if ( a1 && v11 == 2 && (*(_DWORD *)(a1 + 104) & 0x8000000) == 0 )
  {
    v17 = 0;
    if ( ((unsigned __int8)v14 & (unsigned __int8)dword_1403E3104) != 0 )
      v17 = v14;
    v54 = v17;
  }
  MiPrefetchDriverPages(a2, a3);
  DriverPage = -1LL;
  v18 = a2;
  v66 = 20LL;
  v64 = v11;
  v65 = 0;
  v67 = 0LL;
  v68 = 0LL;
  SharedVm = MiGetSharedVm(v15);
  v20 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  while ( 1 )
  {
    v60 = MI_READ_PTE_LOCK_FREE(v18);
    v22 = v60;
    v23 = (__int64)((v18 << 25) - v62) >> 16;
    if ( (v60 & 1) == 0 )
    {
      MiFlushTbList((__int64)&v64, v21);
      MiPreUnlockWorkingSetExclusive(v15, v20);
      v24 = MiGetSharedVm(v15);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v24, retaddr);
      else
        *v24 = 0;
      __writecr8(v20);
      v25 = MmAccessFault(0LL, v23, 0, 0LL);
      if ( v25 < 0 )
        KeBugCheckEx(0x1Au, 0x3000uLL, v23, v22, v25);
      v26 = MiGetSharedVm(v15);
      v20 = ExAcquireSpinLockExclusive(v26);
      v26[1] = 0;
      goto LABEL_77;
    }
    v28 = MI_GET_PAGE_FRAME_FROM_PTE(&v60);
    v31 = v28;
    v32 = (__int64)v30 + 48 * v28;
    if ( *(__int64 *)(v32 + 8) >= 0 )
    {
      MiFlushTbList((__int64)&v64, v30);
      MiCopyOnWriteEx(v23, v18, 0xFFFFFFFFFFFFFFFFuLL, v20, 0);
      v10 = v51;
      goto LABEL_77;
    }
    v33 = *(_QWORD *)(v32 + 40);
    if ( (v33 & v29) != 0 && (!v56 || v54 == 1) && (v5 & 1) != 0 )
    {
      MiFlushTbList((__int64)&v64, v30);
      MiMakeDriverPagesPrivate(a1, v18, a3, v20, 0);
LABEL_28:
      v10 = v51;
      goto LABEL_77;
    }
    if ( (v22 & 0x800) == 0 && (v22 & 0x200) != 0 )
    {
      MiFlushTbList((__int64)&v64, v30);
      MiMakeDriverPagesPrivate(a1, v18, a3, v20, 1);
      goto LABEL_28;
    }
    v34 = 0LL;
    v35 = (v33 >> 40) & 0x3FF;
    v61 = *(struct _KEVENT **)(qword_14036C8F8 + 8LL * (unsigned int)v35);
    WsleContents = MiGetWsleContents(v35, v23);
    if ( DriverPage != -1 )
    {
      v40 = v39 + 48 * DriverPage;
      if ( v38 == *(_QWORD *)(qword_14036C8F8 + 8 * ((*(_QWORD *)(v40 + 40) >> 40) & 0x3FFLL)) )
        goto LABEL_44;
      MiReleaseFreshPage(v40);
      DriverPage = -1LL;
    }
    if ( (a4 & 2) != 0 )
      v41 = (WsleContents & 0xF) != 9;
    else
      v41 = *(_WORD *)(v32 + 32) == 1;
    if ( !v41 || (v31 & 0x1FFu) >= (unsigned __int64)(qword_14036C090 & 0x1FF) )
    {
LABEL_44:
      MiLockPageAtDpcInline(v32);
      if ( DriverPage == -1 )
        goto LABEL_59;
      if ( (a4 & 2) != 0 )
      {
        WsleContents = MiGetWsleContents(v45, v23);
        if ( (WsleContents & 0xF) != 9
          && !(unsigned int)MiIsPfnFileOnly(v32)
          && (v31 & 0x1FFu) < (unsigned __int64)(v46 & 0x1FF) )
        {
          v47 = 48 * v46 - 0x58000000000LL;
          _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( (*(_QWORD *)(v32 + 40) & 0x200000000000000LL) != 0 && (*(_DWORD *)(v32 + 16) & 0x400LL) != 0 )
          {
            v48 = MiLockProtoPoolPage(*(_QWORD *)(v32 + 8) | 0x8000000000000000uLL, 0LL);
            if ( v48 )
              goto LABEL_54;
          }
          else
          {
            v48 = 1LL;
LABEL_54:
            if ( (unsigned int)MiTradeActivePage(v32, v47, v23, 0, 2u) == 1 )
            {
              *(_QWORD *)(v32 + 16) = 0LL;
              MiSetFreshPfnFromFreeList(v32);
              MiReleaseFreshPage(v32);
              v32 = v47;
              DriverPage = -1LL;
            }
          }
          if ( v48 > 1 )
            MiUnlockProtoPoolPage(v48, 0x11u);
          MiLockPageAtDpcInline(v32);
          v15 = (__int64)AnyMultiplexedVm;
        }
LABEL_59:
        if ( (a4 & 2) != 0 )
        {
          if ( (WsleContents & 0xF) != 9 )
            MiRemoveSystemImagePage(v15, v18, v32);
          goto LABEL_68;
        }
      }
      if ( v55 == 2 )
      {
        if ( (unsigned int)MiAddLockedPageCharge(v32) )
          goto LABEL_68;
        v10 = 0;
        v51 = 0;
      }
      else
      {
        if ( (unsigned int)MiAreChargesNeededToLockPage(v32) )
          *(_BYTE *)(v32 + 35) |= 0x20u;
        ++*(_WORD *)(v32 + 32);
LABEL_68:
        v10 = v51;
      }
      if ( (*(_DWORD *)(v32 + 16) & 0x400LL) == 0 )
        v34 = MiCaptureDirtyBitToPfn(v32);
      v49 = MI_READ_PTE_LOCK_FREE(v18);
      v60 = v49;
      if ( (v49 & 0x800) != 0 && (v49 & 0x42) == 0 )
      {
        MiWriteValidPteVolatile((volatile signed __int64 *)v18, 2, 0);
        MiInsertTbFlushEntry((__int64)&v64, v23, 1LL, 0);
      }
      _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v34 )
        MiReleasePageFileInfo(v61, v34, 1);
      v18 += 8LL;
LABEL_77:
      v43 = DriverPage;
      goto LABEL_78;
    }
    MiFlushTbList((__int64)&v64, v36);
    MiPreUnlockWorkingSetExclusive(v15, v20);
    v42 = MiGetSharedVm(v15);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v42, retaddr);
    else
      *v42 = 0;
    __writecr8(v20);
    DriverPage = MiAllocateDriverPage(v61);
    v43 = DriverPage;
    v44 = MiGetSharedVm(v15);
    v10 = v51;
    v20 = ExAcquireSpinLockExclusive(v44);
    v44[1] = 0;
LABEL_78:
    if ( v18 > a3 || v10 != 1 )
      break;
    v5 = a4;
  }
  if ( v20 != 17 )
  {
    MiFlushTbList((__int64)&v64, v27);
    MiPreUnlockWorkingSetExclusive(v15, v20);
    v50 = MiGetSharedVm(v15);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v50, retaddr);
    else
      *v50 = 0;
    __writecr8(v20);
  }
  if ( v43 != -1 )
    MiReleaseFreshPage(48 * v43 - 0x58000000000LL);
  if ( v10 )
    return 0LL;
  MiUnlockCodePage(v63, v18 - 16);
  return 3221225626LL;
}
