/*
 * XREFs of MiSwitchToTransition @ 0x14021C340
 * Callers:
 *     MmRotatePhysicalView @ 0x140448920 (MmRotatePhysicalView.c)
 * Callees:
 *     MiIsProbeActive @ 0x140009C98 (MiIsProbeActive.c)
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiAddLockedPageCharge @ 0x140027170 (MiAddLockedPageCharge.c)
 *     MiGetEffectivePagePriorityThread @ 0x140028114 (MiGetEffectivePagePriorityThread.c)
 *     MiInitializePageColorBase @ 0x14002A810 (MiInitializePageColorBase.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiObtainFaultCharges @ 0x1400383C0 (MiObtainFaultCharges.c)
 *     MiGetPage @ 0x1400489F0 (MiGetPage.c)
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     MiReleaseFreshPage @ 0x1400C538C (MiReleaseFreshPage.c)
 *     MiSetPfnBlink @ 0x1400C7514 (MiSetPfnBlink.c)
 *     MiPageAttributeBatchChangeNeeded @ 0x1400CAB80 (MiPageAttributeBatchChangeNeeded.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiChangePageAttributeBatch @ 0x1400ED4B0 (MiChangePageAttributeBatch.c)
 *     MiIsPfnInline @ 0x140106F50 (MiIsPfnInline.c)
 *     MiReturnFaultCharges @ 0x14012F0F4 (MiReturnFaultCharges.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiGetContainingPageTable @ 0x14017C61C (MiGetContainingPageTable.c)
 *     MiMakeDemandZeroPte @ 0x14017C774 (MiMakeDemandZeroPte.c)
 *     MiMakeTransitionPte @ 0x14017C848 (MiMakeTransitionPte.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     MiAddMdlTracker @ 0x140215AE4 (MiAddMdlTracker.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MiSetFreshPfnFromFreeList @ 0x14022A964 (MiSetFreshPfnFromFreeList.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14022A99C (MiSetOriginalPtePfnFromFreeList.c)
 *     MiWaitForFreePage @ 0x14023059C (MiWaitForFreePage.c)
 *     MiGetReadyInPageBlock @ 0x1406E2624 (MiGetReadyInPageBlock.c)
 */

