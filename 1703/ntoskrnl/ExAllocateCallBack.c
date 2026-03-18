/*
 * XREFs of ExAllocateCallBack @ 0x1405A8D44
 * Callers:
 *     KeRegisterBoundCallback @ 0x1401FD9C0 (KeRegisterBoundCallback.c)
 *     DbgkLkmdRegisterCallback @ 0x1405A8840 (DbgkLkmdRegisterCallback.c)
 *     PsEstablishWin32Callouts @ 0x1405A8920 (PsEstablishWin32Callouts.c)
 *     PspSetCreateThreadNotifyRoutine @ 0x1405A89A0 (PspSetCreateThreadNotifyRoutine.c)
 *     PsSetLoadImageNotifyRoutine @ 0x1405A8A60 (PsSetLoadImageNotifyRoutine.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x1405A8C54 (PspSetCreateProcessNotifyRoutine.c)
 * Callees:
 *     ExInitializePushLock @ 0x140023310 (ExInitializePushLock.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 */

KSPIN_LOCK *__fastcall ExAllocateCallBack(KSPIN_LOCK a1, KSPIN_LOCK a2)
{
  KSPIN_LOCK *PoolWithTag; // rax
  KSPIN_LOCK *v5; // rbx

  PoolWithTag = (KSPIN_LOCK *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x62726243u);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[1] = a1;
    PoolWithTag[2] = a2;
    ExInitializePushLock(PoolWithTag);
  }
  return v5;
}
