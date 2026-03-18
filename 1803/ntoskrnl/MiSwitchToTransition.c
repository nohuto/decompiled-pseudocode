/*
 * XREFs of MiSwitchToTransition @ 0x140258498
 * Callers:
 *     MmRotatePhysicalView @ 0x1405BACA0 (MmRotatePhysicalView.c)
 * Callees:
 *     MiSetPfnBlink @ 0x140003784 (MiSetPfnBlink.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiGetPage @ 0x140018200 (MiGetPage.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     MiInsertTbFlushEntry @ 0x140026270 (MiInsertTbFlushEntry.c)
 *     MiPageAttributeBatchChangeNeeded @ 0x14004FBC4 (MiPageAttributeBatchChangeNeeded.c)
 *     MiChangePageAttributeBatch @ 0x1400519A0 (MiChangePageAttributeBatch.c)
 *     MiGetEffectivePagePriorityThread @ 0x14005605C (MiGetEffectivePagePriorityThread.c)
 *     MiInitializePageColorBase @ 0x140057920 (MiInitializePageColorBase.c)
 *     MiAddLockedPageCharge @ 0x140058004 (MiAddLockedPageCharge.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiIsProbeActive @ 0x1400C3E6C (MiIsProbeActive.c)
 *     MiReturnFaultCharges @ 0x1400D13B8 (MiReturnFaultCharges.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     MiObtainFaultCharges @ 0x14011C410 (MiObtainFaultCharges.c)
 *     MiLockPageTableInternal @ 0x140120C90 (MiLockPageTableInternal.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 *     MiIsPfnInline @ 0x140136FF0 (MiIsPfnInline.c)
 *     MiReleaseFreshPage @ 0x14013A6E0 (MiReleaseFreshPage.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401A6474 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MiGetContainingPageTable @ 0x1401A64B8 (MiGetContainingPageTable.c)
 *     MiMakeDemandZeroPte @ 0x1401A65C8 (MiMakeDemandZeroPte.c)
 *     MiMakeTransitionPte @ 0x1401A669C (MiMakeTransitionPte.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     MiAddMdlTracker @ 0x1402539C4 (MiAddMdlTracker.c)
 *     MiSetFreshPfnFromFreeList @ 0x140265454 (MiSetFreshPfnFromFreeList.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140265490 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiWaitForFreePage @ 0x14026B8B0 (MiWaitForFreePage.c)
 *     MiGetReadyInPageBlock @ 0x14074D190 (MiGetReadyInPageBlock.c)
 */

