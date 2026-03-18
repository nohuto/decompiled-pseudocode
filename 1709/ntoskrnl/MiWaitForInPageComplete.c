/*
 * XREFs of MiWaitForInPageComplete @ 0x14002D860
 * Callers:
 *     MiPfCompleteInPageSupport @ 0x14002083C (MiPfCompleteInPageSupport.c)
 *     MiIssueHardFault @ 0x14002C7B0 (MiIssueHardFault.c)
 * Callees:
 *     EtwTraceTimedEvent @ 0x140008074 (EtwTraceTimedEvent.c)
 *     MiDeleteControlArea @ 0x14001F4A4 (MiDeleteControlArea.c)
 *     MiFinishHardFault @ 0x14002FC50 (MiFinishHardFault.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     RtlAvlRemoveNode @ 0x140058B30 (RtlAvlRemoveNode.c)
 *     MiCopyPage @ 0x14005A3E0 (MiCopyPage.c)
 *     MiIsAddressValid @ 0x140066790 (MiIsAddressValid.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     MmUnmapLockedPages @ 0x140074D40 (MmUnmapLockedPages.c)
 *     MiZeroPhysicalPage @ 0x140075D00 (MiZeroPhysicalPage.c)
 *     MiFindContiguousPages @ 0x140078120 (MiFindContiguousPages.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     PfLogEvent @ 0x1400B9904 (PfLogEvent.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     MiValidateInPage @ 0x1400CCA70 (MiValidateInPage.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1400ED258 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400ED9A0 (MiMapPageInHyperSpaceWorker.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1400F1C30 (KeReleaseInStackQueuedSpinLock.c)
 *     MiPrefetchRestOfCluster @ 0x140109954 (MiPrefetchRestOfCluster.c)
 *     MiIsRetryIoStatus @ 0x140124FC0 (MiIsRetryIoStatus.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     memset @ 0x140192F40 (memset.c)
 *     MiExceptionForMappedVa @ 0x140213B6C (MiExceptionForMappedVa.c)
 *     MiRetardMdl @ 0x140215E5C (MiRetardMdl.c)
 *     MiFlushAllFilesystemPages @ 0x140218D3C (MiFlushAllFilesystemPages.c)
 *     MiSetFreshPfnFromFreeList @ 0x14022A964 (MiSetFreshPfnFromFreeList.c)
 *     MiStoreFaultComplete @ 0x14022C3EC (MiStoreFaultComplete.c)
 *     MiValidatePagefilePageHash @ 0x140232750 (MiValidatePagefilePageHash.c)
 */

