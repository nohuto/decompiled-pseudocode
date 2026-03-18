/*
 * XREFs of NtMakePermanentObject @ 0x1405F21A0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     SeSinglePrivilegeCheck @ 0x14046C2E0 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall NtMakePermanentObject(HANDLE Object)
{
  KPROCESSOR_MODE PreviousMode; // bl
  NTSTATUS result; // eax
  NTSTATUS v4; // esi
  struct _KTHREAD *CurrentThread; // rax
  char *v6; // rdi
  PVOID v7; // [rsp+48h] [rbp+10h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !SeSinglePrivilegeCheck(SeCreatePermanentPrivilege, PreviousMode) )
    return -1073741727;
  result = ObReferenceObjectByHandle(Object, 0, 0LL, PreviousMode, &v7, 0LL);
  v4 = result;
  if ( result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v6 = (char *)v7;
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v6 - 32), 0LL);
    *(v6 - 21) |= 0x10u;
    ExReleasePushLockEx((ULONG_PTR)(v6 - 32), 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    ObfDereferenceObject(v7);
    return v4;
  }
  return result;
}
