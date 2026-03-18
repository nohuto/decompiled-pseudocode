/*
 * XREFs of MiUnloadSystemImage @ 0x1404B29B4
 * Callers:
 *     MmLoadSystemImageEx @ 0x1404B191C (MmLoadSystemImageEx.c)
 *     MmChangeImageProtection @ 0x1404B2670 (MmChangeImageProtection.c)
 *     MiDereferenceImports @ 0x140583778 (MiDereferenceImports.c)
 *     MmUnloadSystemImage @ 0x1405856E0 (MmUnloadSystemImage.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x140031BC0 (MiPartitionIdToPointer.c)
 *     MiGetPdeAddress @ 0x14006B954 (MiGetPdeAddress.c)
 *     MiProcessLoaderEntry @ 0x14006DF00 (MiProcessLoaderEntry.c)
 *     MiGetSessionVm @ 0x14007D8DC (MiGetSessionVm.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400A3C70 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiManageSubsectionView @ 0x1400A98F0 (MiManageSubsectionView.c)
 *     MiGetAnyMultiplexedVm @ 0x1400B1BCC (MiGetAnyMultiplexedVm.c)
 *     MiDeleteSystemPagableVm @ 0x1400C9480 (MiDeleteSystemPagableVm.c)
 *     MiWalkEntireImage @ 0x1400C9D50 (MiWalkEntireImage.c)
 *     MiReturnResidentAvailable @ 0x1400CCD70 (MiReturnResidentAvailable.c)
 *     MiSectionControlArea @ 0x1400CDE10 (MiSectionControlArea.c)
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 *     MiGetPteAddress @ 0x1400CE300 (MiGetPteAddress.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400E19E0 (ObDereferenceObjectDeferDelete.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     MiDereferenceControlArea @ 0x14013645C (MiDereferenceControlArea.c)
 *     MiDeleteSessionPdes @ 0x14013BC30 (MiDeleteSessionPdes.c)
 *     MiFreePrivateFixupEntryForSystemImage @ 0x14014463C (MiFreePrivateFixupEntryForSystemImage.c)
 *     DbgUnLoadImageSymbolsUnicode @ 0x140148EB4 (DbgUnLoadImageSymbolsUnicode.c)
 *     LdrUnloadAlternateResourceModule @ 0x14014933C (LdrUnloadAlternateResourceModule.c)
 *     MiSessionRemoveImage @ 0x140149B04 (MiSessionRemoveImage.c)
 *     memset @ 0x140192D80 (memset.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x14020AC6C (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiLogPerfMemoryRangeEvent @ 0x14020F010 (MiLogPerfMemoryRangeEvent.c)
 *     MiInitPerfMemoryFlags @ 0x140217AC0 (MiInitPerfMemoryFlags.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PerfLogImageUnload @ 0x1404F9690 (PerfLogImageUnload.c)
 *     MiUnlockDriverCode @ 0x140583054 (MiUnlockDriverCode.c)
 *     MiReturnSystemImageAddress @ 0x140583130 (MiReturnSystemImageAddress.c)
 *     MiReleaseDriverPtes @ 0x140583170 (MiReleaseDriverPtes.c)
 *     MiDereferenceImports @ 0x140583778 (MiDereferenceImports.c)
 *     MiRememberUnloadedDriver @ 0x140583894 (MiRememberUnloadedDriver.c)
 *     KseDriverUnloadImage @ 0x1405846F8 (KseDriverUnloadImage.c)
 *     MiDeleteSessionDriverProtos @ 0x140585040 (MiDeleteSessionDriverProtos.c)
 *     MiReturnSystemImageCommitment @ 0x140585528 (MiReturnSystemImageCommitment.c)
 *     MiMarkKernelImageCfgBits @ 0x1405858D8 (MiMarkKernelImageCfgBits.c)
 *     ExCovReadjustUnloadedModuleEntry @ 0x140585CD8 (ExCovReadjustUnloadedModuleEntry.c)
 *     MiReleasePrivilegedDriverState @ 0x140585D78 (MiReleasePrivilegedDriverState.c)
 *     MiDereferencePerSessionProtos @ 0x1406BDF80 (MiDereferencePerSessionProtos.c)
 *     MiUnmapLargeDriver @ 0x1406BF148 (MiUnmapLargeDriver.c)
 *     VfDriverUnloadImage @ 0x1407621FC (VfDriverUnloadImage.c)
 */

