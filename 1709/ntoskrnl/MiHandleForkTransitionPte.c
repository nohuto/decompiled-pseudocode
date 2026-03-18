/*
 * XREFs of MiHandleForkTransitionPte @ 0x14000E3C0
 * Callers:
 *     MiBuildForkPte @ 0x1400E7530 (MiBuildForkPte.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiFinalizePageAttribute @ 0x140028064 (MiFinalizePageAttribute.c)
 *     MiInitializePageColorBase @ 0x14002A810 (MiInitializePageColorBase.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiChargeCommit @ 0x14003AB20 (MiChargeCommit.c)
 *     MiMakeSystemAddressValid @ 0x14003D1A0 (MiMakeSystemAddressValid.c)
 *     MiGetPage @ 0x1400489F0 (MiGetPage.c)
 *     MiUnlinkPageFromList @ 0x14004B0F0 (MiUnlinkPageFromList.c)
 *     MiInsertPageInList @ 0x140051480 (MiInsertPageInList.c)
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 *     KeDelayExecutionThread @ 0x1400818C0 (KeDelayExecutionThread.c)
 *     MiReleasePageFileInfo @ 0x1400C0554 (MiReleasePageFileInfo.c)
 *     MiLockTransitionLeafPage @ 0x1400E5058 (MiLockTransitionLeafPage.c)
 *     MiLockAndDecrementShareCount @ 0x1400EACDC (MiLockAndDecrementShareCount.c)
 *     MiLockNestedPageAtDpcInline @ 0x14011C690 (MiLockNestedPageAtDpcInline.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x14017C774 (MiMakeDemandZeroPte.c)
 *     MiMakePrototypePteDirect @ 0x14017C7C0 (MiMakePrototypePteDirect.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14022A1F8 (MI_GET_PFN_FROM_PTE.c)
 *     MiDuplicateCloneLeaf @ 0x14022FED0 (MiDuplicateCloneLeaf.c)
 *     MiGetCrossPartitionCloneCharges @ 0x1402301C0 (MiGetCrossPartitionCloneCharges.c)
 *     MiReturnCrossPartitionCloneCharges @ 0x140230230 (MiReturnCrossPartitionCloneCharges.c)
 *     MiWaitForFreePage @ 0x14023059C (MiWaitForFreePage.c)
 */

