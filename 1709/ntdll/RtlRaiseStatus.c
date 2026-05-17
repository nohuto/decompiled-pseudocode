/*
 * XREFs of RtlRaiseStatus @ 0x180002AF0
 * Callers:
 *     RtlRaiseStatus @ 0x180002AF0 (RtlRaiseStatus.c)
 *     RtlInitializeResource @ 0x180009AF0 (RtlInitializeResource.c)
 *     RtlRaiseException @ 0x180024290 (RtlRaiseException.c)
 *     RtlpWalkFrameChain @ 0x180024BB0 (RtlpWalkFrameChain.c)
 *     RtlDispatchException @ 0x180025D00 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x180026F90 (RtlUnwindEx.c)
 *     RtlpxLookupFunctionTable @ 0x180028A70 (RtlpxLookupFunctionTable.c)
 *     RtlVirtualUnwind @ 0x18002A090 (RtlVirtualUnwind.c)
 *     LdrpInitializeThread @ 0x18002EC08 (LdrpInitializeThread.c)
 *     RtlpHpLfhSlotAllocate @ 0x180042C90 (RtlpHpLfhSlotAllocate.c)
 *     RtlReleaseSRWLockShared @ 0x1800467D0 (RtlReleaseSRWLockShared.c)
 *     RtlpWaitOnCriticalSection @ 0x18004A67C (RtlpWaitOnCriticalSection.c)
 *     LdrpReportError @ 0x180052C64 (LdrpReportError.c)
 *     RtlpSubSegmentInitialize @ 0x18005E860 (RtlpSubSegmentInitialize.c)
 *     RtlDecodePointer @ 0x18006CE80 (RtlDecodePointer.c)
 *     RtlAcquireResourceShared @ 0x18006E8E0 (RtlAcquireResourceShared.c)
 *     RtlAcquireResourceExclusive @ 0x18006EA20 (RtlAcquireResourceExclusive.c)
 *     RtlReleaseResource @ 0x18006EB30 (RtlReleaseResource.c)
 *     RtlpUnWaitCriticalSection @ 0x18006F6A0 (RtlpUnWaitCriticalSection.c)
 *     RtlDeleteGrowableFunctionTable @ 0x1800730E0 (RtlDeleteGrowableFunctionTable.c)
 *     RtlEncodePointer @ 0x180075AD0 (RtlEncodePointer.c)
 *     RtlInitializeSListHead @ 0x180076DA0 (RtlInitializeSListHead.c)
 *     RtlDeactivateActivationContext @ 0x180078520 (RtlDeactivateActivationContext.c)
 *     LdrInitializeThunk @ 0x180078E00 (LdrInitializeThunk.c)
 *     _LdrpInitialize @ 0x180078E70 (_LdrpInitialize.c)
 *     RtlpLookupPrimaryFunctionEntry @ 0x18007C7D4 (RtlpLookupPrimaryFunctionEntry.c)
 *     LdrLockLoaderLock @ 0x18007E040 (LdrLockLoaderLock.c)
 *     LdrUnlockLoaderLock @ 0x18007FAF0 (LdrUnlockLoaderLock.c)
 *     RtlpUnwindOpSlots @ 0x180088B08 (RtlpUnwindOpSlots.c)
 *     RtlConvertExclusiveToShared @ 0x18008C130 (RtlConvertExclusiveToShared.c)
 *     RtlpUnWaitCriticalSectionEx @ 0x18009F950 (RtlpUnWaitCriticalSectionEx.c)
 *     KiUserApcDispatcher @ 0x1800A3C90 (KiUserApcDispatcher.c)
 *     KiUserCallbackDispatcherHandler @ 0x1800A3D10 (KiUserCallbackDispatcherHandler.c)
 *     KiUserCallbackDispatcher @ 0x1800A3DA0 (KiUserCallbackDispatcher.c)
 *     KiUserExceptionDispatcher @ 0x1800A3DF0 (KiUserExceptionDispatcher.c)
 *     LdrpLogFatalUserCallbackException @ 0x1800D2020 (LdrpLogFatalUserCallbackException.c)
 *     LdrpInitializeProcess @ 0x1800D404C (LdrpInitializeProcess.c)
 *     RtlGrowFunctionTable @ 0x1800E0160 (RtlGrowFunctionTable.c)
 *     RtlConvertSRWLockExclusiveToShared @ 0x1800E66A0 (RtlConvertSRWLockExclusiveToShared.c)
 *     RtlTryConvertSRWLockSharedToExclusiveOrRelease @ 0x1800E66F0 (RtlTryConvertSRWLockSharedToExclusiveOrRelease.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800E6AE0 (RtlpNotOwnerCriticalSection.c)
 *     RtlInitializeContext @ 0x1800F7FE0 (RtlInitializeContext.c)
 *     RtlIsNameInExpression @ 0x1800F84F0 (RtlIsNameInExpression.c)
 *     RtlpIsNameInExpressionPrivate @ 0x1800F858C (RtlpIsNameInExpressionPrivate.c)
 *     RtlpInitRandomExVector @ 0x1800FAC90 (RtlpInitRandomExVector.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180002AF0 (RtlRaiseStatus.c)
 *     RtlDispatchException @ 0x180025D00 (RtlDispatchException.c)
 *     ZwRaiseException @ 0x1800A2C30 (ZwRaiseException.c)
 *     RtlpCaptureContext @ 0x1800A4010 (RtlpCaptureContext.c)
 */

void __fastcall __noreturn RtlRaiseStatus(int a1)
{
  __int64 v2; // r8
  unsigned int v3; // eax
  _DWORD v4[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v5; // [rsp+28h] [rbp-D8h]
  __int64 v6; // [rsp+30h] [rbp-D0h]
  int v7; // [rsp+38h] [rbp-C8h]
  _BYTE v8[248]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v9; // [rsp+1B8h] [rbp+B8h]

  RtlpCaptureContext(v8);
  v6 = v9;
  v5 = 0LL;
  v7 = 0;
  v4[0] = a1;
  v4[1] = 1;
  if ( NtCurrentPeb()->BeingDebugged )
  {
    LOBYTE(v2) = 1;
  }
  else
  {
    RtlDispatchException(v4, v8);
    v2 = 0LL;
  }
  v3 = ZwRaiseException(v4, v8, v2);
  RtlRaiseStatus(v3);
}
