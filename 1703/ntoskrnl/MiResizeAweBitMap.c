/*
 * XREFs of MiResizeAweBitMap @ 0x1406B8CF8
 * Callers:
 *     MiAllocateAweInfo @ 0x1406B84C0 (MiAllocateAweInfo.c)
 *     NtAllocateUserPhysicalPages @ 0x1406B8F84 (NtAllocateUserPhysicalPages.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x140018950 (PsReturnProcessPagedPoolQuota.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x140020340 (ExReleaseAutoExpandPushLockExclusive.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x140021C70 (ExAcquireAutoExpandPushLockExclusive.c)
 *     ExInitializeAutoExpandPushLock @ 0x1400233D0 (ExInitializeAutoExpandPushLock.c)
 *     RtlClearAllBitsEx @ 0x140073BE0 (RtlClearAllBitsEx.c)
 *     LOCK_ADDRESS_SPACE @ 0x1400998FC (LOCK_ADDRESS_SPACE.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x14009B6E0 (UNLOCK_ADDRESS_SPACE.c)
 *     MiGetProcessPartition @ 0x1400D0EA8 (MiGetProcessPartition.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     RtlCopyBitMapEx @ 0x14023C4E0 (RtlCopyBitMapEx.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PsChargeProcessPagedPoolQuota @ 0x14042C1C0 (PsChargeProcessPagedPoolQuota.c)
 */

__int64 __fastcall MiResizeAweBitMap(unsigned __int64 *P)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 Process; // rdi
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int16 v7; // ax
  unsigned __int64 v8; // r13
  SIZE_T v9; // r12
  PVOID PoolWithTag; // rax
  unsigned __int64 *v12; // rsi
  int v13; // r15d
  __int128 v14; // [rsp+20h] [rbp-48h] BYREF
  PVOID v15[2]; // [rsp+30h] [rbp-38h]
  PVOID Pa; // [rsp+78h] [rbp+10h]

  CurrentThread = KeGetCurrentThread();
  v15[0] = 0LL;
  v15[1] = 0LL;
  Process = (__int64)CurrentThread->ApcState.Process;
  v4 = 0LL;
  v5 = *(_QWORD *)(MiGetProcessPartition(Process) + 5576);
  v6 = *(_QWORD *)(Process + 1064);
  if ( v6 )
  {
    v7 = *(_WORD *)(v6 + 8);
    if ( (v7 == 332 || v7 == 452) && (unsigned __int64)(v5 + 1) > 0x100000000LL )
      v5 = 0xFFFFFFFFLL;
  }
  v8 = v5 + 1;
  v9 = 8 * (((unsigned __int64)(v5 + 1) >> 6) + ((((_BYTE)v5 + 1) & 0x3F) != 0));
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v9, 0x4C646156u);
  Pa = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  *(_QWORD *)&v14 = v8;
  *((_QWORD *)&v14 + 1) = PoolWithTag;
  RtlClearAllBitsEx((__int64)&v14);
  LOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
  if ( (*(_DWORD *)(Process + 772) & 0x20) != 0 )
  {
    UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
    if ( P != *(unsigned __int64 **)(Process + 1032) )
      ExFreePoolWithTag(P, 0);
    LODWORD(v4) = -1073741558;
    goto LABEL_24;
  }
  v12 = *(unsigned __int64 **)(Process + 1032);
  if ( v12 )
  {
    if ( P != v12 )
    {
      ExFreePoolWithTag(P, 0);
      P = 0LL;
    }
    --CurrentThread->SpecialApcDisable;
    ExAcquireAutoExpandPushLockExclusive((ULONG_PTR)(v12 + 2), 0LL);
    if ( v8 <= *v12 )
    {
      ExReleaseAutoExpandPushLockExclusive((ULONG_PTR)(v12 + 2), 0LL);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
LABEL_24:
      ExFreePoolWithTag(Pa, 0);
      return (unsigned int)v4;
    }
  }
  v13 = PsChargeProcessPagedPoolQuota((struct _KPROCESS *)Process, v9);
  if ( v13 < 0 )
  {
    if ( v12 )
    {
      ExReleaseAutoExpandPushLockExclusive((ULONG_PTR)(v12 + 2), 0LL);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    }
    UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
    if ( P && P != v12 )
      ExFreePoolWithTag(P, 0);
    LODWORD(v4) = v13;
    goto LABEL_24;
  }
  if ( v12 )
  {
    RtlCopyBitMapEx(v12, (char **)&v14);
    *(_OWORD *)v15 = *(_OWORD *)v12;
    *(_OWORD *)v12 = v14;
    ExReleaseAutoExpandPushLockExclusive((ULONG_PTR)(v12 + 2), 0LL);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  else
  {
    *(_OWORD *)P = v14;
    ExInitializeAutoExpandPushLock(P + 2, 1);
    *(_QWORD *)(Process + 1032) = P;
  }
  UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
  if ( v15[1] )
  {
    ExFreePoolWithTag(v15[1], 0);
    LOBYTE(v4) = ((__int64)v15[0] & 0x3F) != 0;
    PsReturnProcessPagedPoolQuota((struct _KPROCESS *)Process, 8 * (((unsigned __int64)v15[0] >> 6) + v4));
  }
  return 0LL;
}
