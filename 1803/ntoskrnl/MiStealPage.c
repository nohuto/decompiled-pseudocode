/*
 * XREFs of MiStealPage @ 0x14003B400
 * Callers:
 *     MiTradePage @ 0x140121260 (MiTradePage.c)
 * Callees:
 *     MiGetPteFromCopyList @ 0x140002458 (MiGetPteFromCopyList.c)
 *     MiWriteValidPteNewPage @ 0x140002750 (MiWriteValidPteNewPage.c)
 *     MiCopyPfnEntry @ 0x1400037E0 (MiCopyPfnEntry.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiGetPageChain @ 0x140017C10 (MiGetPageChain.c)
 *     MiGetPage @ 0x140018200 (MiGetPage.c)
 *     MiInsertTbFlushEntry @ 0x140026270 (MiInsertTbFlushEntry.c)
 *     MiFreeWsleList @ 0x1400278B0 (MiFreeWsleList.c)
 *     MiCopyPage @ 0x14002ED70 (MiCopyPage.c)
 *     MiGetPagePrivilege @ 0x1400303C0 (MiGetPagePrivilege.c)
 *     MiUnlockProtoPoolPage @ 0x140030A70 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x1400320B0 (MiLockProtoPoolPage.c)
 *     KeFlushSingleTb @ 0x14003B184 (KeFlushSingleTb.c)
 *     MiTbFlushType @ 0x14003B3C0 (MiTbFlushType.c)
 *     MiGetLeafVa @ 0x14003DF80 (MiGetLeafVa.c)
 *     MiLockStealSystemVm @ 0x14003F754 (MiLockStealSystemVm.c)
 *     MiUnlockStealVm @ 0x14003F9B0 (MiUnlockStealVm.c)
 *     MiClearPfnImageVerified @ 0x140054A44 (MiClearPfnImageVerified.c)
 *     MiFinalizePageAttribute @ 0x140056268 (MiFinalizePageAttribute.c)
 *     MiReleaseFaultState @ 0x140057E38 (MiReleaseFaultState.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiReplacePageTablePage @ 0x1400B97E0 (MiReplacePageTablePage.c)
 *     MiLockNestedPageAtDpcInline @ 0x1400BABE0 (MiLockNestedPageAtDpcInline.c)
 *     MiReplacePageOfProtoPool @ 0x1400BF848 (MiReplacePageOfProtoPool.c)
 *     MiSmallVaStillMapsFrame @ 0x1400CD0D0 (MiSmallVaStillMapsFrame.c)
 *     MiLockStealUserVm @ 0x1400D5854 (MiLockStealUserVm.c)
 *     MiReleasePageFileInfo @ 0x1400D6FBC (MiReleasePageFileInfo.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     MiPageToNode @ 0x140122B50 (MiPageToNode.c)
 *     MiCaptureDirtyBitToPfn @ 0x140124940 (MiCaptureDirtyBitToPfn.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MiGetWsleContents @ 0x140125350 (MiGetWsleContents.c)
 *     MiWriteValidPteNewProtection @ 0x140125DC0 (MiWriteValidPteNewProtection.c)
 *     MI_WSLE_LOG_ACCESS @ 0x14012A21C (MI_WSLE_LOG_ACCESS.c)
 *     MiReleaseFreshPage @ 0x14013A6E0 (MiReleaseFreshPage.c)
 *     KeSwapDirectoryTableBase @ 0x140144C48 (KeSwapDirectoryTableBase.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     MiPrepareToStealNonPagedPool @ 0x140254894 (MiPrepareToStealNonPagedPool.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140265490 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiVaIsPageFileHash @ 0x14026C000 (MiVaIsPageFileHash.c)
 */

