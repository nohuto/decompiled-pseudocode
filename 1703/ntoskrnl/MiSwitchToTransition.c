/*
 * XREFs of MiSwitchToTransition @ 0x14021430C
 * Callers:
 *     MmRotatePhysicalView @ 0x14055CBF0 (MmRotatePhysicalView.c)
 * Callees:
 *     MiReturnFaultCharges @ 0x14003B28C (MiReturnFaultCharges.c)
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiSetPfnBlink @ 0x140075C3C (MiSetPfnBlink.c)
 *     MiPageAttributeBatchChangeNeeded @ 0x14007ADB0 (MiPageAttributeBatchChangeNeeded.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiIsPfnInline @ 0x1400B54F0 (MiIsPfnInline.c)
 *     MiGetPage @ 0x1400BBC00 (MiGetPage.c)
 *     MiObtainFaultCharges @ 0x1400CDE40 (MiObtainFaultCharges.c)
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     MiGetEffectivePagePriorityThread @ 0x1400FE040 (MiGetEffectivePagePriorityThread.c)
 *     MiChangePageAttributeBatch @ 0x14010346C (MiChangePageAttributeBatch.c)
 *     MiInitializePageColorBase @ 0x1401069F0 (MiInitializePageColorBase.c)
 *     MiAddLockedPageCharge @ 0x140109894 (MiAddLockedPageCharge.c)
 *     MiReleaseFreshPage @ 0x14010ADC8 (MiReleaseFreshPage.c)
 *     MiIsProbeActive @ 0x140122A60 (MiIsProbeActive.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiGetContainingPageTable @ 0x14017CDC0 (MiGetContainingPageTable.c)
 *     MiMakeDemandZeroPte @ 0x14017CF18 (MiMakeDemandZeroPte.c)
 *     MiMakeTransitionPte @ 0x14017CFB4 (MiMakeTransitionPte.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     MiAddMdlTracker @ 0x14020E384 (MiAddMdlTracker.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWaitForFreePage @ 0x140220450 (MiWaitForFreePage.c)
 *     MiGetReadyInPageBlock @ 0x1406B6334 (MiGetReadyInPageBlock.c)
 */

