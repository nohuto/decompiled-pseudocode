/*
 * XREFs of MiMakeOutswappedPageResident @ 0x1402125D4
 * Callers:
 *     MmInSwapProcess @ 0x140114710 (MmInSwapProcess.c)
 * Callees:
 *     MiInitializePageColorBase @ 0x14002A810 (MiInitializePageColorBase.c)
 *     MiInitializeInPageSupport @ 0x14002AA00 (MiInitializeInPageSupport.c)
 *     MiCaptureDirtyBitToPfn @ 0x140032400 (MiCaptureDirtyBitToPfn.c)
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MiGetPage @ 0x1400489F0 (MiGetPage.c)
 *     MiUnlinkPageFromList @ 0x14004B0F0 (MiUnlinkPageFromList.c)
 *     IoPageReadEx @ 0x140064A60 (IoPageReadEx.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     MmUnmapLockedPages @ 0x140074D40 (MmUnmapLockedPages.c)
 *     KeDelayExecutionThread @ 0x1400818C0 (KeDelayExecutionThread.c)
 *     MiReleasePageFileInfo @ 0x1400C0554 (MiReleasePageFileInfo.c)
 *     MiInitializePfnForOtherProcess @ 0x1400C457C (MiInitializePfnForOtherProcess.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1400ED258 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400ED9A0 (MiMapPageInHyperSpaceWorker.c)
 *     MiIsPfnInline @ 0x140106F50 (MiIsPfnInline.c)
 *     MiGetPagingFileOffset @ 0x14010C6B8 (MiGetPagingFileOffset.c)
 *     MiIsRetryIoStatus @ 0x140124FC0 (MiIsRetryIoStatus.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiInvalidPteConforms @ 0x14017C70C (MiInvalidPteConforms.c)
 *     MiMakeDemandZeroPte @ 0x14017C774 (MiMakeDemandZeroPte.c)
 *     MiMakeTransitionPte @ 0x14017C848 (MiMakeTransitionPte.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     MiFlushAllFilesystemPages @ 0x140218D3C (MiFlushAllFilesystemPages.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14022A1D0 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MiDiscardTransitionPte @ 0x14022AE0C (MiDiscardTransitionPte.c)
 *     MiStoreFaultComplete @ 0x14022C3EC (MiStoreFaultComplete.c)
 *     MiWaitForFreePage @ 0x14023059C (MiWaitForFreePage.c)
 *     MiValidatePagefilePageHash @ 0x140232750 (MiValidatePagefilePageHash.c)
 *     SmPageRead @ 0x140271800 (SmPageRead.c)
 */

