/*
 * XREFs of MiUnloadSystemImage @ 0x140515B1C
 * Callers:
 *     MmChangeImageProtection @ 0x140515760 (MmChangeImageProtection.c)
 *     MmLoadSystemImageEx @ 0x1405431E0 (MmLoadSystemImageEx.c)
 *     MiDereferenceImports @ 0x14059D690 (MiDereferenceImports.c)
 *     MmUnloadSystemImage @ 0x14059DFC0 (MmUnloadSystemImage.c)
 * Callees:
 *     MiProcessLoaderEntry @ 0x140015EC4 (MiProcessLoaderEntry.c)
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiGetPteAddress @ 0x14003799C (MiGetPteAddress.c)
 *     MiWalkEntireImage @ 0x140039480 (MiWalkEntireImage.c)
 *     MiDeleteSystemPagableVm @ 0x140056870 (MiDeleteSystemPagableVm.c)
 *     ObDereferenceObjectDeferDelete @ 0x140071350 (ObDereferenceObjectDeferDelete.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     MiSectionControlArea @ 0x1400A1610 (MiSectionControlArea.c)
 *     MiManageSubsectionView @ 0x1400A3110 (MiManageSubsectionView.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400BD300 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiReturnResidentAvailable @ 0x1400BFE10 (MiReturnResidentAvailable.c)
 *     MiGetAnyMultiplexedVm @ 0x1400C0094 (MiGetAnyMultiplexedVm.c)
 *     DbgUnLoadImageSymbolsUnicode @ 0x1400F96A8 (DbgUnLoadImageSymbolsUnicode.c)
 *     MiPartitionIdToPointer @ 0x14012862C (MiPartitionIdToPointer.c)
 *     MiGetSessionVm @ 0x14012F680 (MiGetSessionVm.c)
 *     LdrUnloadAlternateResourceModule @ 0x140130438 (LdrUnloadAlternateResourceModule.c)
 *     MiDereferenceControlArea @ 0x140131C80 (MiDereferenceControlArea.c)
 *     MiGetPdeAddress @ 0x1401322DC (MiGetPdeAddress.c)
 *     MiFreePrivateFixupEntryForSystemImage @ 0x14014BC98 (MiFreePrivateFixupEntryForSystemImage.c)
 *     MiSessionRemoveImage @ 0x140158EEC (MiSessionRemoveImage.c)
 *     memset @ 0x140192F40 (memset.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x140211AE8 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiLogPerfMemoryRangeEvent @ 0x140216D54 (MiLogPerfMemoryRangeEvent.c)
 *     MiDeleteSessionPdes @ 0x14021989C (MiDeleteSessionPdes.c)
 *     MiInitPerfMemoryFlags @ 0x14022138C (MiInitPerfMemoryFlags.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     PerfLogImageUnload @ 0x140452774 (PerfLogImageUnload.c)
 *     MiReturnSystemImageAddress @ 0x1405413B0 (MiReturnSystemImageAddress.c)
 *     MiReleaseDriverPtes @ 0x1405413F0 (MiReleaseDriverPtes.c)
 *     MiUnlockDriverCode @ 0x14059BB54 (MiUnlockDriverCode.c)
 *     MiRememberUnloadedDriver @ 0x14059D0A4 (MiRememberUnloadedDriver.c)
 *     MiDereferenceImports @ 0x14059D690 (MiDereferenceImports.c)
 *     KseDriverUnloadImage @ 0x14059E4D8 (KseDriverUnloadImage.c)
 *     MiReturnSystemImageCommitment @ 0x14059E9C8 (MiReturnSystemImageCommitment.c)
 *     MiMarkKernelImageCfgBits @ 0x14059EF50 (MiMarkKernelImageCfgBits.c)
 *     ExCovReadjustUnloadedModuleEntry @ 0x14059F120 (ExCovReadjustUnloadedModuleEntry.c)
 *     MiReleasePrivilegedPtes @ 0x14059F1D8 (MiReleasePrivilegedPtes.c)
 *     MiDeleteSessionDriverProtos @ 0x1405ED4B4 (MiDeleteSessionDriverProtos.c)
 *     MiClearDriverHotPatchPtes @ 0x1406E17D8 (MiClearDriverHotPatchPtes.c)
 *     MiDereferencePerSessionProtos @ 0x1406EB3BC (MiDereferencePerSessionProtos.c)
 *     MiUnmapLargeDriver @ 0x1406EC428 (MiUnmapLargeDriver.c)
 *     VfDriverUnloadImage @ 0x1407A209C (VfDriverUnloadImage.c)
 */