__int64 __fastcall MiWaitForInPageComplete(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 *a6)
{
  ULONG_PTR v6; // rdi
  __int64 v7; // r11
  int v8; // r12d
  ULONG_PTR v12; // rax
  ULONG_PTR PteShadow; // rbx
  unsigned __int64 v14; // rdx
  int v15; // r8d
  int v16; // r9d
  _BYTE *v17; // r14
  __int64 v18; // r14
  unsigned int v19; // r15d
  __int64 v20; // rcx
  int v21; // r14d
  int v22; // edx
  int v23; // ecx
  _QWORD *v24; // r15
  int v25; // ecx
  __int16 v26; // ax
  unsigned int v27; // eax
  int v28; // edx
  struct _KTHREAD *CurrentThread; // rcx
  bool v30; // zf
  ULONG_PTR v31; // rdx
  unsigned __int64 v32; // rdx
  _QWORD *v33; // rcx
  __int64 v34; // rax
  void *v35; // rdi
  __int64 v36; // rdx
  ULONG_PTR *v37; // rdi
  ULONG_PTR *v38; // rbx
  unsigned __int64 v39; // r14
  unsigned __int64 v40; // rdi
  unsigned __int64 v41; // r14
  __int64 v42; // rbx
  __int64 v43; // rbx
  unsigned __int8 v44; // al
  int v46; // [rsp+60h] [rbp-79h]
  unsigned __int64 v47; // [rsp+60h] [rbp-79h]
  ULONG_PTR BugCheckParameter4; // [rsp+68h] [rbp-71h]
  unsigned int v49; // [rsp+70h] [rbp-69h]
  _QWORD *v50; // [rsp+70h] [rbp-69h]
  unsigned __int64 v51; // [rsp+78h] [rbp-61h]
  __int64 v52; // [rsp+80h] [rbp-59h] BYREF
  _DWORD v53[2]; // [rsp+88h] [rbp-51h] BYREF
  __int64 v54; // [rsp+90h] [rbp-49h]
  __int64 v55; // [rsp+98h] [rbp-41h]
  __int64 v56; // [rsp+A0h] [rbp-39h]
  __int64 v57; // [rsp+A8h] [rbp-31h]
  ULONG_PTR BugCheckParameter1; // [rsp+B0h] [rbp-29h]
  __int64 v59; // [rsp+B8h] [rbp-21h]
  _QWORD *v60; // [rsp+C0h] [rbp-19h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+C8h] [rbp-11h] BYREF
  unsigned __int8 v62; // [rsp+130h] [rbp+57h] BYREF
  __int64 v63; // [rsp+138h] [rbp+5Fh]
  int v64; // [rsp+140h] [rbp+67h] BYREF
  unsigned int v65; // [rsp+148h] [rbp+6Fh]

  v63 = a2;
  v6 = BugCheckParameter2 + 256;
  v7 = *(_QWORD *)(BugCheckParameter2 + 240);
  v8 = 0;
  BugCheckParameter1 = *(_QWORD *)(BugCheckParameter2 + 224);
  BugCheckParameter4 = *(_QWORD *)(BugCheckParameter2 + 216);
  v12 = *(_QWORD *)(BugCheckParameter2 + 248);
  v64 = 0;
  v59 = v7;
  if ( v12 )
    v6 = v12;
  PteShadow = -1LL;
  v52 = -1LL;
  v60 = (_QWORD *)(v7 + 8);
  if ( *(__int64 *)(v7 + 8) >= 0 )
  {
    v14 = (v7 + 0x58000000000LL) / 48;
    if ( v14 < qword_1403885E0 )
    {
      v15 = 1073872896;
      if ( a5 == 1 )
        v15 = 0x40000000;
      v16 = v15 | 8;
      if ( (void (__fastcall __noreturn *)())KeGetCurrentThread()[1].ApcState.ApcListHead[0].Blink != KeSwapProcessOrStack )
        v16 = v15;
      MiFindContiguousPages(
        *(_QWORD *)(qword_140388AF0 + 8 * ((*(_QWORD *)(v7 + 40) >> 40) & 0x3FFLL)),
        v14 + 1,
        qword_1403885E0,
        0,
        1LL,
        *(unsigned __int8 *)(v7 + 34) >> 6,
        *(_QWORD *)(v7 + 40) >> 58,
        0x80000000,
        v16,
        0LL,
        (__int64)&v52);
    }
  }
  if ( (a4 & 1) != 0 )
  {
    v17 = (_BYTE *)(a4 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( *v17 == 2 )
    {
      if ( a3 )
        MiPrefetchRestOfCluster(BugCheckParameter2, v17, a3);
    }
  }
  KeWaitForSingleObject((PVOID)(BugCheckParameter2 + 32), WrPageIn, 0, 0, 0LL);
  if ( a3 && (*(_BYTE *)(a3 + 195) & 0x60) == 0x60 && !*(_QWORD *)(MiGetSharedVm(a3) + 32) )
    KiUnstackDetachProcess(BugCheckParameter2 + 104, 0LL);
  if ( (*(_WORD *)(v6 + 10) & 0x200) != 0 )
  {
    MiRetardMdl(v6);
    *(_DWORD *)(BugCheckParameter2 + 80) = -1073741670;
    *(_QWORD *)(BugCheckParameter2 + 88) = 0LL;
  }
  if ( (*(_BYTE *)(BugCheckParameter2 + 189) & 8) != 0 )
  {
    v18 = *(_QWORD *)(BugCheckParameter2 + 320);
    if ( v18 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v18 + 232), &LockHandle);
      RtlAvlRemoveNode(v18 + 248, BugCheckParameter2 + 336);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
  }
  v19 = *(_DWORD *)(BugCheckParameter2 + 180);
  v49 = v19;
  v51 = v6
      + 8
      * (((((*(_DWORD *)(v6 + 44) + *(_DWORD *)(v6 + 32)) & 0xFFF) + (unsigned __int64)*(unsigned int *)(v6 + 40) + 4095) >> 12)
       + 5);
  if ( *(char *)(BugCheckParameter2 + 189) < 0 )
    MiStoreFaultComplete(BugCheckParameter2);
  if ( *(_QWORD *)(BugCheckParameter2 + 200) )
  {
    if ( *(int *)(BugCheckParameter2 + 80) >= 0 )
    {
      v8 = MiValidateInPage(BugCheckParameter2);
      if ( v8 == -1073740748 )
        *(_BYTE *)(BugCheckParameter2 + 191) |= 8u;
    }
    v20 = *(_QWORD *)(BugCheckParameter2 + 200);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v20 + 112), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      MiDeleteControlArea((char *)v20);
  }
  else if ( *(int *)(BugCheckParameter2 + 80) >= 0 && (*(_BYTE *)(BugCheckParameter2 + 191) & 0x20) != 0 )
  {
    v8 = MiValidatePagefilePageHash(BugCheckParameter2);
  }
  v21 = *(_DWORD *)(BugCheckParameter2 + 80);
  v22 = v64 & 1;
  v46 = v22;
  if ( (v64 & 1) == 0 )
  {
    __incgsdword(0x2EA4u);
    __addgsdword(0x2EA0u, (v19 >> 12) + ((v19 & 0xFFF) != 0));
    if ( a3 )
    {
      if ( (*(_BYTE *)(BugCheckParameter2 + 189) & 4) == 0 )
        _InterlockedIncrement((volatile signed __int32 *)(a3 + 168));
    }
  }
  v23 = 2 * v22;
  v65 = 2 * v22;
  v24 = (_QWORD *)*a6;
  if ( *a6 )
  {
    if ( !*v24 && !v24[1] )
    {
LABEL_48:
      if ( v24[7] && v23 != 2 )
      {
        v27 = MEMORY[0xFFFFF78000000320];
        v24[7] = MEMORY[0xFFFFF78000000320] - v24[7];
        v28 = *((_DWORD *)v24 + 14);
        v53[0] = 0;
        v53[1] = dword_14039E910;
        v56 = v24[5];
        v54 = (unsigned int)(v24[3] >> 9);
        CurrentThread = KeGetCurrentThread();
        v53[0] = 2 * v28;
        v57 = ((__int64)CurrentThread->Process ^ (__int64)CurrentThread->Process[1].ThreadListHead.Flink) & 0x1FFFFFFFFFFFFFFFLL;
        v55 = v24[4];
        PfLogEvent(29LL, v27, v53);
      }
      goto LABEL_51;
    }
    if ( v23 )
    {
      v25 = v23 - 1;
      if ( !v25 )
      {
        v26 = 626;
        goto LABEL_47;
      }
      if ( v25 == 1 )
      {
        v26 = 627;
LABEL_47:
        EtwTraceTimedEvent(v26, 0x2000u, (__int64)(v24 + 3), 32, 4200450, *a6);
        v23 = v65;
        goto LABEL_48;
      }
    }
    v26 = 544;
    goto LABEL_47;
  }