__int64 __fastcall MiStealPage(ULONG_PTR BugCheckParameter2, char a2, int a3, unsigned int *a4, int a5, __int64 *a6)
{
  __int64 v9; // r15
  unsigned __int64 v10; // r15
  ULONG_PTR v11; // rdi
  unsigned __int64 v12; // r13
  unsigned __int64 LeafVa; // r9
  _KPROCESS *v14; // r10
  unsigned __int64 v15; // r11
  unsigned __int64 v16; // rcx
  int v17; // r11d
  int v18; // r8d
  __int64 v19; // r12
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // ecx
  int v23; // r8d
  int v24; // ecx
  unsigned int v25; // ebx
  __int64 v26; // r14
  int v27; // ecx
  unsigned int *v28; // rdx
  unsigned __int8 v29; // al
  __int64 v30; // rcx
  unsigned __int8 v31; // r9
  char WsleContents; // al
  char v33; // r9
  __int64 v34; // rcx
  __int64 v35; // r11
  __int64 v36; // rax
  __int64 v37; // r14
  unsigned int v38; // edx
  char v39; // al
  int v40; // eax
  unsigned int v41; // r15d
  unsigned int v42; // ecx
  unsigned int v43; // ebx
  __int64 v44; // rbx
  __int64 Page; // rdx
  __int64 v46; // rbx
  __int64 PageChain; // r14
  int v48; // r8d
  unsigned int v49; // r9d
  unsigned __int8 v50; // r12
  int v51; // r9d
  signed __int64 v52; // rdi
  int v53; // r10d
  volatile signed __int64 *v54; // r11
  unsigned __int8 v55; // al
  __int64 v56; // rdx
  __int64 v57; // rcx
  unsigned int v58; // eax
  int v59; // eax
  __int64 IsPageFileHash; // rax
  __int64 v61; // rbx
  int v62; // r10d
  __int64 v63; // r8
  __int16 v64; // dx
  ULONG_PTR v65; // rax
  __int64 v66; // rdx
  __int64 v67; // r8
  ULONG_PTR v68; // r13
  volatile signed __int64 *v69; // rbx
  char v70; // r9
  __int64 v71; // rdx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // rbx
  __int64 v75; // rax
  char v76; // bl
  __int64 v77; // rdx
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 PteFromCopyList; // rax
  _QWORD *v81; // r10
  int v82; // ebx
  ULONG_PTR v83; // r8
  __int64 v84; // rax
  _KPROCESS *v85; // rdx
  int v86; // ecx
  __int64 SharedVm; // rbx
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r10
  __int64 v91; // rcx
  __int64 v92; // r11
  unsigned __int8 v93; // al
  __int64 v94; // rbx
  unsigned __int64 v95; // r10
  unsigned __int64 v96; // rax
  __int64 v97; // r10
  __int64 v98; // rcx
  __int64 v99; // r11
  volatile signed __int64 *v100; // rcx
  __int64 v101; // rcx
  unsigned int v102; // eax
  unsigned __int8 v104[4]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v105; // [rsp+44h] [rbp-BCh]
  __int64 v106; // [rsp+48h] [rbp-B8h]
  __int64 v107; // [rsp+50h] [rbp-B0h]
  _QWORD *v108; // [rsp+58h] [rbp-A8h]
  unsigned int *v109; // [rsp+60h] [rbp-A0h]
  volatile signed __int64 *v110; // [rsp+68h] [rbp-98h]
  int v111; // [rsp+70h] [rbp-90h]
  __int64 v112; // [rsp+78h] [rbp-88h]
  _KPROCESS *Process; // [rsp+80h] [rbp-80h]
  unsigned __int64 v114; // [rsp+88h] [rbp-78h]
  __int64 *v115; // [rsp+90h] [rbp-70h]
  __int64 v116; // [rsp+98h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v118; // [rsp+B8h] [rbp-48h] BYREF
  ULONG_PTR v119; // [rsp+C0h] [rbp-40h]
  _QWORD v120[3]; // [rsp+D0h] [rbp-30h] BYREF
  ULONG_PTR v121; // [rsp+E8h] [rbp-18h]
  __int64 v122; // [rsp+F0h] [rbp-10h]
  struct _KTHREAD *CurrentThread; // [rsp+F8h] [rbp-8h]
  _KPROCESS *v124; // [rsp+100h] [rbp+0h]
  __int64 v125; // [rsp+108h] [rbp+8h]
  unsigned __int64 v126; // [rsp+110h] [rbp+10h]
  _QWORD v127[16]; // [rsp+120h] [rbp+20h] BYREF
  int v128; // [rsp+1A0h] [rbp+A0h] BYREF
  __int16 v129; // [rsp+1A4h] [rbp+A4h]
  __int64 v130; // [rsp+1A8h] [rbp+A8h]
  __int64 v131; // [rsp+1B0h] [rbp+B0h]
  __int64 v132; // [rsp+1B8h] [rbp+B8h]

  v115 = a6;
  v109 = a4;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(v127, 0, sizeof(v127));
  v9 = *(_QWORD *)(BugCheckParameter2 + 8);
  LODWORD(v127[0]) = a3;
  v10 = v9 | 0x8000000000000000uLL;
  v119 = 0LL;
  v110 = (volatile signed __int64 *)v10;
  v11 = 0LL;
  v111 = 0;
  v127[15] = -1LL;
  v116 = 0LL;
  v12 = (__int64)(v10 << 25) >> 16;
  v114 = v12;
  LeafVa = MiGetLeafVa(v12);
  v16 = v15;
  v17 = (_DWORD)v14 + 1;
  if ( v12 < v16 || v12 > 0xFFFFF6FFFFFFFFFFuLL )
    v18 = v17 | LODWORD(v127[1]);
  else
    v18 = LODWORD(v127[1]) | 8;
  LODWORD(v127[1]) = v18;
  v106 = -1LL;
  v19 = (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48;
  v107 = v19;
  if ( v115 )
    *v115 = -1LL;
  v20 = 4096LL;
  v21 = (*(_QWORD *)(BugCheckParameter2 + 40) >> 40) & 0x3FFLL;
  Process = v14;
  v108 = *(_QWORD **)(qword_1403CBD88 + 8 * v21);
  if ( LeafVa >= 0xFFFF800000000000uLL )
  {
    LOWORD(v22) = v18;
    if ( LeafVa >= qword_1403CD100 && LeafVa <= qword_1403CBB70 )
    {
      v23 = v18 | 8;
      if ( ((unsigned __int8)v23 & (unsigned __int8)v17) != 0 )
      {
        v24 = v23 | 2;
        if ( v12 >= qword_1403CBB68 && v12 < qword_1403CBB68 + 276840448 )
          v24 = v23 | 0x102;
      }
      else
      {
        v24 = v23 | 4;
      }
      v22 = v24 | 0x1000;
      LODWORD(v127[1]) = v22;
    }
  }
  else
  {
    LODWORD(v127[1]) = v18 | 0x1000;
    LOWORD(v22) = v18 | 0x1000;
  }
  LOBYTE(v20) = a2;
  if ( (v22 & 0x1000) != 0 )
  {
    v25 = MiLockStealUserVm(BugCheckParameter2);
    if ( v25 != 1 )
      goto LABEL_19;
    v26 = v127[3];
    v27 = v127[6];
    v28 = v109;
    Process = KeGetCurrentThread()->ApcState.Process;
    v112 = v127[3];
    v105 = 0;
  }
  else
  {
    v25 = MiLockStealSystemVm(BugCheckParameter2, v20, v10, v127);
    if ( v25 != 1 )
    {
LABEL_19:
      MiLockPageInline(BugCheckParameter2);
      if ( (*(_QWORD *)(BugCheckParameter2 + 24) & 0x4000000000000000LL) != 0 )
        return 0;
      return v25;
    }
    v26 = v127[3];
    v27 = v127[6];
    v38 = 1;
    v25 = 0;
    v112 = v127[3];
    v105 = 1;
    v39 = *(_BYTE *)(v127[3] + 184LL) & 7;
    if ( v39 == 7 )
    {
      v28 = v109;
      if ( !*((_QWORD *)v109 + 2) )
        goto LABEL_50;
      v105 = 2;
    }
    else
    {
      if ( ((v39 - 1) & 0xFD) != 0 )
      {
        if ( LODWORD(v127[6]) == 1 )
          v38 = 2;
        v105 = v38;
      }
      v28 = v109;
    }
    if ( LODWORD(v127[6]) == 3 )
    {
      if ( (v127[1] & 1) != 0 )
        v40 = LODWORD(v127[1]) | 0xA;
      else
        v40 = LODWORD(v127[1]) | 0xC;
      LODWORD(v127[1]) = v40;
    }
  }
  v29 = *(_BYTE *)(BugCheckParameter2 + 34);
  if ( !*((_QWORD *)v28 + 2) )
  {
    if ( (v29 & 0x10) != 0 || v27 == 2 || (v127[1] & 8) != 0 )
    {
      v25 = 0;
    }
    else
    {
      v25 = 0;
      if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFLL) != v19
        && (MI_READ_PTE_LOCK_FREE(v10) & 0x42) == 0
        && (v31 & *(_BYTE *)(BugCheckParameter2 + 35)) == 0 )
      {
        WsleContents = MiGetWsleContents(v30, (__int64)(v10 << 25) >> 16);
        if ( (WsleContents & 0xF) != v33 )
        {
          v130 = 20LL;
          v128 = MiTbFlushType(v26);
          v129 = 4;
          v131 = v35;
          v132 = v35;
          if ( dword_1403CBF28 != (_DWORD)v35 )
            MI_WSLE_LOG_ACCESS(v34, v10);
          MiInsertTbFlushEntry((__int64)&v128, (__int64)(v10 << 25) >> 16, 1LL, 0);
          v25 = 0;
          v36 = MiFreeWsleList(v26, (__int64)&v128, 0);
          v37 = v106;
          if ( !v36 )
            v25 = 2;
          goto LABEL_51;
        }
      }
    }
    goto LABEL_50;
  }
  v41 = v29 >> 6;
  if ( a5 == -1 )
  {
    v44 = (*(_QWORD *)(BugCheckParameter2 + 40) >> 36) & 3LL;
    v43 = ((unsigned int)MiPageToNode((__int64)(BugCheckParameter2 + 0x58000000000LL) / 48, 0LL) << byte_1403CB699) | dword_1403CB6D8 & v19 | ((_DWORD)v44 << byte_1403CB69A);
    v42 = 0;
  }
  else
  {
    v42 = 48;
    v43 = dword_1403CB6D8 & v19 | a5 & ~dword_1403CB6D8;
  }
  if ( v127[15] == -1LL )
  {
    Page = MiGetPage((__int64)v108, v43, v42);
    v106 = Page;
    v25 = 0;
    if ( Page == -1 )
    {
      v37 = -1LL;
      goto LABEL_51;
    }
    v46 = (__int64)v108;
    PageChain = 48 * Page - 0x58000000000LL;
  }
  else
  {
    v48 = (*(_QWORD *)(BugCheckParameter2 + 40) >> 58) + 1;
    if ( v41 == 2 )
    {
      v49 = 28;
    }
    else
    {
      v49 = 4;
      if ( !v41 )
        v49 = 12;
    }
    v46 = (__int64)v108;
    v118 = 1LL;
    PageChain = MiGetPageChain((__int64)v108, v26, v48, v49, v42, v127[15], &v118);
    if ( !PageChain )
    {
      v37 = -1LL;
      v25 = 0;
      goto LABEL_51;
    }
    v106 = (PageChain + 0x58000000000LL) / 48;
  }
  if ( PageChain != BugCheckParameter2 )
  {
    v50 = MiLockPageInline(BugCheckParameter2);
    if ( (MiFlags & 0x8000) != 0 && (unsigned int)MiGetPagePrivilege(BugCheckParameter2, 1, 0LL) )
    {
      v51 = LODWORD(v127[1]) | 0x2000;
      LODWORD(v127[1]) |= 0x2000u;
    }
    else
    {
      v51 = v127[1];
    }
    v52 = 0LL;
    if ( *(_WORD *)(BugCheckParameter2 + 32) != 1 )
      goto LABEL_92;
    v53 = v127[6];
    if ( ((*(_BYTE *)(BugCheckParameter2 + 35) & 8) != 0 || (*(_DWORD *)BugCheckParameter2 & 1) == 0)
      && LODWORD(v127[6]) != 2
      && (v51 & 0x26) == 0 )
    {
      goto LABEL_92;
    }
    if ( (*(_BYTE *)(BugCheckParameter2 + 34) & 7) != 6
      || v46 != *(_QWORD *)(qword_1403CBD88 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 40) & 0x3FFLL)) )
    {
      goto LABEL_92;
    }
    v54 = v110;
    if ( (v51 & 0x20) == 0 )
      v52 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v110);
    if ( v53 != 3 && (*(_QWORD *)(BugCheckParameter2 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 && v105 == 1 )
    {
      if ( (v51 & 0x10) == 0 )
      {
LABEL_92:
        _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_93:
        __writecr8(v50);
LABEL_94:
        v25 = 0;
LABEL_95:
        v11 = PageChain;
        goto LABEL_96;
      }
      v51 |= 0x208u;
      LODWORD(v127[1]) = v51;
    }
    if ( v53 != 2 )
    {
      if ( (v51 & 0x20) != 0 )
      {
        v52 = MiPrepareToStealNonPagedPool(BugCheckParameter2, v54);
        if ( !v52 )
          goto LABEL_92;
      }
      else if ( ((v51 & 8) == 0 || (v51 & 0x100) != 0) && ((v52 & 0x42) != 0 || (v51 & 0x2000) != 0) )
      {
        if ( (v51 & 0x100) != 0 )
        {
          MiWriteValidPteNewProtection(v54, v52 & 0xFFFFFFFFFFFFFFBDuLL);
        }
        else
        {
          LODWORD(v127[1]) = v51 | 0x40;
          *v54 = v52 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
          if ( MiPteInShadowRange((unsigned __int64)v54) )
            MiWritePteShadow(v57, v56);
          v111 = 1;
        }
        v58 = MiTbFlushType(v112);
        KeFlushSingleTb(v12, v58, v105);
      }
    }
    v59 = v105;
    if ( v105 == 1 )
    {
      if ( (v127[1] & 4) != 0 )
        v59 = 2;
      v105 = v59;
    }
    MiLockNestedPageAtDpcInline(PageChain);
    MiFinalizePageAttribute(PageChain, v41, 1LL);
    if ( LODWORD(v127[6]) == 2 )
    {
      IsPageFileHash = MiVaIsPageFileHash(v46, v12);
      v61 = IsPageFileHash;
      if ( !IsPageFileHash )
      {
LABEL_117:
        _InterlockedAnd64((volatile signed __int64 *)(PageChain + 24), 0x7FFFFFFFFFFFFFFFuLL);
        goto LABEL_92;
      }
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(IsPageFileHash + 232), &LockHandle);
      if ( v61 != MiVaIsPageFileHash(v108, v12) || (v25 = 0, !(unsigned int)MiSmallVaStillMapsFrame(v12, v107)) )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        __writecr8(LockHandle.OldIrql);
        goto LABEL_117;
      }
    }
    else
    {
      v25 = 0;
    }
    MiCopyPfnEntry(PageChain, BugCheckParameter2);
    v63 = v107;
    if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFLL) == v107 )
      *(_QWORD *)(PageChain + 40) ^= (*(_QWORD *)(PageChain + 40) ^ v106) & 0xFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(PageChain + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v64 = v127[1];
    if ( (v127[1] & 0x20) != 0 || LODWORD(v127[6]) == v62 )
      goto LABEL_135;
    if ( (v127[1] & 0x200) == 0 )
    {
      if ( ((v127[1] & 8) != 0 || v105) && (v127[1] & 0xA) != 0xA && (v127[1] & 0x100) == 0 )
      {
        if ( (v127[1] & 8) != 0 && (v127[1] & (unsigned __int8)v62) == 0 && !v105
          || LODWORD(v127[6]) == 3 && (v127[1] & 4) != 0 )
        {
          goto LABEL_134;
        }
LABEL_135:
        if ( (v64 & 0x200) != 0 )
        {
          v65 = MiLockProtoPoolPage(v12, v104);
          v68 = v65;
          if ( !v65 )
          {
LABEL_137:
            MiSetOriginalPtePfnFromFreeList(PageChain + 16);
            goto LABEL_95;
          }
          if ( *(_WORD *)(v65 + 32) > 2u )
          {
            LOBYTE(v66) = v104[0];
            MiUnlockProtoPoolPage(v65, v66, v67, 2LL);
            goto LABEL_137;
          }
          v69 = v110;
          v52 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v110);
          if ( (v52 & 0x42) == 0 )
          {
            v64 = v127[1];
            v74 = v114;
            v63 = v107;
            goto LABEL_151;
          }
          MiLockPageAtDpcInline(v68);
          if ( *(_WORD *)(v68 + 32) > 2u )
          {
            _InterlockedAnd64((volatile signed __int64 *)(v68 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_143:
            LOBYTE(v71) = v104[0];
            MiUnlockProtoPoolPage(v68, v71, v72, v73);
LABEL_144:
            MiSetOriginalPtePfnFromFreeList(PageChain + 16);
            goto LABEL_94;
          }
          MiWriteValidPteNewProtection(v69, v52 & 0xFFFFFFFFFFFFFFBDuLL);
          v74 = v114;
          KeFlushSingleTb(v114, 0, 1u);
          v75 = MiCaptureDirtyBitToPfn(v68);
          _InterlockedAnd64((volatile signed __int64 *)(v68 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v75 )
            MiReleasePageFileInfo(
              *(_QWORD *)(qword_1403CBD88 + 8 * ((*(_QWORD *)(v68 + 40) >> 40) & 0x3FFLL)),
              v75,
              1LL);
          MiLockPageAtDpcInline(PageChain);
          MiCaptureDirtyBitToPfn(PageChain);
          _InterlockedAnd64((volatile signed __int64 *)(PageChain + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v64 = v127[1];
          v63 = v107;
        }
        else
        {
          v68 = 0LL;
          v104[0] = 17;
          v74 = v114;
        }
        v70 = 2;
LABEL_151:
        if ( (v64 & 0x200) == 0
          && (LODWORD(v127[6]) != 3 || (v64 & 4) == 0)
          && ((v64 & 8) == 0 || ((unsigned __int8)v64 & (unsigned __int8)v70) != 0 || v105) )
        {
          if ( v50 != 17 )
          {
            MiLockNestedPageAtDpcInline(PageChain);
            v64 = v127[1];
          }
          v76 = 2;
          if ( v50 != 17 )
            v76 = 6;
          if ( (v64 & 0x2000) == 0 )
            v76 = v50 != 17 ? 4 : 0;
          MiCopyPage(v106, v107, v109, v76);
          if ( (v76 & 4) != 0 )
            _InterlockedAnd64((volatile signed __int64 *)(PageChain + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v79 = LODWORD(v127[1]);
          if ( (v127[1] & 0x20) == 0 && v50 != 17 )
            *(_BYTE *)(BugCheckParameter2 + 34) = *(_BYTE *)(BugCheckParameter2 + 34) & 0xF8 | 5;
          goto LABEL_192;
        }
        PteFromCopyList = (__int64)MiGetPteFromCopyList(v109, v106, v63);
        v108 = (_QWORD *)PteFromCopyList;
        v81 = (_QWORD *)PteFromCopyList;
        if ( (v127[1] & 0x200) != 0 )
        {
          v82 = MiReplacePageOfProtoPool(v74, v107, v106, ((PteFromCopyList << 25) - v116) >> 16);
        }
        else
        {
          v83 = v107;
          CurrentThread = KeGetCurrentThread();
          v125 = 0LL;
          v126 = 0LL;
          v120[1] = v74;
          v82 = 1;
          v120[2] = ((PteFromCopyList << 25) - v116) >> 16;
          v122 = v106;
          v120[0] = v112;
          v121 = v107;
          v124 = CurrentThread->ApcState.Process;
          v84 = *(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFLL;
          LODWORD(v107) = 1;
          if ( v84 == v121 )
          {
            if ( (*(_BYTE *)(v112 + 187) & 2) != 0
              || _interlockedbittestandset((volatile signed __int32 *)Process[2].ActiveProcessors.Bitmap + 1, 1u) )
            {
              v82 = 0;
LABEL_181:
              *v81 = ZeroPte;
              if ( MiPteInShadowRange((unsigned __int64)v81) )
              {
                MiWritePteShadow(v89, v88);
                v88 = ZeroPte;
              }
              *(_QWORD *)(v90 + 8) = v88;
              if ( MiPteInShadowRange(v90 + 8) )
                MiWritePteShadow(v91, v71);
              if ( !v82 )
              {
                if ( (v127[1] & 0x200) == 0 )
                  goto LABEL_144;
                goto LABEL_143;
              }
              if ( (v127[1] & 0x200) != 0 )
              {
                *(_BYTE *)(BugCheckParameter2 + 34) = *(_BYTE *)(BugCheckParameter2 + 34) & 0xF8 | 5;
                *(_QWORD *)(BugCheckParameter2 + 24) = v92 | *(_QWORD *)(BugCheckParameter2 + 24) & 0xC000000000000001uLL;
                MiLockNestedPageAtDpcInline(PageChain);
              }
              else
              {
                v93 = MiLockPageInline(BugCheckParameter2);
                v77 = 0xC000000000000001uLL;
                *(_BYTE *)(BugCheckParameter2 + 34) = *(_BYTE *)(BugCheckParameter2 + 34) & 0xF8 | 5;
                *(_QWORD *)(BugCheckParameter2 + 24) = *(_QWORD *)(BugCheckParameter2 + 24) & 0xC000000000000000uLL | 1;
                _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                __writecr8(v93);
                v50 = 17;
              }
              v79 = LODWORD(v127[1]);
LABEL_192:
              v94 = v52 ^ (v52 ^ (v106 << 12)) & 0xFFFFFFFFF000LL;
              if ( (v79 & 0x20) != 0 )
              {
                MiLockNestedPageAtDpcInline(PageChain);
                if ( v52 != _InterlockedCompareExchange64(v110, v94 | 0x20, v52) )
                {
                  MiSetOriginalPtePfnFromFreeList(PageChain + 16);
                  *(_BYTE *)(PageChain + 34) = *(_BYTE *)(PageChain + 34) & 0xF8 | 5;
                  _InterlockedAnd64((volatile signed __int64 *)(PageChain + 24), 0x7FFFFFFFFFFFFFFFuLL);
                  _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                  goto LABEL_93;
                }
                _InterlockedAnd64((volatile signed __int64 *)(PageChain + 24), 0x7FFFFFFFFFFFFFFFuLL);
                *(_BYTE *)(BugCheckParameter2 + 34) = *(_BYTE *)(BugCheckParameter2 + 34) & 0xF8 | 5;
              }
              else
              {
                if ( (v79 & 0x400) != 0 )
                {
                  if ( (v79 & 0x4000) != 0 )
                  {
                    v95 = Process[2].Affinity.Bitmap[0];
                    if ( !v95 )
                      goto LABEL_202;
                    v96 = MI_READ_PTE_LOCK_FREE(((v95 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
                    v77 = 0LL;
                    v98 = 0LL;
                    if ( ((v96 >> 12) & 0xFFFFFFFFFLL) == v99 )
                      v98 = v97;
                    if ( !v98 )
                    {
LABEL_202:
                      v25 = 2;
                      v11 = BugCheckParameter2;
                      MiSetOriginalPtePfnFromFreeList(BugCheckParameter2 + 16);
LABEL_96:
                      if ( v11 )
                      {
                        v55 = MiLockPageInline(v11);
                        *(_BYTE *)(v11 + 34) = *(_BYTE *)(v11 + 34) & 0xF8 | 5;
                        _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                        __writecr8(v55);
                      }
                      goto LABEL_50;
                    }
                  }
                }
                else
                {
                  if ( (v79 & 0x40) != 0 )
                  {
                    v100 = v110;
                    *v110 = v94;
                    if ( MiPteInShadowRange((unsigned __int64)v100) )
                      MiWritePteShadow(v101, v94);
                  }
                  else
                  {
                    if ( (v79 & 0x200) == 0 && (v79 & 0x10) != 0 )
                      MiLockNestedPageAtDpcInline(PageChain);
                    MiWriteValidPteNewPage((__int64)v110);
                  }
                  v79 = LODWORD(v127[1]);
                }
                if ( v111 )
                {
LABEL_214:
                  if ( (v79 & 0x200) != 0 )
                  {
                    _InterlockedAnd64((volatile signed __int64 *)(PageChain + 24), 0x7FFFFFFFFFFFFFFFuLL);
                    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                    LOBYTE(v77) = v104[0];
                    MiUnlockProtoPoolPage(v68, v77, v78, v79);
                    v50 = 17;
                  }
                  else if ( (v79 & 0x10) != 0 && (v79 & 0x40) == 0 )
                  {
                    _InterlockedAnd64((volatile signed __int64 *)(PageChain + 24), 0x7FFFFFFFFFFFFFFFuLL);
                  }
                  if ( ((*(_QWORD *)(BugCheckParameter2 + 40) >> 54) & 7) == 3 )
                    MiClearPfnImageVerified(BugCheckParameter2);
                  if ( LODWORD(v127[6]) == 2 )
                  {
                    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
                    __writecr8(LockHandle.OldIrql);
                  }
                  if ( v50 == 17 )
                    v50 = MiLockPageInline(BugCheckParameter2);
                  *(_QWORD *)(BugCheckParameter2 + 40) &= 0xFC3FFFFFFFFFFFFFuLL;
                  *(_BYTE *)(BugCheckParameter2 + 34) &= 0xC7u;
                  *(_BYTE *)(BugCheckParameter2 + 35) &= ~0x20u;
                  *(_WORD *)(BugCheckParameter2 + 32) = 0;
                  *(_QWORD *)(BugCheckParameter2 + 24) &= 0xC000000000000000uLL;
                  _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                  __writecr8(v50);
                  v11 = v119;
                  v25 = 1;
                  goto LABEL_50;
                }
                v102 = MiTbFlushType(v112);
                KeFlushSingleTb(v114, v102, v105);
              }
              v79 = LODWORD(v127[1]);
              goto LABEL_214;
            }
            v85 = v124;
            v86 = LODWORD(v127[1]) | 0x400;
            LODWORD(v127[1]) |= 0x400u;
            if ( v124->DirectoryTableBase >> 12 != v83 )
            {
              HIDWORD(v125) = 1;
              v126 = v124[2].Affinity.Bitmap[0];
              LODWORD(v127[1]) = v86 | 0x4000;
            }
            LOBYTE(v85) = 17;
            MiReleaseFaultState(&v127[3], v85, 0LL);
            KeSwapDirectoryTableBase(v124, HIDWORD(v125), v120);
            SharedVm = MiGetSharedVm(v112);
            ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
            *(_DWORD *)(SharedVm + 4) = 0;
            _InterlockedAnd((volatile signed __int32 *)Process[2].ActiveProcessors.Bitmap + 1, 0xFFFFFFFD);
            v82 = v107;
          }
          else
          {
            MiReplacePageTablePage(v120);
          }
          if ( (int)v125 < 0 )
            v82 = 0;
        }
        v81 = v108;
        goto LABEL_181;
      }
      *(_BYTE *)(BugCheckParameter2 + 34) = *(_BYTE *)(BugCheckParameter2 + 34) & 0xF8 | 5;
    }
LABEL_134:
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v50);
    v64 = v127[1];
    v50 = 17;
    goto LABEL_135;
  }
  v25 = 1;
LABEL_50:
  v37 = v106;
LABEL_51:
  MiUnlockStealVm(v127);
  if ( v11 )
    MiReleaseFreshPage(v11);
  MiLockPageInline(BugCheckParameter2);
  if ( v25 == 1 )
  {
    if ( v115 )
      *v115 = v37;
  }
  else
  {
    if ( (*(_BYTE *)(BugCheckParameter2 + 34) & 7) != 6 )
      v25 = 2;
    if ( v25 == 2 && (*(_QWORD *)(BugCheckParameter2 + 24) & 0x4000000000000000LL) != 0 )
      return 0;
  }
  return v25;
}
