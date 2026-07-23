/*
 * XREFs of EtwNotificationUnregister @ 0x180060B70
 * Callers:
 *     SbSelectProcedure @ 0x180021390 (SbSelectProcedure.c)
 *     EtwUnregisterTraceGuids @ 0x180060B10 (EtwUnregisterTraceGuids.c)
 *     EtwEventUnregister @ 0x180060B60 (EtwEventUnregister.c)
 *     SbCleanupTrace @ 0x180076798 (SbCleanupTrace.c)
 *     SbObtainTraceHandle @ 0x1800818D8 (SbObtainTraceHandle.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x1800819EC (LdrpLogDeprecatedDllEtwEvent.c)
 *     LdrpAppxEtwGenericIntegrityFailure @ 0x1800CEC08 (LdrpAppxEtwGenericIntegrityFailure.c)
 *     LdrpAppxEtwIntegrityFailure @ 0x1800CEC88 (LdrpAppxEtwIntegrityFailure.c)
 *     LdrpLogFatalUserCallbackException @ 0x1800D2020 (LdrpLogFatalUserCallbackException.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18001ACF0 (RtlSetLastWin32Error.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     EtwpFreeRegistration @ 0x180060C7C (EtwpFreeRegistration.c)
 *     EtwpRemoveRegistrationFromTable @ 0x180060CB4 (EtwpRemoveRegistrationFromTable.c)
 *     EtwpDereferenceUmGuidEntry @ 0x180064118 (EtwpDereferenceUmGuidEntry.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 */

ULONG __cdecl EtwNotificationUnregister(REGHANDLE RegHandle, PVOID *Context)
{
  REGHANDLE v2; // rdi
  REGHANDLE v4; // rbx
  __int64 v5; // rax
  _RTL_BALANCED_NODE *v6; // rcx

  v2 = HIWORD(RegHandle);
  if ( !HIWORD(RegHandle) )
    goto LABEL_14;
  v4 = RegHandle & 0xFFFFFFFFFFFFLL;
  if ( (RegHandle & 1) != 0 || HIWORD(RegHandle) != *(_WORD *)((RegHandle & 0xFFFFFFFFFFFFLL) + 0x60) )
    goto LABEL_14;
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v4 + 72));
  if ( (_WORD)v2 != _InterlockedCompareExchange16((volatile signed __int16 *)(v4 + 96), 0, v2) )
  {
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v4 + 72));
LABEL_14:
    RtlSetLastWin32Error(6);
    return 6;
  }
  EtwpRemoveRegistrationFromTable((PRTL_BALANCED_NODE)v4);
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v4 + 72));
  if ( (*(_WORD *)(v4 + 98) & 0x3FFF) != 0xA )
  {
    NtClose(*(HANDLE *)(v4 + 88));
    v5 = PrivateLoggerNotificationEntry;
    if ( v4 == PrivateLoggerNotificationEntry )
      v5 = 0LL;
    PrivateLoggerNotificationEntry = v5;
  }
  v6 = *(_RTL_BALANCED_NODE **)(v4 + 248);
  if ( v6 )
  {
    EtwpDereferenceUmGuidEntry(v6);
    *(_QWORD *)(v4 + 248) = 0LL;
  }
  if ( Context )
    *Context = *(PVOID *)(v4 + 56);
  EtwpFreeRegistration(v4);
  return 0;
}
