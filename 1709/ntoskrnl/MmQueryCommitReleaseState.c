/*
 * XREFs of MmQueryCommitReleaseState @ 0x14012B070
 * Callers:
 *     NtQueryInformationProcess @ 0x1404C7870 (NtQueryInformationProcess.c)
 * Callees:
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     MiLockWorkingSetShared @ 0x1400A63A0 (MiLockWorkingSetShared.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     MiAttachThreadDone @ 0x1400CAF78 (MiAttachThreadDone.c)
 *     MiPrepareAttachThread @ 0x1400CAFFC (MiPrepareAttachThread.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

_QWORD *__fastcall MmQueryCommitReleaseState(_KPROCESS *a1, _DWORD *a2, _QWORD *a3, _QWORD *a4, _QWORD *a5)
{
  __int64 v5; // rsi
  int v6; // edi
  LONG *SharedVm; // r15
  __int64 v9; // r12
  __int64 v10; // r13
  __int64 v11; // r14
  unsigned __int8 v12; // al
  _QWORD *result; // rax
  int v14; // ebx
  KIRQL v15; // bl
  LONG *v16; // rax
  int v17; // [rsp+20h] [rbp-71h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-41h] BYREF
  $709EDFC2F9E0D4565D6AA3C4377BC643 v23; // [rsp+68h] [rbp-29h] BYREF

  v5 = (__int64)&a1[1].IdealNode[12];
  v6 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  SharedVm = MiGetSharedVm((__int64)&a1[1].IdealNode[12]);
  v17 = *(_DWORD *)(v5 + 192);
  v9 = 0LL;
  v10 = 0LL;
  v11 = *((_QWORD *)SharedVm + 1);
  if ( (HIBYTE(v17) & 0x60) == 0x40 )
  {
    KeAcquireInStackQueuedSpinLock(&qword_140389240, &LockHandle);
    v14 = MiPrepareAttachThread((__int64)a1, v5);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    if ( v14 )
    {
      KiStackAttachProcess(a1, 1, (__int64)&v23);
      v15 = MiLockWorkingSetShared(v5);
      v17 = *(_DWORD *)(v5 + 192);
      if ( (HIBYTE(v17) & 0x60) == 0x40 )
      {
        v10 = *((_QWORD *)SharedVm + 2);
        v9 = *(_QWORD *)(*((_QWORD *)SharedVm + 4) + 32LL);
      }
      v16 = MiGetSharedVm(v5);
      ExReleaseSpinLockSharedFromDpcLevel(v16);
      __writecr8(v15);
      KiUnstackDetachProcess(&v23, 1LL);
      MiAttachThreadDone(v5);
    }
  }
  v12 = (HIBYTE(v17) >> 5) & 3;
  if ( v12 < 2u )
    v11 = 0LL;
  LOBYTE(v6) = v12 != 0;
  *a2 = v6;
  *a3 = v11;
  *a4 = v9;
  result = a5;
  *a5 = v10;
  return result;
}
