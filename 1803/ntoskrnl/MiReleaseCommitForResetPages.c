/*
 * XREFs of MiReleaseCommitForResetPages @ 0x140251398
 * Callers:
 *     MmOutSwapProcess @ 0x1400EB550 (MmOutSwapProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400E6200 (MiUnlockWorkingSetExclusive.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x1400E6714 (UNLOCK_ADDRESS_SPACE.c)
 *     MiUnlockVad @ 0x1400E6930 (MiUnlockVad.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     MiIsVadEligibleForCommitRelease @ 0x1402506DC (MiIsVadEligibleForCommitRelease.c)
 *     MiLogResetPagesCommitRelease @ 0x140250A28 (MiLogResetPagesCommitRelease.c)
 *     MiWalkResetCommitPages @ 0x1402519D4 (MiWalkResetCommitPages.c)
 */

LONG __fastcall MiReleaseCommitForResetPages(ULONG_PTR BugCheckParameter1)
{
  struct _KTHREAD *CurrentThread; // r8
  unsigned __int8 ApcStateIndex; // al
  LONG *SharedVm; // rax
  struct _KTHREAD *v5; // rdi
  LONG *v6; // r15
  __int64 v7; // r14
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rax
  _QWORD *i; // rbx
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD **v14; // rax
  _QWORD *v15; // rcx
  _QWORD *v16; // rcx
  unsigned __int64 v17; // rdi
  LONG *v18; // rbx
  KIRQL v19; // al
  struct _KEVENT *v20; // rbx
  unsigned __int64 v21; // rcx
  __int64 v22; // rcx
  _BYTE v24[32]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v25; // [rsp+50h] [rbp-68h]
  _BYTE v26[48]; // [rsp+60h] [rbp-58h] BYREF

  CurrentThread = KeGetCurrentThread();
  ApcStateIndex = CurrentThread->ApcStateIndex;
  if ( ApcStateIndex )
    KeBugCheckEx(5u, BugCheckParameter1, (ULONG_PTR)CurrentThread->ApcState.Process, ApcStateIndex, 0LL);
  KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 1u, (__int64)v26);
  SharedVm = MiGetSharedVm(BugCheckParameter1 + 1280);
  v5 = KeGetCurrentThread();
  v6 = SharedVm;
  v7 = *((_QWORD *)SharedVm + 4);
  if ( (*(_DWORD *)(v7 + 48) & 1) != 0 )
  {
    --v5->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(BugCheckParameter1 + 872, 0LL);
    LOBYTE(v5[1].Queue) |= 1u;
    v10 = *(_QWORD **)(BugCheckParameter1 + 1576);
    i = 0LL;
    while ( v10 )
    {
      i = v10;
      v10 = (_QWORD *)*v10;
    }
    while ( i )
    {
      --v5->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(i + 5), 0LL);
      LOBYTE(v5[1].Queue) |= 0x80u;
      if ( MiIsVadEligibleForCommitRelease((__int64)i) )
        MiWalkResetCommitPages(i);
      MiUnlockVad((__int64)v5, (__int64)i, v12, v13);
      v14 = (_QWORD **)i[1];
      v15 = i;
      if ( v14 )
      {
        v16 = *v14;
        for ( i = (_QWORD *)i[1]; v16; v16 = (_QWORD *)*v16 )
          i = v16;
      }
      else
      {
        while ( 1 )
        {
          i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !i || (_QWORD *)*i == v15 )
            break;
          v15 = i;
        }
      }
    }
    UNLOCK_ADDRESS_SPACE((__int64)v5, BugCheckParameter1, v8, v9);
  }
  v17 = _InterlockedExchange64((volatile __int64 *)(BugCheckParameter1 + 1488), 0LL);
  if ( v17 )
    MiReturnCommit(*(_QWORD *)(qword_1403CBD88 + 8LL * *(unsigned __int16 *)(BugCheckParameter1 + 1454)), v17);
  v18 = MiGetSharedVm(BugCheckParameter1 + 1280);
  v19 = ExAcquireSpinLockExclusive(v18);
  v18[1] = 0;
  v20 = *(struct _KEVENT **)(v7 + 40);
  *(_QWORD *)(v7 + 40) = 0LL;
  v21 = *(_QWORD *)(v7 + 32);
  if ( v21 <= v17 )
    v22 = 0LL;
  else
    v22 = v21 - v17;
  *(_QWORD *)(v7 + 32) = v22;
  *((_QWORD *)v6 + 1) += v17;
  MiUnlockWorkingSetExclusive(BugCheckParameter1 + 1280, v19);
  MiLogResetPagesCommitRelease();
  v25 = 0LL;
  KiUnstackDetachProcess((__int64)v24, 1LL);
  return KeSetEvent(v20, 0, 0);
}
