/*
 * XREFs of MiIdealClusterPage @ 0x14022F348
 * Callers:
 *     MiResolveTransitionFault @ 0x140049330 (MiResolveTransitionFault.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiObtainProtoReference @ 0x140027120 (MiObtainProtoReference.c)
 *     MiAddLockedPageCharge @ 0x140027170 (MiAddLockedPageCharge.c)
 *     MiInitializePageColorBase @ 0x14002A810 (MiInitializePageColorBase.c)
 *     MiIsFaultPteIntact @ 0x14002CD68 (MiIsFaultPteIntact.c)
 *     MiRelockProtoPoolPage @ 0x14002E068 (MiRelockProtoPoolPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140030A90 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockProtoPoolPage @ 0x140030AF0 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageCharge @ 0x140030B80 (MiRemoveLockedPageCharge.c)
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiGetProtoPteAddress @ 0x140040460 (MiGetProtoPteAddress.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x140057900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiCopyPage @ 0x14005A3E0 (MiCopyPage.c)
 *     MiFindContiguousPages @ 0x140078120 (MiFindContiguousPages.c)
 *     MiReturnPfnReferenceCount @ 0x1400B7758 (MiReturnPfnReferenceCount.c)
 *     MiReturnResidentAvailable @ 0x1400BFE10 (MiReturnResidentAvailable.c)
 *     MiGet64KPage @ 0x1400C4A90 (MiGet64KPage.c)
 *     MiReleaseFreshPage @ 0x1400C538C (MiReleaseFreshPage.c)
 *     MiPageToNode @ 0x1400C7140 (MiPageToNode.c)
 *     MiReleaseNonPagedResources @ 0x1400CF13C (MiReleaseNonPagedResources.c)
 *     MiAcquireNonPagedResources @ 0x1400CF9DC (MiAcquireNonPagedResources.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1400ED258 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400ED9A0 (MiMapPageInHyperSpaceWorker.c)
 *     MiIsPfnInline @ 0x140106F50 (MiIsPfnInline.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memcmp @ 0x14015F370 (memcmp.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     KeCheckForZeroPage @ 0x140184CB0 (KeCheckForZeroPage.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MiPageNotZero @ 0x14022A530 (MiPageNotZero.c)
 *     MiSwapHardFaultPage @ 0x140235F34 (MiSwapHardFaultPage.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

volatile signed __int64 *__fastcall MiIdealClusterPage(
        unsigned __int64 a1,
        __int64 a2,
        __int64 *a3,
        unsigned __int64 a4,
        __int64 a5,
        volatile signed __int64 *a6,
        void *a7,
        char a8,
        char *a9)
{
  volatile signed __int64 *v10; // rdi
  __int64 v12; // r13
  bool v13; // zf
  __int64 ProtoPteAddress; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r8
  __int64 v17; // rcx
  unsigned __int64 v18; // rax
  __int64 v19; // r11
  char v20; // r8
  __int64 v21; // rsi
  unsigned __int64 v22; // r9
  _BYTE *v23; // r10
  __int64 PteShadow; // rax
  unsigned __int64 v25; // r12
  unsigned __int64 *v26; // rcx
  __int64 v27; // rdx
  volatile signed __int64 *v28; // r10
  __int64 v29; // r9
  volatile signed __int64 *v30; // r14
  __int64 v32; // r8
  __int16 v33; // r11
  _WORD *v34; // rax
  char v35; // cl
  int v36; // ebx
  unsigned int v37; // r15d
  unsigned int v38; // r15d
  int v39; // ebx
  __int64 v40; // r11
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  LONG *v45; // rcx
  __int64 v46; // r15
  int ContiguousPages; // r13d
  __int64 v48; // rdi
  __int64 v49; // rbx
  __int64 v50; // rdx
  __int64 v51; // rbx
  __int64 v52; // rdx
  ULONG_PTR v53; // rdx
  ULONG_PTR v54; // rbx
  int v55; // edx
  int v56; // eax
  bool v57; // r15
  LONG *SharedVm; // rbx
  volatile signed __int64 *v59; // rbx
  __int64 *v60; // rbx
  char v61; // [rsp+60h] [rbp-A0h]
  unsigned __int8 v62[7]; // [rsp+61h] [rbp-9Fh] BYREF
  __int64 v63; // [rsp+68h] [rbp-98h] BYREF
  __int64 v64; // [rsp+70h] [rbp-90h]
  void *Buf2; // [rsp+78h] [rbp-88h]
  unsigned __int64 v66; // [rsp+80h] [rbp-80h] BYREF
  char *v67; // [rsp+88h] [rbp-78h]
  ULONG_PTR BugCheckParameter1; // [rsp+90h] [rbp-70h]
  __int64 CurrentIrql; // [rsp+98h] [rbp-68h]
  __int64 v70; // [rsp+A0h] [rbp-60h]
  ULONG_PTR v71; // [rsp+A8h] [rbp-58h]
  __int64 v72; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v73; // [rsp+B8h] [rbp-48h] BYREF
  volatile signed __int64 *v74; // [rsp+C0h] [rbp-40h]
  __int64 *v75; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v76; // [rsp+D0h] [rbp-30h]
  _WORD *v77; // [rsp+D8h] [rbp-28h] BYREF
  __int16 v78; // [rsp+E0h] [rbp-20h]
  unsigned __int16 v79; // [rsp+E2h] [rbp-1Eh]
  __int128 Buf1; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v81; // [rsp+F8h] [rbp-8h]
  __int128 v82; // [rsp+108h] [rbp+8h]
  _OWORD v83[3]; // [rsp+118h] [rbp+18h] BYREF
  _BYTE v84[128]; // [rsp+150h] [rbp+50h] BYREF
  void *retaddr; // [rsp+228h] [rbp+128h]

  v10 = a6;
  Buf2 = a7;
  v12 = (unsigned __int16)a1 >> 12;
  v75 = a3;
  v76 = a1;
  v66 = a4;
  *a9 = 0;
  v13 = (*(_DWORD *)(a2 + 48) & 0x8000) == 0;
  v64 = a5;
  v74 = a6;
  v67 = a9;
  if ( v13 )
  {
    ProtoPteAddress = MiGetProtoPteAddress(a2, a1 >> 12, 8u, &v72);
    if ( !ProtoPteAddress || !v72 || (__int64 *)ProtoPteAddress != a3 )
      return v10;
    v15 = *(_QWORD *)(v72 + 8);
    v16 = v15 + 8LL * *(unsigned int *)(v72 + 44);
    if ( ((unsigned __int64)a3 & 0xFFFFFFFFFFFFF000uLL) > v15 )
      v15 = (unsigned __int64)a3 & 0xFFFFFFFFFFFFF000uLL;
    if ( v16 > ((unsigned __int64)a3 & 0xFFFFFFFFFFFFF000uLL) + 4096 )
      v16 = ((unsigned __int64)a3 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    if ( v15 >= v16 || (unsigned __int64)&a3[-(unsigned int)v12] < v15 || (unsigned __int64)&a3[16 - v12] > v16 )
      return v10;
    v17 = *(_WORD *)(*(_QWORD *)v72 + 60LL) & 0x3FF;
  }
  else
  {
    v18 = *((_QWORD *)a6 + 1) | 0x8000000000000000uLL;
    if ( v18 < 0xFFFFF68000000000uLL || v18 > 0xFFFFF6FFFFFFFFFFuLL )
      return v10;
    v17 = *(unsigned __int16 *)(a5 + 172);
  }
  v19 = 16LL;
  v20 = 1;
  v21 = *(_QWORD *)(qword_140388AF0 + 8 * v17);
  v22 = (unsigned __int64)&a3[-v12];
  v70 = v21;
  v23 = &v84[-v22];
  do
  {
    PteShadow = *(_QWORD *)v22;
    if ( v22 >= 0xFFFFF6FB7DBED000uLL && v22 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      PteShadow = MiReadPteShadow();
      v20 = 1;
    }
    *(_QWORD *)&v23[v22] = PteShadow;
    v22 += 8LL;
    --v19;
  }
  while ( v19 );
  v25 = -1LL;
  v26 = (unsigned __int64 *)v84;
  v27 = (__int64)(a6 + 0xB000000000LL) / 48;
  v28 = 0LL;
  v71 = v27;
  LODWORD(v29) = 0;
  while ( 1 )
  {
    v73 = *v26;
    if ( (v73 & 1) != 0 )
      break;
    v29 = (unsigned int)(v29 + 1);
    ++v26;
    if ( (unsigned int)v29 >= 0x10 )
      goto LABEL_27;
  }
  v25 = MI_GET_PAGE_FRAME_FROM_PTE(&v73);
  if ( (v25 & 0xF) != (unsigned int)v29 )
    return v10;
  LOBYTE(v27) = v71;
  v20 = 1;
LABEL_27:
  v61 = (char)v28;
  v30 = v28;
  if ( (_DWORD)v29 == 16 )
  {
    if ( (v27 & 0xF) == v12 )
    {
LABEL_29:
      *v67 = v20;
      return v10;
    }
    if ( !(unsigned int)MiAcquireNonPagedResources((ULONG_PTR *)v21, 1uLL, 1LL, v29) )
      return v10;
    v61 = 1;
    MiInitializePageColorBase(a5, (*(_DWORD *)(a2 + 48) >> 8) & 0x3F, (__int64)&v77);
    v34 = v77;
    v35 = byte_140388501;
    v36 = v79;
    v37 = v79;
    *v77 += v33;
    v38 = v37 >> v35;
    v39 = (unsigned __int16)(v78 & *v34) | v36;
  }
  else
  {
    v25 += v12 - (unsigned int)v29;
    if ( !MiIsPfnInline(v25) )
      return v10;
    v30 = (volatile signed __int64 *)(v40 + 48 * v25);
    if ( v30 == a6 )
      goto LABEL_29;
    v38 = MiPageToNode(v25, 0LL);
    v39 = dword_140388540 & v25;
    LOBYTE(v33) = 1;
  }
  *(_BYTE *)(*(_QWORD *)(v21 + 16) + 8256LL * v38 + 7123) = v33;
  *((_QWORD *)a6 + 3) &= 0xC000000000000000uLL;
  if ( !(unsigned int)MiAddLockedPageCharge((__int64)a6, 0LL, v32) )
    return v10;
  v41 = *((_OWORD *)a6 + 1);
  v83[0] = *(_OWORD *)a6;
  v42 = *((_OWORD *)a6 + 2);
  v83[1] = v41;
  v83[2] = v42;
  _InterlockedAnd64(a6 + 3, 0x7FFFFFFFFFFFFFFFuLL);
  if ( Buf2 )
  {
    MiObtainProtoReference((__int64)Buf2, 0);
    v43 = *((_OWORD *)Buf2 + 1);
    Buf1 = *(_OWORD *)Buf2;
    v44 = *((_OWORD *)Buf2 + 2);
    v81 = v43;
    v82 = v44;
    MiUnlockProtoPoolPage((__int64)Buf2, 0x11u);
  }
  if ( v64 )
  {
    MiPreUnlockWorkingSetExclusive(v64, 1u);
    v45 = &dword_140389780;
    if ( (*(_BYTE *)(v64 + 192) & 7) != 2 )
      v45 = (LONG *)(v64 + 200);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v45, retaddr);
    else
      *v45 = 0;
  }
  __writecr8(1uLL);
  if ( v61 == 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v46 = MiGet64KPage(v21, v38, (v66 >> 5) & 0x1F, v39);
    if ( v46 )
    {
      v48 = 16LL;
      v49 = (v46 + 0x58000000000LL) / 48;
      v63 = v49;
      do
      {
        if ( (MiFlags & 0x80u) != 0 )
        {
          v50 = v46 + 0x58000000000LL;
          if ( (*(_BYTE *)(v46 + 35) & 0x40) == 0 && (++dword_140388C10 & MmPageValidationFrequency) == 0 )
          {
            if ( KeGetCurrentPrcb()->HyperPte )
            {
              v51 = v50 / 48;
              BugCheckParameter1 = MiMapPageInHyperSpaceWorker(v50 / 48, v62, 0x80000000);
              if ( KeCheckForZeroPage((_QWORD *)BugCheckParameter1) )
              {
                v53 = v51;
                v54 = BugCheckParameter1;
                MiPageNotZero((int *)BugCheckParameter1, v53);
              }
              else
              {
                v54 = BugCheckParameter1;
              }
              LOBYTE(v52) = v62[0];
              MiUnmapPageInHyperSpaceWorker(v54, v52, 0x80000000LL);
            }
            v49 = v63;
          }
        }
        if ( (v49 & 0xF) == v12 )
        {
          v25 = v49;
          v30 = (volatile signed __int64 *)v46;
        }
        else
        {
          MiReleaseFreshPage(v46);
        }
        ++v49;
        v46 += 48LL;
        v63 = v49;
        --v48;
      }
      while ( v48 );
      __writecr8((unsigned __int8)CurrentIrql);
      v10 = v74;
      ContiguousPages = 0;
      v21 = v70;
    }
    else
    {
      __writecr8((unsigned __int8)CurrentIrql);
      MiReleaseNonPagedResources(v21, 1uLL);
      ContiguousPages = -1073741801;
    }
  }
  else
  {
    v30 = (volatile signed __int64 *)(48 * v25 - 0x58000000000LL);
    v55 = 1073872896;
    if ( a8 == 1 )
      v55 = 0x40000000;
    v56 = v55 | 8;
    if ( (void (__noreturn *)())KeGetCurrentThread()[1].ApcState.ApcListHead[0].Blink != KeSwapProcessOrStack )
      v56 = v55;
    ContiguousPages = MiFindContiguousPages(
                        v21,
                        v25,
                        v25,
                        0LL,
                        1uLL,
                        *((unsigned __int8 *)a6 + 34) >> 6,
                        v38,
                        0x80000000,
                        v56,
                        0LL,
                        &v63);
  }
  v57 = 0;
  if ( v64 )
  {
    SharedVm = MiGetSharedVm(v64);
    ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
  }
  else
  {
    KeGetCurrentIrql();
    __writecr8(2uLL);
  }
  v59 = (volatile signed __int64 *)Buf2;
  if ( Buf2 )
  {
    *((_QWORD *)&v81 + 1) |= 0x8000000000000000uLL;
    MiRelockProtoPoolPage((__int64)Buf2, 0LL);
    MiLockPageAtDpcInline((__int64)v59);
    v57 = memcmp(&Buf1, (const void *)v59, 0x30uLL) != 0;
    _InterlockedAnd64(v59 + 3, 0x7FFFFFFFFFFFFFFFuLL);
    MiReturnPfnReferenceCount((__int64)v59);
  }
  MiLockPageAtDpcInline((__int64)v10);
  if ( v57
    || memcmp(v83, (const void *)v10, 0x30uLL)
    || (v10[3] & 0x4000000000000000LL) != 0
    || (v60 = v75, !MiIsFaultPteIntact(v76, v75, (__int64 *)&v66)) )
  {
    if ( ContiguousPages >= 0 )
    {
      _InterlockedAnd64(v10 + 3, 0x7FFFFFFFFFFFFFFFuLL);
      MiReleaseFreshPage((__int64)v30);
      if ( (ULONG_PTR *)v21 == &MiSystemPartition )
        MiReturnResidentAvailable(1uLL);
      else
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v21 + 6016), 1uLL);
      MiReturnCommit(v21, 1uLL);
      MiLockPageAtDpcInline((__int64)v10);
    }
    MiRemoveLockedPageChargeAndDecRef((__int64)v10);
    return 0LL;
  }
  else
  {
    if ( ContiguousPages < 0 )
    {
      MiRemoveLockedPageCharge((__int64)v10);
      return v10;
    }
    MiCopyPage(v25, v71, 0LL, (v66 & 0x40) != 0 ? 16 : 8);
    MiSwapHardFaultPage(v60, v10, v30);
    *((_WORD *)v30 + 16) = 0;
    if ( (ULONG_PTR *)v21 == &MiSystemPartition )
      MiReturnResidentAvailable(1uLL);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v21 + 6016), 1uLL);
    *v67 = 1;
    return v30;
  }
}
