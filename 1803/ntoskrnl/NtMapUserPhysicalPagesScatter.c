/*
 * XREFs of NtMapUserPhysicalPagesScatter @ 0x140750968
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

NTSTATUS __stdcall NtMapUserPhysicalPagesScatter(
        PVOID *VirtualAddresses,
        ULONG_PTR NumberOfPages,
        PULONG_PTR UserPfnArray)
{
  unsigned __int64 *v7; // rsi
  signed __int64 v8; // r15
  unsigned __int64 *PoolWithTag; // rdi
  SIZE_T v10; // rdx
  NTSTATUS v11; // ebx
  struct _KTHREAD *CurrentThread; // r14
  _QWORD *v13; // r13
  _KPROCESS *Process; // rax
  __int64 v15; // rcx
  unsigned __int64 *v16; // rax
  unsigned __int64 *v17; // rax
  unsigned __int64 v18; // r11
  __int64 v19; // r8
  _QWORD *PhysicalViewInTree; // rax
  unsigned __int64 v21; // r11
  __int64 v22; // rax
  unsigned __int64 *v23; // r13
  unsigned __int64 *v24; // r10
  unsigned __int64 *v25; // r11
  unsigned __int64 v26; // r12
  unsigned __int64 v27; // rdx
  const signed __int64 *v28; // rcx
  unsigned __int64 *v29; // r9
  __int64 v30; // rax
  unsigned __int64 *v31; // rdx
  unsigned __int64 v32; // rax
  signed __int64 PteAddress; // rax
  __int64 v34; // r8
  unsigned __int64 *v35; // [rsp+30h] [rbp-2078h]
  unsigned __int64 v36; // [rsp+30h] [rbp-2078h]
  unsigned __int64 *v37; // [rsp+38h] [rbp-2070h]
  const signed __int64 *v38; // [rsp+38h] [rbp-2070h]
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-2068h]
  unsigned __int64 *v40; // [rsp+48h] [rbp-2060h]
  __int64 v41; // [rsp+50h] [rbp-2058h]
  _BYTE P[4096]; // [rsp+60h] [rbp-2048h] BYREF
  char v43; // [rsp+1060h] [rbp-1048h] BYREF

  if ( NumberOfPages > 0xFFFFFFFFFFFFFLL )
    return -1073741584;
  v7 = (unsigned __int64 *)&v43;
  v8 = NumberOfPages;
  PoolWithTag = (unsigned __int64 *)P;
  v10 = 8 * NumberOfPages;
  if ( NumberOfPages > 0x200 )
  {
    if ( UserPfnArray )
      v10 = 16 * NumberOfPages;
    PoolWithTag = (unsigned __int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, v10, 0x77526D4Du);
    if ( !PoolWithTag )
      return -1073741670;
  }
  v35 = PoolWithTag;
  v11 = MiCaptureUlongPtrArray(PoolWithTag, (char *)VirtualAddresses, NumberOfPages);
  if ( v11 < 0 )
    goto LABEL_50;
  if ( !NumberOfPages )
    return 0;
  if ( UserPfnArray )
  {
    if ( NumberOfPages > 0x200 )
      v7 = &PoolWithTag[v8];
    v11 = MiCaptureUlongPtrArray(v7, (char *)UserPfnArray, NumberOfPages);
    if ( v11 < 0 )
      goto LABEL_50;
  }
  CurrentThread = KeGetCurrentThread();
  v40 = &v7[v8];
  v13 = 0LL;
  v11 = 0;
  Process = CurrentThread->ApcState.Process;
  v15 = (__int64)&Process[1].IdealNode[12];
  v16 = (unsigned __int64 *)Process[1].ActiveProcessors.Bitmap[3];
  v41 = v15;
  v37 = v16;
  if ( !v16 )
  {
LABEL_49:
    v11 = -1073741585;
    goto LABEL_50;
  }
  --CurrentThread->SpecialApcDisable;
  BugCheckParameter2 = ExAcquireAutoExpandPushLockShared((ULONG_PTR)(v16 + 2), 0LL);
  v17 = PoolWithTag;
  do
  {
    v18 = *v17;
    if ( !v13
      || (v19 = v13[3],
          v18 < (*(unsigned int *)(v19 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 32) << 32)) << 12)
      || v18 > (((*(unsigned int *)(v19 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 33) << 32)) << 12) | 0xFFF) )
    {
      PhysicalViewInTree = MiLocatePhysicalViewInTree(v18 >> 12, v37 + 4);
      v13 = PhysicalViewInTree;
      if ( !PhysicalViewInTree
        || (v22 = PhysicalViewInTree[3],
            v21 < (*(unsigned int *)(v22 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v22 + 32) << 32)) << 12)
        || v21 > (((*(unsigned int *)(v22 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v22 + 33) << 32)) << 12) | 0xFFF) )
      {
        ExReleaseAutoExpandPushLockShared(BugCheckParameter2, 0LL);
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        goto LABEL_49;
      }
    }
    v17 = v35 + 1;
    v35 = v17;
  }
  while ( v17 < &PoolWithTag[v8] );
  v23 = PoolWithTag;
  if ( !UserPfnArray )
  {
    v7 = 0LL;
LABEL_47:
    MiWriteAwePtes(v41, (__int64)v7, (__int64)PoolWithTag, NumberOfPages, 0LL);
    goto LABEL_45;
  }
  v24 = v7;
  v25 = v7;
  v26 = (unsigned __int64)qword_1403CB778 >> 3;
  v27 = *v37;
  v28 = (const signed __int64 *)v37[1];
  v36 = *v37;
  v38 = v28;
  while ( 2 )
  {
    v29 = v25;
    if ( v25 == v24 )
    {
      v30 = (v8 * 8) >> 3;
      if ( v26 < (v8 * 8) >> 3 )
        v30 = v26;
      v31 = &v24[v30];
      do
      {
        if ( *v24 )
          _m_prefetchw((const void *)(48 * *v24 - 0x57FFFFFFFF8LL));
        ++v24;
      }
      while ( v24 < v31 );
      v28 = v38;
      v27 = v36;
    }
    v32 = *v25;
    --v8;
    ++v25;
    if ( !v32 )
    {
LABEL_38:
      if ( v25 >= v40 )
        goto LABEL_47;
      v28 = v38;
      ++v23;
      v27 = v36;
      continue;
    }
    break;
  }
  if ( v32 < v27 && _bittest64(v28, v32) )
  {
    PteAddress = MiGetPteAddress(*v23);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v34 + 8), PteAddress, 0LL) )
    {
      v11 = -1073741583;
      goto LABEL_44;
    }
    goto LABEL_38;
  }
  v11 = -1073741800;
LABEL_44:
  while ( v29 > v7 )
  {
    if ( *--v29 )
      _InterlockedAnd64((volatile signed __int64 *)(48 * *v29 - 0x57FFFFFFFF8LL), 0LL);
  }
LABEL_45:
  ExReleaseAutoExpandPushLockShared(BugCheckParameter2, 0LL);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
LABEL_50:
  if ( PoolWithTag != (unsigned __int64 *)P )
    ExFreePoolWithTag(PoolWithTag, 0);
  return v11;
}
