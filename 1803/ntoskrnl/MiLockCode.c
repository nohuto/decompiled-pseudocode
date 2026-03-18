/*
 * XREFs of MiLockCode @ 0x14013AB00
 * Callers:
 *     MmResetDriverPaging @ 0x1405BB0E0 (MmResetDriverPaging.c)
 *     MiLockImageSection @ 0x1405BB208 (MiLockImageSection.c)
 *     PopAllocateHiberContext @ 0x1405F00AC (PopAllocateHiberContext.c)
 *     MiDisablePagingOfDriver @ 0x1405F86D4 (MiDisablePagingOfDriver.c)
 *     MiHandleDriverNonPagedSections @ 0x1405FA75C (MiHandleDriverNonPagedSections.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400160B0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MmAccessFault @ 0x14001B320 (MmAccessFault.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     MiInsertTbFlushEntry @ 0x140026270 (MiInsertTbFlushEntry.c)
 *     MiUnlockProtoPoolPage @ 0x140030A70 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x1400320B0 (MiLockProtoPoolPage.c)
 *     MiGetAnyMultiplexedVm @ 0x1400493AC (MiGetAnyMultiplexedVm.c)
 *     MiAddLockedPageCharge @ 0x140058004 (MiAddLockedPageCharge.c)
 *     MiPteHasShadow @ 0x140062834 (MiPteHasShadow.c)
 *     MiGetSessionVm @ 0x14007FBD8 (MiGetSessionVm.c)
 *     MiUnlockCodePage @ 0x1400A19C0 (MiUnlockCodePage.c)
 *     MiCapturePageFileInfoInline @ 0x1400B221C (MiCapturePageFileInfoInline.c)
 *     MiReleasePageFileInfo @ 0x1400D6FBC (MiReleasePageFileInfo.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     MiLockPageTableInternal @ 0x140120C90 (MiLockPageTableInternal.c)
 *     MiIsPfnFileOnly @ 0x140121930 (MiIsPfnFileOnly.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MiGetWsleContents @ 0x140125350 (MiGetWsleContents.c)
 *     MiWriteValidPteVolatile @ 0x1401259B0 (MiWriteValidPteVolatile.c)
 *     MiCopyOnWrite @ 0x140126BA0 (MiCopyOnWrite.c)
 *     MiReleaseFreshPage @ 0x14013A6E0 (MiReleaseFreshPage.c)
 *     MiRemoveSystemImagePage @ 0x14013B5D0 (MiRemoveSystemImagePage.c)
 *     MiMakeDriverPagesPrivate @ 0x14013F254 (MiMakeDriverPagesPrivate.c)
 *     MiTradeActivePage @ 0x140162634 (MiTradeActivePage.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     MiSetFreshPfnFromFreeList @ 0x140265454 (MiSetFreshPfnFromFreeList.c)
 *     MiCopyOnWriteCheckConditions @ 0x14026B6DC (MiCopyOnWriteCheckConditions.c)
 *     MiPrefetchDriverPages @ 0x1405BB2D0 (MiPrefetchDriverPages.c)
 *     MiAllocateDriverPage @ 0x1405BB3F0 (MiAllocateDriverPage.c)
 */

