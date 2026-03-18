/*
 * XREFs of ExpSvmServicePageFault @ 0x1402BC7D0
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     MmAccessFault @ 0x14001B320 (MmAccessFault.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

__int64 __fastcall ExpSvmServicePageFault(char a1, signed __int64 a2, unsigned int a3)
{
  _KPROCESS *Process; // rdi
  _KPROCESS *v7; // rbx
  char v8; // bp
  unsigned int v9; // ebx
  ULONG_PTR v10; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v13[48]; // [rsp+38h] [rbp-50h] BYREF

  Process = KeGetCurrentThread()->ApcState.Process;
  KeAcquireInStackQueuedSpinLock(&qword_14039EBD8, &LockHandle);
  v7 = (_KPROCESS *)*((_QWORD *)qword_14039EBD0 + 2 * a3);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  v8 = 0;
  if ( Process != v7 )
  {
    KiStackAttachProcess(v7, 0, (__int64)v13);
    v8 = 1;
  }
  if ( (a1 & 8) != 0 )
  {
    v9 = -1073741819;
  }
  else
  {
    v10 = a1 & 2 | 0x10LL;
    if ( (a1 & 4) == 0 )
      v10 = a1 & 2;
    v9 = MmAccessFault(v10, a2, 1, 0LL);
  }
  if ( v8 )
    KiUnstackDetachProcess((__int64)v13, 0LL);
  return v9;
}
