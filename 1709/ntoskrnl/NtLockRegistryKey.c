/*
 * XREFs of NtLockRegistryKey @ 0x1405D9034
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     CmObReferenceObjectByHandle @ 0x14047AF90 (CmObReferenceObjectByHandle.c)
 *     CmLockKeyForWrite @ 0x1405D90F8 (CmLockKeyForWrite.c)
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
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
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
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  else
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return -1073741431;
  }
  return v4;
}
