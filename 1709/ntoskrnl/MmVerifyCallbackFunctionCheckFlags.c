/*
 * XREFs of MmVerifyCallbackFunctionCheckFlags @ 0x1401499C8
 * Callers:
 *     PspSetCreateProcessNotifyRoutine @ 0x1405CC504 (PspSetCreateProcessNotifyRoutine.c)
 *     ObRegisterCallbacks @ 0x1405E6AE0 (ObRegisterCallbacks.c)
 *     MmVerifyCallbackFunction @ 0x1406E22D8 (MmVerifyCallbackFunction.c)
 *     PsSetCreateThreadNotifyRoutineEx @ 0x14071A8E0 (PsSetCreateThreadNotifyRoutineEx.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     MiLookupDataTableEntry @ 0x1400DCDF4 (MiLookupDataTableEntry.c)
 */

__int64 __fastcall MmVerifyCallbackFunctionCheckFlags(unsigned __int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v5; // ebx
  PVOID *v6; // rax

  if ( (unsigned int)MiGetSystemRegionType(a1) == 1 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  v6 = MiLookupDataTableEntry(a1, 1);
  if ( v6 && (!a2 || ((_DWORD)v6[13] & a2) != 0) )
    v5 = 1;
  ExReleaseResourceLite(&PsLoadedModuleResource);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v5;
}
