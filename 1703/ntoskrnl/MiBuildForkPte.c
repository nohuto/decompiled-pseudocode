/*
 * XREFs of MiBuildForkPte @ 0x140001E68
 * Callers:
 *     MiCloneVads @ 0x1400018B8 (MiCloneVads.c)
 * Callees:
 *     MiReferenceCloneProto @ 0x140002838 (MiReferenceCloneProto.c)
 *     MiFindZeroCloneBlock @ 0x140002870 (MiFindZeroCloneBlock.c)
 *     MiWriteSharedDemandZeroPte @ 0x1400028AC (MiWriteSharedDemandZeroPte.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x14002CA88 (MiCaptureWriteWatchDirtyBit.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiSetWsleProtection @ 0x14006D394 (MiSetWsleProtection.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x140073B74 (MI_PROTO_FORMAT_COMBINED.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x14007C3EC (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiIncreaseUsedPtesCount @ 0x1400A8338 (MiIncreaseUsedPtesCount.c)
 *     MiReleasePageFileInfo @ 0x1400ABFD4 (MiReleasePageFileInfo.c)
 *     MiLockPageTablePage @ 0x1400B50F0 (MiLockPageTablePage.c)
 *     MiGetPage @ 0x1400BBC00 (MiGetPage.c)
 *     MiMakeSystemAddressValid @ 0x1400D0A70 (MiMakeSystemAddressValid.c)
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     MiGetWsleContents @ 0x1400FBED0 (MiGetWsleContents.c)
 *     MiGetWsleProtection @ 0x1400FBF20 (MiGetWsleProtection.c)
 *     MiCaptureDirtyBitToPfn @ 0x140100BFC (MiCaptureDirtyBitToPfn.c)
 *     MiWriteValidPteNewProtection @ 0x140100C50 (MiWriteValidPteNewProtection.c)
 *     MiUpdateWorkingSetPrivateSize @ 0x140103108 (MiUpdateWorkingSetPrivateSize.c)
 *     MiFinalizePageAttribute @ 0x140105D40 (MiFinalizePageAttribute.c)
 *     MiInitializePageColorBase @ 0x1401069F0 (MiInitializePageColorBase.c)
 *     MiPrefetchVirtualMemory @ 0x140108070 (MiPrefetchVirtualMemory.c)
 *     MiLockAndInsertPageInFreeList @ 0x14015976C (MiLockAndInsertPageInFreeList.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiGetPrototypePteDirect @ 0x14017CE98 (MiGetPrototypePteDirect.c)
 *     MiMakePrototypePteDirect @ 0x14017CF4C (MiMakePrototypePteDirect.c)
 *     MiMakePrototypePteVadLookup @ 0x14017CF60 (MiMakePrototypePteVadLookup.c)
 *     MiTransferSoftwarePte @ 0x14017D0B8 (MiTransferSoftwarePte.c)
 *     MiGetPageFileReservationOffset @ 0x14021A1C8 (MiGetPageFileReservationOffset.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14021EE3C (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWaitForFreePage @ 0x140220450 (MiWaitForFreePage.c)
 *     MiDuplicateCloneLeaf @ 0x140223024 (MiDuplicateCloneLeaf.c)
 *     MiHandleForkTransitionPte @ 0x1402232C0 (MiHandleForkTransitionPte.c)
 */

