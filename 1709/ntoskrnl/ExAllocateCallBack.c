/*
 * XREFs of ExAllocateCallBack @ 0x1405CC5FC
 * Callers:
 *     KeRegisterBoundCallback @ 0x140203980 (KeRegisterBoundCallback.c)
 *     DbgkLkmdRegisterCallback @ 0x1405CC0E0 (DbgkLkmdRegisterCallback.c)
 *     PsEstablishWin32Callouts @ 0x1405CC1C0 (PsEstablishWin32Callouts.c)
 *     PspSetCreateThreadNotifyRoutine @ 0x1405CC228 (PspSetCreateThreadNotifyRoutine.c)
 *     PsSetLoadImageNotifyRoutineEx @ 0x1405CC300 (PsSetLoadImageNotifyRoutineEx.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x1405CC504 (PspSetCreateProcessNotifyRoutine.c)
 * Callees:
 *     ExInitializePushLock @ 0x140025A30 (ExInitializePushLock.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
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
