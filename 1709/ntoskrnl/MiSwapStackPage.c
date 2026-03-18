/*
 * XREFs of MiSwapStackPage @ 0x1400CE138
 * Callers:
 *     MiTradePage @ 0x140078860 (MiTradePage.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiAddLockedPageCharge @ 0x140027170 (MiAddLockedPageCharge.c)
 *     MiSetPfnTbFlushStamp @ 0x1400280B0 (MiSetPfnTbFlushStamp.c)
 *     KeExpandKernelStackAndCalloutInternal @ 0x140028AC0 (KeExpandKernelStackAndCalloutInternal.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140030A90 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiGetPage @ 0x1400489F0 (MiGetPage.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x140057900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiGetAnyMultiplexedVm @ 0x1400C0094 (MiGetAnyMultiplexedVm.c)
 *     MiReleaseFreshPage @ 0x1400C538C (MiReleaseFreshPage.c)
 *     MiPageToNode @ 0x1400C7140 (MiPageToNode.c)
 *     KeFlushSingleTb @ 0x1400CA124 (KeFlushSingleTb.c)
 *     MiCanStealKernelStack @ 0x1400CE71C (MiCanStealKernelStack.c)
 *     MiSwapStackPageNoDpc @ 0x1400CE7A0 (MiSwapStackPageNoDpc.c)
 *     MiGetPteFromCopyList @ 0x1400CEEDC (MiGetPteFromCopyList.c)
 *     MiGetLeafPfnBuddy @ 0x1400D00B8 (MiGetLeafPfnBuddy.c)
 *     MiSwitchKstackPages @ 0x1400D059C (MiSwitchKstackPages.c)
 *     MiCopyKstack @ 0x1400D0608 (MiCopyKstack.c)
 *     KeTryToFreezeThreadStack @ 0x1400D076C (KeTryToFreezeThreadStack.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     KeGenericCallDpc @ 0x14012F0C0 (KeGenericCallDpc.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiSwapStackPage(__int64 a1, __int64 a2, int a3, __int64 *a4, _DWORD *a5)
{
  unsigned __int64 v6; // rdi
  __int64 v7; // r12
  unsigned int v8; // r15d
  __int64 v9; // r14
  int v10; // edi
  unsigned int v11; // eax
  __int64 Page; // rax
  __int64 v13; // r15
  __int64 v14; // r14
  char *AnyMultiplexedVm; // r12
  LONG *SharedVm; // rdi
  KIRQL v17; // al
  unsigned __int8 v18; // r13
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r13
  __int64 LeafPfnBuddy; // rdi
  __int64 v24; // r9
  __int64 v25; // r8
  _QWORD *PteFromCopyList; // r14
  __int64 v27; // rdx
  LONG *v28; // rax
  __int64 v29; // rcx
  LONG *v30; // rax
  int v31; // ecx
  int v32; // eax
  LONG *v33; // rdi
  KIRQL v34; // si
  LONG *v35; // rax
  unsigned __int64 v36; // rbx
  unsigned __int8 v37; // al
  __int64 v39; // [rsp+30h] [rbp-88h]
  __int64 v40; // [rsp+38h] [rbp-80h]
  struct _KTHREAD *CurrentThread; // [rsp+40h] [rbp-78h]
  _QWORD v42[4]; // [rsp+48h] [rbp-70h] BYREF
  int v43; // [rsp+68h] [rbp-50h]
  unsigned __int64 v44; // [rsp+70h] [rbp-48h]
  __int64 v45; // [rsp+78h] [rbp-40h]
  __int64 v46; // [rsp+80h] [rbp-38h] BYREF
  __int64 v47; // [rsp+88h] [rbp-30h]
  void *retaddr; // [rsp+B8h] [rbp+0h]

  CurrentThread = KeGetCurrentThread();
  if ( !byte_140389294 )
    return 0LL;
  v6 = *(_QWORD *)(a1 + 40);
  v7 = *(_QWORD *)(qword_140388AF0 + 8 * ((v6 >> 40) & 0x3FF));
  v8 = 128;
  v9 = (a1 + 0x58000000000LL) / 48;
  v47 = v9;
  if ( a3 == -1 )
  {
    v11 = (unsigned int)MiPageToNode((a1 + 0x58000000000LL) / 48, 0LL) << byte_140388501;
    v10 = dword_140388540 & v9 | (((v6 >> 36) & 3) << byte_140388502);
  }
  else
  {
    v8 = 144;
    v10 = a3 & ~dword_140388540;
    v11 = dword_140388540 & v9;
  }
  Page = MiGetPage(v7, v11 | v10, v8);
  v39 = Page;
  v13 = Page;
  if ( Page == -1 )
    return 0LL;
  v14 = 48 * Page - 0x58000000000LL;
  v40 = v14;
  MiSetPfnTbFlushStamp(v14, 0LL, 0);
  v45 = 0LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
  v17 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v18 = v17;
  MiLockPageAtDpcInline(a1);
  v44 = (__int64)(*(_QWORD *)(a1 + 8) << 25) >> 16;
  if ( !(unsigned int)MiCanStealKernelStack(a1, 1LL) )
    goto LABEL_51;
  if ( (MiFlags & 0x800) != 0 || (unsigned int)MiSwapStackPageNoDpc(a2, a1, v14) != 1 )
  {
    LeafPfnBuddy = MiGetLeafPfnBuddy(a1, v19, v20, v21);
    if ( ((LeafPfnBuddy + 32) & 0xFFFFFFFFFFFFFFDFuLL) != 0 )
    {
      PteFromCopyList = (_QWORD *)MiGetPteFromCopyList(a2, v13, -1LL, v24);
      if ( LeafPfnBuddy != -16 && (struct _KTHREAD *)LeafPfnBuddy != CurrentThread )
      {
        if ( (unsigned __int8)KeTryToFreezeThreadStack(LeafPfnBuddy, &v46) == 1 )
        {
          MiCopyKstack(v40, a1, PteFromCopyList);
          MiSwitchKstackPages(v40, a1);
          *(_QWORD *)(a1 + 40) &= ~0x200000000000000uLL;
          *(_BYTE *)(a1 + 34) &= 0xC7u;
          *(_BYTE *)(a1 + 35) &= ~0x20u;
          *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
          _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          KeFlushSingleTb(v44, 0, 2u);
          if ( v46 )
            _InterlockedAnd64((volatile signed __int64 *)(v46 + 48), 0LL);
          LOBYTE(v27) = v18;
          *(_QWORD *)(LeafPfnBuddy + 64) = 0LL;
          MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v27);
          *PteFromCopyList = 0LL;
          if ( (unsigned __int64)PteFromCopyList >= 0xFFFFF6FB7DBED000uLL
            && (unsigned __int64)PteFromCopyList <= 0xFFFFF6FB7DBED7F8uLL )
          {
            MiWritePteShadow(PteFromCopyList, 0LL);
          }
          goto LABEL_10;
        }
        goto LABEL_29;
      }
      if ( (unsigned int)MiAddLockedPageCharge(a1, 0LL, v25) )
      {
        v45 = a1;
LABEL_29:
        _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiPreUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v18);
        v30 = MiGetSharedVm((__int64)AnyMultiplexedVm);
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v30, retaddr);
        else
          *v30 = 0;
        __writecr8(v18);
        v22 = v39;
        v42[3] = CurrentThread;
        v42[0] = v47;
        v42[1] = v39;
        v42[2] = PteFromCopyList;
        v43 = 0;
        if ( LeafPfnBuddy == -16 || (struct _KTHREAD *)LeafPfnBuddy == CurrentThread )
        {
          v32 = KeExpandKernelStackAndCalloutInternal(
                  (void (__fastcall *)(__int64))MiJumpStack,
                  (__int64)v42,
                  24576,
                  1,
                  0LL);
          v31 = v43;
          if ( v32 < 0 )
            v31 = v32;
          v43 = v31;
        }
        else
        {
          KeGenericCallDpc(MiDoStackCopy, v42);
          v31 = v43;
        }
        if ( v31 >= 0 )
        {
          *a5 = 0;
          v37 = MiLockPageInline(a1);
          *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
          _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v37);
          goto LABEL_48;
        }
        v33 = MiGetSharedVm((__int64)AnyMultiplexedVm);
        v34 = ExAcquireSpinLockExclusive(v33);
        v33[1] = 0;
        *PteFromCopyList = 0LL;
        if ( (unsigned __int64)PteFromCopyList >= 0xFFFFF6FB7DBED000uLL
          && (unsigned __int64)PteFromCopyList <= 0xFFFFF6FB7DBED7F8uLL )
        {
          MiWritePteShadow(PteFromCopyList, 0LL);
        }
        MiPreUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v34);
        v35 = MiGetSharedVm((__int64)AnyMultiplexedVm);
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v35, retaddr);
        else
          *v35 = 0;
        __writecr8(v34);
        MiReleaseFreshPage(v40);
        if ( v45 )
        {
          v36 = (unsigned __int8)MiLockPageInline(v45);
          MiRemoveLockedPageChargeAndDecRef(v45);
          _InterlockedAnd64((volatile signed __int64 *)(v45 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v36);
        }
        return 0LL;
      }
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      *PteFromCopyList = 0LL;
      if ( (unsigned __int64)PteFromCopyList >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)PteFromCopyList <= 0xFFFFF6FB7DBED7F8uLL )
      {
        MiWritePteShadow(PteFromCopyList, 0LL);
      }
      MiPreUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v18);
      v28 = MiGetSharedVm((__int64)AnyMultiplexedVm);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v28, retaddr);
      else
        *v28 = 0;
      __writecr8(v18);
      v29 = v40;
LABEL_52:
      MiReleaseFreshPage(v29);
      return 0LL;
    }
LABEL_51:
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    LOBYTE(v19) = v18;
    MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v19);
    v29 = v14;
    goto LABEL_52;
  }
  *(_QWORD *)(a1 + 40) &= ~0x200000000000000uLL;
  *(_BYTE *)(a1 + 34) &= 0xC7u;
  *(_BYTE *)(a1 + 35) &= ~0x20u;
  *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  LOBYTE(v19) = v18;
  MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v19);
LABEL_10:
  v22 = v39;
  *a5 = 1;
LABEL_48:
  *(_WORD *)(a1 + 32) = 0;
  if ( a4 )
    *a4 = v22;
  return 1LL;
}
