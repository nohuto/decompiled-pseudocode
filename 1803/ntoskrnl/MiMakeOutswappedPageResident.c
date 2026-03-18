/*
 * XREFs of MiMakeOutswappedPageResident @ 0x140250B10
 * Callers:
 *     KiInSwapProcesses @ 0x1400EB0B0 (KiInSwapProcesses.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiGetPage @ 0x140018200 (MiGetPage.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     IoPageReadEx @ 0x140048610 (IoPageReadEx.c)
 *     MiInitializePageColorBase @ 0x140057920 (MiInitializePageColorBase.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiInitializePfnForOtherProcess @ 0x140071528 (MiInitializePfnForOtherProcess.c)
 *     MiSetPageTablePfnBuddy @ 0x140071888 (MiSetPageTablePfnBuddy.c)
 *     MiIsPteInStore @ 0x1400C62F4 (MiIsPteInStore.c)
 *     MiReleasePageFileInfo @ 0x1400D6FBC (MiReleasePageFileInfo.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     KeDelayExecutionThread @ 0x140104BA0 (KeDelayExecutionThread.c)
 *     MmUnmapLockedPages @ 0x140110450 (MmUnmapLockedPages.c)
 *     MiUnlinkPageFromList @ 0x14011AAD0 (MiUnlinkPageFromList.c)
 *     MiCaptureDirtyBitToPfn @ 0x140124940 (MiCaptureDirtyBitToPfn.c)
 *     MiInitializeInPageSupport @ 0x140127F00 (MiInitializeInPageSupport.c)
 *     MiIsRetryIoStatus @ 0x140135210 (MiIsRetryIoStatus.c)
 *     MiIsPfnInline @ 0x140136FF0 (MiIsPfnInline.c)
 *     MiGetPagingFileOffset @ 0x14013C69C (MiGetPagingFileOffset.c)
 *     MiValidatePagefilePageHash @ 0x140153348 (MiValidatePagefilePageHash.c)
 *     MiStoreFaultComplete @ 0x14015429C (MiStoreFaultComplete.c)
 *     SmPageRead @ 0x1401542D8 (SmPageRead.c)
 *     MiDiscardTransitionPte @ 0x140154D68 (MiDiscardTransitionPte.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MiInvalidPteConforms @ 0x1401A6560 (MiInvalidPteConforms.c)
 *     MiMakeDemandZeroPte @ 0x1401A65C8 (MiMakeDemandZeroPte.c)
 *     MiMakeTransitionPte @ 0x1401A669C (MiMakeTransitionPte.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     MiFlushAllFilesystemPages @ 0x140255BA8 (MiFlushAllFilesystemPages.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x140264B7C (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MiWaitForFreePage @ 0x14026B8B0 (MiWaitForFreePage.c)
 */

