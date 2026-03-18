/*
 * XREFs of NtMapUserPhysicalPagesScatter @ 0x1406E6E70
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

NTSTATUS __stdcall NtMapUserPhysicalPagesScatter(
        PVOID *VirtualAddresses,
        ULONG_PTR NumberOfPages,
        PULONG_PTR UserPfnArray)
{
  unsigned __int64 *v7; // rbp
  signed __int64 v8; // r12
  unsigned __int64 *v9; // r14
  SIZE_T v10; // rdx
  NTSTATUS v11; // esi
  _QWORD *v12; // r13
  _KPROCESS *Process; // rdi
  unsigned __int64 PteAddress; // rax
  unsigned __int64 *v15; // rcx
  unsigned __int64 *v16; // rdi
  unsigned __int64 v17; // r11
  __int64 v18; // r8
  _QWORD *PhysicalViewInTree; // rax
  unsigned __int64 v20; // r11
  __int64 v21; // rax
  unsigned __int64 *v22; // rdi
  unsigned __int64 *v23; // r10
  unsigned __int64 *v24; // r11
  unsigned __int64 v25; // r15
  unsigned __int64 v26; // rcx
  const signed __int64 *v27; // r13
  unsigned __int64 *v28; // r9
  __int64 v29; // rax
  unsigned __int64 *v30; // rdx
  unsigned __int64 v31; // rax
  signed __int64 v32; // rax
  __int64 v33; // r8
  unsigned __int64 v34; // r15
  unsigned __int64 *v35; // rdi
  unsigned __int64 v36; // r11
  volatile __int64 *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // r11
  unsigned __int64 v40; // rbp
  volatile __int64 *v41; // rax
  __int64 v42; // r11
  _KPROCESS *v43; // rdx
  struct _KTHREAD *CurrentThread; // [rsp+20h] [rbp-2148h]
  unsigned __int64 *v45; // [rsp+28h] [rbp-2140h]
  unsigned __int64 v46; // [rsp+28h] [rbp-2140h]
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp-2138h]
  __int64 v48; // [rsp+38h] [rbp-2130h] BYREF
  unsigned __int64 *v49; // [rsp+40h] [rbp-2128h]
  unsigned __int64 *PoolWithTag; // [rsp+48h] [rbp-2120h]
  unsigned __int64 *v51; // [rsp+50h] [rbp-2118h]
  int v52[48]; // [rsp+60h] [rbp-2108h] BYREF
  _BYTE P[4096]; // [rsp+120h] [rbp-2048h] BYREF
  char v54; // [rsp+1120h] [rbp-1048h] BYREF

  if ( NumberOfPages > 0xFFFFFFFFFFFFFLL )
    return -1073741584;
  v7 = (unsigned __int64 *)P;
  v8 = NumberOfPages;
  v9 = (unsigned __int64 *)&v54;
  PoolWithTag = (unsigned __int64 *)P;
  v10 = 8 * NumberOfPages;
  if ( NumberOfPages > 0x200 )
  {
    if ( UserPfnArray )
      v10 = 16 * NumberOfPages;
    PoolWithTag = (unsigned __int64 *)ExAllocatePoolWithTag(PagedPool, v10, 0x77526D4Du);
    v7 = PoolWithTag;
    if ( !PoolWithTag )
      return -1073741670;
  }
  v11 = MiCaptureUlongPtrArray(v7, (char *)VirtualAddresses, NumberOfPages);
  if ( v11 < 0 )
    goto LABEL_59;
  if ( !NumberOfPages )
    return 0;
  if ( UserPfnArray )
  {
    if ( NumberOfPages > 0x200 )
      v9 = &v7[v8];
    v11 = MiCaptureUlongPtrArray(v9, (char *)UserPfnArray, NumberOfPages);
    if ( v11 < 0 )
      goto LABEL_59;
  }
  v12 = 0LL;
  v49 = &v9[v8];
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  MiInitializeTbFlushList((__int64)v52, 1, 20);
  v51 = &v7[v8];
  PteAddress = MiGetPteAddress(0x7FFFFFFEFFFFuLL);
  MiMakeValidPte(PteAddress, -1LL, -2147483644);
  v15 = (unsigned __int64 *)Process[1].ActiveProcessors.Bitmap[3];
  v11 = 0;
  v45 = v15;
  if ( !v15 )
  {
LABEL_58:
    v11 = -1073741585;
    goto LABEL_59;
  }
  --CurrentThread->SpecialApcDisable;
  BugCheckParameter2 = ExAcquireAutoExpandPushLockShared((ULONG_PTR)(v15 + 2), 0LL);
  v16 = v7;
  do
  {
    v17 = *v16;
    if ( !v12
      || (v18 = v12[3],
          v17 < (*(unsigned int *)(v18 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v18 + 32) << 32)) << 12)
      || v17 > (((*(unsigned int *)(v18 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v18 + 33) << 32)) << 12) | 0xFFF) )
    {
      PhysicalViewInTree = MiLocatePhysicalViewInTree(v17 >> 12, v45 + 4);
      v12 = PhysicalViewInTree;
      if ( !PhysicalViewInTree
        || (v21 = PhysicalViewInTree[3],
            v20 < (*(unsigned int *)(v21 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v21 + 32) << 32)) << 12)
        || v20 > (((*(unsigned int *)(v21 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v21 + 33) << 32)) << 12) | 0xFFF) )
      {
        ExReleaseAutoExpandPushLockShared(BugCheckParameter2, 0LL);
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        goto LABEL_58;
      }
    }
    ++v16;
  }
  while ( v16 < &v7[v8] );
  v22 = v7;
  if ( !UserPfnArray )
  {
    v40 = (unsigned __int64)v51;
    do
    {
      v41 = (volatile __int64 *)MiGetPteAddress(*v22);
      v48 = MI_INTERLOCKED_EXCHANGE_PTE(v41, ZeroPte);
      if ( (v48 & 1) != 0 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(MI_GET_PFN_FROM_PTE((unsigned __int64 *)&v48) + 8), 0LL);
        MiInsertTbFlushEntry(v52, v42 & 0xFFFFFFFFFFFFF000uLL, 1LL, 0);
      }
      ++v22;
    }
    while ( (unsigned __int64)v22 < v40 );
    v7 = PoolWithTag;
LABEL_56:
    ExReleaseAutoExpandPushLockShared(BugCheckParameter2, 0LL);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    MiFlushTbList((__int64)v52, v43);
    goto LABEL_59;
  }
  v23 = v9;
  v24 = v9;
  v25 = (unsigned __int64)qword_1403885D8 >> 3;
  v26 = *v45;
  v27 = (const signed __int64 *)v45[1];
  v46 = *v45;
  while ( 2 )
  {
    v28 = v24;
    if ( v24 == v23 )
    {
      v29 = (v8 * 8) >> 3;
      if ( v25 < (v8 * 8) >> 3 )
        v29 = v25;
      v30 = &v23[v29];
      do
      {
        if ( *v23 )
          _m_prefetchw((const void *)(48 * *v23 - 0x57FFFFFFFF8LL));
        ++v23;
      }
      while ( v23 < v30 );
      v26 = v46;
    }
    v31 = *v24;
    --v8;
    ++v24;
    if ( !v31 )
    {
LABEL_38:
      if ( v24 >= v49 )
      {
        v34 = (unsigned __int64)v49;
        v35 = v7;
        do
        {
          v36 = *v35++;
          v37 = (volatile __int64 *)MiGetPteAddress(v36);
          v48 = MI_INTERLOCKED_EXCHANGE_PTE(v37, v38);
          if ( (v48 & 1) != 0 )
          {
            _InterlockedAnd64(
              (volatile signed __int64 *)(48 * MI_GET_PAGE_FRAME_FROM_PTE((unsigned __int64 *)&v48) - 0x57FFFFFFFF8LL),
              0LL);
            MiInsertTbFlushEntry(v52, v39 & 0xFFFFFFFFFFFFF000uLL, 1LL, 0);
          }
          ++v9;
        }
        while ( (unsigned __int64)v9 < v34 );
        goto LABEL_56;
      }
      v26 = v46;
      ++v22;
      continue;
    }
    break;
  }
  if ( v31 < v26 && _bittest64(v27, v31) )
  {
    v32 = MiGetPteAddress(*v22);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v33 + 8), v32, 0LL) )
    {
      v11 = -1073741583;
      goto LABEL_44;
    }
    goto LABEL_38;
  }
  v11 = -1073741800;
LABEL_44:
  while ( v28 > v9 )
  {
    if ( *--v28 )
      _InterlockedAnd64((volatile signed __int64 *)(48 * *v28 - 0x57FFFFFFFF8LL), 0LL);
  }
  ExReleaseAutoExpandPushLockShared(BugCheckParameter2, 0LL);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
LABEL_59:
  if ( v7 != (unsigned __int64 *)P )
    ExFreePoolWithTag(v7, 0);
  return v11;
}
