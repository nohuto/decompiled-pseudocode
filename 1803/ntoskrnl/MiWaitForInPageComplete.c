/*
 * XREFs of MiWaitForInPageComplete @ 0x1400583A0
 * Callers:
 *     MiPfCompleteInPageSupport @ 0x14003F1DC (MiPfCompleteInPageSupport.c)
 *     MiIssueHardFault @ 0x140059D80 (MiIssueHardFault.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     RtlAvlRemoveNode @ 0x14002A570 (RtlAvlRemoveNode.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14002E300 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiCopyPage @ 0x14002ED70 (MiCopyPage.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140032530 (MiMapPageInHyperSpaceWorker.c)
 *     MiDereferenceControlAreaProbe @ 0x14004B034 (MiDereferenceControlAreaProbe.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140088920 (KeReleaseInStackQueuedSpinLock.c)
 *     PfHardFaultLog @ 0x1400BEC70 (PfHardFaultLog.c)
 *     MiPrefetchRestOfCluster @ 0x1400CFC78 (MiPrefetchRestOfCluster.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     MiZeroPhysicalPage @ 0x14010F800 (MiZeroPhysicalPage.c)
 *     MmUnmapLockedPages @ 0x140110450 (MmUnmapLockedPages.c)
 *     MiIsAddressValid @ 0x140122C40 (MiIsAddressValid.c)
 *     MiFindContiguousPages @ 0x140123CF0 (MiFindContiguousPages.c)
 *     MiIsRetryIoStatus @ 0x140135210 (MiIsRetryIoStatus.c)
 *     MiValidateInPage @ 0x140138DF0 (MiValidateInPage.c)
 *     MiValidatePagefilePageHash @ 0x140153348 (MiValidatePagefilePageHash.c)
 *     MiStoreFaultComplete @ 0x14015429C (MiStoreFaultComplete.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     MiExceptionForMappedVa @ 0x140251EB4 (MiExceptionForMappedVa.c)
 *     MiRetardMdl @ 0x140253D5C (MiRetardMdl.c)
 *     MiFlushAllFilesystemPages @ 0x140255BA8 (MiFlushAllFilesystemPages.c)
 *     MiSetFreshPfnFromFreeList @ 0x140265454 (MiSetFreshPfnFromFreeList.c)
 */

