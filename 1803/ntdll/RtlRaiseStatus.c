/*
 * XREFs of RtlRaiseStatus @ 0x18009A570
 * Callers:
 *     sub_180003F70 @ 0x180003F70 (sub_180003F70.c)
 *     sub_18000B168 @ 0x18000B168 (sub_18000B168.c)
 *     RtlVirtualUnwind @ 0x18000B340 (RtlVirtualUnwind.c)
 *     RtlRaiseException @ 0x18000BB80 (RtlRaiseException.c)
 *     sub_18000C4A0 @ 0x18000C4A0 (sub_18000C4A0.c)
 *     sub_18000D490 @ 0x18000D490 (sub_18000D490.c)
 *     RtlUnwindEx @ 0x18000DEA0 (RtlUnwindEx.c)
 *     sub_18000EF10 @ 0x18000EF10 (sub_18000EF10.c)
 *     RtlReleaseSRWLockShared @ 0x180010990 (RtlReleaseSRWLockShared.c)
 *     sub_18001AC70 @ 0x18001AC70 (sub_18001AC70.c)
 *     sub_18001E820 @ 0x18001E820 (sub_18001E820.c)
 *     sub_180024910 @ 0x180024910 (sub_180024910.c)
 *     sub_180038ED4 @ 0x180038ED4 (sub_180038ED4.c)
 *     sub_180042450 @ 0x180042450 (sub_180042450.c)
 *     LdrUnlockLoaderLock @ 0x180047B80 (LdrUnlockLoaderLock.c)
 *     LdrLockLoaderLock @ 0x180047C20 (LdrLockLoaderLock.c)
 *     RtlpUnWaitCriticalSection @ 0x18004A860 (RtlpUnWaitCriticalSection.c)
 *     RtlInitializeResource @ 0x18005C7A0 (RtlInitializeResource.c)
 *     sub_1800677B0 @ 0x1800677B0 (sub_1800677B0.c)
 *     RtlDeleteGrowableFunctionTable @ 0x18006A480 (RtlDeleteGrowableFunctionTable.c)
 *     RtlAcquireResourceShared @ 0x18006C6A0 (RtlAcquireResourceShared.c)
 *     RtlAcquireResourceExclusive @ 0x18006C780 (RtlAcquireResourceExclusive.c)
 *     RtlReleaseResource @ 0x18006C890 (RtlReleaseResource.c)
 *     RtlDecodePointer @ 0x18006CEA0 (RtlDecodePointer.c)
 *     RtlEncodePointer @ 0x180071270 (RtlEncodePointer.c)
 *     RtlDeactivateActivationContext @ 0x180072C10 (RtlDeactivateActivationContext.c)
 *     RtlInitializeSListHead_0 @ 0x180073A34 (RtlInitializeSListHead_0.c)
 *     LdrInitializeThunk @ 0x180074F90 (LdrInitializeThunk.c)
 *     sub_180075000 @ 0x180075000 (sub_180075000.c)
 *     RtlConvertSRWLockExclusiveToShared @ 0x1800839A0 (RtlConvertSRWLockExclusiveToShared.c)
 *     RtlConvertExclusiveToShared @ 0x180088680 (RtlConvertExclusiveToShared.c)
 *     sub_18009A320 @ 0x18009A320 (sub_18009A320.c)
 *     RtlRaiseStatus @ 0x18009A570 (RtlRaiseStatus.c)
 *     KiUserApcDispatcher @ 0x18009E6D0 (KiUserApcDispatcher.c)
 *     sub_18009E750 @ 0x18009E750 (sub_18009E750.c)
 *     KiUserCallbackDispatcher @ 0x18009E7E0 (KiUserCallbackDispatcher.c)
 *     KiUserExceptionDispatcher @ 0x18009E830 (KiUserExceptionDispatcher.c)
 *     sub_1800CBC40 @ 0x1800CBC40 (sub_1800CBC40.c)
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 *     RtlGrowFunctionTable @ 0x1800DB090 (RtlGrowFunctionTable.c)
 *     RtlTryConvertSRWLockSharedToExclusiveOrRelease @ 0x1800E1D60 (RtlTryConvertSRWLockSharedToExclusiveOrRelease.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800E2150 (RtlpNotOwnerCriticalSection.c)
 *     RtlInitializeContext @ 0x1800F4480 (RtlInitializeContext.c)
 *     RtlIsNameInExpression @ 0x1800F49F0 (RtlIsNameInExpression.c)
 *     RtlIsNameInUnUpcasedExpression @ 0x1800F4AA0 (RtlIsNameInUnUpcasedExpression.c)
 *     sub_1800F4B74 @ 0x1800F4B74 (sub_1800F4B74.c)
 *     sub_1800F7760 @ 0x1800F7760 (sub_1800F7760.c)
 * Callees:
 *     sub_18000D490 @ 0x18000D490 (sub_18000D490.c)
 *     RtlRaiseStatus @ 0x18009A570 (RtlRaiseStatus.c)
 *     ZwRaiseException @ 0x18009D670 (ZwRaiseException.c)
 *     sub_18009EA50 @ 0x18009EA50 (sub_18009EA50.c)
 */

void __cdecl __noreturn RtlRaiseStatus(NTSTATUS Status)
{
  bool v2; // zf
  NTSTATUS v3; // eax
  EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-578h] BYREF
  struct _CONTEXT ContextRecord; // [rsp+C0h] [rbp-4D8h] BYREF

  sub_18009EA50(&ContextRecord);
  ExceptionRecord.ExceptionRecord = 0LL;
  ExceptionRecord.NumberParameters = 0;
  ExceptionRecord.ExceptionAddress = (PVOID)ContextRecord.Rip;
  ExceptionRecord.ExceptionCode = Status;
  ExceptionRecord.ExceptionFlags = 1;
  LOBYTE(Status) = NtCurrentPeb()->BeingDebugged;
  v2 = (_BYTE)Status == 0;
  if ( !(_BYTE)Status )
  {
    sub_18000D490((__int64)&ExceptionRecord, (__int64)&ContextRecord);
    v2 = 1;
  }
  v3 = ZwRaiseException(&ExceptionRecord, &ContextRecord, !v2);
  RtlRaiseStatus(v3);
}
