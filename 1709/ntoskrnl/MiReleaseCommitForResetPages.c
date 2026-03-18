/*
 * XREFs of MiReleaseCommitForResetPages @ 0x1402130A8
 * Callers:
 *     MmOutSwapProcess @ 0x140111FF0 (MmOutSwapProcess.c)
 * Callees:
 *     MiEnumerateLeafPtes @ 0x140002204 (MiEnumerateLeafPtes.c)
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x1400A20E0 (UNLOCK_ADDRESS_SPACE.c)
 *     MiUnlockVad @ 0x1400A5788 (MiUnlockVad.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     MiIsVadEligibleForCommitRelease @ 0x140212198 (MiIsVadEligibleForCommitRelease.c)
 *     MiLogResetPagesCommitRelease @ 0x1402124EC (MiLogResetPagesCommitRelease.c)
 */

LONG __fastcall MiReleaseCommitForResetPages(ULONG_PTR BugCheckParameter1)
{
  struct _KTHREAD *CurrentThread; // r8
  unsigned __int8 ApcStateIndex; // al
  LONG *SharedVm; // rax
  struct _KTHREAD *v5; // rbp
  LONG *v6; // r13
  __int64 v7; // r15
  _QWORD *v8; // rax
  unsigned __int64 v9; // rsi
  LONG *v10; // rbx
  KIRQL v11; // al
  KIRQL v12; // di
  __int64 v13; // rdx
  _QWORD *v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rdi
  LONG *v17; // rbx
  KIRQL v18; // al
  __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  struct _KEVENT *v21; // rbx
  ULONG_PTR v23; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v24; // [rsp+38h] [rbp-A0h]
  __int64 v25; // [rsp+40h] [rbp-98h]
  $709EDFC2F9E0D4565D6AA3C4377BC643 v26; // [rsp+48h] [rbp-90h] BYREF
  _BYTE v27[48]; // [rsp+78h] [rbp-60h] BYREF

  CurrentThread = KeGetCurrentThread();
  ApcStateIndex = CurrentThread->ApcStateIndex;
  if ( ApcStateIndex )
    KeBugCheckEx(5u, BugCheckParameter1, (ULONG_PTR)CurrentThread->ApcState.Process, ApcStateIndex, 0LL);
  KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 1, (__int64)v27);
  SharedVm = MiGetSharedVm(BugCheckParameter1 + 1280);
  v5 = KeGetCurrentThread();
  v6 = SharedVm;
  v7 = *((_QWORD *)SharedVm + 4);
  v24 = 0LL;
  v25 = 0LL;
  v23 = BugCheckParameter1 + 1280;
  if ( (*(_DWORD *)(v7 + 48) & 1) != 0 )
  {
    --v5->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(BugCheckParameter1 + 872, 0LL);
    LOBYTE(v5[1].Queue) |= 1u;
    v8 = *(_QWORD **)(BugCheckParameter1 + 1576);
    v9 = 0LL;
    while ( v8 )
    {
      v9 = (unsigned __int64)v8;
      v8 = (_QWORD *)*v8;
    }
    while ( v9 )
    {
      --v5->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx(v9 + 40, 0LL);
      LOBYTE(v5[1].Queue) |= 0x80u;
      if ( MiIsVadEligibleForCommitRelease(v9) )
      {
        v10 = MiGetSharedVm(BugCheckParameter1 + 1280);
        v11 = ExAcquireSpinLockExclusive(v10);
        v10[1] = 0;
        LOBYTE(v24) = v11;
        v12 = v11;
        MiEnumerateLeafPtes(
          (((unsigned __int64)*(unsigned __int8 *)(v9 + 32) << 32) | *(unsigned int *)(v9 + 24)) << 12,
          (*(unsigned int *)(v9 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 33) << 32)) << 12,
          (__int64 (__fastcall *)(__int64, unsigned __int64, unsigned __int64))MiReleaseCommitForResetPageCallback,
          (__int64)&v23,
          0);
        LOBYTE(v13) = v12;
        MiUnlockWorkingSetExclusive(BugCheckParameter1 + 1280, v13);
      }
      MiUnlockVad((__int64)v5, v9);
      v14 = *(_QWORD **)(v9 + 8);
      v15 = v9;
      if ( v14 )
      {
        do
        {
          v9 = (unsigned __int64)v14;
          v14 = (_QWORD *)*v14;
        }
        while ( v14 );
      }
      else
      {
        while ( 1 )
        {
          v9 = *(_QWORD *)(v9 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v9 || *(_QWORD *)v9 == v15 )
            break;
          v15 = v9;
        }
      }
    }
    UNLOCK_ADDRESS_SPACE((__int64)v5, BugCheckParameter1);
  }
  v16 = _InterlockedExchange64((volatile __int64 *)(BugCheckParameter1 + 1496), 0LL);
  if ( v16 )
    MiReturnCommit(*(_QWORD *)(qword_140388AF0 + 8LL * *(unsigned __int16 *)(BugCheckParameter1 + 1452)), v16);
  v17 = MiGetSharedVm(BugCheckParameter1 + 1280);
  v18 = ExAcquireSpinLockExclusive(v17);
  v17[1] = 0;
  v20 = *(_QWORD *)(v7 + 32);
  v21 = *(struct _KEVENT **)(v7 + 40);
  *(_QWORD *)(v7 + 40) = 0LL;
  if ( v20 <= v16 )
    *(_QWORD *)(v7 + 32) = 0LL;
  else
    *(_QWORD *)(v7 + 32) = v20 - v16;
  *((_QWORD *)v6 + 1) += v16;
  LOBYTE(v19) = v18;
  MiUnlockWorkingSetExclusive(BugCheckParameter1 + 1280, v19);
  MiLogResetPagesCommitRelease();
  v26.SavedApcState.Process = 0LL;
  KiUnstackDetachProcess(&v26, 1LL);
  return KeSetEvent(v21, 0, 0);
}