void __fastcall MiUnloadSystemImage(ULONG_PTR BugCheckParameter2, char a2)
{
  void *v4; // rsi
  __int64 PteAddress; // rax
  unsigned __int64 v6; // r13
  void *v7; // r12
  ULONG_PTR v8; // rbx
  unsigned __int64 v9; // r14
  int v10; // eax
  void *v12; // rcx
  char v13; // r13
  __int64 *v14; // rbx
  unsigned __int64 v15; // rax
  char *AnyMultiplexedVm; // r12
  ULONG_PTR v17; // rbx
  void *v18; // rcx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rax
  __int64 v21; // rbx
  unsigned __int64 v22; // rax
  unsigned __int64 SessionVm; // rax
  unsigned __int64 PdeAddress; // rdx
  unsigned __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // rbx
  __int64 v28; // rax
  unsigned int SessionId; // eax
  unsigned int inited; // eax
  _QWORD *v31; // [rsp+50h] [rbp-B0h]
  void *v32; // [rsp+58h] [rbp-A8h]
  unsigned int v33; // [rsp+60h] [rbp-A0h]
  _QWORD v34[4]; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v35; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v36; // [rsp+90h] [rbp-70h]
  __int64 v37; // [rsp+98h] [rbp-68h]
  _BYTE v38[16]; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v39[20]; // [rsp+B0h] [rbp-50h] BYREF
  int v40; // [rsp+160h] [rbp+60h]
  ULONG_PTR v41; // [rsp+170h] [rbp+70h]
  unsigned __int64 v42; // [rsp+178h] [rbp+78h]

  memset(v34, 0, sizeof(v34));
  if ( *(_QWORD *)(BugCheckParameter2 + 136) == 1LL )
    return;
  v4 = *(void **)(BugCheckParameter2 + 48);
  v31 = (_QWORD *)((BugCheckParameter2 + 160) & -(__int64)((a2 & 4) != 0));
  PteAddress = MiGetPteAddress((unsigned __int64)v4);
  v6 = 0LL;
  v7 = *(void **)(BugCheckParameter2 + 112);
  v8 = PteAddress;
  v41 = PteAddress;
  v9 = (unsigned __int64)*(unsigned int *)(BugCheckParameter2 + 64) >> 12;
  v32 = v7;
  v33 = ((unsigned int)dword_140400168 >> 12) + ((dword_140400168 & 0xFFF) != 0);
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)v4) == 1 )
  {
    v40 = 0;
    if ( !(unsigned int)MiSessionRemoveImage(BugCheckParameter2, &v35) )
      return;
    v6 = MiSectionControlArea((__int64)v7);
    if ( *(_QWORD *)BugCheckParameter2 )
      ExCovReadjustUnloadedModuleEntry(BugCheckParameter2, 0LL);
    v22 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
    v42 = v22;
    if ( (a2 & 1) != 0 )
    {
      SessionVm = MiGetSessionVm();
      MiDeleteSystemPagableVm(SessionVm, v6, v8, v9, 3, v34);
      if ( (*(_DWORD *)(v6 + 56) & 0x4000000) != 0 )
      {
        SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
        MiDereferencePerSessionProtos(v6, SessionId);
      }
      MiGetPdeAddress((unsigned __int64)v4);
      if ( v35 )
        MiGetPdeAddress(v35);
      PdeAddress = MiGetPdeAddress((unsigned __int64)v4 + *(unsigned int *)(BugCheckParameter2 + 64) - 1);
      if ( v36 )
      {
        v26 = MiGetPdeAddress(v36);
        if ( v26 == PdeAddress )
          PdeAddress -= 8LL;
      }
      if ( PdeAddress >= v25 )
        MiDeleteSessionPdes(v25, PdeAddress);
      v22 = v42;
    }
    v27 = v37;
    if ( v37 )
    {
      v28 = MiPartitionIdToPointer(*(_WORD *)(v22 + 3180));
      MiReturnCommit(v28, v27 - v34[1]);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v42 + 48), -v27);
    }
    if ( (a2 & 0x10) != 0 )
      MiDereferenceImports(*(_QWORD *)(BugCheckParameter2 + 136));
    v8 = v41;
    v10 = 0;
  }
  else
  {
    v10 = 1;
    v40 = 1;
  }
  if ( (*(_WORD *)(BugCheckParameter2 + 108))-- != 1 )
  {
    if ( !v10 && (a2 & 2) != 0 )
      VfDriverUnloadImage(BugCheckParameter2);
    return;
  }
  if ( v10 )
  {
    if ( dword_140400168 )
      MiClearDriverHotPatchPtes(BugCheckParameter2);
  }
  else
  {
    MiDeleteSessionDriverProtos(v6);
  }
  MiMarkKernelImageCfgBits(BugCheckParameter2, 0LL);
  if ( (a2 & 2) != 0 )
  {
    VfDriverUnloadImage(BugCheckParameter2);
    KseDriverUnloadImage(BugCheckParameter2);
  }
  if ( v40 )
  {
    if ( (a2 & 0x10) != 0 )
      MiDereferenceImports(*(_QWORD *)(BugCheckParameter2 + 136));
  }
  else
  {
    MiReleasePrivilegedPtes(v8, (unsigned int)v9);
    v9 = 0LL;
  }
  v12 = *(void **)(BugCheckParameter2 + 136);
  if ( v12 != (void *)1 )
  {
    if ( v12 != (void *)-2LL && ((unsigned __int8)v12 & 1) == 0 )
      ExFreePoolWithTag(v12, 0);
    *(_QWORD *)(BugCheckParameter2 + 136) = 1LL;
  }
  LdrUnloadAlternateResourceModule(v4);
  if ( (*(_DWORD *)(BugCheckParameter2 + 104) & 0x100000) != 0 )
    DbgUnLoadImageSymbolsUnicode((PCUNICODE_STRING)(BugCheckParameter2 + 88), (__int64)v4, 0xFFFFFFFFLL);
  if ( *(_QWORD *)BugCheckParameter2 && v9 )
    ExCovReadjustUnloadedModuleEntry(BugCheckParameter2, 0LL);
  v13 = 0;
  if ( v9 && (a2 & 1) != 0 )
  {
    MiRememberUnloadedDriver(BugCheckParameter2 + 88, v4, v9 << 12);
    v14 = 0LL;
    if ( v7 )
    {
      v15 = MiSectionControlArea((__int64)v7);
      v14 = (__int64 *)v15;
      if ( *(_QWORD *)BugCheckParameter2 )
      {
        v39[0] = v15;
        MiManageSubsectionView((__int64 *)v39, v31, 4);
      }
    }
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
    if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS((unsigned __int64)v4) )
    {
      if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
      {
        inited = MiInitPerfMemoryFlags(0, 6);
        MiLogPerfMemoryRangeEvent((__int64)v4, 0LL, inited, (v9 + 511) & 0xFFFFFFFFFFFFFE00uLL);
      }
      MiUnmapLargeDriver(v4, v9);
      v7 = v32;
      v13 = 1;
    }
    else
    {
      if ( v31 )
        MiUnlockDriverCode(BugCheckParameter2);
      qword_1403883F8 = BugCheckParameter2;
      MiDeleteSystemPagableVm((__int64)AnyMultiplexedVm, (__int64)v14, v41, v9, 5, v34);
      if ( v14 )
        MiWalkEntireImage(v14, (__int64)v38, 4, 0xFFFFFFFF);
      qword_1403883F8 = 0LL;
      _InterlockedExchangeAdd((_DWORD *)&xmmword_140388420 + 3, LODWORD(v34[0]) - LODWORD(v34[3]));
      v7 = v32;
      if ( !v32 )
      {
        MiReleasePrivilegedPtes(v41, (unsigned int)v9 + v33);
        v17 = v41;
        MiReleaseDriverPtes(0LL, v41, (unsigned int)v9 + v33);
        goto LABEL_37;
      }
    }
  }
  v17 = v41;
