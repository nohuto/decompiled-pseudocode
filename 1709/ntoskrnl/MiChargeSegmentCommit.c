/*
 * XREFs of MiChargeSegmentCommit @ 0x140460540
 * Callers:
 *     MiCommitPagefileBackedSection @ 0x140460420 (MiCommitPagefileBackedSection.c)
 *     MiMapViewOfDataSection @ 0x1404CEDF0 (MiMapViewOfDataSection.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1404D3B60 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MmCommitSessionMappedView @ 0x1404F7720 (MmCommitSessionMappedView.c)
 * Callees:
 *     MiGetSubsectionCrossPartitionReferences @ 0x1400148A8 (MiGetSubsectionCrossPartitionReferences.c)
 *     MiGetControlAreaPartition @ 0x1400148E4 (MiGetControlAreaPartition.c)
 *     MiUpdateControlAreaCommitCount @ 0x14001FCD0 (MiUpdateControlAreaCommitCount.c)
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiChargeCommit @ 0x14003AB20 (MiChargeCommit.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x14017C774 (MiMakeDemandZeroPte.c)
 *     MiGetSubsectionCharges @ 0x14022DF48 (MiGetSubsectionCharges.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14022E13C (MiReturnCrossPartitionSectionCharges.c)
 *     MiUpdateProcessSharedCommit @ 0x140460128 (MiUpdateProcessSharedCommit.c)
 */

__int64 __fastcall MiChargeSegmentCommit(__int64 *a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 *v4; // rbp
  __int64 ControlAreaPartition; // rax
  __int64 v7; // rdx
  __int64 *v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 *v11; // r13
  __int64 v12; // r9
  __int64 v13; // r12
  unsigned __int64 v14; // r15
  unsigned int SubsectionCrossPartitionReferences; // eax
  __int64 v16; // r9
  __int64 v17; // r10
  __int64 PteShadow; // rax
  unsigned __int64 v19; // rcx
  volatile signed __int64 *v20; // rsi
  __int64 DemandZeroPte; // r10
  __int64 v23; // r11
  __int64 v24; // rax
  unsigned __int64 v25; // rdx
  __int64 updated; // rax
  __int64 v27; // [rsp+20h] [rbp-78h]
  __int64 v28; // [rsp+28h] [rbp-70h]
  _QWORD *v29; // [rsp+40h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+A0h] [rbp+8h]
  volatile signed __int64 *BugCheckParameter2; // [rsp+A8h] [rbp+10h]
  __int64 v33; // [rsp+B8h] [rbp+20h]

  v3 = (__int64)a1;
  v4 = a1;
  CurrentThread = KeGetCurrentThread();
  v29 = (_QWORD *)*a1;
  v28 = *(_QWORD *)*a1;
  ControlAreaPartition = MiGetControlAreaPartition(*a1);
  v7 = *((unsigned int *)v4 + 11);
  v33 = ControlAreaPartition;
  v8 = a2;
  v9 = v4[1];
  --*(_WORD *)(v10 + 486);
  v11 = (__int64 *)(v9 + 8 * v7);
  BugCheckParameter2 = (volatile signed __int64 *)(v12 + 40);
  ExAcquirePushLockExclusiveEx(v12 + 40, 0LL);
  v13 = 0LL;
  v14 = 0LL;
  SubsectionCrossPartitionReferences = MiGetSubsectionCrossPartitionReferences();
  v17 = a3;
  v27 = SubsectionCrossPartitionReferences;
  while ( 1 )
  {
    PteShadow = *v8;
    if ( (unsigned __int64)v8 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v8 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow();
    v19 = v14 + 1;
    if ( PteShadow )
      v19 = v14;
    ++v16;
    ++v8;
    v14 = v19;
    if ( v16 == v17 )
      break;
    if ( v8 == v11 )
    {
      v3 = *(_QWORD *)(v3 + 16);
      v8 = *(__int64 **)(v3 + 8);
      v11 = &v8[*(unsigned int *)(v3 + 44)];
    }
  }
  v20 = BugCheckParameter2;
  if ( v19 )
  {
    if ( !(unsigned int)MiChargeCommit(v33, v19, 0LL, v16) )
    {
      if ( (_InterlockedExchangeAdd64(BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(BugCheckParameter2);
LABEL_14:
      KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      return 0LL;
    }
    if ( v27 && (int)MiGetSubsectionCharges(v3, v14) < 0 )
    {
      MiReturnCommit(v33, v14);
      if ( (_InterlockedExchangeAdd64(BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(BugCheckParameter2);
      goto LABEL_14;
    }
    DemandZeroPte = MiMakeDemandZeroPte((*(_BYTE *)(v28 + 14) >> 1) & 0x1F);
    v23 = v4[1] + 8LL * *((unsigned int *)v4 + 11);
    while ( 1 )
    {
      v24 = *a2;
      if ( (unsigned __int64)a2 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a2 <= 0xFFFFF6FB7DBED7F8uLL )
        v24 = MiReadPteShadow();
      if ( !v24 )
      {
        *a2 = DemandZeroPte;
        if ( (unsigned __int64)a2 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a2 <= 0xFFFFF6FB7DBED7F8uLL )
          MiWritePteShadow();
      }
      ++v13;
      ++a2;
      if ( v13 == a3 )
        break;
      if ( a2 == (__int64 *)v23 )
      {
        v4 = (__int64 *)v4[2];
        a2 = (__int64 *)v4[1];
        v23 = (__int64)&a2[*((unsigned int *)v4 + 11)];
      }
    }
    MiUpdateProcessSharedCommit((__int64)v29);
    updated = MiUpdateControlAreaCommitCount((__int64)v29, v25);
    v20 = BugCheckParameter2;
    if ( v27 && !updated )
      MiReturnCrossPartitionSectionCharges(v33, 0, v14);
  }
  if ( (_InterlockedExchangeAdd64(v20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v20);
  KeAbPostRelease((ULONG_PTR)v20);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return 1LL;
}
