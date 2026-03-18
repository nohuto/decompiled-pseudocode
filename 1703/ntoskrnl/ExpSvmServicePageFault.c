/*
 * XREFs of ExpSvmServicePageFault @ 0x14025E930
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     MmAccessFault @ 0x1400BDCD0 (MmAccessFault.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

__int64 __fastcall ExpSvmServicePageFault(char a1, signed __int64 a2, unsigned int a3)
{
  _KPROCESS *Process; // rdi
  _KPROCESS *v7; // rbx
  char v8; // bp
  unsigned int v9; // ebx
  ULONG_PTR v10; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-68h] BYREF
  $5BC46E0569261879018906DEC3127961 v13; // [rsp+38h] [rbp-50h] BYREF

  Process = KeGetCurrentThread()->ApcState.Process;
  KeAcquireInStackQueuedSpinLock(&qword_140342DD8, &LockHandle);
  v7 = (_KPROCESS *)*((_QWORD *)qword_140342DD0 + 2 * a3);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  v8 = 0;
  if ( Process != v7 )
  {
    KiStackAttachProcess(v7, 0, (__int64)&v13);
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
    v9 = MmAccessFault(v10, a2, 1u, 0LL);
  }
  if ( v8 )
    KiUnstackDetachProcess(&v13, 0LL);
  return v9;
}