__int64 __fastcall MiSwitchToTransition(ULONG_PTR BugCheckParameter3, __int64 a2, unsigned int a3)
{
  _QWORD *v4; // r12
  __int64 v5; // rdx
  __int64 ReadyInPageBlock; // rax
  ULONG_PTR *v7; // r14
  unsigned __int8 v8; // bl
  __int64 v9; // rsi
  unsigned int v10; // r11d
  unsigned int v11; // r15d
  LONG *SharedVm; // rdi
  KIRQL v13; // al
  __int64 v14; // rdx
  ULONG_PTR BugCheckParameter4; // rdx
  __int64 v16; // rdi
  _WORD *v17; // rax
  __int64 Page; // rax
  int v19; // r15d
  unsigned int v20; // r14d
  ULONG_PTR *v21; // rdi
  __int64 v22; // r9
  ULONG_PTR PteShadow; // r9
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // r8
  ULONG_PTR v26; // r9
  unsigned int v27; // r10d
  unsigned __int16 v28; // ax
  unsigned __int16 v29; // cx
  __int64 v30; // r15
  __int64 v31; // rax
  unsigned int v32; // edi
  unsigned __int8 v33; // r10
  __int64 v34; // rax
  struct _KTHREAD *v35; // rcx
  unsigned __int8 v36; // al
  __int64 v37; // r8
  char v38; // al
  __int64 v39; // r10
  __int64 v40; // r8
  __int64 v41; // rax
  __int64 v42; // r8
  __int64 v43; // r12
  _KPROCESS *v44; // rdi
  _KPROCESS *v45; // rdx
  KIRQL v47; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v48; // [rsp+31h] [rbp-CFh]
  unsigned int v50; // [rsp+38h] [rbp-C8h]
  ULONG_PTR *v51; // [rsp+40h] [rbp-C0h]
  __int64 v52; // [rsp+48h] [rbp-B8h]
  volatile signed __int64 *v53; // [rsp+48h] [rbp-B8h]
  ULONG_PTR *v54; // [rsp+50h] [rbp-B0h]
  char EffectivePagePriorityThread; // [rsp+58h] [rbp-A8h]
  __int64 v56; // [rsp+60h] [rbp-A0h]
  __int64 DemandZeroPte; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int16 *v58; // [rsp+70h] [rbp-90h]
  __int64 v59; // [rsp+78h] [rbp-88h]
  __int64 v60; // [rsp+80h] [rbp-80h]
  __int64 v61; // [rsp+88h] [rbp-78h] BYREF
  __int64 v62; // [rsp+90h] [rbp-70h]
  struct _KTHREAD *CurrentThread; // [rsp+98h] [rbp-68h]
  _KPROCESS *Process; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v65; // [rsp+A8h] [rbp-58h]
  _WORD *v66; // [rsp+B0h] [rbp-50h] BYREF
  __int16 v67; // [rsp+B8h] [rbp-48h]
  unsigned __int16 v68; // [rsp+BAh] [rbp-46h]
  int v69; // [rsp+C0h] [rbp-40h] BYREF
  __int16 v70; // [rsp+C4h] [rbp-3Ch]
  int v71; // [rsp+C8h] [rbp-38h]
  int v72; // [rsp+CCh] [rbp-34h]
  __int64 v73; // [rsp+D0h] [rbp-30h]
  __int64 v74; // [rsp+D8h] [rbp-28h]

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)CurrentThread);
  v4 = (_QWORD *)(BugCheckParameter3 + 48);
  ReadyInPageBlock = MiGetReadyInPageBlock(v5);
  v65 = *(_QWORD *)(BugCheckParameter3 + 32);
  v62 = ReadyInPageBlock;
  v7 = (ULONG_PTR *)(((v65 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v8 = 0;
  v58 = &Process[1].IdealNode[12];
  MiInitializePageColorBase((__int64)&Process[1].IdealNode[12], 0, (__int64)&v66);
  v9 = 0LL;
  v56 = 0LL;
  v52 = 0xFFFFFFFFFLL;
  v54 = *(ULONG_PTR **)(qword_140388AF0 + 8LL * *((unsigned __int16 *)&Process[1].SecureState.Flags + 2));
  v50 = MiObtainFaultCharges(v54, v10, 2);
  v11 = v50;
  v60 = v50;
  v51 = &v7[v50];
  while ( 2 )
  {
    SharedVm = MiGetSharedVm((__int64)v58);
    v13 = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
    v14 = v60;
    v47 = v13;
    while ( (unsigned int)MiIsProbeActive((unsigned __int64)v7, v14, 3) )
    {
      --v51;
      if ( !--v11 )
      {
        v19 = 1;
        v20 = 1;
        goto LABEL_50;
      }
      v60 = v11;
      v14 = v11;
    }
    v16 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v16 >= v11 )
      {
        v21 = v51;
        goto LABEL_17;
      }
      v17 = v66;
      ++*v66;
      Page = MiGetPage((__int64)v54, v68 | (unsigned int)(unsigned __int16)(v67 & *v17), 0);
      v59 = Page;
      if ( Page == -1 )
        break;
      v9 = 48 * Page - 0x58000000000LL;
      if ( (unsigned int)MiPageAttributeBatchChangeNeeded(v9, a3) == 1 )
      {
        *(_QWORD *)(v9 + 16) = v56;
        v56 = v9;
      }
      MiSetPfnBlink(v9, v52, 0);
      v16 = (unsigned int)(v16 + 1);
      v52 = v59;
    }
    if ( !(_DWORD)v16 )
    {
      LOBYTE(BugCheckParameter4) = v47;
      MiUnlockWorkingSetExclusive((__int64)v58, BugCheckParameter4);
      MiWaitForFreePage(v54);
      continue;
    }
    break;
  }
  v21 = &v7[v16];
  v51 = v21;
LABEL_17:
  if ( v56 )
  {
    v61 = 0LL;
    MiSetOriginalPtePfnFromFreeList(&v61);
    MiChangePageAttributeBatch(v22, a3, v61);
  }
  if ( v7 < v21 )
  {
    while ( 1 )
    {
      PteShadow = *v7;
      if ( (unsigned __int64)v7 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v7 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow();
      DemandZeroPte = PteShadow;
      if ( (PteShadow & 1) == 0 )
        KeBugCheckEx(0x1Au, 0x41200uLL, (ULONG_PTR)v7, PteShadow, BugCheckParameter3);
      v24 = MI_GET_PAGE_FRAME_FROM_PTE(&DemandZeroPte);
      if ( MiIsPfnInline(v24) )
      {
        if ( (ULONG_PTR *)(*(_QWORD *)(BugCheckParameter4 + 8) | 0x8000000000000000uLL) == v7 )
          KeBugCheckEx(0x1Au, 0x41300uLL, (ULONG_PTR)v7, v26, BugCheckParameter4);
        v28 = *(_WORD *)(BugCheckParameter4 + 32);
        v29 = v27 + ((*(_QWORD *)(BugCheckParameter4 + 40) & 0xFFFFFFFFFLL) == 0xFFFFFFFFDLL);
        if ( v28 < v29 )
          KeBugCheckEx(0x1Au, 0x41301uLL, (ULONG_PTR)v7, v26, BugCheckParameter4);
        if ( v28 > v29 )
        {
          v20 = v27;
          v19 = v27;
          goto LABEL_50;
        }
        v25 = 0xFFFFFA8000000000uLL;
      }
      v30 = v9;
      v53 = (volatile signed __int64 *)(v9 + 24);
      v31 = *(_QWORD *)(v9 + 24) & 0xFFFFFFFFFLL;
      if ( v31 == 0xFFFFFFFFFLL )
        v9 = 0LL;
      else
        v9 = v25 + 48 * v31;
      v59 = (__int64)(v30 - v25) / 48;
      v32 = v27 + ((v26 & 0x800) != 0 ? 3 : 0);
      if ( a3 == 2 )
      {
        LOBYTE(v32) = v32 | 0x18;
      }
      else if ( !a3 )
      {
        LOBYTE(v32) = v32 | 8;
      }
      DemandZeroPte = MiMakeDemandZeroPte(v32);
      *(_QWORD *)(v30 + 16) = DemandZeroPte;
      if ( (v8 & v33) == 0 )
      {
        v34 = v62;
        v35 = CurrentThread;
        *(_BYTE *)(v62 + 189) |= 0x10u;
        *(_DWORD *)(v34 + 80) = 0;
        *(_QWORD *)(v34 + 88) = 0LL;
        v8 |= v33;
        *(_QWORD *)(v34 + 240) = v30;
        *(_QWORD *)(v34 + 152) = v35;
      }
      *(_QWORD *)(v30 + 40) ^= (*(_QWORD *)(v30 + 40) ^ MiGetContainingPageTable((unsigned __int64)v7)) & 0xFFFFFFFFFLL;
      v36 = MiLockPageInline(v30);
      *(_BYTE *)(v30 + 34) |= 0x20u;
      v48 = v36;
      if ( v62 )
        *(_QWORD *)v30 = v62 + 32;
      else
        *(_QWORD *)v30 = 0LL;
      *v53 &= 0xC000000000000000uLL;
      MiAddLockedPageCharge(v30, 1LL, v37);
      v38 = *(_BYTE *)(v30 + 34) & 0xFA;
      *(_QWORD *)(v30 + 8) = v7;
      *(_BYTE *)(v30 + 34) = v38 | 2;
      *(_BYTE *)(v30 + 35) ^= (EffectivePagePriorityThread ^ *(_BYTE *)(v30 + 35)) & 7;
      _InterlockedAnd64(v53, 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v48);
      v19 = 1;
      MiReturnFaultCharges((__int64)v54, 1uLL, 0);
      --v50;
      DemandZeroPte = MiMakeTransitionPte(v59, v32);
      *v7 = DemandZeroPte;
      if ( (unsigned __int64)v7 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v7 <= 0xFFFFF6FB7DBED7F8uLL )
        MiWritePteShadow();
      *v4 = v39;
      ++v7;
      ++v4;
      if ( v7 >= v51 )
        goto LABEL_49;
    }
  }
  v19 = 1;
LABEL_49:
  v20 = 0;
LABEL_50:
  LOBYTE(BugCheckParameter4) = v47;
  MiUnlockWorkingSetExclusive((__int64)v58, BugCheckParameter4);
  if ( v9 )
  {
    do
    {
      v40 = v9;
      v41 = *(_QWORD *)(v9 + 24) & 0xFFFFFFFFFLL;
      if ( v41 == 0xFFFFFFFFFLL )
        v9 = 0LL;
      else
        v9 = 48 * v41 - 0x58000000000LL;
      MiSetFreshPfnFromFreeList(v40);
      MiReleaseFreshPage(v42);
    }
    while ( v9 );
    v19 = 1;
  }
  if ( v50 )
    MiReturnFaultCharges((__int64)v54, v50, 0);
  v43 = (__int64)((__int64)v4 - BugCheckParameter3 - 48) >> 3;
  *(_DWORD *)(BugCheckParameter3 + 40) = (_DWORD)v43 << 12;
  if ( (_DWORD)v43 )
  {
    v44 = Process;
    _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], (unsigned int)v43);
    v72 = 0;
    v70 = 0;
    v73 = 0LL;
    v74 = 0LL;
    v69 = v19;
    v71 = 20;
    MiInsertTbFlushEntry(&v69, v65 & 0xFFFFFFFFFFFFF000uLL, (unsigned int)v43, 0);
    MiFlushTbList((__int64)&v69, v45);
    *(_QWORD *)(BugCheckParameter3 + 16) = v44;
    *(_WORD *)(BugCheckParameter3 + 10) |= 2u;
    _InterlockedExchangeAdd64((volatile signed __int64 *)&v44[1].Affinity.Bitmap[14], (unsigned int)v43);
    if ( ((unsigned __int8)MmTrackLockedPages & (unsigned __int8)v19) != 0 )
      MiAddMdlTracker(BugCheckParameter3, (unsigned int)v43, 4);
  }
  return v20;
}
