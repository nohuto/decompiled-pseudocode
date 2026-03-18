/*
 * XREFs of NtMapUserPhysicalPagesScatter @ 0x1406BA0F4
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseAutoExpandPushLockShared @ 0x14000C2E0 (ExReleaseAutoExpandPushLockShared.c)
 *     MiInitializeTbFlushList @ 0x14007F890 (MiInitializeTbFlushList.c)
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MiGetPteAddress @ 0x1400CE300 (MiGetPteAddress.c)
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     ExAcquireAutoExpandPushLockShared @ 0x14011C590 (ExAcquireAutoExpandPushLockShared.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x14020D3B4 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 *     MiLocatePhysicalViewInTree @ 0x14021C628 (MiLocatePhysicalViewInTree.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14021EE3C (MI_GET_PFN_FROM_PTE.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MiCaptureUlongPtrArray @ 0x1406B8688 (MiCaptureUlongPtrArray.c)
 */

NTSTATUS __stdcall NtMapUserPhysicalPagesScatter(
        PVOID *VirtualAddresses,
        ULONG_PTR NumberOfPages,
        PULONG_PTR UserPfnArray)
{
  unsigned __int64 *v7; // r14
  ULONG_PTR v8; // r15
  unsigned __int64 *PoolWithTag; // rbp
  SIZE_T v10; // rdx
  NTSTATUS v11; // esi
  _QWORD *v12; // r13
  _KPROCESS *Process; // rdi
  unsigned __int64 PteAddress; // rax
  unsigned __int64 *v15; // rax
  __int64 v16; // r15
  unsigned __int64 *v17; // rdi
  unsigned __int64 v18; // r11
  __int64 v19; // r8
  _QWORD *PhysicalViewInTree; // rax
  unsigned __int64 v21; // r11
  __int64 v22; // rax
  unsigned __int64 *v23; // rdi
  unsigned __int64 *v24; // r9
  unsigned __int64 *v25; // r12
  unsigned __int64 v26; // r13
  unsigned __int64 v27; // rcx
  __int64 v28; // r11
  const signed __int64 *v29; // rax
  unsigned __int64 *v30; // r8
  __int64 v31; // rax
  unsigned __int64 *v32; // rdx
  unsigned __int64 v33; // r10
  signed __int64 v34; // rax
  __int64 v35; // r10
  unsigned __int64 *v36; // rdi
  unsigned __int64 v37; // r11
  volatile __int64 *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // r11
  volatile __int64 *v41; // rax
  __int64 v42; // r11
  _KPROCESS *v43; // rdx
  unsigned __int64 *v44; // [rsp+20h] [rbp-2138h]
  const signed __int64 *v45; // [rsp+20h] [rbp-2138h]
  unsigned __int64 *v46; // [rsp+28h] [rbp-2130h]
  unsigned __int64 v47; // [rsp+28h] [rbp-2130h]
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp-2128h]
  unsigned __int64 *v49; // [rsp+38h] [rbp-2120h]
  __int64 v50; // [rsp+40h] [rbp-2118h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+48h] [rbp-2110h]
  _BYTE v52[192]; // [rsp+50h] [rbp-2108h] BYREF
  _BYTE P[4096]; // [rsp+110h] [rbp-2048h] BYREF
  char v54; // [rsp+1110h] [rbp-1048h] BYREF

  if ( NumberOfPages > 0xFFFFFFFFFFFFFLL )
    return -1073741584;
  v7 = (unsigned __int64 *)&v54;
  v8 = NumberOfPages;
  PoolWithTag = (unsigned __int64 *)P;
  v10 = 8 * NumberOfPages;
  if ( NumberOfPages > 0x200 )
  {
    if ( UserPfnArray )
      v10 = 16 * NumberOfPages;
    PoolWithTag = (unsigned __int64 *)ExAllocatePoolWithTag(PagedPool, v10, 0x77526D4Du);
    if ( !PoolWithTag )
      return -1073741670;
  }
  v11 = MiCaptureUlongPtrArray(PoolWithTag, (char *)VirtualAddresses, NumberOfPages);
  if ( v11 < 0 )
    goto LABEL_59;
  if ( !NumberOfPages )
    return 0;
  if ( UserPfnArray )
  {
    if ( NumberOfPages > 0x200 )
      v7 = &PoolWithTag[v8];
    v11 = MiCaptureUlongPtrArray(v7, (char *)UserPfnArray, NumberOfPages);
    if ( v11 < 0 )
      goto LABEL_59;
  }
  v12 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v49 = &v7[v8];
  Process = CurrentThread->ApcState.Process;
  MiInitializeTbFlushList((__int64)v52, 1, 20);
  v46 = &PoolWithTag[v8];
  PteAddress = MiGetPteAddress(0x7FFFFFFEFFFFuLL);
  MiMakeValidPte(PteAddress, -1LL, -2147483644);
  v11 = 0;
  v15 = (unsigned __int64 *)Process[1].ActiveProcessors.Bitmap[3];
  v44 = v15;
  if ( !v15 )
  {
LABEL_58:
    v11 = -1073741585;
    goto LABEL_59;
  }
  v16 = (__int64)CurrentThread;
  --CurrentThread->SpecialApcDisable;
  BugCheckParameter2 = ExAcquireAutoExpandPushLockShared((ULONG_PTR)(v15 + 2), 0LL);
  v17 = PoolWithTag;
  do
  {
    v18 = *v17;
    if ( !v12
      || (v19 = v12[3],
          v18 < (*(unsigned int *)(v19 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 32) << 32)) << 12)
      || v18 > (((*(unsigned int *)(v19 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 33) << 32)) << 12) | 0xFFF) )
    {
      PhysicalViewInTree = MiLocatePhysicalViewInTree(v18 >> 12, v44 + 4);
      v12 = PhysicalViewInTree;
      if ( !PhysicalViewInTree
        || (v22 = PhysicalViewInTree[3],
            v21 < (*(unsigned int *)(v22 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v22 + 32) << 32)) << 12)
        || v21 > (((*(unsigned int *)(v22 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v22 + 33) << 32)) << 12) | 0xFFF) )
      {
        ExReleaseAutoExpandPushLockShared(BugCheckParameter2, 0LL);
        KiLeaveGuardedRegionUnsafe(v16);
        goto LABEL_58;
      }
    }
    ++v17;
  }
  while ( v17 < v46 );
  v23 = PoolWithTag;
  if ( !UserPfnArray )
  {
    do
    {
      v41 = (volatile __int64 *)MiGetPteAddress(*v23);
      v50 = MI_INTERLOCKED_EXCHANGE_PTE(v41, ZeroPte);
      if ( (v50 & 1) != 0 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(MI_GET_PFN_FROM_PTE((__int64)&v50) + 8), 0LL);
        MiInsertTbFlushEntry((__int64)v52, v42 & 0xFFFFFFFFFFFFF000uLL, 1LL, 0);
      }
      ++v23;
    }
    while ( v23 < v46 );
    v16 = (__int64)CurrentThread;
