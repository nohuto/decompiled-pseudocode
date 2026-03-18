/*
 * XREFs of MiBuildForkPte @ 0x140141270
 * Callers:
 *     MiCloneVads @ 0x140140C44 (MiCloneVads.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiGetPage @ 0x140018200 (MiGetPage.c)
 *     MiLockPageTablePage @ 0x1400211A0 (MiLockPageTablePage.c)
 *     MiInsertTbFlushEntry @ 0x140026270 (MiInsertTbFlushEntry.c)
 *     MiIncreaseUsedPtesCount @ 0x14003C650 (MiIncreaseUsedPtesCount.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x140050C14 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiFinalizePageAttribute @ 0x140056268 (MiFinalizePageAttribute.c)
 *     MiInitializePageColorBase @ 0x140057920 (MiInitializePageColorBase.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiPrefetchVirtualMemory @ 0x14007F6B0 (MiPrefetchVirtualMemory.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiUpdateWorkingSetPrivateSize @ 0x1400AD7A8 (MiUpdateWorkingSetPrivateSize.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1400AE1C8 (MiCaptureWriteWatchDirtyBit.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x1400BC2D0 (MI_PROTO_FORMAT_COMBINED.c)
 *     MI_MAKE_PROTECT_WRITE_COPY @ 0x1400C3000 (MI_MAKE_PROTECT_WRITE_COPY.c)
 *     MiReleasePageFileInfo @ 0x1400D6FBC (MiReleasePageFileInfo.c)
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400E6200 (MiUnlockWorkingSetExclusive.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     MiChargeCommit @ 0x140119760 (MiChargeCommit.c)
 *     MiMakeSystemAddressValid @ 0x140122000 (MiMakeSystemAddressValid.c)
 *     MiCaptureDirtyBitToPfn @ 0x140124940 (MiCaptureDirtyBitToPfn.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MiGetWsleContents @ 0x140125350 (MiGetWsleContents.c)
 *     MiWriteValidPteNewProtection @ 0x140125DC0 (MiWriteValidPteNewProtection.c)
 *     MiGetWsleProtection @ 0x140128180 (MiGetWsleProtection.c)
 *     MiSetWsleProtection @ 0x14013FA7C (MiSetWsleProtection.c)
 *     MiReferenceCloneProto @ 0x140141EDC (MiReferenceCloneProto.c)
 *     MiFindZeroCloneBlock @ 0x140141F58 (MiFindZeroCloneBlock.c)
 *     MiWriteSharedDemandZeroPte @ 0x140142210 (MiWriteSharedDemandZeroPte.c)
 *     MiIncrementCombinedPte @ 0x140142678 (MiIncrementCombinedPte.c)
 *     MiLockAndInsertPageInFreeList @ 0x14017EC2C (MiLockAndInsertPageInFreeList.c)
 *     MiGetPrototypePteDirect @ 0x1401A6524 (MiGetPrototypePteDirect.c)
 *     MiMakeDemandZeroPte @ 0x1401A65C8 (MiMakeDemandZeroPte.c)
 *     MiMakePrototypePteDirect @ 0x1401A6614 (MiMakePrototypePteDirect.c)
 *     MiMakePrototypePteVadLookup @ 0x1401A6634 (MiMakePrototypePteVadLookup.c)
 *     MiTransferSoftwarePte @ 0x1401A6760 (MiTransferSoftwarePte.c)
 *     MiGetPageFileReservationOffset @ 0x14025F90C (MiGetPageFileReservationOffset.c)
 *     MiDuplicateCloneLeaf @ 0x14026AB9C (MiDuplicateCloneLeaf.c)
 *     MiGetCrossPartitionCloneCharges @ 0x14026AE50 (MiGetCrossPartitionCloneCharges.c)
 *     MiHandleForkTransitionPte @ 0x14026AEC0 (MiHandleForkTransitionPte.c)
 *     MiReturnCrossPartitionCloneCharges @ 0x14026B568 (MiReturnCrossPartitionCloneCharges.c)
 *     MiWaitForFreePage @ 0x14026B8B0 (MiWaitForFreePage.c)
 */

