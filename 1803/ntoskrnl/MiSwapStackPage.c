/*
 * XREFs of MiSwapStackPage @ 0x140002818
 * Callers:
 *     MiTradePage @ 0x140121260 (MiTradePage.c)
 * Callees:
 *     MiGetPteFromCopyList @ 0x140002458 (MiGetPteFromCopyList.c)
 *     KeTryToFreezeThreadStack @ 0x1400025D8 (KeTryToFreezeThreadStack.c)
 *     MiCopyKstack @ 0x14000265C (MiCopyKstack.c)
 *     MiSwitchKstackPages @ 0x1400027AC (MiSwitchKstackPages.c)
 *     MiSwapStackPageNoDpc @ 0x140002BDC (MiSwapStackPageNoDpc.c)
 *     MiCanStealKernelStack @ 0x140003BA8 (MiCanStealKernelStack.c)
 *     MiGetLeafPfnBuddy @ 0x140003F94 (MiGetLeafPfnBuddy.c)
 *     KeGenericCallDpc @ 0x140004B40 (KeGenericCallDpc.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiGetPage @ 0x140018200 (MiGetPage.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     KiReleaseThreadLockSafe @ 0x14002F8F0 (KiReleaseThreadLockSafe.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140030AF8 (MiRemoveLockedPageChargeAndDecRef.c)
 *     KeFlushSingleTb @ 0x14003B184 (KeFlushSingleTb.c)
 *     MiGetAnyMultiplexedVm @ 0x1400493AC (MiGetAnyMultiplexedVm.c)
 *     MiSetPfnTbFlushStamp @ 0x1400562B4 (MiSetPfnTbFlushStamp.c)
 *     MiAddLockedPageCharge @ 0x140058004 (MiAddLockedPageCharge.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     KiReleaseThreadStateLock @ 0x1400EDBF0 (KiReleaseThreadStateLock.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     MiLockPageTableInternal @ 0x140120C90 (MiLockPageTableInternal.c)
 *     MiPageToNode @ 0x140122B50 (MiPageToNode.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     KeExpandKernelStackAndCalloutInternal @ 0x14012F870 (KeExpandKernelStackAndCalloutInternal.c)
 *     MiReleaseFreshPage @ 0x14013A6E0 (MiReleaseFreshPage.c)
 */

