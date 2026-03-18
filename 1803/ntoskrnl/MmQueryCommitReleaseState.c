/*
 * XREFs of MmQueryCommitReleaseState @ 0x1400C6588
 * Callers:
 *     NtQueryInformationProcess @ 0x1404F9480 (NtQueryInformationProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     MiAttachThreadDone @ 0x1400831E4 (MiAttachThreadDone.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiPrepareAttachThread @ 0x1400D4D68 (MiPrepareAttachThread.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

_QWORD *__fastcall MmQueryCommitReleaseState(
        _KPROCESS *BugCheckParameter1,
        _DWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5)
{
  __int64 v5; // rbp
  _QWORD *SharedVm; // r14
  unsigned int v8; // edi
  __int64 v9; // rsi
  __int64 v10; // r15
  __int64 v11; // r12
  char v12; // cl
  _QWORD *result; // rax
  int v14; // ebx
  unsigned __int8 v15; // dl
  char v16; // bl
  int v17; // [rsp+20h] [rbp-C8h]
  __int64 v19; // [rsp+30h] [rbp-B8h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-98h] BYREF
  _BYTE v23[48]; // [rsp+68h] [rbp-80h] BYREF

  v5 = (__int64)&BugCheckParameter1[1].IdealNode[12];
  memset(&LockHandle, 0, sizeof(LockHandle));
  SharedVm = (_QWORD *)MiGetSharedVm(&BugCheckParameter1[1].IdealNode[12]);
  v9 = 0LL;
  v17 = HIBYTE(*(_DWORD *)(v5 + 184));
  LOBYTE(v8) = v17;
  v10 = 0LL;
  v19 = SharedVm[1];
  v11 = 0LL;
  v12 = v17;
  if ( (v17 & 0x60) == 0x40 )
  {
    KeAcquireInStackQueuedSpinLock(&qword_1403CC4C0, &LockHandle);
    v14 = MiPrepareAttachThread(BugCheckParameter1, v5);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    v12 = v17;
    if ( v14 )
    {
      KiStackAttachProcess(BugCheckParameter1, 1u, (__int64)v23);
      v15 = MiLockWorkingSetShared(v5);
      v8 = HIBYTE(*(_DWORD *)(v5 + 184));
      v16 = v8;
      if ( (HIBYTE(*(_DWORD *)(v5 + 184)) & 0x60) == 0x40 )
      {
        v16 = v8;
        v11 = SharedVm[2];
        v10 = *(_QWORD *)(SharedVm[4] + 32LL);
      }
      MiUnlockWorkingSetShared(v5, v15, v8);
      KiUnstackDetachProcess((__int64)v23, 1LL);
      MiAttachThreadDone(v5);
      v12 = v16;
    }
  }
  *a2 = (v12 & 0x60u) >= 0x20;
  if ( (v8 & 0x60) >= 0x40 )
    v9 = v19;
  *a3 = v9;
  *a4 = v10;
  result = a5;
  *a5 = v11;
  return result;
}
