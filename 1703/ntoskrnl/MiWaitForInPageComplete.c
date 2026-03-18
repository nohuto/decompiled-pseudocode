/*
 * XREFs of MiWaitForInPageComplete @ 0x140097510
 * Callers:
 *     MiIssueHardFault @ 0x140096E10 (MiIssueHardFault.c)
 *     MiPfCompleteInPageSupport @ 0x14010B0F0 (MiPfCompleteInPageSupport.c)
 * Callees:
 *     MiIsRetryIoStatus @ 0x140015264 (MiIsRetryIoStatus.c)
 *     PfHardFaultLog @ 0x14002A488 (PfHardFaultLog.c)
 *     MiPrefetchRestOfCluster @ 0x1400374F4 (MiPrefetchRestOfCluster.c)
 *     MiStoreFaultComplete @ 0x1400379EC (MiStoreFaultComplete.c)
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     MiCopyPage @ 0x1400A0320 (MiCopyPage.c)
 *     MmUnmapLockedPages @ 0x1400A3B30 (MmUnmapLockedPages.c)
 *     MiIsAddressValid @ 0x1400A58A0 (MiIsAddressValid.c)
 *     MiZeroPhysicalPage @ 0x1400A59A0 (MiZeroPhysicalPage.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     MiFindContiguousPages @ 0x1400B65D0 (MiFindContiguousPages.c)
 *     MiValidateInPage @ 0x1400CB690 (MiValidateInPage.c)
 *     MiFinishHardFault @ 0x1400CBC40 (MiFinishHardFault.c)
 *     RtlAvlRemoveNode @ 0x1400DB450 (RtlAvlRemoveNode.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140103140 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1401038C0 (MiMapPageInHyperSpaceWorker.c)
 *     MiDeleteControlArea @ 0x140118FDC (MiDeleteControlArea.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x14012B570 (KeReleaseInStackQueuedSpinLock.c)
 *     MiValidatePagefilePageHash @ 0x14013B100 (MiValidatePagefilePageHash.c)
 *     MiSetFreshPfnFromFreeList @ 0x14017D268 (MiSetFreshPfnFromFreeList.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     memset @ 0x140192D80 (memset.c)
 *     MiExceptionForMappedVa @ 0x14020CBC0 (MiExceptionForMappedVa.c)
 *     MiRetardMdl @ 0x14020E700 (MiRetardMdl.c)
 *     MiFlushAllFilesystemPages @ 0x1402114A0 (MiFlushAllFilesystemPages.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiWaitForInPageComplete(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        int *a6)
{
  ULONG_PTR v6; // rdi
  __int64 v7; // r11
  ULONG_PTR v11; // rax
  ULONG_PTR v12; // rbx
  unsigned __int64 v13; // rdx
  int v14; // r8d
  int v15; // r9d
  _QWORD *v16; // rbp
  __int64 v17; // rbp
  int v18; // r12d
  unsigned int v19; // r14d
  unsigned __int64 v20; // rax
  NTSTATUS v21; // ebp
  int v22; // r15d
  int *v23; // rax
  int v24; // r14d
  bool v25; // zf
  __int64 v26; // rdx
  unsigned __int64 v27; // rcx
  _QWORD *v28; // r15
  __int64 v29; // rax
  void *v30; // rdi
  ULONG_PTR v31; // rsi
  ULONG_PTR *v32; // rbx
  unsigned __int64 v33; // rbp
  unsigned __int64 v34; // rdi
  unsigned __int64 v35; // rbp
  __int64 v36; // rbx
  __int64 v37; // rbx
  unsigned __int8 v38; // al
  ULONG_PTR BugCheckParameter4; // [rsp+50h] [rbp-98h]
  unsigned __int64 v41; // [rsp+58h] [rbp-90h]
  __int64 v42; // [rsp+60h] [rbp-88h] BYREF
  unsigned __int64 v43; // [rsp+68h] [rbp-80h]
  ULONG_PTR BugCheckParameter1; // [rsp+70h] [rbp-78h]
  __int64 v45; // [rsp+78h] [rbp-70h]
  _QWORD *v46; // [rsp+80h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+88h] [rbp-60h] BYREF
  unsigned __int8 v48; // [rsp+F0h] [rbp+8h] BYREF
  __int64 v49; // [rsp+F8h] [rbp+10h]
  int v50; // [rsp+100h] [rbp+18h] BYREF
  unsigned int v51; // [rsp+108h] [rbp+20h]

  v49 = a2;
  v6 = BugCheckParameter2 + 256;
  v7 = *(_QWORD *)(BugCheckParameter2 + 240);
  BugCheckParameter1 = *(_QWORD *)(BugCheckParameter2 + 224);
  BugCheckParameter4 = *(_QWORD *)(BugCheckParameter2 + 216);
  v11 = *(_QWORD *)(BugCheckParameter2 + 248);
  v50 = 0;
  v45 = v7;
  if ( v11 )
    v6 = v11;
  v12 = -1LL;
  v42 = -1LL;
  v46 = (_QWORD *)(v7 + 8);
  if ( *(__int64 *)(v7 + 8) >= 0 )
  {
    v13 = (v7 + 0x58000000000LL) / 48;
    if ( v13 < qword_14036C290 )
    {
      v14 = 1073872896;
      if ( a5 == 1 )
        v14 = 0x40000000;
      v15 = v14 | 8;
      if ( (void (__fastcall __noreturn *)())KeGetCurrentThread()[1].ApcState.ApcListHead[1].Flink != KeSwapProcessOrStack )
        v15 = v14;
      MiFindContiguousPages(
        *(_QWORD *)(qword_14036C8F8 + 8 * ((*(_QWORD *)(v7 + 40) >> 40) & 0x3FFLL)),
        v13 + 1,
        qword_14036C290,
        0,
        1LL,
        *(unsigned __int8 *)(v7 + 34) >> 6,
        *(_QWORD *)(v7 + 40) >> 58,
        0x80000000,
        v15,
        (__int64)&v42);
    }
  }
  if ( (a4 & 1) != 0 )
  {
    v16 = (_QWORD *)(a4 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( *(_BYTE *)v16 == 2 )
    {
      if ( a3 )
        MiPrefetchRestOfCluster(BugCheckParameter2, v16, a3);
    }
  }
  KeWaitForSingleObject((PVOID)(BugCheckParameter2 + 32), WrPageIn, 0, 0, 0LL);
  if ( a3 && (*(_BYTE *)(a3 + 195) & 0xC0) == 0xC0 && !*(_QWORD *)(MiGetSharedVm(a3) + 32) )
    KiUnstackDetachProcess(BugCheckParameter2 + 104, 0LL);
  if ( (*(_WORD *)(v6 + 10) & 0x200) != 0 )
  {
    MiRetardMdl(v6);
    *(_DWORD *)(BugCheckParameter2 + 80) = -1073741670;
    *(_QWORD *)(BugCheckParameter2 + 88) = 0LL;
  }
  if ( (*(_BYTE *)(BugCheckParameter2 + 189) & 8) != 0 )
  {
    v17 = *(_QWORD *)(BugCheckParameter2 + 320);
    if ( v17 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v17 + 232), &LockHandle);
      RtlAvlRemoveNode(v17 + 248, BugCheckParameter2 + 336);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
  }
  v18 = 0;
  v19 = *(_DWORD *)(BugCheckParameter2 + 180);
  v20 = ((*(_DWORD *)(v6 + 44) + *(_DWORD *)(v6 + 32)) & 0xFFF) + *(unsigned int *)(v6 + 40) + 4095LL;
  v51 = v19;
  v41 = v6 + 8 * ((v20 >> 12) + 5);
  if ( *(_BYTE *)(BugCheckParameter2 + 189) >= 0x80u )
    MiStoreFaultComplete(BugCheckParameter2, &v50);
  if ( *(_QWORD *)(BugCheckParameter2 + 200) )
  {
    if ( *(int *)(BugCheckParameter2 + 80) >= 0 )
    {
      v18 = MiValidateInPage(BugCheckParameter2);
      if ( v18 == -1073740748 )
        *(_BYTE *)(BugCheckParameter2 + 191) |= 8u;
    }
    if ( _InterlockedExchangeAdd64(
           (volatile signed __int64 *)(*(_QWORD *)(BugCheckParameter2 + 200) + 112LL),
           0xFFFFFFFFFFFFFFFFuLL) == 1 )
      MiDeleteControlArea();
  }
  else if ( *(int *)(BugCheckParameter2 + 80) >= 0 && (*(_BYTE *)(BugCheckParameter2 + 191) & 0x20) != 0 )
  {
    v18 = MiValidatePagefilePageHash(BugCheckParameter2);
  }
  v21 = *(_DWORD *)(BugCheckParameter2 + 80);
  v22 = v50 & 1;
  if ( (v50 & 1) == 0 )
  {
    __incgsdword(0x2EA4u);
    __addgsdword(0x2EA0u, (v19 >> 12) + ((v19 & 0xFFF) != 0));
    if ( a3 )
    {
      if ( (*(_BYTE *)(BugCheckParameter2 + 189) & 4) == 0 )
        _InterlockedIncrement((volatile signed __int32 *)(a3 + 168));
    }
  }
  v23 = a6;
  v24 = 2 * v22;
  if ( *(_QWORD *)a6 )
  {
    PfHardFaultLog(*(_QWORD **)a6, v24);
    v23 = a6;
  }
  v25 = (*(_BYTE *)(v6 + 10) & 1) == 0;
  *v23 = v24;
  if ( !v25 )
    MmUnmapLockedPages(*(PVOID *)(v6 + 24), (PMDL)v6);
  LODWORD(a6) = 0;
  *(_DWORD *)(BugCheckParameter2 + 184) = -1;
  if ( v21 < 0 )
  {
    if ( v21 != -1073741807 )
    {
      if ( v21 == -2147483626 )
        goto LABEL_77;
      LODWORD(a6) = MiIsRetryIoStatus(v21, *(unsigned int *)(v6 + 40));
      if ( (_DWORD)a6 && !dword_14036CEA4 && (!v22 || (v50 & 2) != 0) )
        dword_14036CEA4 = 32;
      if ( (*(_BYTE *)(BugCheckParameter2 + 189) & 4) != 0 )
      {
        v21 = -1073741801;
        goto LABEL_77;
      }
      goto LABEL_54;
    }
    if ( (*(_BYTE *)(BugCheckParameter2 + 191) & 0x10) != 0 )
      KeBugCheckEx(0x7Au, 3uLL, 0xFFFFFFFFC0000011uLL, BugCheckParameter2, BugCheckParameter4);
    v32 = (ULONG_PTR *)(v6 + 48);
    v33 = v41 - (v6 + 48) + 8;
    v34 = 1LL;
    v35 = v33 >> 3;
    if ( (unsigned __int64)v32 > v41 )
      v35 = 0LL;
    if ( v35 )
    {
      do
      {
        MiZeroPhysicalPage(*v32);
        ++v34;
        ++v32;
      }
      while ( v34 <= v35 );
    }
    v21 = 0;
  }
  else
  {
    v26 = *(_QWORD *)(BugCheckParameter2 + 88);
    if ( v26 != v51 )
    {
      if ( v26 || (*(_BYTE *)(BugCheckParameter2 + 189) & 4) == 0 )
      {
        if ( (*(_BYTE *)(BugCheckParameter2 + 191) & 0x10) != 0 && !v22 )
          KeBugCheckEx(0x7Au, 4uLL, *(_QWORD *)(BugCheckParameter2 + 88), BugCheckParameter2, BugCheckParameter4);
        v27 = 8
            * ((((*(_DWORD *)(v6 + 44) + *(_DWORD *)(v6 + 32)) & 0xFFF)
              - (unsigned __int64)(v51 - *(_DWORD *)(v6 + 40))
              + v26
              + 4095) >> 12)
            + 40;
        v43 = v27;
        v51 = v26 & 0xFFF;
        v28 = (_QWORD *)(v27 + v6);
        if ( (v26 & 0xFFF) != 0 )
        {
          v29 = MiMapPageInHyperSpaceWorker(*v28, &v48, 0x80000000LL);
          v30 = (void *)(v51 + v29);
          memset(v30, 0, 4096 - v51);
          MiUnmapPageInHyperSpaceWorker(v30, v48, 0x80000000LL);
          v27 = v43;
        }
        if ( (unsigned __int64)(v28 + 1) <= v41 )
          *(_DWORD *)(BugCheckParameter2 + 184) = ((__int64)(v27 - 48) >> 3) + 1;
      }
      else
      {
        v21 = -1073741801;
      }
    }
    if ( v18 == -1073741761 )
    {
LABEL_54:
      if ( BugCheckParameter4 > 0x7FFFFFFEFFFFLL
        && (unsigned int)MiGetSystemRegionType(BugCheckParameter4) != 8
        && !(unsigned int)MiExceptionForMappedVa(BugCheckParameter4) )
      {
        if ( !(_DWORD)a6 )
        {
          v31 = BugCheckParameter1;
          if ( (unsigned __int8)MiIsAddressValid(BugCheckParameter1) == 1 )
            v12 = MI_READ_PTE_LOCK_FREE(v31);
          MiFlushAllFilesystemPages(1LL);
          if ( v18 < 0 )
            v21 = v18;
          KeBugCheckEx(0x7Au, v31, v21, v12, BugCheckParameter4);
        }
        if ( v18 != -1073741761 )
          v21 = -1073741801;
      }
    }
  }
LABEL_77:
  v36 = v42;
  if ( v42 != -1 )
  {
    MiCopyPage(v42, (v45 + 0x58000000000LL) / 48, 0LL, 1LL);
    v37 = 48 * v36 - 0x58000000000LL;
    *(_QWORD *)(v37 + 16) = 0LL;
    MiSetFreshPfnFromFreeList(v37);
    if ( ((*(_QWORD *)(v37 + 40) >> 54) & 7) == 3 )
    {
      v38 = MiLockPageInline(v37);
      *(_QWORD *)(v37 + 8) = *v46;
      _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v38);
    }
  }
  *(_DWORD *)(BugCheckParameter2 + 80) = v21;
  return MiFinishHardFault((PVOID)BugCheckParameter2, (__int64)&v50);
}
