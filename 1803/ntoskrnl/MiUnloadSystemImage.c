/*
 * XREFs of MiUnloadSystemImage @ 0x1405BCA9C
 * Callers:
 *     MmChangeImageProtection @ 0x1405BC4E0 (MmChangeImageProtection.c)
 *     MmLoadSystemImageEx @ 0x1405F9AF4 (MmLoadSystemImageEx.c)
 *     MiDereferenceImports @ 0x140604E38 (MiDereferenceImports.c)
 *     MmUnloadSystemImage @ 0x140605910 (MmUnloadSystemImage.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MiGetPteAddress @ 0x14000A260 (MiGetPteAddress.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400160B0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiDeleteSystemPagableVm @ 0x140026510 (MiDeleteSystemPagableVm.c)
 *     MiWalkEntireImage @ 0x140030B50 (MiWalkEntireImage.c)
 *     MiGetPdeAddress @ 0x14003B3E0 (MiGetPdeAddress.c)
 *     EtwpTraceImageUnload @ 0x14003E620 (EtwpTraceImageUnload.c)
 *     MiGetAnyMultiplexedVm @ 0x1400493AC (MiGetAnyMultiplexedVm.c)
 *     MiGetSessionVm @ 0x14007FBD8 (MiGetSessionVm.c)
 *     MiManageSubsectionView @ 0x1400DDC40 (MiManageSubsectionView.c)
 *     MiSectionControlArea @ 0x1400E54F0 (MiSectionControlArea.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400FA020 (ObDereferenceObjectDeferDelete.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     MiReturnResidentAvailable @ 0x14013511C (MiReturnResidentAvailable.c)
 *     MiDereferenceControlArea @ 0x1401404A0 (MiDereferenceControlArea.c)
 *     MiPartitionIdToPointer @ 0x1401404D0 (MiPartitionIdToPointer.c)
 *     MiSessionRemoveImage @ 0x140154B38 (MiSessionRemoveImage.c)
 *     MiDeleteSessionPdes @ 0x140155518 (MiDeleteSessionPdes.c)
 *     DbgUnLoadImageSymbolsUnicode @ 0x140160C04 (DbgUnLoadImageSymbolsUnicode.c)
 *     MiProcessLoaderEntry @ 0x140160F88 (MiProcessLoaderEntry.c)
 *     LdrUnloadAlternateResourceModule @ 0x140163988 (LdrUnloadAlternateResourceModule.c)
 *     MiFreePrivateFixupEntryForSystemImage @ 0x140169C50 (MiFreePrivateFixupEntryForSystemImage.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x14024FF3C (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiLogPerfMemoryRangeEvent @ 0x1402547CC (MiLogPerfMemoryRangeEvent.c)
 *     MiInitPerfMemoryFlags @ 0x1402602EC (MiInitPerfMemoryFlags.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     MiDeleteSessionDriverProtos @ 0x1405EE6C0 (MiDeleteSessionDriverProtos.c)
 *     MiReturnSystemImageAddress @ 0x1405F6654 (MiReturnSystemImageAddress.c)
 *     MiReleaseDriverPtes @ 0x1405F6694 (MiReleaseDriverPtes.c)
 *     KseDriverUnloadImage @ 0x140600748 (KseDriverUnloadImage.c)
 *     MiUnlockDriverCode @ 0x140604B7C (MiUnlockDriverCode.c)
 *     MiDereferenceImports @ 0x140604E38 (MiDereferenceImports.c)
 *     MiRememberUnloadedDriver @ 0x140605344 (MiRememberUnloadedDriver.c)
 *     MiReturnSystemImageCommitment @ 0x140605C64 (MiReturnSystemImageCommitment.c)
 *     MiMarkKernelImageCfgBits @ 0x140605D78 (MiMarkKernelImageCfgBits.c)
 *     ExCovReadjustUnloadedModuleEntry @ 0x140605DE0 (ExCovReadjustUnloadedModuleEntry.c)
 *     MiReleasePrivilegedPtes @ 0x140605F60 (MiReleasePrivilegedPtes.c)
 *     MiClearDriverHotPatchPtes @ 0x14074C5D0 (MiClearDriverHotPatchPtes.c)
 *     MiDereferencePerSessionProtos @ 0x140754C70 (MiDereferencePerSessionProtos.c)
 *     MiUnmapLargeDriver @ 0x140755F38 (MiUnmapLargeDriver.c)
 *     VfDriverUnloadImage @ 0x14080EDCC (VfDriverUnloadImage.c)
 */