__int64 __fastcall MiMakeOutswappedPageResident(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  _QWORD *v5; // r12
  struct _KEVENT *v6; // r13
  unsigned __int64 v7; // rbx
  int v8; // eax
  __int16 v9; // cx
  __int64 v10; // r14
  __int64 v11; // r9
  ULONG_PTR v12; // rdi
  unsigned __int8 v13; // si
  char v14; // al
  __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  __int64 v18; // r9
  __int16 v19; // ax
  unsigned int v20; // ebx
  __int64 Page; // rax
  unsigned __int64 v22; // rbx
  __int64 v23; // rsi
  __int64 TransitionPte; // rax
  __int64 v25; // rdi
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 *v28; // r15
  ULONG v29; // ebx
  __int64 v30; // rdx
  BOOL IsPteInStore; // eax
  __int64 v32; // r13
  unsigned int PagingFileOffset; // eax
  char v34; // r9
  __int64 v35; // rax
  int v36; // eax
  char v37; // bl
  unsigned __int8 v38; // al
  NTSTATUS v39; // r15d
  bool v40; // zf
  __int64 DemandZeroPte; // rax
  char v42; // cl
  unsigned __int64 v43; // r8
  unsigned __int64 v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v49; // [rsp+48h] [rbp-C0h] BYREF
  struct _KEVENT *v50; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v51; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v52; // [rsp+60h] [rbp-A8h]
  __int64 v53; // [rsp+68h] [rbp-A0h]
  void *v54; // [rsp+70h] [rbp-98h]
  __int64 v55; // [rsp+78h] [rbp-90h]
  volatile signed __int32 *v56; // [rsp+80h] [rbp-88h] BYREF
  __int16 v57; // [rsp+88h] [rbp-80h]
  unsigned __int16 v58; // [rsp+8Ah] [rbp-7Eh]
  ULONG_PTR BugCheckParameter2[4]; // [rsp+90h] [rbp-78h] BYREF
  struct _KEVENT Event; // [rsp+B0h] [rbp-58h] BYREF
  int v61; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v62; // [rsp+E8h] [rbp-20h]
  ULONG_PTR BugCheckParameter4[10]; // [rsp+F0h] [rbp-18h] BYREF
  int v64; // [rsp+144h] [rbp+3Ch]
  char v65; // [rsp+14Dh] [rbp+45h]
  char v66; // [rsp+14Fh] [rbp+47h]
  struct _MDL MemoryDescriptorList; // [rsp+198h] [rbp+90h] BYREF
  __int64 v68; // [rsp+1C8h] [rbp+C0h]

  v5 = (_QWORD *)(a1 + 1088);
  v6 = *(struct _KEVENT **)(qword_1403CBD88 + 8LL * *(unsigned __int16 *)(a1 + 1454));
  v50 = v6;
  while ( 1 )
  {
    do
    {
      v51 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v5);
      v7 = v51;
      LOBYTE(v8) = MiInvalidPteConforms(v51);
    }
    while ( !v8 );
    if ( (v9 & 0x800) == 0 )
      break;
    v10 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v51);
    if ( MiIsPfnInline(v10) )
    {
      v12 = v11 + 48 * v10;
      v13 = MiLockPageInline(v12);
      if ( MI_READ_PTE_LOCK_FREE((unsigned __int64)v5) == v7 )
      {
        if ( (*(_BYTE *)(v12 + 34) & 7) == 6 )
        {
          v16 = *(_QWORD *)(v12 + 24) ^ (*(_QWORD *)(v12 + 24) ^ (*(_QWORD *)(v12 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
LABEL_12:
          *(_QWORD *)(v12 + 24) = v16;
          v17 = MiCaptureDirtyBitToPfn(v12);
          _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v13);
          if ( v17 )
            MiReleasePageFileInfo(v6, v17, 0);
          goto LABEL_44;
        }
        if ( (unsigned int)MiUnlinkPageFromList(v12, 0LL) )
        {
          v14 = *(_BYTE *)(v12 + 34);
          ++*(_WORD *)(v12 + 32);
          v15 = *(_QWORD *)(v12 + 24);
          *(_BYTE *)(v12 + 34) = v14 & 0xF8 | 6;
          v16 = v15 & 0xC000000000000000uLL | 1;
          goto LABEL_12;
        }
        MiDiscardTransitionPte(v12);
      }
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v13);
    }
  }
  MiInitializePageColorBase(0LL, a5 + 1, (__int64)&v56);
  v19 = _InterlockedExchangeAdd(v56, 1u);
  v20 = v58 | (unsigned __int16)(v19 & v57);
  while ( 1 )
  {
    Page = MiGetPage((__int64)v6, v20, 0x200u);
    v10 = Page;
    if ( Page != -1 )
      break;
    MiWaitForFreePage(v6);
  }
  v22 = v51;
  v23 = 48 * Page - 0x58000000000LL;
  TransitionPte = MiMakeTransitionPte(Page, (v51 >> 5) & 0x1F);
  *v5 = TransitionPte;
  v25 = TransitionPte;
  if ( MiPteInShadowRange((unsigned __int64)v5) )
    MiWritePteShadow(v26, v25, v27);
  MiInitializePfnForOtherProcess(v10, 0xFFFFF6FB7DBEDF68uLL, v10, 2560);
  v28 = (__int64 *)(v23 + 16);
  *(_QWORD *)(v23 + 16) = v22;
  v53 = 56LL;
  v29 = 0;
  v54 = (void *)0xFFFFF6FB7DBED000LL;
  v52 = 0LL;
  while ( 1 )
  {
    MiInitializeInPageSupport((ULONG_PTR)BugCheckParameter2, 0);
    v30 = *v28;
    v66 |= 0x10u;
    IsPteInStore = MiIsPteInStore((__int64)v6, v30);
    v32 = (unsigned __int8)HIBYTE(*(_WORD *)v28) >> 4;
    v65 = v65 & 0x7F | (IsPteInStore ? 0x80 : 0);
    PagingFileOffset = MiGetPagingFileOffset((unsigned __int64)v28);
    if ( v34 < 0 )
      BugCheckParameter4[0] = PagingFileOffset | ((unsigned __int64)(unsigned int)v32 << 60);
    else
      BugCheckParameter4[0] = (unsigned __int64)PagingFileOffset << 12;
    MiSetPageTablePfnBuddy(v23, 0xFFFF800000000030uLL, 0);
    MemoryDescriptorList.Size = v53;
    MemoryDescriptorList.StartVa = v54;
    MemoryDescriptorList.MdlFlags = 16386;
    MemoryDescriptorList.Next = 0LL;
    MemoryDescriptorList.ByteOffset = v29;
    MemoryDescriptorList.ByteCount = 4096;
    v64 = 4096;
    v68 = v10;
    v35 = *((_QWORD *)&v50[286].Header.WaitListHead.Blink + v32);
    v55 = v35;
    if ( v65 < 0 )
    {
      v61 = 0;
      v62 = 0LL;
      v36 = SmPageRead((union _MM_STORE_KEY *)BugCheckParameter4, (unsigned __int64)&MemoryDescriptorList);
    }
    else
    {
      v36 = IoPageReadEx(
              *(struct _FILE_OBJECT **)(v35 + 56),
              (__int64)&MemoryDescriptorList,
              BugCheckParameter4,
              (__int64)&Event,
              (__int64)&v61,
              0,
              0LL);
    }
    if ( v36 < 0 )
    {
      v61 = v36;
      v62 = 0LL;
      KeSetEvent(&Event, 0, 0);
    }
    KeWaitForSingleObject(&Event, WrPageIn, 0, 0, 0LL);
    v37 = 0;
    LODWORD(v49) = 0;
    if ( v65 < 0 )
    {
      MiStoreFaultComplete((ULONG_PTR)BugCheckParameter2, &v49);
      v38 = MiLockPageInline(v23);
      if ( WORD1(v49) )
        LODWORD(v49) = (unsigned __int16)v49 | ((WORD1(v49) - 1) << 16);
      _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v38);
      v37 = v49;
    }
    v39 = v61;
    if ( v61 >= 0 && *(_QWORD *)(v55 + 216) )
    {
      v66 |= 0x20u;
      v39 = MiValidatePagefilePageHash((__int64)BugCheckParameter2);
    }
    if ( (MemoryDescriptorList.MdlFlags & 1) != 0 )
      MmUnmapLockedPages(MemoryDescriptorList.MappedSystemVa, &MemoryDescriptorList);
    MiSetPageTablePfnBuddy(v23, 0LL, 0);
    if ( v39 >= 0 )
      break;
    if ( !MiIsRetryIoStatus(v39, 0x1000uLL) )
    {
      MiFlushAllFilesystemPages(1LL);
      KeBugCheckEx(0x77u, v39, v39, (unsigned int)v32, LODWORD(BugCheckParameter4[0]));
    }
    if ( (v37 & 1) != 0 )
    {
      v6 = v50;
      v28 = (__int64 *)(v23 + 16);
      v40 = (v37 & 2) == 0;
      v29 = v52;
      if ( v40 )
        continue;
    }
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiHalfSecond);
    v6 = v50;
    v28 = (__int64 *)(v23 + 16);
    v29 = v52;
  }
  if ( v62 != 4096 )
  {
    MiFlushAllFilesystemPages(1LL);
    KeBugCheckEx(0x77u, 2uLL, v39, (unsigned int)v32, LODWORD(BugCheckParameter4[0]));
  }
  MiLockPageInline(v23);
  DemandZeroPte = MiMakeDemandZeroPte(4);
  v42 = *(_BYTE *)(v23 + 34);
  *(_QWORD *)(v23 + 16) = DemandZeroPte;
  *(_BYTE *)(v23 + 34) = v42 | 0x10;
  _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v43);
  MiReleasePageFileInfo(v50, v44, 0);
  v51 = v25;
LABEL_44:
  *v5 = MiMakeValidPte(0xFFFFF6FB7DBEDF68uLL, v10, 2147483652LL, v18);
  if ( MiPteInShadowRange((unsigned __int64)v5) )
    MiWritePteShadow(v46, v45, v47);
  return v45;
}
