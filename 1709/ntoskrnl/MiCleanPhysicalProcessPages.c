/*
 * XREFs of MiCleanPhysicalProcessPages @ 0x1406E54AC
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x1404D2F70 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     MiReturnProcessCommitment @ 0x140035908 (MiReturnProcessCommitment.c)
 *     RtlClearBitsEx @ 0x140036470 (RtlClearBitsEx.c)
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiGetProcessPartition @ 0x14003ADE0 (MiGetProcessPartition.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x1400BAD00 (ExAcquireAutoExpandPushLockExclusive.c)
 *     MiReturnResidentAvailable @ 0x1400BFE10 (MiReturnResidentAvailable.c)
 *     MiFreeMdlPageRun @ 0x1400E1354 (MiFreeMdlPageRun.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x140113B10 (ExReleaseAutoExpandPushLockExclusive.c)
 *     MiReturnPartitionResidentAvailable @ 0x14022AC50 (MiReturnPartitionResidentAvailable.c)
 *     RtlFindNextForwardRunClearEx @ 0x140252A10 (RtlFindNextForwardRunClearEx.c)
 *     RtlFindSetBitsEx @ 0x140252DC0 (RtlFindSetBitsEx.c)
 */

__int64 __fastcall MiCleanPhysicalProcessPages(__int64 a1)
{
  __int64 v2; // r12
  unsigned __int64 v3; // rbp
  __int64 ProcessPartition; // rax
  struct _KTHREAD *CurrentThread; // r15
  __int64 v6; // rdi
  __int64 v7; // rcx
  _RTL_BITMAP_EX *v8; // r14
  ULONG_PTR v9; // rcx
  ULONG64 v10; // r15
  ULONG64 SetBits; // rax
  unsigned __int64 v12; // rsi
  unsigned __int64 NextForwardRunClear; // rax
  unsigned __int64 SizeOfBitMap; // rbx
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // rbx
  ULONG_PTR *v17; // r9
  unsigned __int64 v18; // r8
  unsigned __int64 v20; // [rsp+78h] [rbp+10h] BYREF
  struct _KTHREAD *v21; // [rsp+80h] [rbp+18h]
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp+20h]

  v2 = 0LL;
  v3 = 0LL;
  ProcessPartition = MiGetProcessPartition(a1);
  CurrentThread = KeGetCurrentThread();
  v6 = ProcessPartition;
  v8 = *(_RTL_BITMAP_EX **)(v7 + 1032);
  v21 = CurrentThread;
  --CurrentThread->SpecialApcDisable;
  BugCheckParameter2 = (ULONG_PTR)&v8[1];
  ExAcquireAutoExpandPushLockExclusive((ULONG_PTR)&v8[1], 0LL);
  if ( *(_QWORD *)(a1 + 1600) )
  {
    v10 = 0LL;
    do
    {
      SetBits = RtlFindSetBitsEx(v8, 1uLL, v10);
      v12 = SetBits;
      if ( SetBits < v10 || SetBits == -1LL )
        break;
      NextForwardRunClear = RtlFindNextForwardRunClearEx((__int64)v8, SetBits, &v20);
      SizeOfBitMap = v20;
      v15 = NextForwardRunClear;
      if ( !NextForwardRunClear )
        SizeOfBitMap = v8->SizeOfBitMap;
      v16 = SizeOfBitMap - v12;
      RtlClearBitsEx((__int64)v8, v12, v16);
      v10 = v12 + v16 + v15;
      v2 += v16;
      v3 += MiFreeMdlPageRun(v12, v16, 0x80000000);
    }
    while ( v10 < v8->SizeOfBitMap );
    CurrentThread = v21;
    v17 = &MiSystemPartition;
    if ( v2 )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 6456), -v2);
      *(_QWORD *)(a1 + 1600) = 0LL;
      MiReturnProcessCommitment(a1, v2);
      if ( (ULONG_PTR *)v6 == v17 )
        _InterlockedExchangeAdd64(&qword_1403893E0, v18);
    }
    if ( v3 )
    {
      if ( (ULONG_PTR *)v6 == v17 )
        MiReturnResidentAvailable(v3);
      else
        MiReturnPartitionResidentAvailable(v6, v3);
      MiReturnCommit(v6, v3);
    }
    v9 = BugCheckParameter2;
  }
  else
  {
    v9 = (ULONG_PTR)&v8[1];
  }
  ExReleaseAutoExpandPushLockExclusive(v9, 0LL);
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