__int64 __fastcall MiSwitchToTransition(ULONG_PTR BugCheckParameter3, __int64 a2, unsigned int a3)
{
  _QWORD *v4; // r12
  __int64 v5; // rdx
  __int64 ReadyInPageBlock; // rax
  _QWORD *v7; // r14
  unsigned __int8 v8; // bl
  __int64 v9; // rsi
  unsigned int v10; // r11d
  unsigned int v11; // r15d
  LONG *SharedVm; // rdi
  KIRQL v13; // al
  __int64 v14; // rdx
  __int64 v15; // rdi
  _WORD *v16; // rax
  __int64 Page; // rax
  unsigned int v18; // r14d
  _QWORD *v19; // rdi
  __int64 DemandZeroPte; // rax
  __int64 v21; // r9
  bool i; // cf
  unsigned __int64 v23; // rax
  ULONG_PTR BugCheckParameter4; // rdx
  ULONG_PTR v25; // r9
  unsigned int v26; // r11d
  unsigned __int16 v27; // ax
  unsigned __int16 v28; // cx
  __int64 v29; // r10
  __int64 v30; // rax
  unsigned int v31; // r15d
  __int64 v32; // rax
  _QWORD *v33; // r10
  unsigned __int8 v34; // r11
  __int64 v35; // rdx
  struct _KTHREAD *v36; // rax
  unsigned __int64 ContainingPageTable; // rax
  __int64 v38; // r10
  unsigned __int64 v39; // rdi
  char v40; // cl
  char v41; // al
  __int64 v42; // r10
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // r12
  _KPROCESS *v47; // rdi
  _KPROCESS *v48; // rdx
  unsigned __int8 v50; // [rsp+30h] [rbp-D0h]
  unsigned int v52; // [rsp+38h] [rbp-C8h]
  _QWORD *v53; // [rsp+40h] [rbp-C0h]
  __int64 v54; // [rsp+48h] [rbp-B8h]
  volatile signed __int64 *v55; // [rsp+48h] [rbp-B8h]
  __int64 v56; // [rsp+50h] [rbp-B0h]
  __int64 v57; // [rsp+50h] [rbp-B0h]
  ULONG_PTR *v58; // [rsp+58h] [rbp-A8h]
  char EffectivePagePriorityThread; // [rsp+60h] [rbp-A0h]
  __int64 v60; // [rsp+68h] [rbp-98h]
  ULONG_PTR TransitionPte; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int16 *v62; // [rsp+78h] [rbp-88h]
  __int64 v63; // [rsp+80h] [rbp-80h]
  __int64 v64; // [rsp+88h] [rbp-78h]
  struct _KTHREAD *CurrentThread; // [rsp+90h] [rbp-70h]
  _KPROCESS *Process; // [rsp+98h] [rbp-68h]
  unsigned __int64 v67; // [rsp+A0h] [rbp-60h]
  _WORD *v68; // [rsp+A8h] [rbp-58h] BYREF
  __int16 v69; // [rsp+B0h] [rbp-50h]
  unsigned __int16 v70; // [rsp+B2h] [rbp-4Eh]
  int v71; // [rsp+C0h] [rbp-40h] BYREF
  __int16 v72; // [rsp+C4h] [rbp-3Ch]
  int v73; // [rsp+C8h] [rbp-38h]
  int v74; // [rsp+CCh] [rbp-34h]
  __int64 v75; // [rsp+D0h] [rbp-30h]
  __int64 v76; // [rsp+D8h] [rbp-28h]

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)CurrentThread);
  v4 = (_QWORD *)(BugCheckParameter3 + 48);
  ReadyInPageBlock = MiGetReadyInPageBlock(v5);
  v67 = *(_QWORD *)(BugCheckParameter3 + 32);
  v64 = ReadyInPageBlock;
  v7 = (_QWORD *)(((v67 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v8 = 0;
  v62 = &Process[1].IdealNode[12];
  MiInitializePageColorBase((__int64)&Process[1].IdealNode[12], 0, (__int64)&v68);
  v9 = 0LL;
  v60 = 0LL;
  v56 = 0xFFFFFFFFFLL;
  v58 = *(ULONG_PTR **)(qword_14036C8F8 + 8LL * WORD2(Process[1].SecurePid));
  v52 = MiObtainFaultCharges(v58, v10, 2);
  v11 = v52;
  v54 = v52;
  v53 = &v7[v52];
  while ( 2 )
  {
    SharedVm = MiGetSharedVm((__int64)v62);
    v13 = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
    v14 = v54;
    v50 = v13;
    while ( (unsigned int)MiIsProbeActive((unsigned __int64)v7, v14, 3) )
    {
      --v53;
      if ( !--v11 )
      {
        v18 = 1;
        goto LABEL_44;
      }
      v54 = v11;
      v14 = v11;
    }
    v15 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v15 >= v11 )
      {
        v19 = v53;
        goto LABEL_17;
      }
      v16 = v68;
      ++*v68;
      Page = MiGetPage((__int64)v58, v70 | (unsigned int)(unsigned __int16)(v69 & *v16), 0);
      v63 = Page;
      if ( Page == -1 )
        break;
      v9 = 48 * Page - 0x58000000000LL;
      if ( (unsigned int)MiPageAttributeBatchChangeNeeded(v9, a3) == 1 )
      {
        *(_QWORD *)(v9 + 16) = v60;
        v60 = v9;
      }
      MiSetPfnBlink(v9, v56, 0);
      v15 = (unsigned int)(v15 + 1);
      v56 = v63;
    }
    if ( !(_DWORD)v15 )
    {
      MiUnlockWorkingSetExclusive((__int64)v62, v50);
      MiWaitForFreePage(v58);
      continue;
    }
    break;
  }
  v19 = &v7[v15];
  v53 = v19;
LABEL_17:
  if ( v60 )
  {
    DemandZeroPte = MiMakeDemandZeroPte(4);
    MiChangePageAttributeBatch(v21, a3, DemandZeroPte);
  }
  for ( i = v7 < v19; i; i = v7 < v53 )
  {
    TransitionPte = MI_READ_PTE_LOCK_FREE(v7);
    if ( (TransitionPte & 1) == 0 )
      KeBugCheckEx(0x1Au, 0x41200uLL, (ULONG_PTR)v7, TransitionPte, BugCheckParameter3);
    v23 = MI_GET_PAGE_FRAME_FROM_PTE(&TransitionPte);
    if ( MiIsPfnInline(v23) )
    {
      if ( (_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 8) | 0x8000000000000000uLL) == v7 )
        KeBugCheckEx(0x1Au, 0x41300uLL, (ULONG_PTR)v7, v25, BugCheckParameter4);
      v27 = *(_WORD *)(BugCheckParameter4 + 32);
      v28 = v26 + ((*(_QWORD *)(BugCheckParameter4 + 40) & 0xFFFFFFFFFLL) == 0xFFFFFFFFDLL);
      if ( v27 < v28 )
        KeBugCheckEx(0x1Au, 0x41301uLL, (ULONG_PTR)v7, v25, BugCheckParameter4);
      if ( v27 > v28 )
      {
        v18 = v26;
        goto LABEL_44;
      }
    }
    v57 = v9;
    v55 = (volatile signed __int64 *)(v9 + 24);
    v29 = v9;
    v30 = *(_QWORD *)(v9 + 24) & 0xFFFFFFFFFLL;
    if ( v30 == 0xFFFFFFFFFLL )
      v9 = 0LL;
    else
      v9 = 48 * v30 - 0x58000000000LL;
    v63 = (v29 + 0x58000000000LL) / 48;
    v31 = v26 + ((v25 & 0x800) != 0 ? 3 : 0);
    if ( a3 == 2 )
    {
      LOBYTE(v31) = v31 | 0x18;
    }
    else if ( !a3 )
    {
      LOBYTE(v31) = v31 | 8;
    }
    v32 = MiMakeDemandZeroPte(v31);
    v35 = v64;
    TransitionPte = v32;
    v33[2] = v32;
    *v33 = v35 + 32;
    if ( (v8 & v34) == 0 )
    {
      v36 = CurrentThread;
      *(_BYTE *)(v35 + 189) |= 0x10u;
      *(_DWORD *)(v35 + 80) = 0;
      *(_QWORD *)(v35 + 88) = 0LL;
      *(_QWORD *)(v35 + 152) = v36;
      v8 |= v34;
      *(_QWORD *)(v35 + 240) = v33;
    }
    ContainingPageTable = MiGetContainingPageTable((unsigned __int64)v7);
    *(_QWORD *)(v38 + 40) ^= (*(_QWORD *)(v38 + 40) ^ ContainingPageTable) & 0xFFFFFFFFFLL;
    v39 = (unsigned __int8)MiLockPageInline(v38);
    *(_BYTE *)(v57 + 34) |= 0x20u;
    *v55 &= 0xC000000000000000uLL;
    MiAddLockedPageCharge(v57, 1);
    v40 = *(_BYTE *)(v57 + 34) & 0xF8 | 2;
    v41 = (EffectivePagePriorityThread ^ *(_BYTE *)(v57 + 35)) & 7;
    *(_QWORD *)(v57 + 8) = v7;
    *(_BYTE *)(v57 + 35) ^= v41;
    *(_BYTE *)(v57 + 34) = v40;
    _InterlockedAnd64(v55, 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v39);
    MiReturnFaultCharges((__int64)v58, 1uLL, 0LL);
    --v52;
    TransitionPte = MiMakeTransitionPte(v63, v31);
    *v7 = TransitionPte;
    if ( MiPteInShadowRange((unsigned __int64)v7) )
      MiWritePteShadow();
    *v4 = v42;
    ++v7;
    ++v4;
  }
  v18 = 0;
