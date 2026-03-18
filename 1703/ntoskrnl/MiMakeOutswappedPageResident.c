/*
 * XREFs of MiMakeOutswappedPageResident @ 0x14020B6DC
 * Callers:
 *     MmInSwapProcess @ 0x1400411F0 (MmInSwapProcess.c)
 * Callees:
 *     MiIsRetryIoStatus @ 0x140015264 (MiIsRetryIoStatus.c)
 *     MiStoreFaultComplete @ 0x1400379EC (MiStoreFaultComplete.c)
 *     SmPageRead @ 0x14003897C (SmPageRead.c)
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     IoPageReadEx @ 0x14004AFE0 (IoPageReadEx.c)
 *     MiIsPteInStore @ 0x140074CBC (MiIsPteInStore.c)
 *     MiGetPagingFileOffset @ 0x14007720C (MiGetPagingFileOffset.c)
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MmUnmapLockedPages @ 0x1400A3B30 (MmUnmapLockedPages.c)
 *     MiReleasePageFileInfo @ 0x1400ABFD4 (MiReleasePageFileInfo.c)
 *     MiIsPfnInline @ 0x1400B54F0 (MiIsPfnInline.c)
 *     MiGetPage @ 0x1400BBC00 (MiGetPage.c)
 *     MiUnlinkPageFromList @ 0x1400C3100 (MiUnlinkPageFromList.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     KeDelayExecutionThread @ 0x1400EE150 (KeDelayExecutionThread.c)
 *     MiInitializeInPageSupport @ 0x1400FC010 (MiInitializeInPageSupport.c)
 *     MiCaptureDirtyBitToPfn @ 0x140100BFC (MiCaptureDirtyBitToPfn.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140103140 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1401038C0 (MiMapPageInHyperSpaceWorker.c)
 *     MiFinalizePageAttribute @ 0x140105D40 (MiFinalizePageAttribute.c)
 *     MiInitializePageColorBase @ 0x1401069F0 (MiInitializePageColorBase.c)
 *     MiInitializePfnForOtherProcess @ 0x14010A008 (MiInitializePfnForOtherProcess.c)
 *     MiMarkPageActive @ 0x14010A760 (MiMarkPageActive.c)
 *     MiValidatePagefilePageHash @ 0x14013B100 (MiValidatePagefilePageHash.c)
 *     MiDiscardTransitionPte @ 0x14013B9CC (MiDiscardTransitionPte.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiInvalidPteConforms @ 0x14017CEB0 (MiInvalidPteConforms.c)
 *     MiMakeDemandZeroPte @ 0x14017CF18 (MiMakeDemandZeroPte.c)
 *     MiMakeTransitionPte @ 0x14017CFB4 (MiMakeTransitionPte.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     MiFlushAllFilesystemPages @ 0x1402114A0 (MiFlushAllFilesystemPages.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14021EE14 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWaitForFreePage @ 0x140220450 (MiWaitForFreePage.c)
 */