__int64 __fastcall MiSwitchToTransition(ULONG_PTR a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rdx
  unsigned __int64 v5; // rsi
  unsigned __int8 v6; // bl
  __int64 v7; // rdi
  volatile signed __int32 *v8; // r12
  ULONG_PTR *v9; // r15
  unsigned int v10; // r11d
  unsigned int v11; // r14d
  unsigned int v12; // r13d
  unsigned int v13; // eax
  int v14; // r9d
  __int64 Page; // rax
  __int64 v16; // r15
  __int64 v17; // r9
  __int64 v18; // r14
  unsigned __int64 v19; // r15
  unsigned int v20; // r12d
  unsigned __int8 v21; // al
  __int64 v22; // r8
  unsigned __int64 v23; // rax
  ULONG_PTR BugCheckParameter4; // rdx
  ULONG_PTR v25; // r9
  unsigned int v26; // r10d
  unsigned __int16 v27; // ax
  unsigned __int16 v28; // cx
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // r8
  __int64 v32; // rax
  unsigned int v33; // r14d
  __int64 v34; // r8
  unsigned __int8 v35; // r10
  __int64 v36; // r11
  __int64 v37; // rax
  struct _KTHREAD *v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rcx
  char v41; // al
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r10
  __int64 v45; // r8
  unsigned int v46; // esi
  ULONG_PTR v47; // rdi
  _KPROCESS *v48; // r14
  __int64 v49; // rdx
  __int64 v50; // r8
  unsigned __int8 v52; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v53; // [rsp+31h] [rbp-CFh]
  unsigned int v55; // [rsp+38h] [rbp-C8h]
  unsigned int v56; // [rsp+3Ch] [rbp-C4h]
  __int64 v57; // [rsp+40h] [rbp-C0h]
  __int64 v58; // [rsp+48h] [rbp-B8h]
  __int64 v59; // [rsp+48h] [rbp-B8h]
  unsigned int v60; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v61; // [rsp+50h] [rbp-B0h]
  int i; // [rsp+58h] [rbp-A8h]
  volatile signed __int64 *v63; // [rsp+58h] [rbp-A8h]
  char EffectivePagePriorityThread; // [rsp+60h] [rbp-A0h]
  ULONG_PTR DemandZeroPte; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int16 *v66; // [rsp+70h] [rbp-90h]
  ULONG_PTR BugCheckParameter3; // [rsp+78h] [rbp-88h]
  __int64 v68; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 ContainingPageTable; // [rsp+88h] [rbp-78h]
  __int64 ReadyInPageBlock; // [rsp+90h] [rbp-70h]
  unsigned __int64 v71; // [rsp+98h] [rbp-68h]
  struct _KTHREAD *CurrentThread; // [rsp+A0h] [rbp-60h]
  __int64 v73; // [rsp+B0h] [rbp-50h]
  ULONG_PTR v74; // [rsp+B8h] [rbp-48h]
  _KPROCESS *Process; // [rsp+C0h] [rbp-40h]
  volatile signed __int32 *v76; // [rsp+C8h] [rbp-38h] BYREF
  unsigned __int16 v77; // [rsp+D0h] [rbp-30h]
  unsigned __int16 v78; // [rsp+D2h] [rbp-2Eh]
  int v79; // [rsp+E0h] [rbp-20h] BYREF
  __int16 v80; // [rsp+E4h] [rbp-1Ch]
  __int64 v81; // [rsp+E8h] [rbp-18h]
  __int64 v82; // [rsp+F0h] [rbp-10h]
  __int64 v83; // [rsp+F8h] [rbp-8h]

  BugCheckParameter3 = a1;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)CurrentThread);
  ReadyInPageBlock = MiGetReadyInPageBlock(v4);
  v71 = *(_QWORD *)(a1 + 32);
  v5 = ((v71 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v66 = &Process[1].IdealNode[12];
  v55 = 0;
  v6 = 0;
  MiInitializePageColorBase((__int64)&Process[1].IdealNode[12], 0, (__int64)&v76);
  v58 = 0xFFFFFFFFFLL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = *(ULONG_PTR **)(qword_1403CBD88 + 8LL * *((unsigned __int16 *)&Process[1].SecureState.Flags + 3));
  v57 = (__int64)v9;
  ContainingPageTable = -1LL;
  v11 = 0;
  v56 = MiObtainFaultCharges(v9, v10, 2);
  v12 = v56;
  if ( !v56 )
    goto LABEL_14;
  v13 = v77;
  v14 = v78;
  v60 = v77;
  for ( i = v78; ; v14 = i )
  {
    Page = MiGetPage((__int64)v9, v14 | _InterlockedExchangeAdd(v76, 1u) & v13, 0);
    v16 = Page;
    if ( Page == -1 )
      break;
    v7 = 48 * Page - 0x58000000000LL;
    if ( (unsigned int)MiPageAttributeBatchChangeNeeded(v7, a3) == 1 )
    {
      *(_QWORD *)(v7 + 16) = v8;
      v8 = (volatile signed __int32 *)v7;
    }
    MiSetPfnBlink(v7, v58, 0);
    v58 = v16;
    v9 = (ULONG_PTR *)v57;
    ++v11;
LABEL_9:
    if ( v11 == v56 )
      goto LABEL_12;
    v13 = v60;
  }
  if ( !v11 )
  {
    v9 = (ULONG_PTR *)v57;
    MiWaitForFreePage(v57);
    goto LABEL_9;
  }
  MiReturnFaultCharges(v57, v56 - v11, 0);
  v12 = v11;
  v56 = v11;
LABEL_12:
  if ( v8 )
  {
    v68 = 0LL;
    MiSetOriginalPtePfnFromFreeList(&v68);
    MiChangePageAttributeBatch(v8, a3, v68, v17);
  }
LABEL_14:
  v18 = (__int64)v66;
  v19 = 0LL;
  v20 = 0;
  v61 = v5 + 8LL * v12;
  v21 = MiLockWorkingSetShared((__int64)v66);
  v52 = v21;
  if ( v5 >= v61 )
    goto LABEL_30;
  v74 = BugCheckParameter3 - ((v71 >> 9) & 0x7FFFFFFFF8LL) + 0x98000000000LL;
  while ( 2 )
  {
    if ( v19 )
    {
      if ( (v5 & 0xFFF) == 0 )
      {
        MiUnlockPageTableInternal(v18, v19);
        goto LABEL_19;
      }
    }
    else
    {
LABEL_19:
      v19 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockPageTableInternal(v18, v19, 0LL);
      ContainingPageTable = MiGetContainingPageTable(v5);
    }
    if ( (unsigned int)MiIsProbeActive(v5, 1LL, 3) )
      goto LABEL_27;
    DemandZeroPte = MI_READ_PTE_LOCK_FREE(v5);
    if ( (DemandZeroPte & 1) == 0 )
      KeBugCheckEx(0x1Au, 0x41200uLL, v5, DemandZeroPte, BugCheckParameter3);
    v23 = MI_GET_PAGE_FRAME_FROM_PTE((unsigned __int64)&DemandZeroPte);
    if ( !MiIsPfnInline(v23) )
      goto LABEL_33;
    if ( (*(_QWORD *)(BugCheckParameter4 + 8) | 0x8000000000000000uLL) == v5 )
      KeBugCheckEx(0x1Au, 0x41300uLL, v5, v25, BugCheckParameter4);
    v22 = 0xFFFFFFFFDLL;
    v27 = *(_WORD *)(BugCheckParameter4 + 32);
    v28 = v26 + ((*(_QWORD *)(BugCheckParameter4 + 40) & 0xFFFFFFFFFLL) == 0xFFFFFFFFDLL);
    if ( v27 < v28 )
      KeBugCheckEx(0x1Au, 0x41301uLL, v5, v25, BugCheckParameter4);
    if ( v27 <= v28 )
    {
LABEL_33:
      v59 = v7;
      v63 = (volatile signed __int64 *)(v7 + 24);
      v31 = v7;
      v32 = *(_QWORD *)(v7 + 24) & 0xFFFFFFFFFLL;
      if ( v32 == 0xFFFFFFFFFLL )
        v7 = 0LL;
      else
        v7 = 48 * v32 - 0x58000000000LL;
      v73 = (v31 + 0x58000000000LL) / 48;
      v33 = v26 + ((v25 & 0x800) != 0 ? 3 : 0);
      if ( a3 == 2 )
      {
        LOBYTE(v33) = v33 | 0x18;
      }
      else if ( !a3 )
      {
        LOBYTE(v33) = v33 | 8;
      }
      DemandZeroPte = MiMakeDemandZeroPte(v33);
      *(_QWORD *)(v34 + 16) = DemandZeroPte;
      if ( (v6 & v35) == 0 )
      {
        v37 = ReadyInPageBlock;
        v38 = CurrentThread;
        *(_BYTE *)(ReadyInPageBlock + 189) |= 0x10u;
        *(_DWORD *)(v37 + 80) = 0;
        *(_QWORD *)(v37 + 88) = 0LL;
        v6 |= v35;
        *(_QWORD *)(v37 + 240) = v34;
        *(_QWORD *)(v37 + 152) = v38;
      }
      *(_QWORD *)(v34 + 40) ^= v36 & (ContainingPageTable ^ *(_QWORD *)(v34 + 40));
      v53 = MiLockPageInline(v34);
      v39 = ReadyInPageBlock;
      *(_BYTE *)(v59 + 34) |= 0x20u;
      if ( v39 )
        v40 = v39 + 32;
      else
        v40 = 0LL;
      *(_QWORD *)v59 = v40;
      *v63 &= 0xC000000000000000uLL;
      MiAddLockedPageCharge(v59, 1);
      v41 = *(_BYTE *)(v59 + 34) & 0xFA;
      *(_QWORD *)(v59 + 8) = v5;
      *(_BYTE *)(v59 + 34) = v41 | 2;
      *(_BYTE *)(v59 + 35) ^= (EffectivePagePriorityThread ^ *(_BYTE *)(v59 + 35)) & 7;
      _InterlockedAnd64(v63, 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v53);
      MiReturnFaultCharges(v57, 1uLL, 0);
      DemandZeroPte = MiMakeTransitionPte(v73, v33);
      *(_QWORD *)v5 = DemandZeroPte;
      if ( MiPteInShadowRange(v5) )
        MiWritePteShadow(v43, v42, v22);
      v18 = (__int64)v66;
      *(_QWORD *)(v74 + v5 + 48) = v44;
      ++v20;
      v5 += 8LL;
      if ( v5 >= v61 )
        goto LABEL_27;
      continue;
    }
    break;
  }
  v55 = v26;
LABEL_27:
  if ( v19 )
    MiUnlockPageTableInternal(v18, v19);
  v21 = v52;
LABEL_30:
  MiUnlockWorkingSetShared(v18, v21, v22);
  if ( v7 )
  {
    do
    {
      v29 = v7;
      v30 = *(_QWORD *)(v7 + 24) & 0xFFFFFFFFFLL;
      if ( v30 == 0xFFFFFFFFFLL )
        v7 = 0LL;
      else
        v7 = 48 * v30 - 0x58000000000LL;
      MiSetFreshPfnFromFreeList(v29);
      MiReleaseFreshPage(v45);
    }
    while ( v7 );
    v12 = v56;
  }
  if ( v20 == v12 )
  {
    v46 = v55;
  }
  else
  {
    MiReturnFaultCharges(v57, v12 - v20, 0);
    v46 = v55;
    if ( !v20 )
      v46 = 1;
  }
  v47 = BugCheckParameter3;
  *(_DWORD *)(BugCheckParameter3 + 40) = v20 << 12;
  if ( v20 )
  {
    v48 = Process;
    _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], v20);
    v81 = 20LL;
    v79 = 1;
    v80 = 0;
    v82 = 0LL;
    v83 = 0LL;
    MiInsertTbFlushEntry((__int64)&v79, v71 & 0xFFFFFFFFFFFFF000uLL, v20, 0);
    MiFlushTbList((__int64)&v79, v49, v50);
    *(_QWORD *)(v47 + 16) = v48;
    *(_WORD *)(v47 + 10) |= 2u;
    _InterlockedExchangeAdd64((volatile signed __int64 *)&v48[1].Affinity.Bitmap[14], v20);
    if ( (MmTrackLockedPages & 1) != 0 )
      MiAddMdlTracker(v47, v20, 4);
  }
  return v46;
}