LABEL_44:
  while ( v9 )
  {
    v43 = *(_QWORD *)(v9 + 24) & 0xFFFFFFFFFLL;
    if ( v43 == 0xFFFFFFFFFLL )
      v9 = 0LL;
    else
      v9 = 48 * v43 - 0x58000000000LL;
    v44 = MiMakeDemandZeroPte(4);
    *(_QWORD *)(v45 + 16) = v44;
    MiReleaseFreshPage(v45);
  }
  MiUnlockWorkingSetExclusive((__int64)v62, v50);
  if ( v52 )
    MiReturnFaultCharges((__int64)v58, v52, 0LL);
  v46 = (__int64)((__int64)v4 - BugCheckParameter3 - 48) >> 3;
  *(_DWORD *)(BugCheckParameter3 + 40) = (_DWORD)v46 << 12;
  if ( (_DWORD)v46 )
  {
    v47 = Process;
    _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], (unsigned int)v46);
    v74 = 0;
    v72 = 0;
    v75 = 0LL;
    v76 = 0LL;
    v71 = 1;
    v73 = 20;
    MiInsertTbFlushEntry((__int64)&v71, v67 & 0xFFFFFFFFFFFFF000uLL, (unsigned int)v46, 0);
    MiFlushTbList((__int64)&v71, v48);
    *(_QWORD *)(BugCheckParameter3 + 16) = v47;
    *(_WORD *)(BugCheckParameter3 + 10) |= 2u;
    _InterlockedExchangeAdd64((volatile signed __int64 *)&v47[1].Affinity.Bitmap[14], (unsigned int)v46);
    if ( (MmTrackLockedPages & 1) != 0 )
      MiAddMdlTracker(BugCheckParameter3, (unsigned int)v46, 4);
  }
  return v18;
}
