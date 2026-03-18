/*
 * XREFs of ExpSvmServicePageFault @ 0x140288480
 * Callers:
 *     <none>
 * Callees:
 *     MmAccessFault @ 0x140040CF0 (MmAccessFault.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

__int64 __fastcall ExpSvmServicePageFault(char a1, signed __int64 a2, unsigned int a3)
{
  _KPROCESS *Process; // rdi
  _KPROCESS *v7; // rbx
  __int64 v8; // r8
  char v9; // bp
  unsigned int v10; // ebx
  ULONG_PTR v11; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-68h] BYREF
  $709EDFC2F9E0D4565D6AA3C4377BC643 v14; // [rsp+38h] [rbp-50h] BYREF

  Process = KeGetCurrentThread()->ApcState.Process;
  KeAcquireInStackQueuedSpinLock(&qword_14035B5B8, &LockHandle);
  v7 = (_KPROCESS *)*((_QWORD *)qword_14035B5B0 + 2 * a3);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  v9 = 0;
  if ( Process != v7 )
  {
    KiStackAttachProcess(v7, 0, (__int64)&v14);
    v9 = 1;
  }
  if ( (a1 & 8) != 0 )
  {
    v10 = -1073741819;
  }
  else
  {
    LOBYTE(v8) = 1;
    v11 = a1 & 2 | 0x10LL;
    if ( (a1 & 4) == 0 )
      v11 = a1 & 2;
    v10 = MmAccessFault(v11, a2, v8, 0LL);
  }
  if ( v9 )
    KiUnstackDetachProcess(&v14, 0LL);
  return v10;
}