void __fastcall MiUnloadSystemImage(ULONG_PTR BugCheckParameter2, char a2)
{
  void *v4; // r15
  ULONG_PTR v5; // r12
  __int64 PteAddress; // rax
  __int64 v7; // rdi
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // r13
  unsigned int v10; // edi
  __int64 v12; // rdi
  char v13; // r13
  __int64 *v14; // rsi
  unsigned __int64 v15; // rax
  char *AnyMultiplexedVm; // r12
  void *v17; // rcx
  void *v18; // rcx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rax
  __int64 v21; // rdi
  unsigned __int64 v22; // r13
  unsigned __int64 SessionVm; // rax
  unsigned __int64 PdeAddress; // rdx
  unsigned __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // rdi
  __int64 v28; // rax
  unsigned __int64 v29; // r8
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned int inited; // eax
  __int64 v33; // [rsp+50h] [rbp-B0h]
  PVOID Object; // [rsp+58h] [rbp-A8h]
  _QWORD v35[4]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v36; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v37; // [rsp+88h] [rbp-78h]
  __int64 v38; // [rsp+90h] [rbp-70h]
  _BYTE v39[8]; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v40[20]; // [rsp+A0h] [rbp-60h] BYREF
  int v41; // [rsp+150h] [rbp+50h]
  ULONG_PTR v42; // [rsp+160h] [rbp+60h]

  memset(v35, 0, sizeof(v35));
  if ( *(_QWORD *)(BugCheckParameter2 + 136) == 1LL )
    return;
  v4 = *(void **)(BugCheckParameter2 + 48);
  v5 = (BugCheckParameter2 + 160) & -(__int64)((a2 & 4) != 0);
  PteAddress = MiGetPteAddress((unsigned __int64)v4);
  v7 = *(_QWORD *)(BugCheckParameter2 + 112);
  v8 = 0LL;
  v9 = (unsigned __int64)*(unsigned int *)(BugCheckParameter2 + 64) >> 12;
  v33 = v9;
  v42 = PteAddress;
  Object = (PVOID)v7;
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)v4) == 1 )
  {
    v41 = 0;
    if ( !(unsigned int)MiSessionRemoveImage(BugCheckParameter2, &v36) )
      return;
    v8 = MiSectionControlArea(v7);
    if ( *(_QWORD *)BugCheckParameter2 )
      ExCovReadjustUnloadedModuleEntry(BugCheckParameter2, 0LL);
    v22 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
    if ( (a2 & 1) != 0 )
    {
      SessionVm = MiGetSessionVm();
      MiDeleteSystemPagableVm(SessionVm, v8, v42, v33, 3, v35);
      if ( (*(_DWORD *)(v8 + 56) & 0x4000000) != 0 )
      {
        MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
        MiDereferencePerSessionProtos(v8);
      }
      MiGetPdeAddress((unsigned __int64)v4);
      if ( v36 )
        MiGetPdeAddress(v36);
      PdeAddress = MiGetPdeAddress((unsigned __int64)v4 + *(unsigned int *)(BugCheckParameter2 + 64) - 1);
      if ( v37 )
      {
        v26 = MiGetPdeAddress(v37);
        if ( v26 == PdeAddress )
          PdeAddress -= 8LL;
      }
      if ( PdeAddress >= v25 )
        MiDeleteSessionPdes(v25, PdeAddress);
    }
    v27 = v38;
    if ( v38 )
    {
      v28 = MiPartitionIdToPointer(*(_WORD *)(v22 + 3180));
      MiReturnCommit(v28, v29);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v22 + 48), -v27);
    }
    if ( (a2 & 0x10) != 0 )
      MiDereferenceImports(*(_QWORD *)(BugCheckParameter2 + 136));
    v9 = v33;
    v10 = 0;
  }
  else
  {
    v10 = 1;
    v41 = 1;
  }
  if ( (*(_WORD *)(BugCheckParameter2 + 108))-- != 1 )
  {
    if ( !v10 && (a2 & 2) != 0 )
      VfDriverUnloadImage(BugCheckParameter2);
    return;
  }
  if ( !v10 )
    MiDeleteSessionDriverProtos(v8);
  MiMarkKernelImageCfgBits(BugCheckParameter2, 0LL);
  if ( (a2 & 2) != 0 )
  {
    VfDriverUnloadImage(BugCheckParameter2);
    KseDriverUnloadImage(BugCheckParameter2);
  }
  MiReleasePrivilegedDriverState(v42, (unsigned int)v9, v10);
  v12 = v9 & -(__int64)(v10 != 0);
  LdrUnloadAlternateResourceModule(v4);
  if ( (*(_DWORD *)(BugCheckParameter2 + 104) & 0x100000) != 0 )
    DbgUnLoadImageSymbolsUnicode((PCUNICODE_STRING)(BugCheckParameter2 + 88), (__int64)v4, 0xFFFFFFFFLL);
  if ( *(_QWORD *)BugCheckParameter2 && v12 )
    ExCovReadjustUnloadedModuleEntry(BugCheckParameter2, 0LL);
  v13 = 0;
  if ( v12 && (a2 & 1) != 0 )
  {
    MiRememberUnloadedDriver(BugCheckParameter2 + 88, v4, v12 << 12);
    v14 = 0LL;
    if ( Object )
    {
      v15 = MiSectionControlArea((__int64)Object);
      v14 = (__int64 *)v15;
      if ( *(_QWORD *)BugCheckParameter2 )
      {
        v40[0] = v15;
        MiManageSubsectionView((__int64 *)v40, (_QWORD *)((BugCheckParameter2 + 160) & -(__int64)((a2 & 4) != 0)), 4);
      }
    }
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
    if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS((unsigned __int64)v4) )
    {
      if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
      {
        inited = MiInitPerfMemoryFlags(0, 6);
        MiLogPerfMemoryRangeEvent((__int64)v4, 0LL, inited, (v12 + 511) & 0xFFFFFFFFFFFFFE00uLL);
      }
      MiUnmapLargeDriver(v4, v12);
      v13 = 1;
    }
    else
    {
      if ( ((BugCheckParameter2 + 160) & -(__int64)((a2 & 4) != 0)) != 0 )
        MiUnlockDriverCode(BugCheckParameter2);
      qword_14036C0B8 = BugCheckParameter2;
      MiDeleteSystemPagableVm((__int64)AnyMultiplexedVm, (__int64)v14, v42, v12, 5, v35);
      if ( v14 )
        MiWalkEntireImage(v14, (__int64)v39, 4, 0xFFFFFFFF);
      qword_14036C0B8 = 0LL;
      _InterlockedExchangeAdd((_DWORD *)&xmmword_14036C0E0 + 3, LODWORD(v35[0]) - LODWORD(v35[3]));
      if ( !Object )
        MiReleaseDriverPtes(0LL, v42, (unsigned int)v12);
    }
    v5 = (BugCheckParameter2 + 160) & -(__int64)((a2 & 4) != 0);
  }
  if ( v41 == 1 )
  {
    if ( (a2 & 1) != 0 )
      MiReturnSystemImageCommitment(BugCheckParameter2, v35);
    if ( (a2 & 0x10) != 0 )
      MiDereferenceImports(*(_QWORD *)(BugCheckParameter2 + 136));
  }
  v17 = *(void **)(BugCheckParameter2 + 136);
  if ( v17 != (void *)-2LL )
  {
    if ( v17 == (void *)1 )
      goto LABEL_39;
    if ( ((unsigned __int8)v17 & 1) == 0 )
      ExFreePoolWithTag(v17, 0);
  }
  *(_QWORD *)(BugCheckParameter2 + 136) = 1LL;