__int64 __fastcall MiLockCode(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, char a4)
{
  unsigned __int64 v5; // r15
  unsigned __int64 v7; // rbx
  char v9; // si
  unsigned __int64 v10; // r13
  int v11; // ebp
  int SystemRegionType; // eax
  unsigned __int64 SessionVm; // rax
  void *v14; // r12
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r8
  unsigned __int8 v17; // r14
  unsigned __int64 v18; // r9
  __int64 v19; // r10
  unsigned __int64 v20; // r11
  ULONG_PTR v21; // rbx
  __int64 v22; // rax
  unsigned __int64 v23; // rbp
  __int64 v24; // r8
  int v25; // eax
  unsigned __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rsi
  ULONG_PTR v29; // rdi
  int v30; // ebx
  __int64 v31; // r8
  __int64 v32; // rbx
  __int64 v33; // r8
  unsigned __int64 v34; // rcx
  char v35; // r10
  __int64 v36; // r8
  int v37; // r9d
  __int64 v38; // r8
  unsigned __int64 v39; // rbx
  __int64 Process; // rcx
  struct _KEVENT *v41; // r9
  unsigned __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rax
  char WsleContents; // r14
  __int64 v46; // r9
  __int64 v47; // rbp
  __int64 v48; // rdx
  ULONG_PTR v49; // rsi
  __int64 v50; // r8
  __int64 v51; // r9
  unsigned __int64 v52; // rdx
  __int64 v53; // r8
  __int16 v54; // cx
  BOOL v55; // edx
  char v56; // al
  __int64 v57; // rax
  int BugCheckParameter4; // [rsp+20h] [rbp-178h]
  char v59; // [rsp+30h] [rbp-168h]
  unsigned __int8 v60; // [rsp+31h] [rbp-167h]
  __int64 DriverPage; // [rsp+38h] [rbp-160h]
  bool v63; // [rsp+40h] [rbp-158h]
  int v64; // [rsp+44h] [rbp-154h]
  int v65; // [rsp+48h] [rbp-150h] BYREF
  ULONG_PTR v66; // [rsp+50h] [rbp-148h] BYREF
  unsigned __int64 v67; // [rsp+58h] [rbp-140h]
  unsigned __int64 v68; // [rsp+60h] [rbp-138h]
  __int64 v69; // [rsp+68h] [rbp-130h]
  unsigned __int64 v70; // [rsp+70h] [rbp-128h]
  struct _KEVENT *v71; // [rsp+78h] [rbp-120h]
  __int64 v72; // [rsp+80h] [rbp-118h]
  unsigned __int64 v73; // [rsp+88h] [rbp-110h]
  int v74; // [rsp+90h] [rbp-108h] BYREF
  __int16 v75; // [rsp+94h] [rbp-104h]
  __int64 v76; // [rsp+98h] [rbp-100h]
  __int64 v77; // [rsp+A0h] [rbp-F8h]
  __int64 v78; // [rsp+A8h] [rbp-F0h]

  v68 = a3;
  v5 = a2;
  v73 = a2;
  v69 = a1;
  v72 = 0LL;
  v7 = (__int64)(a2 << 25) >> 16;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v7) )
    return 0LL;
  v9 = 1;
  v10 = 0LL;
  v11 = 0;
  v64 = 0;
  v59 = 1;
  SystemRegionType = MiGetSystemRegionType(v7);
  if ( SystemRegionType == 1 )
  {
    v67 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
    SessionVm = MiGetSessionVm();
    v11 = 2;
    v64 = 2;
  }
  else
  {
    v67 = 0LL;
    if ( (unsigned int)(SystemRegionType - 6) > 1 )
    {
      v14 = &unk_1403CC7D0;
      goto LABEL_9;
    }
    SessionVm = (unsigned __int64)MiGetAnyMultiplexedVm(2);
  }
  v14 = (void *)SessionVm;
