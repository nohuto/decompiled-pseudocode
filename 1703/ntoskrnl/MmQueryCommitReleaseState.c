/*
 * XREFs of MmQueryCommitReleaseState @ 0x1400366C0
 * Callers:
 *     NtQueryInformationProcess @ 0x1404EA100 (NtQueryInformationProcess.c)
 * Callees:
 *     MiPrepareAttachThread @ 0x140022D6C (MiPrepareAttachThread.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiLockWorkingSetShared @ 0x1400A7E80 (MiLockWorkingSetShared.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     MiAttachThreadDone @ 0x1400AD5BC (MiAttachThreadDone.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

_QWORD *__fastcall MmQueryCommitReleaseState(ULONG_PTR a1, _DWORD *a2, _QWORD *a3, _QWORD *a4, _QWORD *a5)
{
  __int64 v5; // rsi
  int v6; // edi
  _QWORD *SharedVm; // r15
  __int64 v9; // r12
  __int64 v10; // r13
  __int64 v11; // r14
  _QWORD *result; // rax
  int v13; // ebx
  unsigned __int8 v14; // bl
  volatile LONG *v15; // rax
  int v16; // [rsp+20h] [rbp-71h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-41h] BYREF
  _BYTE v22[48]; // [rsp+68h] [rbp-29h] BYREF

  v5 = a1 + 1280;
  v6 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  SharedVm = (_QWORD *)MiGetSharedVm(a1 + 1280);
  v16 = *(_DWORD *)(v5 + 192);
  v9 = 0LL;
  v10 = 0LL;
  v11 = SharedVm[1];
  if ( (HIBYTE(v16) & 0xC0) == 0x80 )
  {
    KeAcquireInStackQueuedSpinLock(&qword_14036CF80, &LockHandle);
    v13 = MiPrepareAttachThread(a1, v5);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    if ( v13 )
    {
      KiStackAttachProcess(a1);
      v14 = MiLockWorkingSetShared(v5);
      v16 = *(_DWORD *)(v5 + 192);
      if ( (HIBYTE(v16) & 0xC0) == 0x80 )
      {
        v10 = SharedVm[2];
        v9 = *(_QWORD *)(SharedVm[4] + 32LL);
      }
      v15 = (volatile LONG *)MiGetSharedVm(v5);
      ExReleaseSpinLockSharedFromDpcLevel(v15);
      __writecr8(v14);
      KiUnstackDetachProcess(v22, 1LL);
      MiAttachThreadDone(v5);
    }
  }
  if ( (unsigned __int8)(HIBYTE(v16) >> 6) < 2u )
    v11 = 0LL;
  LOBYTE(v6) = HIBYTE(v16) >> 6 != 0;
  *a2 = v6;
  *a3 = v11;
  *a4 = v9;
  result = a5;
  *a5 = v10;
  return result;
}