void __fastcall MiUnloadSystemImage(ULONG_PTR BugCheckParameter2, char a2)
{
  void *v4; // rsi
  __int64 PteAddress; // rax
  unsigned __int64 v6; // r13
  void *v7; // r12
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r14
  int v10; // ebx
  void *v12; // rcx
  char v13; // r13
  ULONG_PTR v14; // rbx
  unsigned __int64 v15; // rax
  char *AnyMultiplexedVm; // r12
  unsigned __int64 v17; // rbx
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
  unsigned int inited; // eax
  _QWORD *v30; // [rsp+50h] [rbp-B0h]
  void *v31; // [rsp+58h] [rbp-A8h]
  unsigned int v32; // [rsp+60h] [rbp-A0h]
  _QWORD v33[4]; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v34; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v35; // [rsp+90h] [rbp-70h]
  __int64 v36; // [rsp+98h] [rbp-68h]
  _BYTE v37[16]; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v38[24]; // [rsp+B0h] [rbp-50h] BYREF
  int v39; // [rsp+180h] [rbp+80h]
  unsigned __int64 v40; // [rsp+190h] [rbp+90h]
  unsigned __int64 v41; // [rsp+198h] [rbp+98h]

  memset(v33, 0, sizeof(v33));
  if ( *(_QWORD *)(BugCheckParameter2 + 136) == 1LL )
    return;
  v4 = *(void **)(BugCheckParameter2 + 48);
  v30 = (_QWORD *)((BugCheckParameter2 + 160) & -(__int64)((a2 & 4) != 0));
  PteAddress = MiGetPteAddress((unsigned __int64)v4);
  v6 = 0LL;
  v7 = *(void **)(BugCheckParameter2 + 112);
  v8 = PteAddress;
  v40 = PteAddress;
  v9 = (unsigned __int64)*(unsigned int *)(BugCheckParameter2 + 64) >> 12;
  v31 = v7;
  v32 = ((unsigned int)dword_14044B1C8 >> 12) + ((dword_14044B1C8 & 0xFFF) != 0);
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)v4) == 1 )
  {
    v39 = 0;
    if ( !(unsigned int)MiSessionRemoveImage(BugCheckParameter2, &v34) )
      return;
    v6 = MiSectionControlArea((__int64)v7);
    if ( *(_QWORD *)BugCheckParameter2 )
      ExCovReadjustUnloadedModuleEntry(BugCheckParameter2, 0LL);
    v22 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
    v41 = v22;
    if ( (a2 & 1) != 0 )
    {
      SessionVm = MiGetSessionVm();
      MiDeleteSystemPagableVm(SessionVm, v6, v8, v9, 3, v33);
      if ( (*(_DWORD *)(v6 + 56) & 0x4000000) != 0 )
      {
        MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
        MiDereferencePerSessionProtos(v6);
      }
      MiGetPdeAddress((unsigned __int64)v4);
      if ( v34 )
        MiGetPdeAddress(v34);
      PdeAddress = MiGetPdeAddress((unsigned __int64)v4 + *(unsigned int *)(BugCheckParameter2 + 64) - 1);
      if ( v35 )
      {
        v26 = MiGetPdeAddress(v35);
        if ( v26 == PdeAddress )
          PdeAddress -= 8LL;
      }
      if ( PdeAddress >= v25 )
        MiDeleteSessionPdes(v25, PdeAddress);
      v22 = v41;
    }
    v27 = v36;
    if ( v36 )
    {
      v28 = MiPartitionIdToPointer(*(_WORD *)(v22 + 3182));
      MiReturnCommit(v28, v27 - v33[1]);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v41 + 48), -v27);
    }
    if ( (a2 & 0x10) != 0 )
      MiDereferenceImports(*(_QWORD *)(BugCheckParameter2 + 136));
    v10 = 0;
  }
  else
  {
    v10 = 1;
    v39 = 1;
  }
  if ( (*(_WORD *)(BugCheckParameter2 + 108))-- != 1 )
  {
    if ( !v10 && (a2 & 2) != 0 )
      VfDriverUnloadImage(BugCheckParameter2);
    return;
  }
  if ( v10 )
  {
    if ( dword_14044B1C8 )
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
  if ( v10 )
  {
    if ( (a2 & 0x10) != 0 )
      MiDereferenceImports(*(_QWORD *)(BugCheckParameter2 + 136));
  }
  else
  {
    MiReleasePrivilegedPtes(v40, (unsigned int)v9);
    v9 = 0LL;
  }
  v12 = *(void **)(BugCheckParameter2 + 136);
  if ( v12 != (void *)-2LL )
  {
    if ( v12 == (void *)1 )
      goto LABEL_20;
    if ( ((unsigned __int8)v12 & 1) == 0 )
      ExFreePoolWithTag(v12, 0);
  }
  *(_QWORD *)(BugCheckParameter2 + 136) = 1LL;
LABEL_20:
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
      v14 = v15;
      if ( *(_QWORD *)BugCheckParameter2 )
      {
        v38[0] = v15;
        MiManageSubsectionView((__int64 *)v38, v30, 4);
      }
    }
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
    if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS((unsigned __int64)v4) )
    {
      if ( (BYTE4(PerfGlobalGroupMask[0]) & 1) != 0 )
      {
        inited = MiInitPerfMemoryFlags(0, 6);
        MiLogPerfMemoryRangeEvent((__int64)v4, 0LL, inited, (v9 + 511) & 0xFFFFFFFFFFFFFE00uLL);
      }
      MiUnmapLargeDriver(v4, v9);
      v7 = v31;
      v13 = 1;
    }
    else
    {
      if ( v30 )
        MiUnlockDriverCode(BugCheckParameter2);
      qword_1403CB578 = BugCheckParameter2;
      MiDeleteSystemPagableVm((__int64)AnyMultiplexedVm, v14, v40, v9, 5, v33);
      if ( v14 )
        MiWalkEntireImage(v14, (__int64)v37, 4u, 0xFFFFFFFF);
      qword_1403CB578 = 0LL;
      _InterlockedExchangeAdd((_DWORD *)&xmmword_1403CB5A0 + 3, LODWORD(v33[0]) - LODWORD(v33[3]));
      v7 = v31;
      if ( !v31 )
      {
        MiReleasePrivilegedPtes(v40, (unsigned int)v9 + v32);
        v17 = v40;
        MiReleaseDriverPtes(0LL, v40, (unsigned int)v9 + v32);
        goto LABEL_37;
      }
    }
  }
  v17 = v40;
