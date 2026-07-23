/*
 * XREFs of MiResizeAweBitMap @ 0x14074FBC0
 * Callers:
 *     MiAllocateAweInfo @ 0x14074F6C8 (MiAllocateAweInfo.c)
 *     NtAllocateUserPhysicalPages @ 0x14074FE5C (NtAllocateUserPhysicalPages.c)
 * Callees:
 *     ExAcquireAutoExpandPushLockExclusive @ 0x140007E50 (ExAcquireAutoExpandPushLockExclusive.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x14000AD00 (PsChargeProcessNonPagedPoolQuota.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x1400B5B90 (ExReleaseAutoExpandPushLockExclusive.c)
 *     ExInitializeAutoExpandPushLock @ 0x1400B5C70 (ExInitializeAutoExpandPushLock.c)
 *     LOCK_ADDRESS_SPACE @ 0x1400E5518 (LOCK_ADDRESS_SPACE.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x1400E6714 (UNLOCK_ADDRESS_SPACE.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1400F0EE0 (PsReturnProcessNonPagedPoolQuota.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiGetProcessPartition @ 0x1401199C8 (MiGetProcessPartition.c)
 *     RtlClearAllBitsEx @ 0x140139760 (RtlClearAllBitsEx.c)
 *     RtlCopyBitMapEx @ 0x140287900 (RtlCopyBitMapEx.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiResizeAweBitMap(_RTL_BITMAP_EX *P)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 Process; // rsi
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int16 v7; // ax
  unsigned __int64 v8; // r13
  SIZE_T v9; // r12
  unsigned __int64 *PoolWithTag; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  _RTL_BITMAP_EX *v14; // rbp
  ULONG_PTR v15; // r15
  _RTL_BITMAP_EX *v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // r12d
  __int64 v22; // r8
  __int64 v23; // r9
  _RTL_BITMAP_EX BitMapHeader; // [rsp+20h] [rbp-48h] BYREF
  PVOID v25[2]; // [rsp+30h] [rbp-38h]
  unsigned __int64 *Pa; // [rsp+78h] [rbp+10h]

  CurrentThread = KeGetCurrentThread();
  v25[0] = 0LL;
  v25[1] = 0LL;
  Process = (__int64)CurrentThread->ApcState.Process;
  v4 = 0LL;
  v5 = *(_QWORD *)(MiGetProcessPartition(Process) + 6856);
  v6 = *(_QWORD *)(Process + 1064);
  if ( v6 )
  {
    v7 = *(_WORD *)(v6 + 8);
    if ( (v7 == 332 || v7 == 452) && (unsigned __int64)(v5 + 1) > 0x100000000LL )
      v5 = 0xFFFFFFFFLL;
  }
  v8 = v5 + 1;
  v9 = 8 * (((unsigned __int64)(v5 + 1) >> 6) + ((((_BYTE)v5 + 1) & 0x3F) != 0));
  PoolWithTag = (unsigned __int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, v9, 0x4C646156u);
  Pa = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  BitMapHeader.SizeOfBitMap = v8;
  BitMapHeader.Buffer = PoolWithTag;
  RtlClearAllBitsEx(&BitMapHeader);
  LOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
  if ( (*(_DWORD *)(Process + 772) & 0x20) != 0 )
  {
    UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, Process, v12, v13);
    if ( P != *(_RTL_BITMAP_EX **)(Process + 1032) )
      ExFreePoolWithTag(P, 0);
    LODWORD(v4) = -1073741558;
    goto LABEL_27;
  }
  v14 = *(_RTL_BITMAP_EX **)(Process + 1032);
  if ( v14 )
  {
    if ( P != v14 )
      ExFreePoolWithTag(P, 0);
    --CurrentThread->SpecialApcDisable;
    v15 = (ULONG_PTR)&v14[1];
    ExAcquireAutoExpandPushLockExclusive((ULONG_PTR)&v14[1], 0LL);
    v16 = 0LL;
    if ( P == v14 )
      v16 = P;
    P = v16;
    if ( v8 <= v14->SizeOfBitMap )
    {
      ExReleaseAutoExpandPushLockExclusive((ULONG_PTR)&v14[1], 0LL);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, Process, v17, v18);
LABEL_27:
      ExFreePoolWithTag(Pa, 0);
      return (unsigned int)v4;
    }
  }
  else
  {
    v15 = 16LL;
  }
  v21 = PsChargeProcessNonPagedPoolQuota(Process, v9);
  if ( v21 < 0 )
  {
    if ( v14 )
    {
      ExReleaseAutoExpandPushLockExclusive(v15, 0LL);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    }
    UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, Process, v19, v20);
    if ( P && P != v14 )
      ExFreePoolWithTag(P, 0);
    LODWORD(v4) = v21;
    goto LABEL_27;
  }
  if ( v14 )
  {
    RtlCopyBitMapEx((char **)v14, (char **)&BitMapHeader, v19);
    *(_RTL_BITMAP_EX *)v25 = *v14;
    *v14 = BitMapHeader;
    ExReleaseAutoExpandPushLockExclusive(v15, 0LL);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  else
  {
    *P = BitMapHeader;
    ExInitializeAutoExpandPushLock(&P[1].SizeOfBitMap, 1);
    *(_QWORD *)(Process + 1032) = P;
  }
  UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, Process, v22, v23);
  if ( v25[1] )
  {
    ExFreePoolWithTag(v25[1], 0);
    LOBYTE(v4) = ((__int64)v25[0] & 0x3F) != 0;
    PsReturnProcessNonPagedPoolQuota((struct _KPROCESS *)Process, 8 * (((unsigned __int64)v25[0] >> 6) + v4));
  }
  return 0LL;
}
