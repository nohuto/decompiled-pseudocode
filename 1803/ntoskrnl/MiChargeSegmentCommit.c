/*
 * XREFs of MiChargeSegmentCommit @ 0x1404D7760
 * Callers:
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1404B3C20 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiCommitPagefileBackedSection @ 0x1404D7638 (MiCommitPagefileBackedSection.c)
 *     MmCommitSessionMappedView @ 0x140570F40 (MmCommitSessionMappedView.c)
 *     MiMapViewOfDataSection @ 0x140594470 (MiMapViewOfDataSection.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiUpdateControlAreaCommitCount @ 0x14004B4CC (MiUpdateControlAreaCommitCount.c)
 *     MiGetSubsectionCrossPartitionReferences @ 0x140062750 (MiGetSubsectionCrossPartitionReferences.c)
 *     MiGetControlAreaPartition @ 0x14006278C (MiGetControlAreaPartition.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     MiChargeCommit @ 0x140119760 (MiChargeCommit.c)
 *     MiReadPteShadow @ 0x140122630 (MiReadPteShadow.c)
 *     MiMakeDemandZeroPte @ 0x1401A65C8 (MiMakeDemandZeroPte.c)
 *     MiGetSubsectionCharges @ 0x140268104 (MiGetSubsectionCharges.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402682E4 (MiReturnCrossPartitionSectionCharges.c)
 *     MiUpdateProcessSharedCommit @ 0x140567EE0 (MiUpdateProcessSharedCommit.c)
 */

__int64 __fastcall MiChargeSegmentCommit(__int64 *a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // rbp
  __int64 ControlAreaPartition; // rax
  __int64 v7; // rdx
  __int64 *v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 *v11; // r13
  __int64 v12; // r9
  volatile signed __int64 *v13; // rsi
  __int64 v14; // r12
  unsigned __int64 v15; // r15
  unsigned int SubsectionCrossPartitionReferences; // eax
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r10
  unsigned __int64 v20; // r11
  __int64 v21; // rdx
  __int64 PteShadow; // rax
  unsigned __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // r10
  __int64 *v32; // r11
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r10
  unsigned __int64 v36; // rdx
  __int64 updated; // rax
  __int64 v38; // [rsp+20h] [rbp-78h]
  _QWORD *v39; // [rsp+38h] [rbp-60h]
  volatile signed __int64 *v40; // [rsp+40h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+A0h] [rbp+8h]
  __int64 v42; // [rsp+A8h] [rbp+10h]
  __int64 v44; // [rsp+B8h] [rbp+20h]

  v3 = (__int64)a1;
  v4 = (__int64)a1;
  CurrentThread = KeGetCurrentThread();
  v39 = (_QWORD *)*a1;
  v38 = *(_QWORD *)*a1;
  ControlAreaPartition = MiGetControlAreaPartition(*a1);
  v7 = *(unsigned int *)(v4 + 44);
  v42 = ControlAreaPartition;
  v8 = a2;
  v9 = *(_QWORD *)(v4 + 8);
  --*(_WORD *)(v10 + 486);
  v11 = (__int64 *)(v9 + 8 * v7);
  v13 = (volatile signed __int64 *)(v12 + 40);
  v40 = (volatile signed __int64 *)(v12 + 40);
  ExAcquirePushLockExclusiveEx(v12 + 40, 0LL);
  v14 = 0LL;
  v15 = 0LL;
  SubsectionCrossPartitionReferences = MiGetSubsectionCrossPartitionReferences(v4);
  v19 = a3;
  v44 = SubsectionCrossPartitionReferences;
  v20 = 0xFFFFF6FB7DBED000uLL;
  v21 = 0xFFFFF6FB7DBED7F8uLL;
  while ( 1 )
  {
    PteShadow = *v8;
    if ( (unsigned __int64)v8 >= v20 && (unsigned __int64)v8 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      PteShadow = MiReadPteShadow((unsigned __int64)v8, *v8);
      v21 = 0xFFFFF6FB7DBED7F8uLL;
    }
    v23 = v15 + 1;
    if ( PteShadow )
      v23 = v15;
    ++v18;
    ++v8;
    v15 = v23;
    if ( v18 == v19 )
      break;
    if ( v8 == v11 )
    {
      v3 = *(_QWORD *)(v3 + 16);
      v8 = *(__int64 **)(v3 + 8);
      v11 = &v8[*(unsigned int *)(v3 + 44)];
    }
  }
  if ( v23 )
  {
    if ( !(unsigned int)MiChargeCommit(v42, v23, 0) )
    {
      if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v13, v24, v25, v26);
LABEL_14:
      KeAbPostRelease((ULONG_PTR)v13);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      return 0LL;
    }
    if ( v44 && (int)MiGetSubsectionCharges(v3, v15) < 0 )
    {
      MiReturnCommit(v42, v15);
      if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v13, v28, v29, v30);
      goto LABEL_14;
    }
    MiMakeDemandZeroPte((*(_BYTE *)(v38 + 14) >> 1) & 0x1F);
    while ( 1 )
    {
      if ( !MI_READ_PTE_LOCK_FREE((unsigned __int64)a2) )
      {
        *a2 = v31;
        if ( MiPteInShadowRange((unsigned __int64)a2) )
          MiWritePteShadow(v33, v35, v34);
      }
      ++v14;
      ++a2;
      if ( v14 == a3 )
        break;
      if ( a2 == v32 )
      {
        v4 = *(_QWORD *)(v4 + 16);
        a2 = *(__int64 **)(v4 + 8);
      }
    }
    MiUpdateProcessSharedCommit(v39, v15);
    updated = MiUpdateControlAreaCommitCount((__int64)v39, v36);
    v13 = v40;
    if ( v44 && !updated )
      MiReturnCrossPartitionSectionCharges(v42, 0, v15);
  }
  if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v13, v21, v17, v18);
  KeAbPostRelease((ULONG_PTR)v13);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return 1LL;
}