__int64 __fastcall MiBuildForkPte(
        __int64 a1,
        __int64 a2,
        ULONG_PTR a3,
        __int64 *a4,
        __int64 a5,
        unsigned __int64 *a6,
        _QWORD *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        unsigned int a12,
        KIRQL a13,
        __int64 a14)
{
  __int64 v14; // rdi
  ULONG_PTR v16; // r13
  unsigned int v17; // esi
  unsigned __int64 v18; // rbx
  __int64 ZeroCloneBlock; // rbx
  __int64 v20; // rcx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // ecx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r10
  __int64 v30; // r13
  int v31; // r9d
  __int64 v32; // rdx
  char WsleContents; // r9
  __int64 v34; // r10
  __int64 v35; // r11
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  char v40; // r9
  __int64 v41; // rdi
  __int16 v42; // dx
  bool v43; // zf
  __int64 v44; // rcx
  __int64 v45; // rdi
  __int64 v46; // rdx
  __int64 SharedVm; // rdi
  KIRQL v48; // al
  int v49; // eax
  __int64 v50; // rdi
  __int64 v51; // rdi
  __int64 v52; // rdx
  __int64 v53; // rbx
  __int64 v54; // r8
  __int64 v55; // rbx
  unsigned int PageFileReservationOffset; // eax
  _QWORD *v57; // r10
  unsigned __int16 v58; // dx
  __int64 v59; // r11
  __int64 v60; // rax
  _QWORD *v61; // r10
  __int64 v62; // r10
  __int64 v63; // rax
  __int64 *v64; // r10
  __int64 v65; // r11
  __int64 v66; // rcx
  unsigned __int64 v67; // rbx
  __int64 v68; // rdi
  __int64 v69; // rcx
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rbx
  unsigned int WsleProtection; // eax
  __int64 v74; // r10
  __int64 v75; // r10
  __int64 PrototypePteDirect; // rax
  __int64 v77; // r11
  __int64 v78; // rcx
  __int64 v79; // rbx
  int v80; // r9d
  __int64 v81; // rax
  __int64 v82; // rcx
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // rcx
  __int64 v86; // rcx
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // rdx
  __int64 v90; // r8
  __int64 v91; // r9
  __int64 v92; // rax
  int v93; // [rsp+50h] [rbp-71h]
  _QWORD v94[2]; // [rsp+68h] [rbp-59h] BYREF
  __int64 v95; // [rsp+78h] [rbp-49h]
  __int64 v96; // [rsp+80h] [rbp-41h]
  __int64 Page; // [rsp+88h] [rbp-39h] BYREF
  __int64 v98; // [rsp+90h] [rbp-31h]
  __int64 v99; // [rsp+98h] [rbp-29h] BYREF
  _WORD *v100; // [rsp+A0h] [rbp-21h] BYREF
  __int16 v101; // [rsp+A8h] [rbp-19h]
  unsigned __int16 v102; // [rsp+AAh] [rbp-17h]
  _QWORD v103[9]; // [rsp+B0h] [rbp-11h] BYREF

  v14 = a1;
  v16 = a3;
  v17 = 0;
  v94[0] = MI_READ_PTE_LOCK_FREE(a3);
  v18 = v94[0];
  if ( !v94[0] )
  {
    if ( a5 && *(_DWORD *)(a11 + 52) >= 0x80000000 )
    {
      ZeroCloneBlock = MiFindZeroCloneBlock(a5, (*(_DWORD *)(a10 + 48) >> 3) & 0x1F);
      if ( ZeroCloneBlock )
      {
        MiIncreaseUsedPtesCount(a8, 1LL);
        MiWriteSharedDemandZeroPte(v20, ZeroCloneBlock, a4, a14);
      }
    }
    return 0LL;
  }
  MiIncreaseUsedPtesCount(a8, 1LL);
  Page = -1LL;
  v24 = 0LL;
  v96 = v14 + 1280;
  v25 = 0;
  LODWORD(v95) = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v25 == 1 )
      {
        MiMakeSystemAddressValid(v16, 1);
        v26 = MI_READ_PTE_LOCK_FREE(v16);
        v24 = (unsigned int)v95;
        v18 = v26;
        v94[0] = v26;
      }
      if ( (v18 & 1) == 0 )
        break;
      v27 = MI_GET_PFN_FROM_PTE(v94, v22, v23, v24);
      v30 = v27;
      if ( v31 == 1
        || *(_WORD *)(v27 + 32) > 1u
        && (v28 = *(_QWORD *)(v27 + 40) >> 57, (*(_QWORD *)(v27 + 40) & 0x200000000000000LL) == 0) )
      {
        MiInitializePageColorBase(v29, 0LL, &v100);
        v42 = *v100 + 1;
        v43 = Page == -1;
        *v100 = v42;
        v44 = *(unsigned __int16 *)(a2 + 1452);
        v45 = *(_QWORD *)(qword_14036C8F8 + 8 * v44);
        if ( !v43
          || (Page = MiGetPage(
                       *(_QWORD *)(qword_14036C8F8 + 8 * v44),
                       v102 | (unsigned int)(unsigned __int16)(v101 & v42),
                       0LL),
              Page != -1) )
        {
          v79 = 48 * Page - 0x58000000000LL;
          MiLockPageAtDpcInline(v79);
          MiFinalizePageAttribute(v79, *(unsigned __int8 *)(v30 + 34) >> 6, 1LL);
          _InterlockedAnd64((volatile signed __int64 *)(v79 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          LOBYTE(v80) = a13;
          MiDuplicateCloneLeaf(a3, (_DWORD)a4, Page, v80, 17);
          ++*a7;
          return 0LL;
        }
        MiFlushTbList(a9);
        LOBYTE(v46) = a13;
        MiUnlockWorkingSetExclusive(v96, v46);
        MiWaitForFreePage(v45);
        SharedVm = MiGetSharedVm(v96);
        v48 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
        v16 = a3;
LABEL_21:
        v24 = (unsigned int)v95;
        *(_DWORD *)(SharedVm + 4) = 0;
        a13 = v48;
        goto LABEL_22;
      }
      v95 = (__int64)(a3 << 25) >> 16;
      WsleContents = MiGetWsleContents(v28, v95);
      if ( (*(_QWORD *)(v30 + 40) & 0x200000000000000LL) != 0 )
      {
        v72 = *(_QWORD *)(v30 + 8);
        LOBYTE(v32) = WsleContents;
        WsleProtection = MiGetWsleProtection(v35, v32);
        if ( WsleProtection )
        {
          v94[0] = MiMakePrototypePteVadLookup(WsleProtection);
          goto LABEL_58;
        }
        PrototypePteDirect = MiMakePrototypePteDirect(v74);
        v94[0] = PrototypePteDirect;
        if ( v72 < 0 )
          goto LABEL_106;
        v94[0] = PrototypePteDirect | 0x800;
LABEL_58:
        if ( v72 < 0 )
        {
LABEL_106:
          if ( MiReferenceCloneProto(v75, a12, a14) )
          {
            v77 |= 8uLL;
            v94[0] = v77;
          }
        }
        else
        {
          _InterlockedAdd64((volatile signed __int64 *)(v75 - 48 + 32), 1uLL);
          _InterlockedExchangeAdd(
            (volatile signed __int32 *)(*(_QWORD *)(((v75 - 48) & 0xFFFFFFFFFFFFF000uLL) + 0x10) + 384LL),
            1u);
          v77 = v94[0];
        }
        *a4 = v77;
        if ( !(unsigned int)MiPteInShadowRange(a4) )
          goto LABEL_101;
        goto LABEL_100;
      }
      v99 = MI_READ_PTE_LOCK_FREE(v34 + (((unsigned __int64)a6 >> 9) & 0x7FFFFFFFF8LL));
      v39 = MI_GET_PFN_FROM_PTE(&v99, v36, v37, v38);
      v98 = v39;
      v41 = 0LL;
      if ( (v40 & 0xF) != 8 || (unsigned int)MiLockPageTablePage(v39, 3LL) )
      {
        v53 = v98;
        MiLockPageAtDpcInline(v98);
        *(_QWORD *)(v53 + 24) ^= (*(_QWORD *)(v53 + 24) ^ (*(_QWORD *)(v53 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v53 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiLockPageAtDpcInline(v30);
        v55 = v94[0];
        if ( (v94[0] & 0x42) != 0 )
        {
          if ( (*(_DWORD *)(a10 + 48) & 7) == 4 && (*(_QWORD *)(v30 + 40) & 0x200000000000000LL) == 0 )
            MiCaptureWriteWatchDirtyBit(a1, v95);
          v41 = MiCaptureDirtyBitToPfn(v30);
          v94[0] = v55 & 0xFFFFFFFFFFFFFFBDuLL;
        }
        if ( (*(_QWORD *)(v30 + 16) & 2) != 0 )
        {
          PageFileReservationOffset = MiGetPageFileReservationOffset(
                                        v30 + 16,
                                        *(_QWORD *)(v30 + 16),
                                        v54,
                                        (unsigned int)(v41 != 0) + 2);
          v60 = MiTransferSoftwarePte(*v57, *(_QWORD *)(v59 + 8LL * (v58 >> 12) + 5600), PageFileReservationOffset);
          *v61 &= ~2uLL;
          v41 = v60;
        }
        *(_QWORD *)(v30 + 8) = a6;
        *(_QWORD *)(v30 + 40) |= 0x200000000000000uLL;
        *(_QWORD *)(v30 + 40) ^= (*(_QWORD *)(v30 + 40) ^ MI_GET_PAGE_FRAME_FROM_PTE(&v99)) & 0xFFFFFFFFFLL;
        v63 = MI_READ_PTE_LOCK_FREE(v62);
        if ( (v63 & 0x80u) != 0LL )
        {
          *v64 = v63 | 0x20;
          if ( (unsigned int)MiPteInShadowRange(v64) )
            MiWritePteShadow(v66);
        }
        v98 = (*(_DWORD *)v64 >> 5) & 0x1F;
        _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v41 )
          MiReleasePageFileInfo(v65, v41, 1LL);
        v67 = v94[0];
        if ( (v94[0] & 0x800) != 0 )
        {
          v67 = v94[0] & 0xFFFFFFFFFFFFF5FFuLL | 0x200;
          v94[0] = v67;
        }
        MiWriteValidPteNewProtection(a3, v67);
        v68 = v95;
        MiInsertTbFlushEntry(a9, v95, 1LL, 0LL);
        *a6 = 0LL;
        *a6 = v67;
        if ( (unsigned int)MiPteInShadowRange(a6) )
          MiWritePteShadow(v69);
        a6[3] = 2LL;
        MiSetWsleProtection(v69, v68, 0LL);
        v70 = MiMakePrototypePteDirect(*(_QWORD *)(v30 + 8) | 0x8000000000000000uLL);
        v94[0] = v70;
        if ( (a12 & 1) != 0 )
        {
          v70 |= 8uLL;
          a6[2] = 1LL;
          v94[0] = v70;
          ++*(_QWORD *)(a14 + 8);
        }
        else
        {
          a6[2] = 0LL;
        }
        a6[2] = a6[2] & 0x7FFFFFFFFFFFFFFLL | ((unsigned __int64)(unsigned int)v98 << 59);
        *a4 = v70;
        if ( (unsigned int)MiPteInShadowRange(a4) )
          MiWritePteShadow(v71);
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 920), 0xFFFFFFFFFFFFFFFFuLL);
        MiUpdateWorkingSetPrivateSize(v96, v68, -1LL);
LABEL_53:
        v17 = 1;
        goto LABEL_101;
      }
      v16 = a3;
      v24 = 1LL;
      LODWORD(v95) = 1;
LABEL_22:
      v14 = a1;
      v25 = 1;
    }
    if ( (v18 & 0x400) != 0 )
      break;
    if ( (v18 & 0x800) == 0 )
    {
      v50 = (v18 >> 5) & 0x1F;
      if ( !(unsigned int)IS_PTE_NOT_DEMAND_ZERO(v18, v22, v23, v24) )
      {
        if ( (v18 & 2) != 0 )
        {
          v18 &= ~2uLL;
          v94[0] = v18;
        }
        v86 = a5;
        if ( a5 )
          v87 = MiFindZeroCloneBlock(a5, (unsigned int)v50);
        else
          v87 = 0LL;
        if ( v87 )
        {
          MiWriteSharedDemandZeroPte(v86, v87, a4, a14);
          goto LABEL_101;
        }
        goto LABEL_99;
      }
      if ( (_DWORD)v50 == 16 )
      {
        if ( (v18 & 2) != 0 )
        {
          v18 &= ~2uLL;
          goto LABEL_98;
        }
        goto LABEL_99;
      }
      if ( ((v18 >> 5) & 0x18) != 0x10 )
      {
        v81 = MI_READ_PTE_LOCK_FREE(v94);
        if ( (v81 & 0x80u) != 0LL )
        {
          v94[0] = v81 | 0x20;
          if ( (unsigned int)MiPteInShadowRange(v94) )
            MiWritePteShadow(v94);
          v18 = v94[0];
        }
        if ( (v18 & 2) != 0 )
        {
          MiReleasePageFileInfo(
            *(_QWORD *)(qword_14036C8F8 + 8LL * *(unsigned __int16 *)(a1 + 1452)),
            v18 & 0xFFFFFFFFFFFFFFFBuLL,
            1LL);
          v18 &= ~2uLL;
          v94[0] = v18;
        }
        *a6 = 0LL;
        *a6 = v18;
        if ( (unsigned int)MiPteInShadowRange(a6) )
          MiWritePteShadow(v82);
        a6[3] = 2LL;
        v94[0] = MiMakePrototypePteDirect(a6);
        *(_QWORD *)v16 = v94[0];
        if ( (unsigned int)MiPteInShadowRange(v16) )
          MiWritePteShadow(v84);
        if ( (a12 & 1) != 0 )
        {
          if ( (_DWORD)v50 != 24 )
          {
            v83 |= 8uLL;
            v94[0] = v83;
          }
          a6[2] = 1LL;
          ++*(_QWORD *)(a14 + 8);
        }
        else
        {
          a6[2] = 0LL;
        }
        a6[2] = a6[2] & 0x7FFFFFFFFFFFFFFLL | ((unsigned __int64)(unsigned int)v50 << 59);
        *a4 = v83;
        if ( (unsigned int)MiPteInShadowRange(a4) )
          MiWritePteShadow(v85);
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 920), 0xFFFFFFFFFFFFFFFFuLL);
        goto LABEL_53;
      }
      MiFlushTbList(a9);
      v51 = v96;
      LOBYTE(v52) = a13;
      MiUnlockWorkingSetExclusive(v96, v52);
      v103[1] = 4096LL;
      v103[0] = (__int64)(v16 << 25) >> 16;
      MiPrefetchVirtualMemory(1LL, v103, v51, 45LL);
      SharedVm = MiGetSharedVm(v51);
      v48 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
      goto LABEL_21;
    }
    LOBYTE(v93) = a13;
    v49 = MiHandleForkTransitionPte(v14, a2, v16, a4, a6, a7, a9, &Page, a12, v93, a14);
    if ( v49 )
    {
      LOBYTE(v17) = v49 != 1;
      goto LABEL_101;
    }
    v24 = (unsigned int)v95;
    v25 = 1;
  }
  v88 = MiGetPrototypePteDirect(v18, v22, v23, v24);
  if ( (unsigned __int8)MI_PROTO_FORMAT_COMBINED(v18, v89, v90, v88) )
  {
    _InterlockedAdd64((volatile signed __int64 *)(v91 - 48 + 32), 1uLL);
    _InterlockedExchangeAdd(
      (volatile signed __int32 *)(*(_QWORD *)(((v91 - 48) & 0xFFFFFFFFFFFFF000uLL) + 0x10) + 384LL),
      1u);
    v18 = v94[0];
  }
  else
  {
    v92 = MiReferenceCloneProto(v91, a12, a14);
    if ( v92 && *(_QWORD *)(v92 + 16) >> 59 != 24 )
    {
      v18 |= 8uLL;
LABEL_98:
      v94[0] = v18;
    }
  }
LABEL_99:
  *a4 = v18;
  if ( !(unsigned int)MiPteInShadowRange(a4) )
    goto LABEL_101;
LABEL_100:
  MiWritePteShadow(v78);
LABEL_101:
  if ( Page != -1 )
    MiLockAndInsertPageInFreeList(48 * Page - 0x58000000000LL);
  return v17;
}