_BOOL8 __fastcall MiBuildForkPte(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        _QWORD *a4,
        __int64 a5,
        unsigned __int64 a6,
        _QWORD *a7,
        __int64 a8,
        __int64 a9,
        unsigned __int64 a10,
        __int64 a11,
        int a12,
        KIRQL a13,
        _QWORD *a14,
        _DWORD *a15)
{
  ULONG_PTR v16; // r13
  unsigned __int64 PrototypePteVadLookup; // rbx
  __int64 ZeroCloneBlock; // rax
  int v20; // ebx
  int v21; // edx
  __int64 v23; // rdx
  int v24; // r10d
  __int64 v25; // r11
  int v26; // r8d
  __int64 v27; // r9
  _QWORD *v28; // rsi
  int v29; // ecx
  _DWORD *v30; // rdi
  KIRQL v31; // al
  __int64 v32; // rax
  __int64 v33; // r13
  int v34; // r9d
  unsigned __int8 WsleContents; // si
  unsigned __int64 v36; // r9
  __int64 v37; // r8
  __int64 v38; // r11
  __int64 v39; // rax
  __int64 v40; // rdi
  unsigned __int64 v41; // r10
  struct _KEVENT *v42; // r9
  struct _KEVENT *v43; // rdi
  __int16 v44; // r9
  __int64 v45; // r11
  __int64 v46; // rdi
  __int64 v47; // rbx
  __int64 v48; // rdx
  __int64 v49; // r8
  LONG *SharedVm; // rbx
  int v51; // eax
  BOOL v52; // edi
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // r10
  __int64 v56; // r11
  __int64 v57; // rdi
  LONG *v58; // rdi
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  struct _KEVENT *v65; // rcx
  __int64 v66; // rbx
  __int64 v67; // rbx
  unsigned __int64 v68; // rsi
  unsigned __int64 *v69; // rbx
  __int64 v70; // rdx
  unsigned int PageFileReservationOffset; // eax
  unsigned __int16 v72; // dx
  __int64 v73; // r9
  unsigned __int64 v74; // rax
  __int64 v75; // r9
  unsigned __int64 v76; // rdx
  struct _KEVENT *v77; // rdi
  unsigned __int64 v78; // rbx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // rdx
  __int64 v82; // r8
  __int64 v83; // r9
  __int64 v84; // rax
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // rax
  unsigned int WsleProtection; // eax
  __int64 v92; // rdx
  __int64 v93; // r8
  __int64 v94; // r9
  __int64 v95; // r10
  __int64 v96; // r8
  __int64 v97; // r10
  __int64 v98; // r11
  __int64 PrototypePteDirect; // rax
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // r8
  bool v105; // zf
  int v106; // r9d
  __int64 v107; // rax
  int v108; // ebx
  __int64 v109; // r13
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // r8
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // r8
  __int64 v116; // rbx
  __int64 v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // r8
  __int64 v120; // r9
  __int64 v121; // rdx
  __int64 v122; // rcx
  __int64 v123; // r8
  __int64 v124; // r10
  unsigned int v125; // ecx
  __int64 v126; // r8
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // r8
  __int64 v130; // rcx
  __int64 v131; // r8
  __int64 v132; // rax
  bool v133; // al
  int v134; // r8d
  __int64 v135; // r10
  __int64 v136; // r11
  __int64 v137; // rcx
  __int64 v138; // r8
  __int64 v139; // [rsp+68h] [rbp-79h] BYREF
  int i; // [rsp+70h] [rbp-71h]
  unsigned int v141; // [rsp+74h] [rbp-6Dh]
  __int64 Page; // [rsp+78h] [rbp-69h]
  unsigned int v143; // [rsp+80h] [rbp-61h]
  unsigned __int64 v144; // [rsp+88h] [rbp-59h]
  struct _KEVENT *v145; // [rsp+90h] [rbp-51h]
  _QWORD v146[2]; // [rsp+98h] [rbp-49h] BYREF
  __int64 v147; // [rsp+A8h] [rbp-39h] BYREF
  unsigned __int64 v148; // [rsp+B0h] [rbp-31h]
  __int64 v149; // [rsp+B8h] [rbp-29h]
  __int64 v150; // [rsp+C0h] [rbp-21h] BYREF
  volatile signed __int32 *v151; // [rsp+C8h] [rbp-19h] BYREF
  __int16 v152; // [rsp+D0h] [rbp-11h]
  unsigned __int16 v153; // [rsp+D2h] [rbp-Fh]
  _QWORD v154[8]; // [rsp+D8h] [rbp-9h] BYREF
  int v156; // [rsp+130h] [rbp+4Fh]

  v156 = a2;
  v16 = a3;
  v139 = MI_READ_PTE_LOCK_FREE(a3);
  PrototypePteVadLookup = v139;
  if ( !v139 )
  {
    if ( a5 && *(int *)(a11 + 52) < 0 )
    {
      ZeroCloneBlock = MiFindZeroCloneBlock(a5, (*(_DWORD *)(a10 + 48) >> 3) & 0x1F);
      v20 = ZeroCloneBlock;
      if ( ZeroCloneBlock )
      {
        MiIncreaseUsedPtesCount(a8, 1u);
        MiWriteSharedDemandZeroPte(a2, v21, v20, (_DWORD)a4, (__int64)a14);
      }
    }
    return 0LL;
  }
  MiIncreaseUsedPtesCount(a8, 1u);
  v24 = a1;
  v25 = a2 + 1280;
  v26 = a12;
  v27 = 0LL;
  v28 = a14;
  v29 = 0;
  v30 = a15;
  v149 = a1 + 1280;
  Page = -1LL;
  v146[0] = -1LL;
  v31 = a13;
  v146[1] = v25;
  v141 = 0;
  for ( i = a12; ; v26 = i )
  {
    if ( v29 == 1 )
    {
      MiMakeSystemAddressValid(v16, 0LL, 0, v31, 1);
      v32 = MI_READ_PTE_LOCK_FREE(v16);
      v26 = i;
      PrototypePteVadLookup = v32;
      v24 = a1;
      v27 = v141;
      v139 = v32;
    }
    if ( (PrototypePteVadLookup & 1) == 0 )
      break;
    v33 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v139) >> 12) & 0xFFFFFFFFFLL)
        - 0x58000000000LL;
    if ( v34 == 1 || *(_WORD *)(v33 + 32) > 1u && (*(_QWORD *)(v33 + 40) & 0x200000000000000LL) == 0 )
    {
      MiInitializePageColorBase(v149, 0, (__int64)&v151);
      v44 = _InterlockedExchangeAdd(v151, 1u);
      v46 = v146[0];
      v47 = *(_QWORD *)(qword_1403CBD88 + 8LL * *(unsigned __int16 *)(v45 + 174));
      if ( v146[0] != -1LL
        || (Page = MiGetPage(v47, v153 | (unsigned int)(unsigned __int16)(v44 & v152), 0),
            v46 = Page,
            v146[0] = Page,
            Page != -1) )
      {
        MiFinalizePageAttribute(48 * v46 - 0x58000000000LL, *(unsigned __int8 *)(v33 + 34) >> 6, 0);
        LOBYTE(v106) = a13;
        MiDuplicateCloneLeaf(a3, (_DWORD)a4, v46, v106, 17);
        ++*a7;
        return 0LL;
      }
      MiFlushTbList(a9, v48, v49);
      MiUnlockWorkingSetExclusive(v149, a13);
      MiWaitForFreePage(v47);
      SharedVm = MiGetSharedVm(v149);
      v31 = ExAcquireSpinLockExclusive(SharedVm);
      SharedVm[1] = 0;
      PrototypePteVadLookup = v139;
      v16 = a3;
LABEL_31:
      v30 = a15;
      a13 = v31;
LABEL_32:
      v27 = v141;
      goto LABEL_33;
    }
    v148 = (__int64)(a3 << 25) >> 16;
    WsleContents = MiGetWsleContents(0xFFFFFFFFFLL, v148);
    if ( (*(_QWORD *)(v33 + 40) & 0x200000000000000LL) != 0 )
    {
      WsleProtection = MiGetWsleProtection(v36, WsleContents);
      if ( WsleProtection )
      {
        PrototypePteVadLookup = MiMakePrototypePteVadLookup(WsleProtection);
        v139 = PrototypePteVadLookup;
        goto LABEL_80;
      }
      PrototypePteDirect = MiMakePrototypePteDirect(v95, v92, v93, v94);
      v139 = PrototypePteDirect;
      PrototypePteVadLookup = PrototypePteDirect;
      if ( v96 >= 0 )
      {
        PrototypePteVadLookup = PrototypePteDirect | 0x800;
        v139 = PrototypePteDirect | 0x800;
LABEL_80:
        if ( v96 >= 0 )
        {
          v100 = v97;
          v101 = v98;
          goto LABEL_82;
        }
      }
      if ( (unsigned int)MiReferenceCloneProto(v98, v97, i, (_DWORD)a14, (__int64)&v147) )
      {
        v105 = v147 == 0;
LABEL_137:
        if ( !v105 )
        {
          PrototypePteVadLookup |= 8uLL;
          v139 = PrototypePteVadLookup;
        }
        goto LABEL_139;
      }
LABEL_83:
      *a4 = MiMakeDemandZeroPte(4LL);
      if ( MiPteInShadowRange((unsigned __int64)a4) )
        MiWritePteShadow(v103, v102, v104);
      *v30 = 1;
      goto LABEL_141;
    }
    v150 = MI_READ_PTE_LOCK_FREE(((a6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v37 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v150) >> 12) & 0xFFFFFFFFFLL)
        - 0x58000000000LL;
    v39 = *(unsigned __int16 *)(v38 + 174);
    v143 = 0;
    v141 = 0;
    v40 = ZeroPte;
    v144 = v37;
    v42 = *(struct _KEVENT **)(qword_1403CBD88 + 8 * ((v41 >> 40) & 0x3FF));
    v145 = v42;
    if ( *(struct _KEVENT **)(qword_1403CBD88 + 8 * v39) != v42 )
    {
      if ( (i & 1) != 0 )
      {
        if ( !(unsigned int)MiChargeCommit((__int64)v42, 1uLL, 0) )
        {
          *a4 = MiMakeDemandZeroPte(4LL);
          if ( MiPteInShadowRange((unsigned __int64)a4) )
            MiWritePteShadow(v60, v59, v61);
          *a15 = 1;
          goto LABEL_141;
        }
        v42 = v145;
        v141 = 1;
      }
      if ( !(unsigned int)MiGetCrossPartitionCloneCharges(v42) )
      {
        *a4 = MiMakeDemandZeroPte(4LL);
        if ( MiPteInShadowRange((unsigned __int64)a4) )
          MiWritePteShadow(v63, v62, v64);
        v52 = 0;
        *a15 = 1;
        if ( v141 )
        {
          v65 = v145;
          goto LABEL_49;
        }
        goto LABEL_142;
      }
      v37 = v144;
      v143 = 1;
    }
    if ( (WsleContents & 0xF) != 8 || (unsigned int)MiLockPageTablePage(v37, 3) )
    {
      v66 = v144;
      MiLockPageAtDpcInline(v144);
      *(_QWORD *)(v66 + 24) ^= (*(_QWORD *)(v66 + 24) ^ (*(_QWORD *)(v66 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v66 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v67 = v139;
      if ( (v139 & 0x42) != 0 )
      {
        v68 = v148;
        if ( (*(_DWORD *)(a10 + 48) & 7) == 4 && (*(_QWORD *)(v33 + 40) & 0x200000000000000LL) == 0 )
          MiCaptureWriteWatchDirtyBit(a1, v148, a10);
        MiLockPageAtDpcInline(v33);
        v40 = MiCaptureDirtyBitToPfn(v33);
        v139 = v67 & 0xFFFFFFFFFFFFFFBDuLL;
      }
      else
      {
        MiLockPageAtDpcInline(v33);
        v68 = v148;
      }
      v69 = (unsigned __int64 *)(v33 + 16);
      v70 = *(_QWORD *)(v33 + 16);
      v144 = v70;
      if ( (v70 & 2) != 0 )
      {
        PageFileReservationOffset = MiGetPageFileReservationOffset(v33 + 16, v70);
        v40 = MiTransferSoftwarePte(
                *v69,
                *((_QWORD *)&v145[286].Header.WaitListHead.Blink + (v72 >> 12)),
                PageFileReservationOffset,
                v73);
        *v69 = v144 & 0xFFFFFFFFFFFFFFFDuLL;
      }
      *(_QWORD *)(v33 + 8) = a6;
      *(_QWORD *)(v33 + 40) |= 0x200000000000000uLL;
      v74 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v150);
      *(_QWORD *)(v33 + 40) = v75 ^ (v75 ^ (v74 >> 12)) & 0xFFFFFFFFFLL;
      MI_MAKE_PROTECT_WRITE_COPY(v33 + 16);
      v144 = *v69 >> 5;
      _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v40 )
      {
        v76 = v40;
        v77 = v145;
        MiReleasePageFileInfo(v145, v76, 1);
      }
      else
      {
        v77 = v145;
      }
      v78 = v139;
      if ( (v139 & 0x800) != 0 )
      {
        v78 = v139 & 0xFFFFFFFFFFFFF5FFuLL | 0x200;
        v139 = v78;
      }
      MiWriteValidPteNewProtection(a3, v78);
      MiInsertTbFlushEntry(a9, v68, 1LL, 0);
      *(_QWORD *)a6 = 0LL;
      *(_QWORD *)a6 = v78;
      if ( MiPteInShadowRange(a6) )
        MiWritePteShadow(v79, v78, v80);
      *(_QWORD *)(a6 + 8) = v143;
      *(_QWORD *)(a6 + 24) = 2LL;
      MiSetWsleProtection(v79, v68);
      v84 = MiMakePrototypePteDirect(*(_QWORD *)(v33 + 8) | 0x8000000000000000uLL, v81, v82, v83);
      v85 = v84;
      v139 = v84;
      if ( (i & 1) != 0 )
      {
        v105 = v141 == 0;
        *(_QWORD *)(a6 + 16) = 1LL;
        v139 = v84 | 8;
        if ( v105 )
          ++a14[1];
        else
          ++*a14;
        _InterlockedExchangeAdd64((volatile signed __int64 *)&v77[315].Header.Lock, 1uLL);
        v86 = *(_QWORD *)(a6 + 16);
        v85 = v139;
      }
      else
      {
        *(_QWORD *)(a6 + 16) = 0LL;
        v86 = 0LL;
      }
      *(_QWORD *)(a6 + 16) = v86 & 0x7FFFFFFFFFFFFFFLL | ((unsigned __int64)(unsigned int)v144 << 59);
      *a4 = v85;
      if ( MiPteInShadowRange((unsigned __int64)a4) )
        MiWritePteShadow(v88, v87, v89);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 920), 0xFFFFFFFFFFFFFFFFuLL);
      MiUpdateWorkingSetPrivateSize(v149, v68, -1LL, 0);
      goto LABEL_74;
    }
    v43 = v145;
    if ( v143 == 1 )
      MiReturnCrossPartitionCloneCharges(v145);
    if ( v141 )
      MiReturnCommit((__int64)v43, 1uLL);
    v28 = a14;
    v27 = 1LL;
    v30 = a15;
    v16 = a3;
    v31 = a13;
    v141 = 1;