LABEL_56:
    ExReleaseAutoExpandPushLockShared(BugCheckParameter2, 0LL);
    KiLeaveGuardedRegionUnsafe(v16);
    MiFlushTbList((__int64)v52, v43);
    goto LABEL_59;
  }
  v24 = v7;
  v25 = v7;
  v26 = (unsigned __int64)qword_14036C288 >> 3;
  v27 = *v44;
  v28 = (char *)v49 - (char *)v7;
  v29 = (const signed __int64 *)v44[1];
  v45 = v29;
  v47 = v27;
  while ( 2 )
  {
    v30 = v25;
    if ( v25 == v24 )
    {
      v31 = v28 >> 3;
      if ( v26 < v28 >> 3 )
        v31 = v26;
      v32 = &v24[v31];
      do
      {
        if ( *v24 )
          _m_prefetchw((const void *)(48 * *v24 - 0x57FFFFFFFF8LL));
        ++v24;
      }
      while ( v24 < v32 );
      v29 = v45;
      v27 = v47;
    }
    v33 = *v25;
    v28 -= 8LL;
    ++v25;
    if ( !v33 )
    {
LABEL_38:
      if ( v25 >= v49 )
      {
        v36 = PoolWithTag;
        do
        {
          v37 = *v36++;
          v38 = (volatile __int64 *)MiGetPteAddress(v37);
          v50 = MI_INTERLOCKED_EXCHANGE_PTE(v38, v39);
          if ( (v50 & 1) != 0 )
          {
            _InterlockedAnd64(
              (volatile signed __int64 *)(48 * MI_GET_PAGE_FRAME_FROM_PTE((__int64)&v50) - 0x57FFFFFFFF8LL),
              0LL);
            MiInsertTbFlushEntry((__int64)v52, v40 & 0xFFFFFFFFFFFFF000uLL, 1LL, 0);
          }
          ++v7;
        }
        while ( v7 < v49 );
        goto LABEL_56;
      }
      v29 = v45;
      ++v23;
      v27 = v47;
      continue;
    }
    break;
  }
  if ( v33 < v27 && _bittest64(v29, v33) )
  {
    v34 = MiGetPteAddress(*v23);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(48 * v35 - 0x57FFFFFFFF8LL), v34, 0LL) )
    {
      v11 = -1073741583;
      goto LABEL_42;
    }
    goto LABEL_38;
  }
  v11 = -1073741800;
LABEL_42:
  while ( v30 > v7 )
  {
    if ( *--v30 )
      _InterlockedAnd64((volatile signed __int64 *)(48 * *v30 - 0x57FFFFFFFF8LL), 0LL);
  }
  ExReleaseAutoExpandPushLockShared(BugCheckParameter2, 0LL);
  KiLeaveGuardedRegionUnsafe(v16);
LABEL_59:
  if ( PoolWithTag != (unsigned __int64 *)P )
    ExFreePoolWithTag(PoolWithTag, 0);
  return v11;
}