LABEL_39:
  if ( *(_QWORD *)BugCheckParameter2 )
  {
    MiProcessLoaderEntry((int *)BugCheckParameter2, 0);
    if ( (PerfGlobalGroupMask & 4) != 0 )
      PerfLogImageUnload(
        BugCheckParameter2 + 72,
        0LL,
        0LL,
        v4,
        *(unsigned int *)(BugCheckParameter2 + 64),
        *(_DWORD *)(BugCheckParameter2 + 120),
        *(_WORD *)(BugCheckParameter2 + 110) & 0xF,
        (*(unsigned __int16 *)(BugCheckParameter2 + 110) >> 4) & 7,
        0);
  }
  v18 = *(void **)(BugCheckParameter2 + 80);
  if ( v18 )
    ExFreePoolWithTag(v18, 0);
  if ( Object )
  {
    if ( v5 )
    {
      v19 = *(_QWORD *)(v5 + 56);
      if ( v19 )
        MiReturnResidentAvailable(v19);
    }
    v20 = MiSectionControlArea((__int64)Object);
    v21 = v20;
    if ( !v13 && v4 != *(void **)(*(_QWORD *)v20 + 32LL) )
    {
      MiFreePrivateFixupEntryForSystemImage((ULONG_PTR)v4, 1);
      MiReturnSystemImageAddress(v4, *(unsigned int *)(BugCheckParameter2 + 64), v30, v31);
    }
    if ( v5 && v41 && *(_DWORD *)(v5 + 36) >= 0x20u )
      MiReturnCrossPartitionControlAreaCharges(v21);
    MiDereferenceControlArea(v21);
    ObDereferenceObjectDeferDelete(Object);
  }
  ExFreePoolWithTag((PVOID)BugCheckParameter2, 0);
}