__int64 __fastcall MiHandleForkTransitionPte(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 *a4,
        unsigned __int64 a5,
        _QWORD *a6,
        __int64 a7,
        __int64 *a8,
        char a9,
        KIRQL a10,
        _QWORD *a11,
        _DWORD *a12)
{
  unsigned __int64 v12; // r14
  unsigned __int64 *v13; // rsi
  __int64 *v14; // r15
  __int64 PrototypePteDirect; // rbx
  unsigned __int64 v16; // rdi
  int v17; // ebp
  __int64 v18; // r8
  __int64 v19; // r12
  __int64 v20; // rdx
  __int64 DemandZeroPte; // rax
  __int64 result; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r11
  ULONG_PTR v28; // rbp
  __int64 v29; // r8
  __int64 v30; // rdx
  unsigned __int64 PteShadow; // rax
  __int64 v32; // r10
  _WORD *v33; // r8
  __int64 Page; // rax
  KIRQL v35; // di
  __int64 v36; // rdx
  __int64 SharedVm; // rsi
  __int64 v38; // rax
  unsigned __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  bool v44; // zf
  __int64 *v45; // rsi
  int v46; // eax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 *v49; // r14
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // r10
  __int64 v53; // r9
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // rsi
  unsigned __int64 v57; // rdx
  __int64 v58; // rbx
  int v59; // r9d
  __int64 v60; // rdx
  __int64 v61; // rbx
  int v62; // [rsp+30h] [rbp-98h]
  unsigned int v63; // [rsp+40h] [rbp-88h]
  unsigned int v64; // [rsp+40h] [rbp-88h]
  int v65; // [rsp+48h] [rbp-80h]
  __int64 v66; // [rsp+48h] [rbp-80h]
  __int64 v67; // [rsp+50h] [rbp-78h]
  __int64 v68; // [rsp+58h] [rbp-70h] BYREF
  __int64 v69; // [rsp+60h] [rbp-68h]
  unsigned __int64 v70; // [rsp+68h] [rbp-60h]
  _WORD *v71; // [rsp+70h] [rbp-58h] BYREF
  __int16 v72; // [rsp+78h] [rbp-50h]
  unsigned __int16 v73; // [rsp+7Ah] [rbp-4Eh]
  int v75; // [rsp+D8h] [rbp+10h]
  __int64 v78; // [rsp+F0h] [rbp+28h]
  int v79; // [rsp+110h] [rbp+48h]

  v12 = a5;
  v13 = (unsigned __int64 *)a3;
  v14 = a4;
  PrototypePteDirect = MiMakePrototypePteDirect(a5, a2, a1, a4);
  v69 = PrototypePteDirect;
  v16 = 0LL;
  v70 = 0LL;
  v62 = 0;
  v17 = 0;
  v75 = 0;
  v19 = *(_QWORD *)(qword_140388AF0 + 8LL * *(unsigned __int16 *)(v18 + 1452));
  v67 = *(_QWORD *)(qword_140388AF0 + 8LL * *(unsigned __int16 *)(v20 + 1452));
  if ( v67 != v19 )
  {
    if ( (a9 & 1) != 0 )
    {
      if ( !(unsigned int)MiChargeCommit(v19, 1LL, 0LL) )
      {
        DemandZeroPte = MiMakeDemandZeroPte(4LL);
        *v14 = DemandZeroPte;
        if ( (unsigned __int64)v14 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v14 <= 0xFFFFF6FB7DBED7F8uLL )
          MiWritePteShadow(v14, DemandZeroPte);
        result = 1LL;
        *a12 = 1;
        return result;
      }
      v17 = 1;
      v75 = 1;
    }
    if ( !(unsigned int)MiGetCrossPartitionCloneCharges(v19) )
    {
      v23 = MiMakeDemandZeroPte(4LL);
      *v14 = v23;
      if ( (unsigned __int64)v14 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v14 <= 0xFFFFF6FB7DBED7F8uLL )
        MiWritePteShadow(v14, v23);
      *a12 = 1;
      if ( v17 )
        MiReturnCommit(v19, 1LL);
      return 1LL;
    }
    v62 = 1;
  }
  v24 = MiLockTransitionLeafPage((ULONG_PTR)v13);
  v27 = 0LL;
  v28 = v24;
  if ( v24 )
  {
    while ( 1 )
    {
      v29 = 0x7FFFFFFFFFFFFFFFLL;
      v30 = -1LL;
      PteShadow = *v13;
      if ( (unsigned __int64)v13 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v13 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        PteShadow = MiReadPteShadow(v13, *v13);
        v30 = -1LL;
        v29 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v32 = (PteShadow >> 5) & 0x1F;
      v65 = v32;
      if ( *(_WORD *)(v28 + 32) == (_WORD)v27 && (v32 & 0xFFFFFFF8) != 0x10 )
      {
        *(_QWORD *)v12 = v27;
        *(_QWORD *)v12 = PteShadow;
        if ( v12 >= 0xFFFFF6FB7DBED000uLL && v12 <= 0xFFFFF6FB7DBED7F8uLL )
          MiWritePteShadow(v12, PteShadow);
        v41 = *(_QWORD *)v12;
        if ( v12 >= 0xFFFFF6FB7DBED000uLL && v12 <= 0xFFFFF6FB7DBED7F8uLL )
          v41 = MiReadPteShadow(v12, *(_QWORD *)v12);
        if ( (v41 & 0x80u) != 0LL )
        {
          v42 = v41 | 0x20;
          *(_QWORD *)v12 = v42;
          if ( v12 >= 0xFFFFF6FB7DBED000uLL && v12 <= 0xFFFFF6FB7DBED7F8uLL )
            MiWritePteShadow(v12, v42);
        }
        *(_QWORD *)(v12 + 24) = 2LL;
        v43 = v27;
        LOBYTE(v43) = v62 == 1;
        v44 = (a9 & 1) == 0;
        v79 = a9 & 1;
        *(_QWORD *)(v12 + 8) = v43;
        if ( v44 )
        {
          *(_QWORD *)(v12 + 16) = v27;
        }
        else
        {
          *(_QWORD *)(v12 + 16) = 1LL;
          if ( v75 == (_DWORD)v27 )
            ++a11[1];
          else
            ++*a11;
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v19 + 6472), 1uLL);
        }
        v45 = (__int64 *)(v28 + 16);
        *(_QWORD *)(v12 + 16) = *(_QWORD *)(v12 + 16) & 0x7FFFFFFFFFFFFFFLL | ((unsigned __int64)(unsigned int)v32 << 59);
        if ( (*(_QWORD *)(v28 + 16) & 2) != 0 )
        {
          v16 = *(_QWORD *)(v28 + 16);
          if ( (*(_BYTE *)(v28 + 34) & 7) == 3 )
          {
            MiUnlinkPageFromList(v28);
            v46 = 1;
          }
          else
          {
            v46 = v27;
          }
          *v45 &= ~2uLL;
          if ( v46 )
            MiInsertPageInList(v28, 8LL);
        }
        *(_QWORD *)(v28 + 8) = v12;
        *(_QWORD *)(v28 + 40) |= 0x200000000000000uLL;
        v47 = *v45;
        if ( (unsigned __int64)v45 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v45 <= 0xFFFFF6FB7DBED7F8uLL )
          v47 = MiReadPteShadow(v28 + 16, *v45);
        if ( (v47 & 0x80u) != 0LL )
        {
          v48 = v47 | 0x20;
          *v45 = v48;
          if ( (unsigned __int64)v45 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v45 <= 0xFFFFF6FB7DBED7F8uLL )
            MiWritePteShadow(v28 + 16, v48);
        }
        v49 = (__int64 *)(((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v78 = *(_QWORD *)(v28 + 40) & 0xFFFFFFFFFLL;
        v50 = *v49;
        if ( (unsigned __int64)v49 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v49 <= 0xFFFFF6FB7DBED7F8uLL )
          v50 = MiReadPteShadow(v49, *v49);
        v68 = v50;
        v51 = MI_GET_PAGE_FRAME_FROM_PTE(&v68);
        *(_QWORD *)(v28 + 40) = v53 ^ v52 & (v53 ^ v51);
        v56 = MI_GET_PFN_FROM_PTE(&v68, v54, v55, v53);
        MiLockNestedPageAtDpcInline(v56);
        *(_QWORD *)(v56 + 24) ^= (*(_QWORD *)(v56 + 24) ^ (*(_QWORD *)(v56 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v56 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        *a3 = PrototypePteDirect;
        if ( (unsigned __int64)a3 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a3 <= 0xFFFFF6FB7DBED7F8uLL )
          MiWritePteShadow(a3, PrototypePteDirect);
        _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v16 )
        {
          v57 = v16 & 0xFFFFFFFFFFFFFFFBuLL;
          if ( (v16 & 4) == 0 )
            v57 = v16;
          MiReleasePageFileInfo(v19, v57, 1LL);
        }
        if ( v79 && v65 != 24 )
          PrototypePteDirect |= 8uLL;
        *v14 = PrototypePteDirect;
        if ( (unsigned __int64)v14 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v14 <= 0xFFFFF6FB7DBED7F8uLL )
          MiWritePteShadow(v14, PrototypePteDirect);
        MiLockAndDecrementShareCount(48 * v78 - 0x58000000000LL, 0LL);
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 920), 0xFFFFFFFFFFFFFFFFuLL);
        return 2LL;
      }
      v63 = *(unsigned __int8 *)(v28 + 34) >> 6;
      v66 = a1 + 1280;
      if ( *a8 != -1 )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiInitializePageColorBase(a1 + 1280, 0LL, &v71);
      v33 = v71;
      ++*v71;
      v64 = v73 | (unsigned __int16)(v72 & *v33);
      Page = MiGetPage(v67, v64, 0LL);
      *a8 = Page;
      if ( Page == -1 )
      {
        v35 = a10;
        do
        {
          MiFlushTbList(a7);
          LOBYTE(v36) = v35;
          MiUnlockWorkingSetExclusive(v66, v36);
          MiWaitForFreePage(v67);
          SharedVm = MiGetSharedVm(v66);
          v35 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
          *(_DWORD *)(SharedVm + 4) = 0;
          MiMakeSystemAddressValid((ULONG_PTR)a3, 1);
          v38 = MiGetPage(v67, v64, 0LL);
          *a8 = v38;
        }
        while ( v38 == -1 );
        PrototypePteDirect = v69;
        v12 = a5;
        v14 = a4;
        v13 = (unsigned __int64 *)a3;
        a10 = v35;
        v16 = v70;
      }
      v39 = *v13;
      if ( (unsigned __int64)v13 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v13 <= 0xFFFFF6FB7DBED7F8uLL )
        LOWORD(v39) = MiReadPteShadow(v13, *v13);
      if ( (v39 & 0x401) == 0 )
      {
        v40 = MiLockTransitionLeafPage((ULONG_PTR)v13);
        v27 = 0LL;
        v28 = v40;
        if ( v40 )
          continue;
      }
      goto LABEL_89;
    }
    if ( v75 != (_DWORD)v27 )
    {
      MiReturnCommit(v19, 1LL);
      LODWORD(v27) = 0;
      v75 = 0;
    }
    if ( v62 != (_DWORD)v27 )
    {
      MiReturnCrossPartitionCloneCharges(v19, v30, v29);
      v62 = 0;
    }
    v58 = 48 * *a8 - 0x58000000000LL;
    MiLockNestedPageAtDpcInline(v58);
    MiFinalizePageAttribute(v58, v63, 1LL);
    _InterlockedAnd64((volatile signed __int64 *)(v58 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (*(_BYTE *)(v28 + 34) & 0x20) != 0 )
    {
      MiFlushTbList(a7);
      if ( (*(_BYTE *)(v28 + 34) & 8) != 0 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        LOBYTE(v60) = a10;
        MiUnlockWorkingSetExclusive(v66, v60);
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
        v61 = MiGetSharedVm(v66);
        ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v61);
        *(_DWORD *)(v61 + 4) = 0;
        goto LABEL_89;
      }
    }
    LOBYTE(v59) = a10;
    if ( (unsigned int)MiDuplicateCloneLeaf((_DWORD)v13, (_DWORD)v14, *a8, v59, 2) )
    {
      *a8 = -1LL;
      ++*a6;
      return 1LL;
    }
  }
LABEL_89:
  if ( v75 )
    MiReturnCommit(v19, 1LL);
  if ( v62 )
    MiReturnCrossPartitionCloneCharges(v19, v25, v26);
  return 0LL;
}
