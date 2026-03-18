/*
 * XREFs of MiSwapStackPage @ 0x14002BD10
 * Callers:
 *     MiClaimPhysicalRun @ 0x14010E174 (MiClaimPhysicalRun.c)
 * Callees:
 *     KeGenericCallDpc @ 0x1400229D0 (KeGenericCallDpc.c)
 *     MiCopyKstack @ 0x140027EA0 (MiCopyKstack.c)
 *     MiCanStealKernelStack @ 0x14002C25C (MiCanStealKernelStack.c)
 *     MiSwapStackPageNoDpc @ 0x14002C2E0 (MiSwapStackPageNoDpc.c)
 *     MiGetPteFromCopyList @ 0x14002C478 (MiGetPteFromCopyList.c)
 *     MiSwitchKstackPages @ 0x14003BBDC (MiSwitchKstackPages.c)
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiGetAnyMultiplexedVm @ 0x1400B1BCC (MiGetAnyMultiplexedVm.c)
 *     MiPageToNode @ 0x1400B70B0 (MiPageToNode.c)
 *     MiGetPage @ 0x1400BBC00 (MiGetPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1400CCB60 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x1400D6900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     MiFinalizePageAttribute @ 0x140105D40 (MiFinalizePageAttribute.c)
 *     MiAddLockedPageCharge @ 0x140109894 (MiAddLockedPageCharge.c)
 *     MiReleaseFreshPage @ 0x14010ADC8 (MiReleaseFreshPage.c)
 *     KeFlushSingleTb @ 0x14010DE88 (KeFlushSingleTb.c)
 *     KeExpandKernelStackAndCalloutInternal @ 0x14010F480 (KeExpandKernelStackAndCalloutInternal.c)
 *     KeTryToFreezeThreadStack @ 0x140153618 (KeTryToFreezeThreadStack.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14025C828 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiSwapStackPage(__int64 a1, __int64 a2, int a3, __int64 *a4, _DWORD *a5)
{
  unsigned __int64 v6; // rdi
  __int64 v7; // r15
  __int64 v8; // r14
  int v9; // edi
  __int64 v10; // r8
  unsigned int v11; // eax
  __int64 Page; // rax
  __int64 v13; // r15
  __int64 v14; // r14
  __int64 AnyMultiplexedVm; // r12
  __int64 SharedVm; // rdi
  KIRQL v17; // al
  KIRQL v18; // r13
  __int64 v19; // rdx
  __int64 v20; // rdi
  _QWORD *PteFromCopyList; // r15
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  _DWORD *v27; // rax
  _DWORD *v28; // rax
  int v29; // ecx
  int v30; // eax
  __int64 v31; // rdi
  KIRQL v32; // al
  KIRQL v33; // si
  __int64 v34; // rdx
  __int64 v35; // rcx
  _DWORD *v36; // rax
  unsigned __int64 v37; // rbx
  unsigned __int8 v38; // al
  __int64 v40; // [rsp+40h] [rbp-49h]
  unsigned __int64 CurrentThread; // [rsp+48h] [rbp-41h]
  _QWORD v42[4]; // [rsp+50h] [rbp-39h] BYREF
  int v43; // [rsp+70h] [rbp-19h]
  __int64 v44; // [rsp+78h] [rbp-11h]
  __int64 v45; // [rsp+80h] [rbp-9h]
  __int64 v46; // [rsp+88h] [rbp-1h] BYREF
  unsigned __int64 v47; // [rsp+90h] [rbp+7h]
  __int64 v48; // [rsp+98h] [rbp+Fh]
  void *retaddr; // [rsp+E0h] [rbp+57h]

  CurrentThread = (unsigned __int64)KeGetCurrentThread();
  if ( !byte_14036CFD4 )
    return 0LL;
  v6 = *(_QWORD *)(a1 + 40);
  v7 = *(_QWORD *)(qword_14036C8F8 + 8 * ((v6 >> 40) & 0x3FF));
  v8 = (a1 + 0x58000000000LL) / 48;
  v48 = v8;
  if ( a3 == -1 )
  {
    v11 = (unsigned int)MiPageToNode((a1 + 0x58000000000LL) / 48, 0LL) << byte_14036C1B9;
    v9 = dword_14036C1F8 & v8 | (((v6 >> 36) & 3) << byte_14036C1BA);
    v10 = 0LL;
  }
  else
  {
    v9 = a3 & ~dword_14036C1F8;
    v10 = 16LL;
    v11 = dword_14036C1F8 & v8;
  }
  Page = MiGetPage(v7, v11 | v9, v10);
  v40 = Page;
  v13 = Page;
  if ( Page == -1 )
    return 0LL;
  v14 = 48 * Page - 0x58000000000LL;
  MiFinalizePageAttribute(v14, 1LL, 0LL);
  v45 = 0LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1LL);
  SharedVm = MiGetSharedVm(AnyMultiplexedVm);
  v17 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  *(_DWORD *)(SharedVm + 4) = 0;
  v18 = v17;
  MiLockPageAtDpcInline(a1);
  v44 = (__int64)(*(_QWORD *)(a1 + 8) << 25) >> 16;
  if ( !(unsigned int)MiCanStealKernelStack(a1, 1LL) )
    goto LABEL_50;
  if ( (MiFlags & 0x800) != 0 || (unsigned int)MiSwapStackPageNoDpc(a2, a1, v14) != 1 )
  {
    v20 = *(_QWORD *)a1;
    if ( *(_QWORD *)a1 != -5LL && (v20 & 1) != 0 )
    {
      PteFromCopyList = (_QWORD *)MiGetPteFromCopyList(a2, v13, -1LL);
      if ( v20 != -3 && v20 != (CurrentThread | 1) )
      {
        v47 = v20 & 0xFFFFFFFFFFFFFFFEuLL;
        if ( (unsigned __int8)KeTryToFreezeThreadStack(v20 & 0xFFFFFFFFFFFFFFFEuLL, &v46) == 1 )
        {
          MiCopyKstack(v14, a1, (__int64)PteFromCopyList);
          MiSwitchKstackPages(v14, a1);
          *(_QWORD *)(a1 + 40) &= ~0x200000000000000uLL;
          *(_BYTE *)(a1 + 34) &= 0xC7u;
          *(_BYTE *)(a1 + 35) &= ~0x20u;
          *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
          _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          KeFlushSingleTb(v44, 0LL, 2LL);
          if ( v46 )
            _InterlockedAnd64((volatile signed __int64 *)(v46 + 48), 0LL);
          LOBYTE(v23) = v18;
          *(_QWORD *)(v47 + 64) = 0LL;
          MiUnlockWorkingSetExclusive(AnyMultiplexedVm, v23);
          *PteFromCopyList = 0LL;
          if ( (unsigned int)MiPteInShadowRange(PteFromCopyList) )
            MiWritePteShadow(v24);
          *a5 = 1;
          goto LABEL_46;
        }
        goto LABEL_28;
      }
      if ( (unsigned int)MiAddLockedPageCharge(a1) )
      {
        v45 = a1;
LABEL_28:
        _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        LOBYTE(v22) = v18;
        MiPreUnlockWorkingSetExclusive(AnyMultiplexedVm, v22);
        v28 = (_DWORD *)MiGetSharedVm(AnyMultiplexedVm);
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v28, retaddr);
        else
          *v28 = 0;
        __writecr8(v18);
        v42[0] = v48;
        v42[1] = v40;
        v42[3] = CurrentThread | 1;
        v42[2] = PteFromCopyList;
        v43 = 0;
        if ( v20 == -3 || v20 == (CurrentThread | 1) )
        {
          v30 = KeExpandKernelStackAndCalloutInternal((unsigned int)MiJumpStack, (unsigned int)v42, 24576, 1, 0LL);
          v29 = v43;
          if ( v30 < 0 )
            v29 = v30;
          v43 = v29;
        }
        else
        {
          KeGenericCallDpc((__int64)MiDoStackCopy, (__int64)v42);
          v29 = v43;
        }
        if ( v29 >= 0 )
        {
          *a5 = 0;
          v38 = MiLockPageInline(a1);
          *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
          _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v38);
LABEL_46:
          v13 = v40;
          goto LABEL_47;
        }
        v31 = MiGetSharedVm(AnyMultiplexedVm);
        v32 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v31);
        *(_DWORD *)(v31 + 4) = 0;
        v33 = v32;
        *PteFromCopyList = 0LL;
        if ( (unsigned int)MiPteInShadowRange(PteFromCopyList) )
          MiWritePteShadow(v35);
        LOBYTE(v34) = v33;
        MiPreUnlockWorkingSetExclusive(AnyMultiplexedVm, v34);
        v36 = (_DWORD *)MiGetSharedVm(AnyMultiplexedVm);
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v36, retaddr);
        else
          *v36 = 0;
        __writecr8(v33);
        MiReleaseFreshPage(v14);
        if ( v45 )
        {
          v37 = (unsigned __int8)MiLockPageInline(v45);
          MiRemoveLockedPageChargeAndDecRef(v45);
          _InterlockedAnd64((volatile signed __int64 *)(v45 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v37);
        }
        return 0LL;
      }
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      *PteFromCopyList = 0LL;
      if ( (unsigned int)MiPteInShadowRange(PteFromCopyList) )
        MiWritePteShadow(v26);
      LOBYTE(v25) = v18;
      MiPreUnlockWorkingSetExclusive(AnyMultiplexedVm, v25);
      v27 = (_DWORD *)MiGetSharedVm(AnyMultiplexedVm);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v27, retaddr);
      else
        *v27 = 0;
      __writecr8(v18);
LABEL_51:
      MiReleaseFreshPage(v14);
      return 0LL;
    }
LABEL_50:
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    LOBYTE(v19) = v18;
    MiUnlockWorkingSetExclusive(AnyMultiplexedVm, v19);
    goto LABEL_51;
  }
  *(_QWORD *)(a1 + 40) &= ~0x200000000000000uLL;
  *(_BYTE *)(a1 + 34) &= 0xC7u;
  *(_BYTE *)(a1 + 35) &= ~0x20u;
  *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  LOBYTE(v19) = v18;
  MiUnlockWorkingSetExclusive(AnyMultiplexedVm, v19);
  *a5 = 1;
LABEL_47:
  *(_WORD *)(a1 + 32) = 0;
  if ( a4 )
    *a4 = v13;
  return 1LL;
}
