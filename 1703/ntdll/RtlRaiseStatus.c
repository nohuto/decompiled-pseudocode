/*
 * XREFs of RtlRaiseStatus @ 0x180004BD0
 * Callers:
 *     RtlRaiseStatus @ 0x180004BD0 (RtlRaiseStatus.c)
 *     RtlpUnWaitCriticalSection @ 0x18000A930 (RtlpUnWaitCriticalSection.c)
 *     sub_18000BC3C @ 0x18000BC3C (sub_18000BC3C.c)
 *     RtlInitializeResource @ 0x18000F220 (RtlInitializeResource.c)
 *     RtlReleaseSRWLockShared @ 0x180028DE0 (RtlReleaseSRWLockShared.c)
 *     sub_180029FC0 @ 0x180029FC0 (sub_180029FC0.c)
 *     sub_18002F120 @ 0x18002F120 (sub_18002F120.c)
 *     RtlRaiseException @ 0x180030AC0 (RtlRaiseException.c)
 *     sub_1800313E0 @ 0x1800313E0 (sub_1800313E0.c)
 *     RtlUnwindEx @ 0x180033870 (RtlUnwindEx.c)
 *     sub_180034A40 @ 0x180034A40 (sub_180034A40.c)
 *     sub_180034E60 @ 0x180034E60 (sub_180034E60.c)
 *     RtlVirtualUnwind @ 0x1800377A0 (RtlVirtualUnwind.c)
 *     sub_180041490 @ 0x180041490 (sub_180041490.c)
 *     RtlDecodePointer @ 0x1800508D0 (RtlDecodePointer.c)
 *     sub_18006EC1C @ 0x18006EC1C (sub_18006EC1C.c)
 *     RtlAcquireResourceShared @ 0x1800738A0 (RtlAcquireResourceShared.c)
 *     RtlAcquireResourceExclusive @ 0x180073980 (RtlAcquireResourceExclusive.c)
 *     RtlReleaseResource @ 0x180073A90 (RtlReleaseResource.c)
 *     RtlDeleteGrowableFunctionTable @ 0x180074030 (RtlDeleteGrowableFunctionTable.c)
 *     RtlEncodePointer @ 0x180077840 (RtlEncodePointer.c)
 *     RtlInitializeSListHead @ 0x1800779F0 (RtlInitializeSListHead.c)
 *     RtlDeactivateActivationContext @ 0x1800783E0 (RtlDeactivateActivationContext.c)
 *     LdrInitializeThunk @ 0x180079D00 (LdrInitializeThunk.c)
 *     sub_180079D70 @ 0x180079D70 (sub_180079D70.c)
 *     sub_18007D2A4 @ 0x18007D2A4 (sub_18007D2A4.c)
 *     LdrLockLoaderLock @ 0x1800803F0 (LdrLockLoaderLock.c)
 *     LdrUnlockLoaderLock @ 0x180081C00 (LdrUnlockLoaderLock.c)
 *     sub_180089A50 @ 0x180089A50 (sub_180089A50.c)
 *     sub_18008DFE0 @ 0x18008DFE0 (sub_18008DFE0.c)
 *     RtlConvertExclusiveToShared @ 0x18008ED10 (RtlConvertExclusiveToShared.c)
 *     sub_180095680 @ 0x180095680 (sub_180095680.c)
 *     sub_1800A4BC0 @ 0x1800A4BC0 (sub_1800A4BC0.c)
 *     KiUserApcDispatcher @ 0x1800A8F00 (KiUserApcDispatcher.c)
 *     sub_1800A8F80 @ 0x1800A8F80 (sub_1800A8F80.c)
 *     KiUserCallbackDispatcher @ 0x1800A9010 (KiUserCallbackDispatcher.c)
 *     KiUserExceptionDispatcher @ 0x1800A9060 (KiUserExceptionDispatcher.c)
 *     sub_1800D6480 @ 0x1800D6480 (sub_1800D6480.c)
 *     RtlGrowFunctionTable @ 0x1800E1400 (RtlGrowFunctionTable.c)
 *     RtlConvertSRWLockExclusiveToShared @ 0x1800E7040 (RtlConvertSRWLockExclusiveToShared.c)
 *     RtlTryConvertSRWLockSharedToExclusiveOrRelease @ 0x1800E7090 (RtlTryConvertSRWLockSharedToExclusiveOrRelease.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800E7490 (RtlpNotOwnerCriticalSection.c)
 *     RtlInitializeContext @ 0x1800F6B10 (RtlInitializeContext.c)
 *     RtlIsNameInExpression @ 0x1800F6E30 (RtlIsNameInExpression.c)
 *     sub_1800F6ECC @ 0x1800F6ECC (sub_1800F6ECC.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180004BD0 (RtlRaiseStatus.c)
 *     sub_180034E60 @ 0x180034E60 (sub_180034E60.c)
 *     ZwRaiseException @ 0x1800A7E10 (ZwRaiseException.c)
 *     sub_1800A9130 @ 0x1800A9130 (sub_1800A9130.c)
 */

void __cdecl __noreturn RtlRaiseStatus(NTSTATUS Status)
{
  BOOLEAN v2; // r8
  NTSTATUS v3; // eax
  EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-E0h] BYREF
  struct _CONTEXT ContextRecord; // [rsp+C0h] [rbp-40h] BYREF

  sub_1800A9130(&ContextRecord);
  ExceptionRecord.ExceptionAddress = (PVOID)ContextRecord.Rip;
  ExceptionRecord.ExceptionRecord = 0LL;
  ExceptionRecord.NumberParameters = 0;
  ExceptionRecord.ExceptionCode = Status;
  ExceptionRecord.ExceptionFlags = 1;
  if ( NtCurrentPeb()->BeingDebugged )
  {
    v2 = 1;
  }
  else
  {
    sub_180034E60(&ExceptionRecord, &ContextRecord);
    v2 = 0;
  }
  v3 = ZwRaiseException(&ExceptionRecord, &ContextRecord, v2);
  RtlRaiseStatus(v3);
}