unsigned __int64 __fastcall MiMakeOutswappedPageResident(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5)
{
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rsi
  struct _KEVENT *v8; // r13
  __int64 v9; // rdx
  unsigned __int64 *v10; // r9
  unsigned __int64 PteShadow; // rbx
  int v12; // eax
  __int64 v13; // r14
  __int64 v14; // rsi
  unsigned __int8 v15; // r15
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // r9
  __int64 v19; // rdi
  char v20; // al
  unsigned __int64 v21; // rax
  _WORD *v22; // r8
  struct _KEVENT *v23; // r15
  unsigned int v24; // edi
  __int64 Page; // rax
  __int64 v26; // r13
  __int64 TransitionPte; // rax
  __int64 v28; // rdi
  __int64 v29; // rsi
  unsigned __int64 v30; // rax
  __int64 v31; // rdx
  __int64 *v32; // r10
  unsigned __int64 v33; // r12
  __int16 v34; // r9
  __int64 v35; // r8
  __int64 *v36; // rdi
  __int64 v37; // r12
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rax
  ULONG v40; // r12d
  __int64 v41; // rbx
  char v42; // r9
  unsigned int v43; // ebx
  unsigned int PagingFileOffset; // eax
  unsigned __int8 v45; // r9
  char v46; // r9
  char v47; // di
  __int64 v48; // r12
  NTSTATUS v49; // eax
  unsigned __int8 v50; // al
  NTSTATUS v51; // r15d
  bool v52; // zf
  unsigned __int64 v53; // r8
  unsigned __int64 v54; // rdx
  unsigned __int64 ValidPte; // rbx
  unsigned __int64 v56; // rax
  __int64 v57; // rdx
  unsigned __int64 *v58; // r10
  unsigned __int8 v60[4]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v61; // [rsp+44h] [rbp-BCh]
  __int64 v62; // [rsp+48h] [rbp-B8h]
  struct _KEVENT *v63; // [rsp+50h] [rbp-B0h]
  __int64 v64; // [rsp+58h] [rbp-A8h]
  __int64 v65; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v66; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v67; // [rsp+70h] [rbp-90h]
  unsigned __int64 v68; // [rsp+78h] [rbp-88h]
  void *v69; // [rsp+80h] [rbp-80h]
  _WORD *v70; // [rsp+88h] [rbp-78h] BYREF
  __int16 v71; // [rsp+90h] [rbp-70h]
  unsigned __int16 v72; // [rsp+92h] [rbp-6Eh]
  ULONG_PTR BugCheckParameter2[4]; // [rsp+98h] [rbp-68h] BYREF
  struct _KEVENT Event; // [rsp+B8h] [rbp-48h] BYREF
  int v75; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v76; // [rsp+F0h] [rbp-10h]
  ULONG_PTR BugCheckParameter4[10]; // [rsp+F8h] [rbp-8h] BYREF
  int v78; // [rsp+14Ch] [rbp+4Ch]
  char v79; // [rsp+155h] [rbp+55h]
  char v80; // [rsp+157h] [rbp+57h]
  struct _MDL MemoryDescriptorList; // [rsp+198h] [rbp+98h] BYREF
  __int64 v82; // [rsp+1C8h] [rbp+C8h]

  v5 = *(unsigned __int16 *)(a1 + 1452);
  v6 = a4;
  v7 = a3;
  v64 = a4;
  v8 = *(struct _KEVENT **)(qword_140388AF0 + 8 * v5);
  v63 = v8;
  v67 = a2;
  v62 = a3;
  while ( 1 )
  {
    do
    {
      v10 = (unsigned __int64 *)(v7 + MiMapPageInHyperSpaceWorker(v6, v60, 0x80000000));
      PteShadow = *v10;
      if ( (unsigned __int64)v10 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v10 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow();
      LOBYTE(v9) = v60[0];
      v66 = PteShadow;
      MiUnmapPageInHyperSpaceWorker((unsigned __int64)v10, v9, 0x80000000LL);
      LOBYTE(v12) = MiInvalidPteConforms(PteShadow);
    }
    while ( !v12 );
    if ( (PteShadow & 0x800) == 0 )
      break;
    v13 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v66);
    if ( MiIsPfnInline(v13) )
    {
      v14 = 48 * v13 - 0x58000000000LL;
      v15 = MiLockPageInline(v14);
      v16 = MiMapPageInHyperSpaceWorker(v6, 0LL, 0x80000000);
      v18 = v62 + v16;
      v19 = *(_QWORD *)(v62 + v16);
      if ( v62 + v16 >= 0xFFFFF6FB7DBED000uLL )
      {
        v17 = 0xFFFFF6FB7DBED7F8uLL;
        if ( v18 <= 0xFFFFF6FB7DBED7F8uLL )
          v19 = MiReadPteShadow();
      }
      LOBYTE(v17) = 17;
      MiUnmapPageInHyperSpaceWorker(v18, v17, 0x80000000LL);
      if ( v19 == PteShadow )
      {
        if ( (*(_BYTE *)(v14 + 34) & 7) == 6 )
        {
          *(_QWORD *)(v14 + 24) ^= (*(_QWORD *)(v14 + 24) ^ (*(_QWORD *)(v14 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
LABEL_18:
          v21 = MiCaptureDirtyBitToPfn(v14);
          _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v15);
          if ( v21 )
            MiReleasePageFileInfo(v8, v21, 0);
          goto LABEL_56;
        }
        if ( MiUnlinkPageFromList(v14, 0LL) )
        {
          v20 = *(_BYTE *)(v14 + 34);
          ++*(_WORD *)(v14 + 32);
          *(_BYTE *)(v14 + 34) = v20 & 0xF8 | 6;
          *(_QWORD *)(v14 + 24) = *(_QWORD *)(v14 + 24) & 0xC000000000000000uLL | 1;
          goto LABEL_18;
        }
        MiDiscardTransitionPte(v14);
      }
      _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v15);
      v6 = v64;
      v7 = v62;
    }
  }
  MiInitializePageColorBase(0LL, a5 + 1, (__int64)&v70);
  v22 = v70;
  v23 = v8;
  ++*v70;
  v24 = v72 | (unsigned __int16)(v71 & *v22);
  while ( 1 )
  {
    Page = MiGetPage((__int64)v8, v24, 0x80u);
    v13 = Page;
    if ( Page != -1 )
      break;
    MiWaitForFreePage(v8);
  }
  v26 = 48 * Page - 0x58000000000LL;
  TransitionPte = MiMakeTransitionPte(Page, (PteShadow >> 5) & 0x1F);
  v28 = v64;
  v29 = TransitionPte;
  v30 = MiMapPageInHyperSpaceWorker(v64, v60, 0x80000000);
  v32 = (__int64 *)(v62 + v30);
  *v32 = v29;
  if ( (unsigned __int64)v32 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v32 <= 0xFFFFF6FB7DBED7F8uLL )
    MiWritePteShadow();
  LOBYTE(v31) = v60[0];
  MiUnmapPageInHyperSpaceWorker((unsigned __int64)v32, v31, 0x80000000LL);
  v33 = v67;
  if ( v67 == 0xFFFFF6FB7DBEDF68uLL )
  {
    v34 = 2560;
    v35 = v13;
  }
  else
  {
    v34 = 512;
    v35 = v28;
  }
  MiInitializePfnForOtherProcess(v13, v67, v35, v34);
  v36 = (__int64 *)(v26 + 16);
  *(_QWORD *)(v26 + 16) = PteShadow;
  v37 = (__int64)(v33 << 25) >> 16;
  v38 = ((unsigned __int64)(v37 & 0xFFF) + 0x1FFF) >> 12;
  LOWORD(v38) = 8 * (v38 + 6);
  v68 = v38;
  v39 = v37 & 0xFFFFFFFFFFFFF000uLL;
  v40 = v37 & 0xFFF;
  v69 = (void *)v39;
  v65 = v40;
  while ( 1 )
  {
    MiInitializeInPageSupport((ULONG_PTR)BugCheckParameter2, 0);
    v41 = *v36;
    v42 = 0;
    v80 |= 0x10u;
    if ( (v41 & 4) != 0 )
      v42 = (unsigned __int16)v41 >> 12 == HIDWORD(v23[47].Header.WaitListHead.Flink);
    v79 = v79 & 0x7F | (v42 << 7);
    v43 = (unsigned __int16)v41 >> 12;
    PagingFileOffset = MiGetPagingFileOffset(v36);
    v46 = v45 >> 7;
    v47 = 0;
    if ( v46 )
      BugCheckParameter4[0] = PagingFileOffset | ((unsigned __int64)v43 << 60);
    else
      BugCheckParameter4[0] = (unsigned __int64)PagingFileOffset << 12;
    MemoryDescriptorList.Size = v68;
    MemoryDescriptorList.StartVa = v69;
    MemoryDescriptorList.MdlFlags = 16386;
    MemoryDescriptorList.Next = 0LL;
    MemoryDescriptorList.ByteOffset = v40;
    MemoryDescriptorList.ByteCount = 4096;
    v78 = 4096;
    v82 = v13;
    v48 = *((_QWORD *)&v23[241].Header.WaitListHead.Flink + v43);
    if ( v46 )
    {
      v75 = 0;
      v76 = 0LL;
      v49 = SmPageRead(BugCheckParameter4, &MemoryDescriptorList, &Event, &v75);
    }
    else
    {
      v49 = IoPageReadEx(
              *(struct _FILE_OBJECT **)(v48 + 56),
              (__int64)&MemoryDescriptorList,
              BugCheckParameter4,
              (__int64)&Event,
              (__int64)&v75,
              0,
              0LL);
    }
    if ( v49 < 0 )
    {
      v75 = v49;
      v76 = 0LL;
      KeSetEvent(&Event, 0, 0);
    }
    KeWaitForSingleObject(&Event, WrPageIn, 0, 0, 0LL);
    v61 = 0;
    if ( v79 < 0 )
    {
      MiStoreFaultComplete((ULONG_PTR)BugCheckParameter2);
      v50 = MiLockPageInline(v26);
      if ( HIWORD(v61) )
        v61 = (unsigned __int16)v61 | ((HIWORD(v61) - 1) << 16);
      _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v50);
      v47 = v61;
    }
    v51 = v75;
    if ( v75 >= 0 && *(_QWORD *)(v48 + 216) )
    {
      v80 |= 0x20u;
      v51 = MiValidatePagefilePageHash(BugCheckParameter2);
    }
    if ( (MemoryDescriptorList.MdlFlags & 1) != 0 )
      MmUnmapLockedPages(MemoryDescriptorList.MappedSystemVa, &MemoryDescriptorList);
    if ( v51 >= 0 )
      break;
    if ( !MiIsRetryIoStatus(v51, 0x1000uLL) )
    {
      MiFlushAllFilesystemPages(1LL);
      KeBugCheckEx(0x77u, v51, v51, v43, LODWORD(BugCheckParameter4[0]));
    }
    if ( (v47 & 1) != 0 )
    {
      v23 = v63;
      v52 = (v47 & 2) == 0;
      v40 = v65;
      v36 = (__int64 *)(v26 + 16);
      if ( v52 )
        continue;
    }
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiHalfSecond);
    v23 = v63;
    v36 = (__int64 *)(v26 + 16);
    v40 = v65;
  }
  if ( v76 != 4096 )
  {
    MiFlushAllFilesystemPages(1LL);
    KeBugCheckEx(0x77u, 2uLL, v51, v43, LODWORD(BugCheckParameter4[0]));
  }
  MiLockPageInline(v26);
  *(_QWORD *)(v26 + 16) = MiMakeDemandZeroPte(4);
  *(_BYTE *)(v26 + 34) |= 0x10u;
  _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v53);
  MiReleasePageFileInfo(v63, v54, 0);
  v66 = v29;
LABEL_56:
  ValidPte = MiMakeValidPte(v67, v13, -2147483644);
  v56 = MiMapPageInHyperSpaceWorker(v64, v60, 0x80000000);
  v58 = (unsigned __int64 *)(v62 + v56);
  *v58 = ValidPte;
  if ( (unsigned __int64)v58 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v58 <= 0xFFFFF6FB7DBED7F8uLL )
    MiWritePteShadow();
  LOBYTE(v57) = v60[0];
  MiUnmapPageInHyperSpaceWorker((unsigned __int64)v58, v57, 0x80000000LL);
  return ValidPte;
}
