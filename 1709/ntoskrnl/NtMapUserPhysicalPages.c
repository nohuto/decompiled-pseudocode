/*
 * XREFs of NtMapUserPhysicalPages @ 0x1406E69F4
 * Callers:
 *     <none>
 * Callees:
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MiGetPteAddress @ 0x14003799C (MiGetPteAddress.c)
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x1400A5D30 (MiInitializeTbFlushList.c)
 *     ExAcquireAutoExpandPushLockShared @ 0x140101100 (ExAcquireAutoExpandPushLockShared.c)
 *     ExReleaseAutoExpandPushLockShared @ 0x1401038D0 (ExReleaseAutoExpandPushLockShared.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x140214414 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 *     MiLocatePhysicalViewInTree @ 0x140229268 (MiLocatePhysicalViewInTree.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14022A1F8 (MI_GET_PFN_FROM_PTE.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     MiCaptureUlongPtrArray @ 0x1406E5358 (MiCaptureUlongPtrArray.c)
 */

NTSTATUS __stdcall NtMapUserPhysicalPages(PVOID VirtualAddresses, ULONG_PTR NumberOfPages, PULONG_PTR UserPfnArray)
{
  unsigned __int64 v6; // r14
  unsigned __int64 *v7; // r15
  unsigned __int64 *v8; // rsi
  NTSTATUS v9; // edi
  volatile __int64 *PteAddress; // r12
  __int64 v11; // rdx
  _KPROCESS *Process; // rdi
  unsigned __int64 v13; // rax
  unsigned __int64 ValidPte; // rbx
  unsigned __int64 *v15; // rdi
  _QWORD *PhysicalViewInTree; // rax
  __int64 v17; // rdx
  unsigned __int64 *v18; // rdx
  unsigned __int64 *v19; // r13
  const signed __int64 *v20; // r11
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // r9
  __int64 v23; // r8
  __int64 v24; // rax
  unsigned __int64 *v25; // r10
  unsigned __int64 v26; // rax
  volatile __int64 *v27; // r12
  unsigned __int64 *v28; // rdi
  NTSTATUS v29; // ebx
  unsigned __int64 v30; // rbx
  _KPROCESS *v31; // rdx
  unsigned __int64 *PoolWithTag; // [rsp+20h] [rbp-E0h]
  __int64 v33; // [rsp+28h] [rbp-D8h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v35; // [rsp+38h] [rbp-C8h]
  ULONG_PTR v36; // [rsp+40h] [rbp-C0h]
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-B8h]
  char *v38; // [rsp+50h] [rbp-B0h]
  int v39[48]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE P[8192]; // [rsp+120h] [rbp+20h] BYREF

  if ( NumberOfPages > 0xFFFFFFFFFFFFFLL )
    return -1073741584;
  v6 = (unsigned __int64)VirtualAddresses & 0xFFFFFFFFFFFFF000uLL;
  v35 = ((unsigned __int64)VirtualAddresses & 0xFFFFFFFFFFFFF000uLL) + (NumberOfPages << 12) - 1;
  if ( v35 <= ((unsigned __int64)VirtualAddresses & 0xFFFFFFFFFFFFF000uLL) )
    return -1073741584;
  v7 = 0LL;
  v8 = (unsigned __int64 *)P;
  PoolWithTag = (unsigned __int64 *)P;
  if ( UserPfnArray )
  {
    if ( !NumberOfPages )
      return 0;
    if ( NumberOfPages > 0x400 )
    {
      PoolWithTag = (unsigned __int64 *)ExAllocatePoolWithTag(PagedPool, 8 * NumberOfPages, 0x77526D4Du);
      v8 = PoolWithTag;
      if ( !PoolWithTag )
        return -1073741670;
    }
    v9 = MiCaptureUlongPtrArray(v8, (char *)UserPfnArray, NumberOfPages);
    if ( v9 < 0 )
    {
      if ( v8 != (unsigned __int64 *)P )
        ExFreePoolWithTag(v8, 0);
      return v9;
    }
    v7 = v8;
  }
  v36 = 8 * NumberOfPages;
  PteAddress = (volatile __int64 *)MiGetPteAddress(v6);
  v38 = (char *)PteAddress + v11;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v13 = MiGetPteAddress(0x7FFFFFFEFFFFuLL);
  ValidPte = MiMakeValidPte(v13, -1LL, -2147483644);
  MiInitializeTbFlushList((__int64)v39, 1, 20);
  v15 = (unsigned __int64 *)Process[1].ActiveProcessors.Bitmap[3];
  if ( v15 )
  {
    --CurrentThread->SpecialApcDisable;
    BugCheckParameter2 = ExAcquireAutoExpandPushLockShared((ULONG_PTR)(v15 + 2), 0LL);
    PhysicalViewInTree = MiLocatePhysicalViewInTree(v6 >> 12, v15 + 4);
    if ( PhysicalViewInTree
      && (v17 = PhysicalViewInTree[3],
          v6 >= (*(unsigned int *)(v17 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v17 + 32) << 32)) << 12)
      && v35 <= (((*(unsigned int *)(v17 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v17 + 33) << 32)) << 12) | 0xFFF) )
    {
      if ( !UserPfnArray )
      {
        v30 = (unsigned __int64)v38;
        while ( (unsigned __int64)PteAddress < v30 )
        {
          v33 = MI_INTERLOCKED_EXCHANGE_PTE(PteAddress, ZeroPte);
          if ( (v33 & 1) != 0 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(MI_GET_PFN_FROM_PTE((unsigned __int64 *)&v33) + 8), 0LL);
            MiInsertTbFlushEntry(v39, v6, 1LL, 0);
          }
          v6 += 4096LL;
          ++PteAddress;
        }
LABEL_51:
        ExReleaseAutoExpandPushLockShared(BugCheckParameter2, 0LL);
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        MiFlushTbList((__int64)v39, v31);
        if ( v8 != (unsigned __int64 *)P )
          ExFreePoolWithTag(v8, 0);
        return 0;
      }
      v18 = v7;
      v19 = &v8[v36 / 8];
      v20 = (const signed __int64 *)v15[1];
      v21 = *v15;
      v22 = (unsigned __int64)qword_1403885D8 >> 3;
      v23 = (char *)&v8[v36 / 8] - (char *)v7;
      while ( 1 )
      {
        if ( v7 == v18 )
        {
          v24 = v23 >> 3;
          if ( v22 < v23 >> 3 )
            v24 = v22;
          v25 = &v18[v24];
          do
          {
            if ( *v18 )
              _m_prefetchw((const void *)(48 * *v18 - 0x57FFFFFFFF8LL));
            ++v18;
          }
          while ( v18 < v25 );
          v8 = PoolWithTag;
        }
        v26 = *v7;
        if ( *v7 >= v21 || !_bittest64(v20, v26) )
          break;
        if ( _InterlockedCompareExchange64(
               (volatile signed __int64 *)(48 * v26 - 0x58000000000LL + 8),
               (signed __int64)PteAddress,
               0LL) )
        {
          v29 = -1073741583;
          goto LABEL_43;
        }
        ++PteAddress;
        ++v7;
        v23 -= 8LL;
        if ( v7 >= v19 )
        {
          v27 = &PteAddress[v36 / 0xFFFFFFFFFFFFFFF8uLL];
          v28 = v8;
          do
          {
            ValidPte ^= (ValidPte ^ (*v28 << 12)) & 0xFFFFFFFFF000LL;
            v33 = MI_INTERLOCKED_EXCHANGE_PTE(v27, ValidPte);
            if ( (v33 & 1) != 0 )
            {
              _InterlockedAnd64(
                (volatile signed __int64 *)(48 * MI_GET_PAGE_FRAME_FROM_PTE((unsigned __int64 *)&v33) - 0x57FFFFFFFF8LL),
                0LL);
              MiInsertTbFlushEntry(v39, v6, 1LL, 0);
            }
            v6 += 4096LL;
            ++v27;
            ++v28;
          }
          while ( v28 < v19 );
          v8 = PoolWithTag;
          goto LABEL_51;
        }
      }
      v29 = -1073741800;
LABEL_43:
      while ( v7 > v8 )
        _InterlockedAnd64((volatile signed __int64 *)(48 * *--v7 - 0x57FFFFFFFF8LL), 0LL);
    }
    else
    {
      v29 = -1073741585;
    }
    ExReleaseAutoExpandPushLockShared(BugCheckParameter2, 0LL);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    if ( v8 != (unsigned __int64 *)P )
      ExFreePoolWithTag(v8, 0);
    return v29;
  }
  else
  {
    if ( v8 != (unsigned __int64 *)P )
      ExFreePoolWithTag(v8, 0);
    return -1073741585;
  }
}