LABEL_33:
    v24 = a1;
    v29 = 1;
  }
  if ( (PrototypePteVadLookup & 0x400) != 0 )
  {
    MiGetPrototypePteDirect(PrototypePteVadLookup);
    v133 = MI_PROTO_FORMAT_COMBINED(PrototypePteVadLookup);
    v100 = v135;
    v101 = v136;
    if ( v133 )
    {
LABEL_82:
      if ( (unsigned int)MiIncrementCombinedPte(v101, v100) )
        goto LABEL_139;
      goto LABEL_83;
    }
    if ( !(unsigned int)MiReferenceCloneProto(v136, v135, v134, (_DWORD)v28, (__int64)&v147) )
      goto LABEL_83;
    if ( v147 )
    {
      v105 = *(_QWORD *)(v147 + 16) >> 59 == 24;
      goto LABEL_137;
    }
LABEL_139:
    *a4 = PrototypePteVadLookup;
    if ( MiPteInShadowRange((unsigned __int64)a4) )
      MiWritePteShadow(v137, PrototypePteVadLookup, v138);
LABEL_141:
    v52 = 0;
    goto LABEL_142;
  }
  if ( (PrototypePteVadLookup & 0x800) != 0 )
  {
    v51 = MiHandleForkTransitionPte(
            v24,
            v156,
            v16,
            (_DWORD)a4,
            a6,
            (__int64)a7,
            a9,
            (__int64)v146,
            v26,
            a13,
            (__int64)v28,
            (__int64)v30);
    if ( !v51 )
    {
      Page = v146[0];
      v31 = a13;
      goto LABEL_32;
    }
    v52 = v51 != 1;
LABEL_75:
    v90 = v146[0];
    goto LABEL_143;
  }
  v52 = 0;
  v144 = (PrototypePteVadLookup >> 5) & 0x1F;
  if ( !(unsigned int)IS_PTE_NOT_DEMAND_ZERO(PrototypePteVadLookup, v23, v144, v27) )
  {
    if ( (PrototypePteVadLookup & 2) != 0 )
    {
      PrototypePteVadLookup &= ~2uLL;
      v139 = PrototypePteVadLookup;
    }
    if ( a5 )
      v132 = MiFindZeroCloneBlock(a5, (unsigned int)v54);
    else
      v132 = 0LL;
    v147 = v132;
    if ( v132 )
    {
      MiWriteSharedDemandZeroPte(v156, v53, v132, (_DWORD)a4, (__int64)v28);
      goto LABEL_142;
    }
LABEL_124:
    *a4 = PrototypePteVadLookup;
    if ( MiPteInShadowRange((unsigned __int64)a4) )
      MiWritePteShadow(v130, PrototypePteVadLookup, v131);
    goto LABEL_142;
  }
  if ( (_DWORD)v54 == 16 )
  {
    if ( (PrototypePteVadLookup & 2) != 0 )
    {
      PrototypePteVadLookup &= ~2uLL;
      v139 = PrototypePteVadLookup;
    }
    goto LABEL_124;
  }
  if ( (v54 & 0xFFFFFFF8) == 0x10 )
  {
    MiFlushTbList(a9, v53, v54);
    v57 = v149;
    MiUnlockWorkingSetExclusive(v149, a13);
    v154[1] = 4096LL;
    v154[0] = (__int64)(v16 << 25) >> 16;
    MiPrefetchVirtualMemory(1uLL, (__int64)v154, v57, 45);
    v58 = MiGetSharedVm(v57);
    v31 = ExAcquireSpinLockExclusive(v58);
    v58[1] = 0;
    goto LABEL_31;
  }
  v107 = *(unsigned __int16 *)(v55 + 1454);
  v108 = 0;
  v143 = 0;
  v109 = *(_QWORD *)(qword_1403CBD88 + 8 * v107);
  if ( *(_QWORD *)(qword_1403CBD88 + 8LL * *(unsigned __int16 *)(v56 + 174)) == v109 )
    goto LABEL_103;
  if ( (i & 1) != 0 )
  {
    if ( !(unsigned int)MiChargeCommit(v109, 1uLL, 0) )
    {
      *a4 = MiMakeDemandZeroPte(4LL);
      if ( MiPteInShadowRange((unsigned __int64)a4) )
        MiWritePteShadow(v111, v110, v112);
      *a15 = 1;
      goto LABEL_142;
    }
    v108 = 1;
    v143 = 1;
  }
  if ( (unsigned int)MiGetCrossPartitionCloneCharges(v109) )
  {
    v52 = 1;
LABEL_103:
    MI_MAKE_PROTECT_WRITE_COPY((unsigned __int64)&v139);
    v116 = v139;
    if ( (v139 & 2) != 0 )
    {
      MiReleasePageFileInfo((struct _KEVENT *)v109, v139 & 0xFFFFFFFFFFFFFFFBuLL, 1);
      v116 &= ~2uLL;
      v139 = v116;
    }
    *(_QWORD *)a6 = 0LL;
    *(_QWORD *)a6 = v116;
    if ( MiPteInShadowRange(a6) )
      MiWritePteShadow(v118, v116, v119);
    *(_QWORD *)(a6 + 8) = v52;
    *(_QWORD *)(a6 + 24) = 2LL;
    v139 = MiMakePrototypePteDirect(a6, v117, v119, v120);
    *(_QWORD *)a3 = v139;
    if ( MiPteInShadowRange(a3) )
      MiWritePteShadow(v122, v121, v123);
    if ( (i & 1) != 0 )
    {
      v125 = v144;
      if ( (_DWORD)v144 != 24 )
        v139 = v121 | 8;
      *(_QWORD *)(a6 + 16) = 1LL;
      if ( v143 == (_DWORD)v124 )
        ++v28[1];
      else
        ++*v28;
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v109 + 7560), 1uLL);
      v126 = *(_QWORD *)(a6 + 16);
      v121 = v139;
    }
    else
    {
      if ( v52 )
        *(_QWORD *)(a6 + 8) = 1LL;
      v125 = v144;
      v126 = v124;
      *(_QWORD *)(a6 + 16) = v124;
    }
    *(_QWORD *)(a6 + 16) = v126 & 0x7FFFFFFFFFFFFFFLL | ((unsigned __int64)v125 << 59);
    *a4 = v121;
    if ( MiPteInShadowRange((unsigned __int64)a4) )
      MiWritePteShadow(v128, v127, v129);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 920), 0xFFFFFFFFFFFFFFFFuLL);
LABEL_74:
    v52 = 1;
    goto LABEL_75;
  }
  *a4 = MiMakeDemandZeroPte(4LL);
  if ( MiPteInShadowRange((unsigned __int64)a4) )
    MiWritePteShadow(v114, v113, v115);
  *a15 = 1;
  if ( !v108 )
    goto LABEL_142;
  v65 = (struct _KEVENT *)v109;
LABEL_49:
  MiReturnCommit((__int64)v65, 1uLL);
LABEL_142:
  v90 = Page;
LABEL_143:
  if ( v90 != -1 )
    MiLockAndInsertPageInFreeList(48 * v90 - 0x58000000000LL);
  return v52;
}
