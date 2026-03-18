/*
 * XREFs of MiReleaseOutSwappedProcessCommit @ 0x1402515B8
 * Callers:
 *     MmOutSwapProcess @ 0x1400EB550 (MmOutSwapProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     SmStoreExistsForProcess @ 0x14008BCF0 (SmStoreExistsForProcess.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400E6200 (MiUnlockWorkingSetExclusive.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x1400E6714 (UNLOCK_ADDRESS_SPACE.c)
 *     MiUnlockVad @ 0x1400E6930 (MiUnlockVad.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     MiCheckCommitReleaseFromVad @ 0x14025018C (MiCheckCommitReleaseFromVad.c)
 *     MiIsVadEligibleForCommitRelease @ 0x1402506DC (MiIsVadEligibleForCommitRelease.c)
 *     MiLogOutswappedProcessCommitRelease @ 0x140250938 (MiLogOutswappedProcessCommitRelease.c)
 *     SmpProcessQueryStoreStats @ 0x1402A64B0 (SmpProcessQueryStoreStats.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
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
  __int64 v10; // rbx
  BOOL v11; // r12d
  unsigned __int64 v12; // rsi
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *v15; // rax
  _QWORD *i; // rdi
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rbx
  __int64 v20; // r8
  __int64 v21; // r9
  _QWORD **v22; // rax
  _QWORD *v23; // rcx
  _QWORD *v24; // rcx
  __int64 v25; // rcx
  char *v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rax
  LONG *v29; // rcx
  unsigned __int64 v30; // rax
  LONG *v31; // rbx
  KIRQL v32; // al
  int v33; // ecx
  char v34; // cl
  __int64 v35; // [rsp+30h] [rbp-6A8h]
  LONG *v36; // [rsp+38h] [rbp-6A0h]
  char v37[32]; // [rsp+40h] [rbp-698h] BYREF
  __int64 v38; // [rsp+60h] [rbp-678h]
  char v39[48]; // [rsp+70h] [rbp-668h] BYREF
  char v40[12]; // [rsp+A0h] [rbp-638h] BYREF
  unsigned int v41; // [rsp+ACh] [rbp-62Ch]
  char v42; // [rsp+CCh] [rbp-60Ch] BYREF

  CurrentThread = KeGetCurrentThread();
  ApcStateIndex = CurrentThread->ApcStateIndex;
  if ( ApcStateIndex )
    KeBugCheckEx(5u, BugCheckParameter1, (ULONG_PTR)CurrentThread->ApcState.Process, ApcStateIndex, 0LL);
  KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 1u, (__int64)v39);
  SharedVm = MiGetSharedVm(BugCheckParameter1 + 1280);
  v5 = KeGetCurrentThread();
  v36 = SharedVm;
  v35 = *(_QWORD *)(qword_1403CBD88 + 8LL * *(unsigned __int16 *)(BugCheckParameter1 + 1454));
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x7243694Du);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x38uLL);
    v8 = MiGetSharedVm(BugCheckParameter1 + 1280);
    v9 = ExAcquireSpinLockExclusive(v8);
    v8[1] = 0;
    *(_BYTE *)(BugCheckParameter1 + 1467) = HIBYTE(*(_DWORD *)(BugCheckParameter1 + 1464)) | 0x60;
    MiUnlockWorkingSetExclusive(BugCheckParameter1 + 1280, v9);
    v10 = v35;
    v11 = 0;
    v12 = 0LL;
    if ( *(_DWORD *)(v35 + 1144) )
      v11 = SmStoreExistsForProcess();
    --v5->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(BugCheckParameter1 + 872, 0LL);
    LOBYTE(v5[1].Queue) |= 1u;
    v15 = *(_QWORD **)(BugCheckParameter1 + 1576);
    i = 0LL;
    while ( v15 )
    {
      i = v15;
      v15 = (_QWORD *)*v15;
    }
    while ( i )
    {
      --v5->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(i + 5), 0LL);
      LOBYTE(v5[1].Queue) |= 0x80u;
      if ( MiIsVadEligibleForCommitRelease((__int64)i) )
      {
        v19 = MiCheckCommitReleaseFromVad(v10, BugCheckParameter1, BugCheckParameter1 + 1280, (__int64)i, v11, v7 + 4);
        MiUnlockVad((__int64)v5, (__int64)i, v20, v21);
        v12 += v19;
        v10 = v35;
      }
      else
      {
        MiUnlockVad((__int64)v5, (__int64)i, v17, v18);
      }
      v22 = (_QWORD **)i[1];
      v23 = i;
      if ( v22 )
      {
        v24 = *v22;
        for ( i = (_QWORD *)i[1]; v24; v24 = (_QWORD *)*v24 )
          i = v24;
      }
      else
      {
        while ( 1 )
        {
          i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !i || (_QWORD *)*i == v23 )
            break;
          v23 = i;
        }
      }
    }
    UNLOCK_ADDRESS_SPACE((__int64)v5, BugCheckParameter1, v13, v14);
    _InterlockedExchange64((volatile __int64 *)(BugCheckParameter1 + 1488), 0LL);
    if ( v11 )
    {
      if ( (int)SmpProcessQueryStoreStats(BugCheckParameter1, v40) < 0 )
      {
        v29 = v36;
      }
      else
      {
        v25 = 0LL;
        v26 = &v42;
        v27 = 8LL;
        do
        {
          v28 = *(unsigned int *)v26;
          v26 += 8;
          v25 += v28;
          --v27;
        }
        while ( v27 );
        v29 = (LONG *)(v41 * v25);
      }
      v30 = ((unsigned __int64)v29 >> 12) + (((unsigned __int16)v29 & 0xFFF) != 0LL);
      if ( v12 <= v30 )
        v12 = 0LL;
      else
        v12 -= v30;
    }
    if ( v12 )
      MiReturnCommit(v10, v12);
    v31 = MiGetSharedVm(BugCheckParameter1 + 1280);
    v32 = ExAcquireSpinLockExclusive(v31);
    v31[1] = 0;
    v33 = HIBYTE(*(_DWORD *)(BugCheckParameter1 + 1464));
    if ( v12 )
    {
      v34 = v33 & 0x9F | 0x40;
      *((_QWORD *)v36 + 4) = v7;
      v7 = 0LL;
      *((_QWORD *)v36 + 1) = v12;
    }
    else
    {
      v34 = v33 & 0x9F;
    }
    *(_BYTE *)(BugCheckParameter1 + 1467) = v34;
    MiUnlockWorkingSetExclusive(BugCheckParameter1 + 1280, v32);
    MiLogOutswappedProcessCommitRelease(BugCheckParameter1, v12);
  }
  v38 = 0LL;
  KiUnstackDetachProcess((__int64)v37, 1LL);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
}
