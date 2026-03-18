/*
 * XREFs of MiReleaseOutSwappedProcessCommit @ 0x14020C398
 * Callers:
 *     MmOutSwapProcess @ 0x140040CE4 (MmOutSwapProcess.c)
 * Callees:
 *     MiUnlockVad @ 0x1400403D0 (MiUnlockVad.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     SmStoreExistsForProcess @ 0x1400624CC (SmStoreExistsForProcess.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x14009B6E0 (UNLOCK_ADDRESS_SPACE.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     SmpProcessQueryStoreStats @ 0x14015256C (SmpProcessQueryStoreStats.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     memset @ 0x140192D80 (memset.c)
 *     MiCheckCommitReleaseFromVad @ 0x14020ADC8 (MiCheckCommitReleaseFromVad.c)
 *     MiIsVadEligibleForCommitRelease @ 0x14020B2A0 (MiIsVadEligibleForCommitRelease.c)
 *     MiLogOutswappedProcessCommitRelease @ 0x14020B504 (MiLogOutswappedProcessCommitRelease.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
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
  _QWORD *v13; // rax
  _QWORD *v14; // rdi
  __int64 v15; // rbx
  _QWORD *v16; // rax
  _QWORD *v17; // rcx
  __int64 v18; // rcx
  char *v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rax
  LONG *v22; // rcx
  unsigned __int64 v23; // rax
  LONG *v24; // rbx
  KIRQL v25; // al
  int v26; // ecx
  char v27; // cl
  __int64 v28; // [rsp+30h] [rbp-6A8h]
  LONG *v29; // [rsp+38h] [rbp-6A0h]
  $5BC46E0569261879018906DEC3127961 v30; // [rsp+40h] [rbp-698h] BYREF
  char v31[48]; // [rsp+70h] [rbp-668h] BYREF
  unsigned int v32; // [rsp+ACh] [rbp-62Ch]
  char v33; // [rsp+CCh] [rbp-60Ch] BYREF

  CurrentThread = KeGetCurrentThread();
  ApcStateIndex = CurrentThread->ApcStateIndex;
  if ( ApcStateIndex )
    KeBugCheckEx(5u, BugCheckParameter1, (ULONG_PTR)CurrentThread->ApcState.Process, ApcStateIndex, 0LL);
  KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 1u, (__int64)v31);
  SharedVm = MiGetSharedVm(BugCheckParameter1 + 1280);
  v5 = KeGetCurrentThread();
  v29 = SharedVm;
  v28 = *(_QWORD *)(qword_14036C8F8 + 8LL * *(unsigned __int16 *)(BugCheckParameter1 + 1452));
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x7243694Du);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x38uLL);
    v8 = MiGetSharedVm(BugCheckParameter1 + 1280);
    v9 = ExAcquireSpinLockExclusive(v8);
    v8[1] = 0;
    *(_BYTE *)(BugCheckParameter1 + 1475) |= 0xC0u;
    MiUnlockWorkingSetExclusive(BugCheckParameter1 + 1280, v9);
    v10 = v28;
    v11 = 0;
    v12 = 0LL;
    if ( *(_DWORD *)(v28 + 1192) )
      v11 = SmStoreExistsForProcess();
    --v5->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(BugCheckParameter1 + 872, 0LL);
    LOBYTE(v5[1].Queue) |= 1u;
    v13 = *(_QWORD **)(BugCheckParameter1 + 1576);
    v14 = 0LL;
    while ( v13 )
    {
      v14 = v13;
      v13 = (_QWORD *)*v13;
    }
    while ( v14 )
    {
      --v5->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(v14 + 5), 0LL);
      LOBYTE(v5[1].Queue) |= 0x80u;
      if ( MiIsVadEligibleForCommitRelease((__int64)v14) )
      {
        v15 = MiCheckCommitReleaseFromVad(v10, BugCheckParameter1, BugCheckParameter1 + 1280, (__int64)v14, v11, v7 + 4);
        MiUnlockVad((__int64)v5, (__int64)v14);
        v12 += v15;
        v10 = v28;
      }
      else
      {
        MiUnlockVad((__int64)v5, (__int64)v14);
      }
      v16 = (_QWORD *)v14[1];
      v17 = v14;
      if ( v16 )
      {
        do
        {
          v14 = v16;
          v16 = (_QWORD *)*v16;
        }
        while ( v16 );
      }
      else
      {
        while ( 1 )
        {
          v14 = (_QWORD *)(v14[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v14 || (_QWORD *)*v14 == v17 )
            break;
          v17 = v14;
        }
      }
    }
    UNLOCK_ADDRESS_SPACE((__int64)v5, BugCheckParameter1);
    _InterlockedExchange64((volatile __int64 *)(BugCheckParameter1 + 1496), 0LL);
    if ( v11 )
    {
      if ( (int)SmpProcessQueryStoreStats((PVOID)BugCheckParameter1) < 0 )
      {
        v22 = v29;
      }
      else
      {
        v18 = 0LL;
        v19 = &v33;
        v20 = 8LL;
        do
        {
          v21 = *(unsigned int *)v19;
          v19 += 8;
          v18 += v21;
          --v20;
        }
        while ( v20 );
        v22 = (LONG *)(v32 * v18);
      }
      v23 = ((unsigned __int64)v22 >> 12) + (((unsigned __int16)v22 & 0xFFF) != 0LL);
      if ( v12 <= v23 )
        v12 = 0LL;
      else
        v12 -= v23;
    }
    if ( v12 )
      MiReturnCommit(v10, v12);
    v24 = MiGetSharedVm(BugCheckParameter1 + 1280);
    v25 = ExAcquireSpinLockExclusive(v24);
    v24[1] = 0;
    v26 = *(_DWORD *)(BugCheckParameter1 + 1472);
    if ( v12 )
    {
      v27 = HIBYTE(v26) & 0x3F | 0x80;
      *((_QWORD *)v29 + 4) = v7;
      v7 = 0LL;
      *((_QWORD *)v29 + 1) = v12;
    }
    else
    {
      v27 = HIBYTE(v26) & 0x3F;
    }
    *(_BYTE *)(BugCheckParameter1 + 1475) = v27;
    MiUnlockWorkingSetExclusive(BugCheckParameter1 + 1280, v25);
    MiLogOutswappedProcessCommitRelease(BugCheckParameter1, v12);
  }
  v30.SavedApcState.Process = 0LL;
  KiUnstackDetachProcess(&v30, 1LL);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
}