LABEL_37:
  if ( v39 == 1 )
  {
    if ( v7 )
      MiReleasePrivilegedPtes(v17, (unsigned int)v9 + v32);
    if ( (a2 & 1) != 0 )
      MiReturnSystemImageCommitment(BugCheckParameter2, v33);
  }
  if ( *(_QWORD *)BugCheckParameter2 )
  {
    MiProcessLoaderEntry((_QWORD *)BugCheckParameter2, 0);
    if ( (PerfGlobalGroupMask[0] & 4) != 0 )
      EtwpTraceImageUnload(
        (unsigned __int16 *)(BugCheckParameter2 + 72),
        0LL,
        0LL,
        v4,
        *(unsigned int *)(BugCheckParameter2 + 64),
        *(_DWORD *)(BugCheckParameter2 + 120),
        *(_WORD *)(BugCheckParameter2 + 110) & 0xF,
        (*(unsigned __int16 *)(BugCheckParameter2 + 110) >> 4) & 7,
        0,
        0);
  }
  v18 = *(void **)(BugCheckParameter2 + 80);
  if ( v18 )
    ExFreePoolWithTag(v18, 0);
  if ( v7 )
  {
    if ( v30 )
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
    if ( v30 && v39 && *(_DWORD *)(((BugCheckParameter2 + 160) & -(__int64)((a2 & 4) != 0)) + 0x24) >= 0x20u )
      MiReturnCrossPartitionControlAreaCharges(v21);
    MiDereferenceControlArea(v21);
    ObDereferenceObjectDeferDelete(v7);
  }
  ExFreePoolWithTag((PVOID)BugCheckParameter2, 0);
}
