/*
 * XREFs of NtMapUserPhysicalPages @ 0x140750614
 * Callers:
 *     <none>
 * Callees:
 *     MiGetPteAddress @ 0x14000A260 (MiGetPteAddress.c)
 *     ExAcquireAutoExpandPushLockShared @ 0x14007BE70 (ExAcquireAutoExpandPushLockShared.c)
 *     ExReleaseAutoExpandPushLockShared @ 0x1400A4CF0 (ExReleaseAutoExpandPushLockShared.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MiLocatePhysicalViewInTree @ 0x1402626CC (MiLocatePhysicalViewInTree.c)
 *     MiWriteAwePtes @ 0x140262D60 (MiWriteAwePtes.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     MiCaptureUlongPtrArray @ 0x14074F88C (MiCaptureUlongPtrArray.c)
 */

NTSTATUS __stdcall NtMapUserPhysicalPages(PVOID VirtualAddresses, ULONG_PTR NumberOfPages, PULONG_PTR UserPfnArray)
{
  unsigned __int64 v6; // rdi
  __int64 v7; // rsi
  unsigned __int64 *PoolWithTag; // rbx
  unsigned __int64 *v9; // r14
  NTSTATUS v10; // r14d
  __int64 PteAddress; // r15
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rcx
  unsigned __int64 *v14; // r13
  _QWORD *PhysicalViewInTree; // rax
  __int64 v16; // rdx
  unsigned __int64 *v17; // rdx
  unsigned __int64 v18; // r12
  const signed __int64 *v19; // rdi
  unsigned __int64 v20; // r9
  __int64 v21; // r8
  __int64 v22; // rax
  unsigned __int64 *v23; // r10
  unsigned __int64 v24; // rax
  NTSTATUS v25; // edi
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp-2078h]
  __int64 v27; // [rsp+38h] [rbp-2070h]
  unsigned __int64 *v28; // [rsp+40h] [rbp-2068h]
  unsigned __int64 v29; // [rsp+48h] [rbp-2060h]
  __int64 v30; // [rsp+50h] [rbp-2058h]
  _BYTE P[8192]; // [rsp+60h] [rbp-2048h] BYREF

  if ( NumberOfPages > 0xFFFFFFFFFFFFFLL )
    return -1073741584;
  v6 = (unsigned __int64)VirtualAddresses & 0xFFFFFFFFFFFFF000uLL;
  v29 = ((unsigned __int64)VirtualAddresses & 0xFFFFFFFFFFFFF000uLL) + (NumberOfPages << 12) - 1;
  if ( v29 <= ((unsigned __int64)VirtualAddresses & 0xFFFFFFFFFFFFF000uLL) )
    return -1073741584;
  v7 = 0LL;
  PoolWithTag = (unsigned __int64 *)P;
  v9 = 0LL;
  if ( UserPfnArray )
  {
    if ( !NumberOfPages )
      return 0;
    if ( NumberOfPages > 0x400 )
    {
      PoolWithTag = (unsigned __int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 8 * NumberOfPages, 0x77526D4Du);
      if ( !PoolWithTag )
        return -1073741670;
    }
    v10 = MiCaptureUlongPtrArray(PoolWithTag, (char *)UserPfnArray, NumberOfPages);
    if ( v10 < 0 )
    {
      if ( PoolWithTag != (unsigned __int64 *)P )
        ExFreePoolWithTag(PoolWithTag, 0);
      return v10;
    }
    v9 = PoolWithTag;
  }
  v28 = &PoolWithTag[NumberOfPages];
  PteAddress = MiGetPteAddress(v6);
  CurrentThread = KeGetCurrentThread();
  v27 = (__int64)CurrentThread;
  Process = CurrentThread->ApcState.Process;
  v14 = (unsigned __int64 *)Process[1].ActiveProcessors.Bitmap[3];
  v30 = (__int64)&Process[1].IdealNode[12];
  if ( v14 )
  {
    --CurrentThread->SpecialApcDisable;
    BugCheckParameter2 = ExAcquireAutoExpandPushLockShared((ULONG_PTR)(v14 + 2), 0LL);
    PhysicalViewInTree = MiLocatePhysicalViewInTree(v6 >> 12, v14 + 4);
    if ( PhysicalViewInTree
      && (v16 = PhysicalViewInTree[3],
          v6 >= (*(unsigned int *)(v16 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v16 + 32) << 32)) << 12)
      && v29 <= (((*(unsigned int *)(v16 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v16 + 33) << 32)) << 12) | 0xFFF) )
    {
      if ( !UserPfnArray )
      {
LABEL_36:
        MiWriteAwePtes(v30, v7, 0LL, NumberOfPages, PteAddress);
        ExReleaseAutoExpandPushLockShared(BugCheckParameter2, 0LL);
        KiLeaveGuardedRegionUnsafe(v27);
        if ( PoolWithTag != (unsigned __int64 *)P )
          ExFreePoolWithTag(PoolWithTag, 0);
        return 0;
      }
      v17 = v9;
      v18 = *v14;
      v19 = (const signed __int64 *)v14[1];
      v20 = (unsigned __int64)qword_1403CB778 >> 3;
      v21 = (char *)v28 - (char *)v9;
      while ( 1 )
      {
        if ( v9 == v17 )
        {
          v22 = v21 >> 3;
          if ( v20 < v21 >> 3 )
            v22 = v20;
          v23 = &v17[v22];
          do
          {
            if ( *v17 )
              _m_prefetchw((const void *)(48 * *v17 - 0x57FFFFFFFF8LL));
            ++v17;
          }
          while ( v17 < v23 );
        }
        v24 = *v9;
        if ( *v9 >= v18 || !_bittest64(v19, v24) )
          break;
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(48 * v24 - 0x58000000000LL + 8), PteAddress, 0LL) )
        {
          v25 = -1073741583;
          goto LABEL_41;
        }
        PteAddress += 8LL;
        ++v9;
        v21 -= 8LL;
        if ( v9 >= v28 )
        {
          v7 = (__int64)PoolWithTag;
          PteAddress -= 8 * NumberOfPages;
          goto LABEL_36;
        }
      }
      v25 = -1073741800;
LABEL_41:
      while ( v9 > PoolWithTag )
        _InterlockedAnd64((volatile signed __int64 *)(48 * *--v9 - 0x57FFFFFFFF8LL), 0LL);
    }
    else
    {
      v25 = -1073741585;
    }
    ExReleaseAutoExpandPushLockShared(BugCheckParameter2, 0LL);
    KiLeaveGuardedRegionUnsafe(v27);
    if ( PoolWithTag != (unsigned __int64 *)P )
      ExFreePoolWithTag(PoolWithTag, 0);
    return v25;
  }
  else
  {
    if ( PoolWithTag != (unsigned __int64 *)P )
      ExFreePoolWithTag(PoolWithTag, 0);
    return -1073741585;
  }
}