LABEL_51:
  v30 = (*(_BYTE *)(v6 + 10) & 1) == 0;
  *(_DWORD *)a6 = v65;
  if ( !v30 )
    MmUnmapLockedPages(*(PVOID *)(v6 + 24), (PMDL)v6);
  LODWORD(a6) = 0;
  *(_DWORD *)(BugCheckParameter2 + 184) = -1;
  if ( v21 < 0 )
  {
    if ( v21 != -1073741807 )
    {
      if ( v21 == -2147483626 )
        goto LABEL_90;
      LODWORD(a6) = MiIsRetryIoStatus((unsigned int)v21, *(unsigned int *)(v6 + 40));
      if ( (_DWORD)a6 && !dword_140389164 && (!v46 || (v64 & 2) != 0) )
        dword_140389164 = 32;
      if ( (*(_BYTE *)(BugCheckParameter2 + 189) & 4) != 0 )
      {
        v21 = -1073741801;
        goto LABEL_90;
      }
      goto LABEL_65;
    }
    if ( (*(_BYTE *)(BugCheckParameter2 + 191) & 0x10) != 0 )
      KeBugCheckEx(0x7Au, 3uLL, 0xFFFFFFFFC0000011uLL, BugCheckParameter2, BugCheckParameter4);
    v38 = (ULONG_PTR *)(v6 + 48);
    v39 = v51 - (v6 + 48) + 8;
    v40 = 1LL;
    v41 = v39 >> 3;
    if ( (unsigned __int64)v38 > v51 )
      v41 = 0LL;
    if ( v41 )
    {
      do
      {
        MiZeroPhysicalPage(*v38);
        ++v40;
        ++v38;
      }
      while ( v40 <= v41 );
    }
    v21 = 0;
  }
  else
  {
    v31 = *(_QWORD *)(BugCheckParameter2 + 88);
    if ( v31 != v49 )
    {
      if ( v31 || (*(_BYTE *)(BugCheckParameter2 + 189) & 4) == 0 )
      {
        if ( (*(_BYTE *)(BugCheckParameter2 + 191) & 0x10) != 0 && !v46 )
          KeBugCheckEx(0x7Au, 4uLL, v31, BugCheckParameter2, BugCheckParameter4);
        v32 = 8
            * ((((*(_DWORD *)(v6 + 44) + *(_DWORD *)(v6 + 32)) & 0xFFF)
              - (unsigned __int64)(v49 - *(_DWORD *)(v6 + 40))
              + v31
              + 4095) >> 12)
            + 40;
        v30 = (*(_DWORD *)(BugCheckParameter2 + 88) & 0xFFF) == 0;
        v47 = v32;
        v33 = (_QWORD *)(v32 + v6);
        v65 = *(_DWORD *)(BugCheckParameter2 + 88) & 0xFFF;
        v50 = (_QWORD *)(v32 + v6);
        if ( !v30 )
        {
          v34 = MiMapPageInHyperSpaceWorker(*v33, &v62, 0x80000000LL);
          v35 = (void *)(v65 + v34);
          memset(v35, 0, 4096 - v65);
          MiUnmapPageInHyperSpaceWorker(v35, v62, 0x80000000LL);
          v33 = v50;
          v32 = v47;
        }
        if ( (unsigned __int64)(v33 + 1) <= v51 )
          *(_DWORD *)(BugCheckParameter2 + 184) = ((__int64)(v32 - 48) >> 3) + 1;
      }
      else
      {
        v21 = -1073741801;
      }
    }
    if ( v8 == -1073741761 )
    {
LABEL_65:
      if ( BugCheckParameter4 > 0x7FFFFFFEFFFFLL
        && (unsigned int)MiGetSystemRegionType(BugCheckParameter4) != 8
        && !(unsigned int)MiExceptionForMappedVa(v36) )
      {
        if ( !(_DWORD)a6 )
        {
          v37 = (ULONG_PTR *)BugCheckParameter1;
          if ( (unsigned __int8)MiIsAddressValid(BugCheckParameter1) == 1 )
          {
            PteShadow = *v37;
            if ( (unsigned __int64)v37 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v37 <= 0xFFFFF6FB7DBED7F8uLL )
              PteShadow = MiReadPteShadow(v37, *v37);
          }
          MiFlushAllFilesystemPages(1LL);
          if ( v8 < 0 )
            v21 = v8;
          KeBugCheckEx(0x7Au, (ULONG_PTR)v37, v21, PteShadow, BugCheckParameter4);
        }
        if ( v8 != -1073741761 )
          v21 = -1073741801;
      }
    }
  }
LABEL_90:
  v42 = v52;
  if ( v52 != -1 )
  {
    MiCopyPage(v52, (v59 + 0x58000000000LL) / 48, 0LL, 1LL);
    v43 = 48 * v42 - 0x58000000000LL;
    *(_QWORD *)(v43 + 16) = 0LL;
    MiSetFreshPfnFromFreeList(v43);
    if ( ((*(_QWORD *)(v43 + 40) >> 54) & 7) == 3 )
    {
      v44 = MiLockPageInline(v43);
      *(_QWORD *)(v43 + 8) = *v60;
      _InterlockedAnd64((volatile signed __int64 *)(v43 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v44);
    }
  }
  *(_DWORD *)(BugCheckParameter2 + 80) = v21;
  return MiFinishHardFault((PVOID)BugCheckParameter2, (__int64)&v64);
}