__int64 __fastcall MiWaitForInPageComplete(__int64 a1, ULONG_PTR a2, unsigned int *a3)
{
  ULONG_PTR v3; // rdi
  __int64 v4; // r11
  __int64 v5; // rbp
  __int64 v6; // r15
  ULONG_PTR v9; // rax
  ULONG_PTR v10; // rbx
  unsigned __int64 v11; // rdx
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // rdx
  _BYTE *v15; // rdx
  __int64 v16; // r9
  char v17; // dl
  __int64 v18; // r14
  int v19; // r12d
  unsigned int v20; // r13d
  int v21; // eax
  int v22; // r14d
  int v23; // edx
  unsigned int *v24; // r13
  unsigned int v25; // r15d
  bool v26; // zf
  ULONG_PTR v27; // r15
  unsigned __int64 v28; // rcx
  __int64 *v29; // rax
  unsigned int v30; // r15d
  void *v31; // rdi
  ULONG_PTR v32; // rsi
  ULONG_PTR *v33; // rbx
  unsigned __int64 v34; // r14
  unsigned __int64 v35; // rdi
  unsigned __int64 v36; // r14
  ULONG_PTR v37; // rbx
  unsigned __int8 v38; // al
  __int64 result; // rax
  int IsRetryIoStatus; // [rsp+60h] [rbp-A8h]
  unsigned int v41; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v42; // [rsp+68h] [rbp-A0h]
  ULONG_PTR BugCheckParameter4; // [rsp+70h] [rbp-98h]
  unsigned __int64 v44; // [rsp+78h] [rbp-90h]
  ULONG_PTR v45; // [rsp+80h] [rbp-88h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+88h] [rbp-80h]
  __int64 v47; // [rsp+90h] [rbp-78h]
  _QWORD *v48; // [rsp+98h] [rbp-70h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+A0h] [rbp-68h] BYREF
  unsigned __int8 v50; // [rsp+110h] [rbp+8h] BYREF
  unsigned int v51; // [rsp+118h] [rbp+10h]
  unsigned int *v52; // [rsp+120h] [rbp+18h]
  __int64 *v53; // [rsp+128h] [rbp+20h]

  v52 = a3;
  v3 = a2 + 264;
  v4 = *(_QWORD *)(a2 + 240);
  v5 = 0LL;
  v6 = *(_QWORD *)(a1 + 56);
  BugCheckParameter1 = *(_QWORD *)(a2 + 224);
  BugCheckParameter4 = *(_QWORD *)(a2 + 216);
  v9 = *(_QWORD *)(a2 + 248);
  v51 = 0;
  v47 = v4;
  if ( v9 )
    v3 = v9;
  v10 = -1LL;
  v45 = -1LL;
  v48 = (_QWORD *)(v4 + 8);
  if ( *(__int64 *)(v4 + 8) >= 0 )
  {
    v11 = (v4 + 0x58000000000LL) / 48;
    if ( v11 < qword_1403CB780 )
    {
      v12 = 1073872896;
      if ( *(_BYTE *)(a1 + 80) == 1 )
        v12 = 0x40000000;
      v13 = v12 | 8;
      if ( (void (__fastcall __noreturn *)())KeGetCurrentThread()[1].ApcState.ApcListHead[0].Blink != KeSwapProcessOrStack )
        v13 = v12;
      MiFindContiguousPages(
        *(_QWORD *)(qword_1403CBD88 + 8 * ((*(_QWORD *)(v4 + 40) >> 40) & 0x3FFLL)),
        v11 + 1,
        qword_1403CB780,
        0,
        1LL,
        *(unsigned __int8 *)(v4 + 34) >> 6,
        *(_QWORD *)(v4 + 40) >> 58,
        0x80000000,
        v13,
        0LL,
        (__int64)&v45);
    }
  }
  v14 = *(_QWORD *)(a1 + 16);
  if ( (v14 & 1) != 0 )
  {
    v15 = (_BYTE *)(v14 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( *v15 == 2 )
    {
      if ( v6 )
        MiPrefetchRestOfCluster(a2, v15, v6);
    }
  }
  KeWaitForSingleObject((PVOID)(a2 + 32), WrPageIn, 0, 0, 0LL);
  if ( *(_QWORD *)(a2 + 256) )
    KeBugCheckEx(0x1Au, 0x61947uLL, a2, *(_QWORD *)(a2 + 256), 0LL);
  if ( v6 && (*(_BYTE *)(v6 + 187) & 0x60) == 0x60 && !*(_QWORD *)(MiGetSharedVm(v6) + 32) )
    KiUnstackDetachProcess(a2 + 104, 0LL);
  if ( (*(_WORD *)(v3 + 10) & 0x200) != 0 )
  {
    MiRetardMdl(v3);
    *(_DWORD *)(a2 + 80) = -1073741670;
    *(_QWORD *)(a2 + 88) = 0LL;
  }
  v17 = *(_BYTE *)(a2 + 189);
  if ( (v17 & 8) != 0 )
  {
    v18 = *(_QWORD *)(a2 + 328);
    if ( v18 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v18 + 232), &LockHandle);
      RtlAvlRemoveNode((unsigned __int64 *)(v18 + 248), a2 + 344);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v17 = *(_BYTE *)(a2 + 189);
    }
  }
  v19 = 0;
  v20 = *(_DWORD *)(a2 + 180);
  v41 = v20;
  v44 = v3
      + 8
      * (((((*(_DWORD *)(v3 + 44) + *(_DWORD *)(v3 + 32)) & 0xFFF) + (unsigned __int64)*(unsigned int *)(v3 + 40) + 4095) >> 12)
       + 5);
  if ( v17 < 0 )
    MiStoreFaultComplete(a2);
  v21 = *(_DWORD *)(a2 + 80);
  if ( *(_QWORD *)(a2 + 200) )
  {
    if ( v21 >= 0 )
    {
      v19 = MiValidateInPage(a2);
      if ( v19 == -1073740748 )
        *(_BYTE *)(a2 + 191) |= 8u;
    }
    MiDereferenceControlAreaProbe(*(volatile signed __int64 **)(a2 + 200), 0);
  }
  else if ( v21 >= 0 && (*(_BYTE *)(a2 + 191) & 0x20) != 0 )
  {
    v19 = MiValidatePagefilePageHash(a2);
  }
  v22 = *(_DWORD *)(a2 + 80);
  v23 = v51 & 1;
  LODWORD(v53) = v23;
  if ( (v51 & 1) == 0 )
  {
    __incgsdword(0x2EA4u);
    __addgsdword(0x2EA0u, (v20 >> 12) + ((v20 & 0xFFF) != 0));
    if ( v6 )
    {
      if ( (*(_BYTE *)(a2 + 189) & 4) == 0 )
        _InterlockedIncrement((volatile signed __int32 *)(v6 + 168));
    }
  }
  v24 = v52;
  v25 = 2 * v23;
  if ( *(_QWORD *)v52 )
    PfHardFaultLog(*(_QWORD *)v52, v25);
  v26 = (*(_BYTE *)(v3 + 10) & 1) == 0;
  *v24 = v25;
  if ( !v26 )
    MmUnmapLockedPages(*(PVOID *)(v3 + 24), (PMDL)v3);
  IsRetryIoStatus = 0;
  *(_DWORD *)(a2 + 184) = -1;
  if ( v22 < 0 )
  {
    if ( v22 != -1073741807 )
    {
      if ( v22 == -2147483626 )
        goto LABEL_77;
      IsRetryIoStatus = MiIsRetryIoStatus((unsigned int)v22, *(unsigned int *)(v3 + 40));
      if ( IsRetryIoStatus && !dword_1403CC3E4 && (!(_DWORD)v53 || (v51 & 2) != 0) )
        dword_1403CC3E4 = 32;
      if ( (*(_BYTE *)(a2 + 189) & 4) != 0 )
      {
        v22 = -1073741801;
        goto LABEL_77;
      }
      goto LABEL_54;
    }
    if ( (*(_BYTE *)(a2 + 191) & 0x10) != 0 )
      KeBugCheckEx(0x7Au, 3uLL, 0xFFFFFFFFC0000011uLL, a2, BugCheckParameter4);
    v33 = (ULONG_PTR *)(v3 + 48);
    v34 = v44 - (v3 + 48);
    v35 = 1LL;
    v36 = (v34 + 8) >> 3;
    if ( (unsigned __int64)v33 > v44 )
      v36 = 0LL;
    if ( v36 )
    {
      do
      {
        MiZeroPhysicalPage(*v33);
        ++v35;
        ++v33;
      }
      while ( v35 <= v36 );
    }
    v22 = 0;
  }
  else
  {
    v27 = *(_QWORD *)(a2 + 88);
    if ( v27 != v41 )
    {
      if ( v27 || (*(_BYTE *)(a2 + 189) & 4) == 0 )
      {
        if ( (*(_BYTE *)(a2 + 191) & 0x10) != 0 && !(_DWORD)v53 )
          KeBugCheckEx(0x7Au, 4uLL, v27, a2, BugCheckParameter4);
        v28 = 8
            * ((((*(_DWORD *)(v3 + 44) + *(_DWORD *)(v3 + 32)) & 0xFFF)
              - (unsigned __int64)(v41 - *(_DWORD *)(v3 + 40))
              + v27
              + 4095) >> 12)
            + 40;
        v42 = v28;
        v29 = (__int64 *)(v28 + v3);
        v53 = (__int64 *)(v28 + v3);
        v30 = v27 & 0xFFF;
        if ( v30 )
        {
          v31 = (void *)(v30 + MiMapPageInHyperSpaceWorker(*v29, &v50, 0x80000000, v16));
          memset(v31, 0, 4096 - v30);
          MiUnmapPageInHyperSpaceWorker((unsigned __int64)v31, v50, 0x80000000);
          v29 = v53;
          v28 = v42;
        }
        if ( (unsigned __int64)(v29 + 1) <= v44 )
          *(_DWORD *)(a2 + 184) = ((__int64)(v28 - 48) >> 3) + 1;
      }
      else
      {
        v22 = -1073741801;
      }
    }
    if ( v19 == -1073741761 )
    {
LABEL_54:
      if ( BugCheckParameter4 > 0x7FFFFFFEFFFFLL
        && (unsigned int)MiGetSystemRegionType(BugCheckParameter4) != 8
        && !(unsigned int)MiExceptionForMappedVa(BugCheckParameter4) )
      {
        if ( !IsRetryIoStatus )
        {
          v32 = BugCheckParameter1;
          if ( (unsigned __int8)MiIsAddressValid(BugCheckParameter1) == 1 )
            v10 = MI_READ_PTE_LOCK_FREE(v32);
          MiFlushAllFilesystemPages(1LL);
          if ( v19 >= 0 )
            v19 = v22;
          KeBugCheckEx(0x7Au, v32, v19, v10, BugCheckParameter4);
        }
        if ( v19 != -1073741761 )
          v22 = -1073741801;
      }
    }
  }
LABEL_77:
  v37 = v45;
  if ( v45 != -1LL )
  {
    MiCopyPage(v45, (v47 + 0x58000000000LL) / 48, 0LL, 1);
    v5 = 48 * v37 - 0x58000000000LL;
    *(_QWORD *)(v5 + 16) = ZeroPte;
    MiSetFreshPfnFromFreeList(v5);
    if ( ((*(_QWORD *)(v5 + 40) >> 54) & 7) == 3 )
    {
      v38 = MiLockPageInline(48 * v37 - 0x58000000000LL);
      *(_QWORD *)(v5 + 8) = *v48;
      _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v38);
    }
  }
  result = v51;
  *(_DWORD *)(a2 + 112) = v51;
  *(_QWORD *)(a2 + 104) = v5;
  *(_DWORD *)(a2 + 80) = v22;
  return result;
}
