/*
 * XREFs of MiReleaseOutSwappedProcessCommit @ 0x140213338
 * Callers:
 *     MmOutSwapProcess @ 0x140111FF0 (MmOutSwapProcess.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x1400A20E0 (UNLOCK_ADDRESS_SPACE.c)
 *     MiUnlockVad @ 0x1400A5788 (MiUnlockVad.c)
 *     SmStoreExistsForProcess @ 0x1400B9BB4 (SmStoreExistsForProcess.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     memset @ 0x140192F40 (memset.c)
 *     MiCheckCommitReleaseFromVad @ 0x140211C90 (MiCheckCommitReleaseFromVad.c)
 *     MiIsVadEligibleForCommitRelease @ 0x140212198 (MiIsVadEligibleForCommitRelease.c)
 *     MiLogOutswappedProcessCommitRelease @ 0x1402123FC (MiLogOutswappedProcessCommitRelease.c)
 *     SmpProcessQueryStoreStats @ 0x140271A00 (SmpProcessQueryStoreStats.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

void __fastcall MiReleaseOutSwappedProcessCommit(ULONG_PTR BugCheckParameter1)
{
  struct _KTHREAD *CurrentThread; // r8
  unsigned __int8 ApcStateIndex; // al
  LONG *SharedVm; // rax
  struct _KTHREAD *v5; // r14
  _QWORD *PoolWithTag; // rax
  _QWORD *v7; // r15
  LONG *v8; // rbx
  KIRQL v9; // al
  __int64 v10; // rdx
  __int64 v11; // rbx
  BOOL v12; // r12d
  unsigned __int64 v13; // rsi
  _QWORD *v14; // rax
  _QWORD *v15; // rdi
  __int64 v16; // rbx
  _QWORD *v17; // rax
  _QWORD *v18; // rcx
  __int64 v19; // rcx
  char *v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rax
  LONG *v23; // rcx
  unsigned __int64 v24; // rax
  LONG *v25; // rbx
  KIRQL v26; // al
  __int64 v27; // rdx
  int v28; // ecx
  char v29; // cl
  __int64 v30; // [rsp+30h] [rbp-6A8h]
  LONG *v31; // [rsp+38h] [rbp-6A0h]
  $709EDFC2F9E0D4565D6AA3C4377BC643 v32; // [rsp+40h] [rbp-698h] BYREF
  char v33[48]; // [rsp+70h] [rbp-668h] BYREF
  char v34[12]; // [rsp+A0h] [rbp-638h] BYREF
  unsigned int v35; // [rsp+ACh] [rbp-62Ch]
  char v36; // [rsp+CCh] [rbp-60Ch] BYREF

  CurrentThread = KeGetCurrentThread();
  ApcStateIndex = CurrentThread->ApcStateIndex;
  if ( ApcStateIndex )
    KeBugCheckEx(5u, BugCheckParameter1, (ULONG_PTR)CurrentThread->ApcState.Process, ApcStateIndex, 0LL);
  KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 1, (__int64)v33);
  SharedVm = MiGetSharedVm(BugCheckParameter1 + 1280);
  v5 = KeGetCurrentThread();
  v31 = SharedVm;
  v30 = *(_QWORD *)(qword_140388AF0 + 8LL * *(unsigned __int16 *)(BugCheckParameter1 + 1452));
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x7243694Du);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x38uLL);
    v8 = MiGetSharedVm(BugCheckParameter1 + 1280);
    v9 = ExAcquireSpinLockExclusive(v8);
    v8[1] = 0;
    LOBYTE(v10) = v9;
    *(_BYTE *)(BugCheckParameter1 + 1475) |= 0x60u;
    MiUnlockWorkingSetExclusive(BugCheckParameter1 + 1280, v10);
    v11 = v30;
    v12 = 0;
    v13 = 0LL;
    if ( *(_DWORD *)(v30 + 1144) )
      v12 = SmStoreExistsForProcess();
    --v5->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(BugCheckParameter1 + 872, 0LL);
    LOBYTE(v5[1].Queue) |= 1u;
    v14 = *(_QWORD **)(BugCheckParameter1 + 1576);
    v15 = 0LL;
    while ( v14 )
    {
      v15 = v14;
      v14 = (_QWORD *)*v14;
    }
    while ( v15 )
    {
      --v5->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(v15 + 5), 0LL);
      LOBYTE(v5[1].Queue) |= 0x80u;
      if ( MiIsVadEligibleForCommitRelease((__int64)v15) )
      {
        v16 = MiCheckCommitReleaseFromVad(v11, BugCheckParameter1, BugCheckParameter1 + 1280, (__int64)v15, v12, v7 + 4);
        MiUnlockVad((__int64)v5, (__int64)v15);
        v13 += v16;
        v11 = v30;
      }
      else
      {
        MiUnlockVad((__int64)v5, (__int64)v15);
      }
      v17 = (_QWORD *)v15[1];
      v18 = v15;
      if ( v17 )
      {
        do
        {
          v15 = v17;
          v17 = (_QWORD *)*v17;
        }
        while ( v17 );
      }
      else
      {
        while ( 1 )
        {
          v15 = (_QWORD *)(v15[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v15 || (_QWORD *)*v15 == v18 )
            break;
          v18 = v15;
        }
      }
    }
    UNLOCK_ADDRESS_SPACE((__int64)v5, BugCheckParameter1);
    _InterlockedExchange64((volatile __int64 *)(BugCheckParameter1 + 1496), 0LL);
    if ( v12 )
    {
      if ( (int)SmpProcessQueryStoreStats(BugCheckParameter1, v34) < 0 )
      {
        v23 = v31;
      }
      else
      {
        v19 = 0LL;
        v20 = &v36;
        v21 = 8LL;
        do
        {
          v22 = *(unsigned int *)v20;
          v20 += 8;
          v19 += v22;
          --v21;
        }
        while ( v21 );
        v23 = (LONG *)(v35 * v19);
      }
      v24 = ((unsigned __int64)v23 >> 12) + (((unsigned __int16)v23 & 0xFFF) != 0LL);
      if ( v13 <= v24 )
        v13 = 0LL;
      else
        v13 -= v24;
    }
    if ( v13 )
      MiReturnCommit(v11, v13);
    v25 = MiGetSharedVm(BugCheckParameter1 + 1280);
    v26 = ExAcquireSpinLockExclusive(v25);
    v25[1] = 0;
    LOBYTE(v27) = v26;
    v28 = *(_DWORD *)(BugCheckParameter1 + 1472);
    if ( v13 )
    {
      v29 = HIBYTE(v28) & 0x9F | 0x40;
      *((_QWORD *)v31 + 4) = v7;
      v7 = 0LL;
      *((_QWORD *)v31 + 1) = v13;
    }
    else
    {
      v29 = HIBYTE(v28) & 0x9F;
    }
    *(_BYTE *)(BugCheckParameter1 + 1475) = v29;
    MiUnlockWorkingSetExclusive(BugCheckParameter1 + 1280, v27);
    MiLogOutswappedProcessCommitRelease(BugCheckParameter1, v13);
  }
  v32.SavedApcState.Process = 0LL;
  KiUnstackDetachProcess(&v32, 1LL);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
}
