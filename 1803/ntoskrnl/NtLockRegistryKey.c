/*
 * XREFs of NtLockRegistryKey @ 0x140645CA0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     CmObReferenceObjectByHandle @ 0x1404A48AC (CmObReferenceObjectByHandle.c)
 *     CmLockKeyForWrite @ 0x140645D64 (CmLockKeyForWrite.c)
 */

NTSTATUS __stdcall NtLockRegistryKey(HANDLE KeyHandle)
{
  struct _KTHREAD *CurrentThread; // rax
  void *v3; // r8
  NTSTATUS v4; // ebx
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  Object = 0LL;
  if ( KeGetCurrentThread()->PreviousMode )
    return -1073741727;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    v4 = CmObReferenceObjectByHandle(KeyHandle, 0x20006u, v3, 0, &Object, 0LL);
    if ( v4 >= 0 )
    {
      v4 = CmLockKeyForWrite(Object);
      if ( v4 >= 0 )
        v4 = 0;
    }
    if ( Object )
      ObfDereferenceObject(Object);
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  else
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return -1073741431;
  }
  return v4;
}
