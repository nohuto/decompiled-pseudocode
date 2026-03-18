/*
 * XREFs of NtLockRegistryKey @ 0x1405C63D8
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     CmObReferenceObjectByHandle @ 0x14048F490 (CmObReferenceObjectByHandle.c)
 *     CmLockKeyForWrite @ 0x1405C649C (CmLockKeyForWrite.c)
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
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  else
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return -1073741431;
  }
  return v4;
}