__int64 __fastcall MiSwapStackPage(__int64 a1, unsigned int *a2, __int64 a3, ULONG_PTR *a4, _DWORD *a5)
{
  unsigned __int64 v6; // r14
  int v7; // r13d
  __int64 v8; // rcx
  __int64 AnyMultiplexedVm; // rsi
  int v10; // r8d
  unsigned __int64 v11; // rdi
  unsigned int v12; // r12d
  __int64 v13; // r15
  unsigned int v14; // eax
  int v15; // edi
  __int64 Page; // rax
  __int64 v17; // rdi
  __int64 v18; // r12
  __int64 v19; // rdx
  __int64 v20; // r14
  char v21; // al
  __int64 v22; // rdx
  ULONG_PTR v23; // rsi
  __int64 LeafPfnBuddy; // r13
  _QWORD *PteFromCopyList; // r15
  __int64 v27; // rdx
  int v28; // ecx
  unsigned __int8 v29; // al
  char v30; // al
  __int64 v31; // rcx
  __int64 v32; // rdx
  int v33; // eax
  unsigned __int64 v34; // rbx
  ULONG_PTR v35; // [rsp+38h] [rbp-41h]
  struct _KTHREAD *CurrentThread; // [rsp+40h] [rbp-39h]
  __int64 v37; // [rsp+48h] [rbp-31h] BYREF
  ULONG_PTR v38; // [rsp+50h] [rbp-29h]
  ULONG_PTR BugCheckParameter3[4]; // [rsp+58h] [rbp-21h] BYREF
  int v40; // [rsp+78h] [rbp-1h]
  __int64 v41; // [rsp+80h] [rbp+7h]
  __int64 v42; // [rsp+88h] [rbp+Fh]
  __int64 v43; // [rsp+90h] [rbp+17h]
  __int64 v44; // [rsp+D8h] [rbp+5Fh]
  char v45; // [rsp+D8h] [rbp+5Fh]

  CurrentThread = KeGetCurrentThread();
  v6 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  v41 = (__int64)(v6 << 25) >> 16;
  v7 = ((__int64 (*)(void))MiGetSystemRegionType)();
  if ( v7 == 15 )
  {
    v8 = 4LL;
  }
  else
  {
    if ( v7 != 12 && v7 != 3 )
      return 0LL;
    v8 = 1LL;
  }
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(v8);
  v43 = AnyMultiplexedVm;
  if ( !byte_1403CC514 )
    return 0LL;
  v11 = *(_QWORD *)(a1 + 40);
  v44 = *(_QWORD *)(qword_1403CBD88 + 8 * ((v11 >> 40) & 0x3FF));
  v12 = 512;
  v13 = (a1 + 0x58000000000LL) / 48;
  v38 = v13;
  if ( v10 == -1 )
  {
    v14 = (unsigned int)MiPageToNode((a1 + 0x58000000000LL) / 48, 0LL) << byte_1403CB699;
    v15 = dword_1403CB6D8 & v13 | (((v11 >> 36) & 3) << byte_1403CB69A);
  }
  else
  {
    v12 = 560;
    v15 = v10 & ~dword_1403CB6D8;
    v14 = dword_1403CB6D8 & v13;
  }
  Page = MiGetPage(v44, v14 | v15, v12);
  v35 = Page;
  v17 = Page;
  if ( Page == -1 )
    return 0LL;
  v18 = 48 * Page - 0x58000000000LL;
  MiSetPfnTbFlushStamp(v18, 0LL, 0LL);
  v42 = 0LL;
  v45 = MiLockWorkingSetShared(AnyMultiplexedVm);
  MiLockPageAtDpcInline(a1);
  if ( v6 != (*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL)
    || v7 != (unsigned int)MiGetSystemRegionType(v41)
    || !(unsigned int)MiCanStealKernelStack(a1, 1LL)
    || (v20 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
        !(unsigned int)MiLockPageTableInternal(AnyMultiplexedVm, v20, 1LL)) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_47;
  }
  if ( (MiFlags & 0x800) != 0 || (unsigned int)MiSwapStackPageNoDpc(a2, a1, v18) != 1 )
  {
    LeafPfnBuddy = MiGetLeafPfnBuddy(a1);
    if ( ((LeafPfnBuddy + 32) & 0xFFFFFFFFFFFFFFDFuLL) != 0 )
    {
      PteFromCopyList = MiGetPteFromCopyList(a2, v17, -1LL);
      if ( LeafPfnBuddy != -16 && (struct _KTHREAD *)LeafPfnBuddy != CurrentThread )
      {
        if ( KeTryToFreezeThreadStack(LeafPfnBuddy, &v37) == 1 )
        {
          MiCopyKstack(v18, a1, (__int64)PteFromCopyList);
          MiSwitchKstackPages(v18, a1);
          *(_QWORD *)(a1 + 40) &= ~0x200000000000000uLL;
          *(_BYTE *)(a1 + 34) &= 0xC7u;
          v30 = *(_BYTE *)(a1 + 35) & 0xDF;
          *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
          *(_BYTE *)(a1 + 35) = v30;
          _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          KeFlushSingleTb(v41, 0LL, 2LL);
          KiReleaseThreadStateLock(v31, v37, 0LL);
          KiReleaseThreadLockSafe(LeafPfnBuddy);
          *PteFromCopyList = ZeroPte;
          if ( (unsigned int)MiPteInShadowRange(PteFromCopyList) )
            MiWritePteShadow();
          MiUnlockPageTableInternal(AnyMultiplexedVm, v20);
          LOBYTE(v22) = v45;
          goto LABEL_14;
        }
        goto LABEL_22;
      }
      if ( (unsigned int)MiAddLockedPageCharge(a1, 0LL) )
      {
        v42 = a1;
LABEL_22:
        _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiUnlockPageTableInternal(AnyMultiplexedVm, v20);
        LOBYTE(v27) = v45;
        MiUnlockWorkingSetShared(AnyMultiplexedVm, v27);
        v23 = v35;
        BugCheckParameter3[3] = (ULONG_PTR)CurrentThread;
        BugCheckParameter3[0] = v38;
        BugCheckParameter3[1] = v35;
        BugCheckParameter3[2] = (ULONG_PTR)PteFromCopyList;
        v40 = 0;
        if ( LeafPfnBuddy == -16 || (struct _KTHREAD *)LeafPfnBuddy == CurrentThread )
        {
          v33 = KeExpandKernelStackAndCalloutInternal((ULONG_PTR)MiJumpStack, (ULONG_PTR)BugCheckParameter3, 0LL);
          v28 = v40;
          if ( v33 < 0 )
            v28 = v33;
          v40 = v28;
        }
        else
        {
          KeGenericCallDpc(MiDoStackCopy, BugCheckParameter3);
          v28 = v40;
        }
        if ( v28 >= 0 )
        {
          *a5 = 0;
          v29 = MiLockPageInline(a1);
          *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
          _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v29);
          goto LABEL_15;
        }
        *PteFromCopyList = ZeroPte;
        if ( (unsigned int)MiPteInShadowRange(PteFromCopyList) )
          MiWritePteShadow();
        MiReleaseFreshPage(v18);
        if ( v42 )
        {
          v34 = (unsigned __int8)MiLockPageInline(v42);
          MiRemoveLockedPageChargeAndDecRef(v42);
          _InterlockedAnd64((volatile signed __int64 *)(v42 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v34);
        }
        return 0LL;
      }
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiUnlockPageTableInternal(AnyMultiplexedVm, v20);
      LOBYTE(v32) = v45;
      MiUnlockWorkingSetShared(AnyMultiplexedVm, v32);
      *PteFromCopyList = ZeroPte;
      if ( (unsigned int)MiPteInShadowRange(PteFromCopyList) )
        MiWritePteShadow();
LABEL_48:
      MiReleaseFreshPage(v18);
      return 0LL;
    }
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiUnlockPageTableInternal(AnyMultiplexedVm, v20);
LABEL_47:
    LOBYTE(v19) = v45;
    MiUnlockWorkingSetShared(AnyMultiplexedVm, v19);
    goto LABEL_48;
  }
  *(_QWORD *)(a1 + 40) &= ~0x200000000000000uLL;
  *(_BYTE *)(a1 + 34) &= 0xC7u;
  v21 = *(_BYTE *)(a1 + 35) & 0xDF;
  *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
  *(_BYTE *)(a1 + 35) = v21;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiUnlockPageTableInternal(AnyMultiplexedVm, v20);
  LOBYTE(v22) = v45;
LABEL_14:
  MiUnlockWorkingSetShared(AnyMultiplexedVm, v22);
  v23 = v35;
  *a5 = 1;
LABEL_15:
  *(_WORD *)(a1 + 32) = 0;
  if ( a4 )
    *a4 = v23;
  return 1LL;
}
