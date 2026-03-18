/*
 * XREFs of MiChargeSegmentCommit @ 0x14054A0F0
 * Callers:
 *     MmCommitSessionMappedView @ 0x14044D1A0 (MmCommitSessionMappedView.c)
 *     MiMapViewOfDataSection @ 0x140512AC0 (MiMapViewOfDataSection.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x140514AB0 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiCommitPagefileBackedSection @ 0x140549FD0 (MiCommitPagefileBackedSection.c)
 * Callees:
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 *     MiChargeCommit @ 0x1400D0C60 (MiChargeCommit.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     MiGetControlAreaPartition @ 0x140118AE8 (MiGetControlAreaPartition.c)
 *     MiUpdateControlAreaCommitCount @ 0x140119798 (MiUpdateControlAreaCommitCount.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x14017CF18 (MiMakeDemandZeroPte.c)
 *     MiGetCrossPartitionCharges @ 0x14021DFB0 (MiGetCrossPartitionCharges.c)
 *     MiReturnCrossPartitionCharges @ 0x14021E85C (MiReturnCrossPartitionCharges.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUpdateProcessSharedCommit @ 0x140549F48 (MiUpdateProcessSharedCommit.c)
 */

__int64 __fastcall MiChargeSegmentCommit(__int64 *a1, _QWORD *a2, unsigned __int64 a3)
{
  __int64 *v3; // r15
  __int64 *v4; // r13
  __int64 ControlAreaPartition; // r12
  __int64 v8; // r8
  unsigned __int64 v9; // r14
  __int64 v10; // rbp
  int v11; // eax
  volatile signed __int64 *v12; // rsi
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 v16; // r10
  unsigned __int64 v17; // rcx
  __int64 v18; // r15
  unsigned __int64 v19; // rbp
  __int64 v20; // r14
  __int64 v21; // r10
  __int64 v22; // r11
  unsigned __int64 v23; // rdx
  __int64 updated; // rax
  __int64 v25; // [rsp+20h] [rbp-88h]
  _QWORD *v26; // [rsp+28h] [rbp-80h]
  int CrossPartitionCharges; // [rsp+B0h] [rbp+8h]
  struct _KTHREAD *CurrentThread; // [rsp+B8h] [rbp+10h]
  __int64 v29; // [rsp+C0h] [rbp+18h]
  __int64 v30; // [rsp+C8h] [rbp+20h]

  v3 = a1;
  v4 = a1;
  CurrentThread = KeGetCurrentThread();
  v26 = (_QWORD *)*a1;
  v30 = *(_QWORD *)*a1;
  ControlAreaPartition = MiGetControlAreaPartition(*a1);
  v25 = v8;
  v9 = (unsigned __int64)a2;
  v10 = v4[1] + 8LL * *((unsigned int *)v4 + 11);
  v11 = MiChargeCommit(ControlAreaPartition, a3, 0LL);
  --CurrentThread->SpecialApcDisable;
  CrossPartitionCharges = v11;
  v12 = (volatile signed __int64 *)(v30 + 40);
  ExAcquirePushLockExclusiveEx(v30 + 40, 0LL);
  v29 = v26[22] & 0x3FFFFFFF;
  if ( CrossPartitionCharges )
  {
    if ( (v26[22] & 0x3FFFFFFF) != 0 )
    {
      CrossPartitionCharges = MiGetCrossPartitionCharges(ControlAreaPartition, 0, 0, a3);
      if ( !CrossPartitionCharges )
      {
        MiReturnCommit(ControlAreaPartition, a3);
        return 0LL;
      }
    }
    v18 = v29;
    goto LABEL_21;
  }
  while ( 1 )
  {
    v14 = MI_READ_PTE_LOCK_FREE(v9);
    v17 = a3 - 1;
    if ( !v14 )
      v17 = a3;
    v9 += 8LL;
    a3 = v17;
    if ( v15 + 1 == v16 )
      break;
    if ( v9 == v10 )
    {
      v3 = (__int64 *)v3[2];
      v9 = v3[1];
      v10 = v9 + 8LL * *((unsigned int *)v3 + 11);
    }
  }
  if ( !v17 )
    goto LABEL_40;
  if ( !(unsigned int)MiChargeCommit(ControlAreaPartition, v17, 0LL) )
  {
    if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v12);
LABEL_14:
    KeAbPostRelease((ULONG_PTR)v12);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    return 0LL;
  }
  v18 = v29;
  if ( v29 && !(unsigned int)MiGetCrossPartitionCharges(ControlAreaPartition, 0, 0, a3) )
  {
    MiReturnCommit(ControlAreaPartition, a3);
    if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v12);
    goto LABEL_14;
  }
LABEL_21:
  MiMakeDemandZeroPte((*(_BYTE *)(v30 + 14) >> 1) & 0x1F);
  v19 = 0LL;
  v20 = v4[1] + 8LL * *((unsigned int *)v4 + 11);
  while ( 1 )
  {
    if ( MI_READ_PTE_LOCK_FREE((unsigned __int64)a2) )
    {
      ++v19;
    }
    else
    {
      *a2 = v21;
      if ( MiPteInShadowRange((unsigned __int64)a2) )
        MiWritePteShadow();
    }
    ++a2;
    if ( v22 + 1 == v25 )
      break;
    if ( a2 == (_QWORD *)v20 )
    {
      v4 = (__int64 *)v4[2];
      a2 = (_QWORD *)v4[1];
      v20 = (__int64)&a2[*((unsigned int *)v4 + 11)];
    }
  }
  v12 = (volatile signed __int64 *)(v30 + 40);
  if ( CrossPartitionCharges == 1 )
  {
    a3 -= v19;
    if ( v19 )
    {
      MiReturnCommit(ControlAreaPartition, v19);
      if ( v18 )
        MiReturnCrossPartitionCharges(ControlAreaPartition, 0, 0, v19);
    }
  }
  if ( a3 )
  {
    MiUpdateProcessSharedCommit((__int64)v26);
    updated = MiUpdateControlAreaCommitCount((__int64)v26, v23);
  }
  else
  {
    updated = 0LL;
  }
  if ( v18 && !updated && a3 )
    MiReturnCrossPartitionCharges(ControlAreaPartition, 0, 0, a3);
LABEL_40:
  if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v12);
  KeAbPostRelease((ULONG_PTR)v12);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return 1LL;
}