unsigned __int64 __fastcall MiMakeOutswappedPageResident(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5)
{
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rsi
  struct _KEVENT *v8; // r13
  __int64 v9; // rax
  unsigned __int64 v10; // rdi
  __int64 v11; // r9
  int v12; // eax
  __int64 v13; // r15
  __int64 v14; // rsi
  unsigned __int8 v15; // r14
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // r9
  char v19; // al
  unsigned __int64 v20; // rax
  _WORD *v21; // r8
  __int16 v22; // ax
  unsigned int v23; // ebx
  __int64 Page; // rax
  __int64 v25; // r14
  __int64 TransitionPte; // rax
  __int64 v27; // r12
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 *v30; // rcx
  __int64 v31; // r10
  unsigned __int64 v32; // rbx
  unsigned int *v33; // r12
  __int64 v34; // r13
  void *v35; // rdi
  unsigned __int64 v36; // rbx
  ULONG v37; // r13d
  __int64 v38; // rdx
  BOOL IsPteInStore; // eax
  unsigned __int64 v40; // r12
  unsigned int v41; // r12d
  unsigned int PagingFileOffset; // eax
  __int64 v43; // r10
  unsigned __int8 v44; // r9
  char v45; // r9
  __int64 v46; // rax
  NTSTATUS v47; // eax
  char v48; // bl
  unsigned __int8 v49; // al
  NTSTATUS Status; // edi
  bool v51; // zf
  unsigned __int64 v52; // r8
  unsigned __int64 v53; // rdx
  unsigned __int64 ValidPte; // rbx
  __int64 v55; // rax
  unsigned __int64 *v56; // rcx
  __int64 v57; // r10
  unsigned __int8 v59[4]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v60; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v61; // [rsp+48h] [rbp-B8h]
  __int64 v62; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v63; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v64; // [rsp+60h] [rbp-A0h]
  struct _KEVENT *v65; // [rsp+68h] [rbp-98h]
  __int64 v66; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v67; // [rsp+78h] [rbp-88h]
  __int64 v68; // [rsp+80h] [rbp-80h]
  _WORD *v69; // [rsp+88h] [rbp-78h] BYREF
  __int16 v70; // [rsp+90h] [rbp-70h]
  unsigned __int16 v71; // [rsp+92h] [rbp-6Eh]
  ULONG_PTR BugCheckParameter2[4]; // [rsp+98h] [rbp-68h] BYREF
  struct _KEVENT Event; // [rsp+B8h] [rbp-48h] BYREF
  struct _IO_STATUS_BLOCK v74; // [rsp+E8h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter4[10]; // [rsp+F8h] [rbp-8h] BYREF
  int v76; // [rsp+14Ch] [rbp+4Ch]
  char v77; // [rsp+155h] [rbp+55h]
  char v78; // [rsp+157h] [rbp+57h]
  struct _MDL MemoryDescriptorList; // [rsp+198h] [rbp+98h] BYREF
  __int64 v80; // [rsp+1C8h] [rbp+C8h]

  v5 = *(unsigned __int16 *)(a1 + 1452);
  v6 = a4;
  v7 = a3;
  v62 = a4;
  v8 = *(struct _KEVENT **)(qword_14036C8F8 + 8 * v5);
  v65 = v8;
  v67 = a2;
  v61 = a3;
  while ( 1 )
  {
    do
    {
      v9 = MiMapPageInHyperSpaceWorker(v6, v59, 0x80000000);
      v66 = MI_READ_PTE_LOCK_FREE(v7 + v9);
      v10 = v66;
      MiUnmapPageInHyperSpaceWorker(v11, v59[0]);
      LOBYTE(v12) = MiInvalidPteConforms(v10);
    }
    while ( !v12 );
    if ( (v10 & 0x800) == 0 )
      break;
    v13 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v66);
    if ( MiIsPfnInline(v13) )
    {
      v14 = 48 * v13 - 0x58000000000LL;
      v15 = MiLockPageInline(v14);
      v16 = MiMapPageInHyperSpaceWorker(v6, 0LL, 0x80000000);
      v17 = MI_READ_PTE_LOCK_FREE(v61 + v16);
      MiUnmapPageInHyperSpaceWorker(v18, 0x11u);
      if ( v17 == v10 )
      {
        if ( (*(_BYTE *)(v14 + 34) & 7) == 6 )
        {
          *(_QWORD *)(v14 + 24) ^= (*(_QWORD *)(v14 + 24) ^ (*(_QWORD *)(v14 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
LABEL_12:
          v20 = MiCaptureDirtyBitToPfn(v14);
          _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v15);
          if ( v20 )
            MiReleasePageFileInfo(v8, v20, 0);
          goto LABEL_47;
        }
        if ( MiUnlinkPageFromList(v14, 0) )
        {
          v19 = *(_BYTE *)(v14 + 34);
          ++*(_WORD *)(v14 + 32);
          *(_BYTE *)(v14 + 34) = v19 & 0xF8 | 6;
          *(_QWORD *)(v14 + 24) = *(_QWORD *)(v14 + 24) & 0xC000000000000000uLL | 1;
          goto LABEL_12;
        }
        MiDiscardTransitionPte(v14);
      }
      _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v15);
      v6 = v62;
      v7 = v61;
    }
  }
  MiInitializePageColorBase(0LL, a5 + 1, (__int64)&v69);
  v21 = v69;
  v22 = v70;
  ++*v69;
  v23 = v71 | (unsigned __int16)(v22 & *v21);
  while ( 1 )
  {
    Page = MiGetPage((__int64)v8, v23, 0);
    v13 = Page;
    if ( Page != -1 )
      break;
    MiWaitForFreePage(v8);
  }
  v25 = 48 * Page - 0x58000000000LL;
  MiFinalizePageAttribute(v25, 1u, 0);
  TransitionPte = MiMakeTransitionPte(v13, (v10 >> 5) & 0x1F);
  v27 = v62;
  v28 = TransitionPte;
  v29 = MiMapPageInHyperSpaceWorker(v62, v59, 0x80000000);
  v30 = (__int64 *)(v61 + v29);
  *v30 = v28;
  if ( MiPteInShadowRange((unsigned __int64)v30) )
    MiWritePteShadow();
  MiUnmapPageInHyperSpaceWorker(v31, v59[0]);
  v32 = v67;
  if ( v67 == 0xFFFFF6FB7DBEDF68uLL )
  {
    MiInitializePfnForOtherProcess(v13, 0xFFFFF6FB7DBEDF68uLL, -1LL, 0);
    *(_QWORD *)(v25 + 40) ^= (v13 ^ *(_QWORD *)(v25 + 40)) & 0xFFFFFFFFFLL;
  }
  else
  {
    MiInitializePfnForOtherProcess(v13, v67, v27, 0);
  }
  MiMarkPageActive(v25);
  v33 = (unsigned int *)(v25 + 16);
  *(_QWORD *)(v25 + 16) = v10;
  v34 = (__int64)(v32 << 25) >> 16;
  v35 = (void *)(v34 & 0xFFFFFFFFFFFFF000uLL);
  v64 = v34 & 0xFFFFFFFFFFFFF000uLL;
  v36 = ((unsigned __int64)(((_WORD)v32 << 9) & 0xFFF) + 0x1FFF) >> 12;
  v63 = v36;
  v37 = v34 & 0xFFF;
  while ( 1 )
  {
    MiInitializeInPageSupport((ULONG_PTR)BugCheckParameter2, 0);
    v38 = *(_QWORD *)v33;
    v78 |= 0x10u;
    IsPteInStore = MiIsPteInStore((__int64)v65, v38);
    v40 = (unsigned __int64)*v33 >> 12;
    v77 = v77 & 0x7F | (IsPteInStore << 7);
    v41 = v40 & 0xF;
    PagingFileOffset = MiGetPagingFileOffset(v25 + 16);
    v45 = v44 >> 7;
    if ( v45 )
      BugCheckParameter4[0] = PagingFileOffset | ((unsigned __int64)v41 << 60);
    else
      BugCheckParameter4[0] = (unsigned __int64)PagingFileOffset << 12;
    MemoryDescriptorList.Next = 0LL;
    MemoryDescriptorList.Size = 8 * (v36 + 6);
    MemoryDescriptorList.StartVa = v35;
    MemoryDescriptorList.MdlFlags = 16386;
    MemoryDescriptorList.ByteOffset = v37;
    MemoryDescriptorList.ByteCount = 4096;
    v76 = 4096;
    v80 = v13;
    v46 = *(_QWORD *)(v43 + 8LL * v41 + 5600);
    v68 = v46;
    if ( v45 )
    {
      v74.Status = 0;
      v74.Information = 0LL;
      v47 = SmPageRead((union _MM_STORE_KEY *)BugCheckParameter4, (int)&MemoryDescriptorList);
    }
    else
    {
      v47 = IoPageReadEx(
              *(struct _FILE_OBJECT **)(v46 + 56),
              &MemoryDescriptorList,
              BugCheckParameter4,
              &Event,
              &v74,
              0,
              0LL);
    }
    if ( v47 < 0 )
    {
      v74.Status = v47;
      v74.Information = 0LL;
      KeSetEvent(&Event, 0, 0);
    }
    KeWaitForSingleObject(&Event, WrPageIn, 0, 0, 0LL);
    v48 = 0;
    v60 = 0;
    if ( v77 < 0 )
    {
      MiStoreFaultComplete((ULONG_PTR)BugCheckParameter2, &v60);
      v49 = MiLockPageInline(v25);
      if ( HIWORD(v60) )
        v60 = (unsigned __int16)v60 | ((HIWORD(v60) - 1) << 16);
      _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v49);
      v48 = v60;
    }
    Status = v74.Status;
    if ( v74.Status >= 0 && *(_QWORD *)(v68 + 216) )
    {
      v78 |= 0x20u;
      Status = MiValidatePagefilePageHash((__int64)BugCheckParameter2);
    }
    if ( (MemoryDescriptorList.MdlFlags & 1) != 0 )
      MmUnmapLockedPages(MemoryDescriptorList.MappedSystemVa, &MemoryDescriptorList);
    if ( Status >= 0 )
      break;
    if ( !MiIsRetryIoStatus(Status, 0x1000uLL) )
    {
      MiFlushAllFilesystemPages(1LL);
      KeBugCheckEx(0x77u, Status, Status, v41, LODWORD(BugCheckParameter4[0]));
    }
    if ( (v48 & 1) != 0 )
    {
      v35 = (void *)v64;
      v33 = (unsigned int *)(v25 + 16);
      v51 = (v48 & 2) == 0;
      LOWORD(v36) = v63;
      if ( v51 )
        continue;
    }
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiHalfSecond);
    LOWORD(v36) = v63;
    v33 = (unsigned int *)(v25 + 16);
    v35 = (void *)v64;
  }
  if ( v74.Information != 4096 )
  {
    MiFlushAllFilesystemPages(1LL);
    KeBugCheckEx(0x77u, 2uLL, Status, v41, LODWORD(BugCheckParameter4[0]));
  }
  MiLockPageInline(v25);
  *(_QWORD *)(v25 + 16) = MiMakeDemandZeroPte(4);
  *(_BYTE *)(v25 + 34) |= 0x10u;
  _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v52);
  MiReleasePageFileInfo(v65, v53, 0);
  v66 = v28;
LABEL_47:
  ValidPte = MiMakeValidPte(v67, v13, -2147483644);
  v55 = MiMapPageInHyperSpaceWorker(v62, v59, 0x80000000);
  v56 = (unsigned __int64 *)(v61 + v55);
  *v56 = ValidPte;
  if ( MiPteInShadowRange((unsigned __int64)v56) )
    MiWritePteShadow();
  MiUnmapPageInHyperSpaceWorker(v57, v59[0]);
  return ValidPte;
}