LABEL_9:
  v63 = 0;
  if ( a1 && v11 == 2 && (*(_DWORD *)(a1 + 104) & 0x8000000) == 0 )
    v63 = (dword_14044B164 & 1) != 0;
  MiPrefetchDriverPages(v5, a3);
  DriverPage = -1LL;
  v76 = 20LL;
  v74 = v11;
  v75 = 0;
  v77 = 0LL;
  v78 = 0LL;
  v17 = MiLockWorkingSetShared((__int64)v14);
  v60 = v17;
  do
  {
    v18 = 0xFFFFFA8000000000uLL;
    v19 = 0x200000000000000LL;
    v20 = 0xFFFFF6FB7DBED7F8uLL;
    if ( !v10 )
      goto LABEL_17;
    if ( (v5 & 0xFFF) == 0 )
    {
      MiFlushTbList((__int64)&v74, v15, v16);
      MiUnlockPageTableInternal((__int64)v14, v10);
LABEL_17:
      v10 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockPageTableInternal((__int64)v14, v10, 0LL);
      v20 = 0xFFFFF6FB7DBED7F8uLL;
      v19 = 0x200000000000000LL;
      v18 = 0xFFFFFA8000000000uLL;
    }
    v21 = *(_QWORD *)v5;
    if ( v5 >= 0xFFFFF6FB7DBED000uLL && v5 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      if ( (unsigned int)MiPteHasShadow() && (v21 & 1) != 0 && ((v21 & 0x20) == 0 || (v21 & 0x42) == 0) )
      {
        v15 = v21;
        v16 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( !v16 )
          goto LABEL_30;
        v15 = v21 | 0x20;
        v22 = *(_QWORD *)(v16 + 8 * ((v5 >> 3) & 0x1FF));
        if ( (v22 & 0x20) == 0 )
          v15 = v21;
        if ( (v22 & 0x42) != 0 )
          v15 |= 0x42uLL;
      }
      v21 = v15;
    }
LABEL_30:
    v66 = v21;
    v23 = (__int64)((v5 << 25) - v72) >> 16;
    v70 = v23;
    if ( (v21 & 1) == 0 )
    {
      MiFlushTbList((__int64)&v74, v15, v16);
      MiUnlockPageTableInternal((__int64)v14, v10);
      MiUnlockWorkingSetShared((__int64)v14, v17, v24);
      v25 = MmAccessFault(0LL, v23, 0, 0LL);
      if ( v25 < 0 )
        KeBugCheckEx(0x1Au, 0x3000uLL, v23, v21, v25);
      v10 = 0LL;
      MiLockWorkingSetShared((__int64)v14);
      goto LABEL_50;
    }
    if ( (unsigned __int64)&v66 < 0xFFFFF6FB7DBED000uLL || (unsigned __int64)&v66 > v20 )
    {
      v26 = v21;
    }
    else
    {
      v26 = v21;
      if ( (unsigned int)MiPteHasShadow() && (v21 & 1) != 0 && ((v21 & 0x20) == 0 || (v21 & 0x42) == 0) )
      {
        v15 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v15 )
        {
          v26 = v21 | 0x20;
          v27 = *(_QWORD *)(v15 + 8 * (((unsigned __int64)&v66 >> 3) & 0x1FF));
          if ( (v27 & 0x20) == 0 )
            v26 = v21;
          if ( (v27 & 0x42) != 0 )
            v26 |= 0x42uLL;
        }
      }
    }
    v28 = (v26 >> 12) & 0xFFFFFFFFFLL;
    v29 = v18 + 48 * v28;
    if ( *(__int64 *)(v29 + 8) < 0 )
    {
      v34 = *(_QWORD *)(v29 + 40);
      if ( (v34 & v19) != 0 && (!v67 || v63) )
      {
        v35 = a4;
        if ( (a4 & 1) != 0 )
        {
          MiFlushTbList((__int64)&v74, v15, v16);
          MiUnlockPageTableInternal((__int64)v14, v10);
          MiUnlockWorkingSetShared((__int64)v14, v17, v36);
          BugCheckParameter4 = 0;
          goto LABEL_66;
        }
      }
      else
      {
        v35 = a4;
      }
      if ( (v21 & 0x800) == 0 && (v21 & 0x200) != 0 )
      {
        MiFlushTbList((__int64)&v74, v15, v16);
        MiUnlockPageTableInternal((__int64)v14, v10);
        MiUnlockWorkingSetShared((__int64)v14, v17, v38);
        BugCheckParameter4 = 1;
LABEL_66:
        LOBYTE(v37) = 17;
        MiMakeDriverPagesPrivate(v69, v5, v68, v37, BugCheckParameter4);
LABEL_48:
        v10 = 0LL;
        MiLockWorkingSetShared((__int64)v14);
        goto LABEL_49;
      }
      v39 = 0LL;
      Process = (v34 >> 40) & 0x3FF;
      v41 = *(struct _KEVENT **)(qword_1403CBD88 + 8 * Process);
      v71 = v41;
      v16 = ((v23 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v42 = *(_QWORD *)v16;
      if ( v16 >= 0xFFFFF6FB7DBED000uLL
        && v16 <= v20
        && (unsigned int)MiPteHasShadow()
        && (v42 & 1) != 0
        && ((v42 & 0x20) == 0 || (v42 & 0x42) == 0) )
      {
        Process = (__int64)KeGetCurrentThread()->ApcState.Process;
        v43 = *(_QWORD *)(Process + 1544);
        if ( v43 )
        {
          v44 = *(_QWORD *)(v43 + 8 * ((v16 >> 3) & 0x1FF));
          v16 = v42 | 0x20;
          Process = (unsigned __int8)v44;
          LOBYTE(Process) = v44 & 0x20;
          if ( (v44 & 0x20) == 0 )
            v16 = v42;
          v42 = v16;
          if ( (v44 & 0x42) != 0 )
            v42 = v16 | 0x42;
        }
      }
      WsleContents = HIBYTE(v42) & 0xF | (16 * ((v42 >> 60) & 7));
      if ( DriverPage != -1 )
      {
        Process = 48 * DriverPage - 0x58000000000LL;
        if ( v41 == *(struct _KEVENT **)(qword_1403CBD88 + 8 * ((*(_QWORD *)(Process + 40) >> 40) & 0x3FFLL)) )
          goto LABEL_87;
        MiReleaseFreshPage(Process);
        v35 = a4;
        DriverPage = -1LL;
      }
      if ( (v35 & 2) != 0 )
      {
        if ( (WsleContents & 0xF) == 9 )
          goto LABEL_87;
      }
      else if ( *(_WORD *)(v29 + 32) != 1 )
      {
        goto LABEL_87;
      }
      v52 = qword_1403CB550 & 0x1FF;
      if ( ((unsigned __int16)v28 & 0x1FFu) < v52 )
      {
        MiFlushTbList((__int64)&v74, v52, v16);
        MiUnlockPageTableInternal((__int64)v14, v10);
        MiUnlockWorkingSetShared((__int64)v14, v60, v53);
        DriverPage = MiAllocateDriverPage(v71);
        v10 = 0LL;
        v32 = DriverPage;
        v9 = v59;
        v17 = MiLockWorkingSetShared((__int64)v14);
        v60 = v17;
        continue;
      }
LABEL_87:
      v65 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v29 + 24), 0x3FuLL) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v65);
          while ( *(__int64 *)(v29 + 24) < 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v29 + 24), 0x3FuLL) );
        v35 = a4;
      }
      if ( DriverPage == -1
        || (v35 & 2) == 0
        || (WsleContents = MiGetWsleContents(Process, v23), (WsleContents & 0xF) == 9)
        || (unsigned int)MiIsPfnFileOnly(v29)
        || ((unsigned __int16)v28 & 0x1FFu) >= (unsigned __int64)(v46 & 0x1FF) )
      {
LABEL_109:
        if ( (a4 & 2) != 0 )
        {
          if ( (WsleContents & 0xF) != 9 )
            MiRemoveSystemImagePage(v14, v5, v29);
        }
        else if ( v64 == 2 )
        {
          if ( !(unsigned int)MiAddLockedPageCharge(v29, 0) )
          {
            v9 = 0;
            v59 = 0;
            goto LABEL_128;
          }
        }
        else
        {
          v16 = *(_QWORD *)(v29 + 24);
          v54 = *(_WORD *)(v29 + 32);
          if ( ((*(_QWORD *)(v29 + 40) >> 52) & 1LL) == 0 )
          {
            v55 = 0;
            v16 &= 0x3FFFFFFFFFFFFFFFuLL;
            if ( !v54 )
              goto LABEL_125;
            if ( v54 == 1 )
            {
              if ( v16 || (*(_BYTE *)(v29 + 34) & 8) != 0 )
                v55 = 1;
            }
            else if ( v54 == 2 && v16 )
            {
              v55 = (*(_BYTE *)(v29 + 34) & 8) != 0;
            }
            if ( v55 )
LABEL_125:
              *(_BYTE *)(v29 + 35) |= 0x20u;
          }
          *(_WORD *)(v29 + 32) = v54 + 1;
        }
        v9 = v59;
LABEL_128:
        if ( (*(_DWORD *)(v29 + 16) & 0x400LL) == 0 )
        {
          v56 = *(_BYTE *)(v29 + 34);
          if ( (v56 & 0x10) == 0 )
          {
            if ( (v56 & 8) == 0 )
            {
              v39 = MiCapturePageFileInfoInline((_QWORD *)(v29 + 16), 1, 0);
              v56 = *(_BYTE *)(v29 + 34);
            }
            *(_BYTE *)(v29 + 34) = v56 | 0x10;
          }
        }
        v15 = *(_QWORD *)v5;
        if ( v5 >= 0xFFFFF6FB7DBED000uLL
          && v5 <= 0xFFFFF6FB7DBED7F8uLL
          && (unsigned int)MiPteHasShadow()
          && (v15 & 1) != 0
          && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
        {
          v16 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v16 )
          {
            v57 = *(_QWORD *)(v16 + 8 * ((v5 >> 3) & 0x1FF));
            v16 = v15 | 0x20;
            if ( (v57 & 0x20) == 0 )
              v16 = v15;
            v15 = v16;
            if ( (v57 & 0x42) != 0 )
              v15 = v16 | 0x42;
          }
        }
        if ( (v15 & 0x800) != 0 && (v15 & 0x42) == 0 )
        {
          MiWriteValidPteVolatile((volatile signed __int64 *)v5, 2, 0);
          MiInsertTbFlushEntry((__int64)&v74, v23, 1LL, 0);
        }
        _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v39 )
          MiReleasePageFileInfo(v71, v39, 1);
        v17 = v60;
        v5 += 8LL;
        goto LABEL_50;
      }
      v47 = 48 * v46 - 0x58000000000LL;
      _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (*(_QWORD *)(v29 + 40) & 0x200000000000000LL) != 0 && (*(_DWORD *)(v29 + 16) & 0x400LL) != 0 )
      {
        v49 = MiLockProtoPoolPage(*(_QWORD *)(v29 + 8) | 0x8000000000000000uLL, 0LL);
        if ( !v49 )
        {
LABEL_106:
          if ( v49 > 1 )
          {
            LOBYTE(v48) = 17;
            MiUnlockProtoPoolPage(v49, v48, v50, v51);
          }
          MiLockPageAtDpcInline(v29);
          v23 = v70;
          goto LABEL_109;
        }
      }
      else
      {
        v49 = 1LL;
      }
      if ( (unsigned int)MiTradeActivePage(v29, 2) == 1 )
      {
        *(_QWORD *)(v29 + 16) = ZeroPte;
        MiSetFreshPfnFromFreeList(v29);
        MiReleaseFreshPage(v29);
        v29 = v47;
        DriverPage = -1LL;
      }
      goto LABEL_106;
    }
    MiFlushTbList((__int64)&v74, v15, v16);
    v30 = MiCopyOnWrite(v23, v5, 0xFFFFFFFFFFFFFFFFuLL, 0);
    if ( v30 < 0 )
    {
      MiUnlockPageTableInternal((__int64)v14, v10);
      MiUnlockWorkingSetShared((__int64)v14, v17, v31);
      MiCopyOnWriteCheckConditions(v14, (unsigned int)v30);
      goto LABEL_48;
    }
LABEL_49:
    v9 = v59;
LABEL_50:
    v32 = DriverPage;
  }
  while ( v5 <= v68 && v9 == 1 );
  if ( v17 != 17 )
  {
    MiFlushTbList((__int64)&v74, v15, v16);
    if ( v10 )
      MiUnlockPageTableInternal((__int64)v14, v10);
    MiUnlockWorkingSetShared((__int64)v14, v17, v33);
  }
  if ( v32 != -1 )
    MiReleaseFreshPage(48 * v32 - 0x58000000000LL);
  if ( v9 )
    return 0LL;
  MiUnlockCodePage(v73, v5 - 16);
  return 3221225626LL;
}
