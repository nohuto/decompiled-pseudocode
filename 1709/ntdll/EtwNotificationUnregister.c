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

__int64 __fastcall EtwNotificationUnregister(unsigned __int64 a1, _QWORD *a2, unsigned __int64 *a3, __int64 a4)
{
  unsigned __int64 v4; // rdi
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx

  v4 = HIWORD(a1);
  if ( !HIWORD(a1) )
    goto LABEL_14;
  v6 = a1 & 0xFFFFFFFFFFFFLL;
  if ( (a1 & 1) != 0 || HIWORD(a1) != *(_WORD *)((a1 & 0xFFFFFFFFFFFFLL) + 0x60) )
    goto LABEL_14;
  RtlAcquireSRWLockExclusive(v6 + 72, (unsigned __int64)a2, a3, a4);
  if ( (_WORD)v4 != _InterlockedCompareExchange16((volatile signed __int16 *)(v6 + 96), 0, v4) )
  {
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v6 + 72));
LABEL_14:
    RtlSetLastWin32Error(6u);
    return 6LL;
  }
  EtwpRemoveRegistrationFromTable(v6);
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v6 + 72));
  if ( (*(_WORD *)(v6 + 98) & 0x3FFF) != 0xA )
  {
    NtClose(*(HANDLE *)(v6 + 88));
    v7 = PrivateLoggerNotificationEntry;
    if ( v6 == PrivateLoggerNotificationEntry )
      v7 = 0LL;
    PrivateLoggerNotificationEntry = v7;
  }
  v8 = *(_QWORD *)(v6 + 248);
  if ( v8 )
  {
    EtwpDereferenceUmGuidEntry(v8);
    *(_QWORD *)(v6 + 248) = 0LL;
  }
  if ( a2 )
    *a2 = *(_QWORD *)(v6 + 56);
  EtwpFreeRegistration(v6);
  return 0LL;
}
