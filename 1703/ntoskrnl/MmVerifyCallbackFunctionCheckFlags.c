/*
 * XREFs of MmVerifyCallbackFunctionCheckFlags @ 0x140155C08
 * Callers:
 *     PspSetCreateProcessNotifyRoutine @ 0x1405A8C54 (PspSetCreateProcessNotifyRoutine.c)
 *     ObRegisterCallbacks @ 0x1405CEF30 (ObRegisterCallbacks.c)
 *     MmVerifyCallbackFunction @ 0x1406B5F3C (MmVerifyCallbackFunction.c)
 *     PsSetCreateThreadNotifyRoutineEx @ 0x1406E3F70 (PsSetCreateThreadNotifyRoutineEx.c)
 * Callees:
 *     MiLookupDataTableEntry @ 0x14006CE70 (MiLookupDataTableEntry.c)
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EFC10 (KeLeaveCriticalRegionThread.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
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
  ExAcquireResourceSharedLite((PERESOURCE)&PsLoadedModuleResource, 1u);
  v6 = MiLookupDataTableEntry(a1, 1);
  if ( v6 && (!a2 || ((_DWORD)v6[13] & a2) != 0) )
    v5 = 1;
  ExReleaseResourceLite((PERESOURCE)&PsLoadedModuleResource);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v5;
}