LABEL_37:
  if ( v40 == 1 )
  {
    if ( v7 )
      MiReleasePrivilegedPtes(v17, (unsigned int)v9 + v33);
    if ( (a2 & 1) != 0 )
      MiReturnSystemImageCommitment(BugCheckParameter2, v34);
  }
  if ( *(_QWORD *)BugCheckParameter2 )
  {
    MiProcessLoaderEntry((int *)BugCheckParameter2, 0);
    if ( (PerfGlobalGroupMask & 4) != 0 )
      PerfLogImageUnload(
        (unsigned __int16 *)(BugCheckParameter2 + 72),
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
  if ( v7 )
  {
    if ( v31 )
    {
      v19 = *(_QWORD *)(((BugCheckParameter2 + 160) & -(__int64)((a2 & 4) != 0)) + 0x38);
      if ( v19 )
        MiReturnResidentAvailable(v19);
    }
    v20 = MiSectionControlArea((__int64)v7);
    v21 = v20;
    if ( !v13 && v4 != *(void **)(*(_QWORD *)v20 + 32LL) )
    {
      MiFreePrivateFixupEntryForSystemImage((ULONG_PTR)v4, 1);
      MiReturnSystemImageAddress(v4, *(unsigned int *)(BugCheckParameter2 + 64));
    }
    if ( v31 && v40 && *(_DWORD *)(((BugCheckParameter2 + 160) & -(__int64)((a2 & 4) != 0)) + 0x24) >= 0x20u )
      MiReturnCrossPartitionControlAreaCharges(v21);
    MiDereferenceControlArea(v21);
    ObDereferenceObjectDeferDelete(v7);
  }
  ExFreePoolWithTag((PVOID)BugCheckParameter2, 0);
}
