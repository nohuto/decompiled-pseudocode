/*
 * XREFs of PsGetCurrentServerSilo @ 0x140094960
 * Callers:
 *     MiGetNextSession @ 0x14007118C (MiGetNextSession.c)
 *     RtlGetCurrentServiceSessionId @ 0x140085340 (RtlGetCurrentServiceSessionId.c)
 *     PsGetServerSiloGlobals @ 0x140085368 (PsGetServerSiloGlobals.c)
 *     MmGetSessionById @ 0x140094460 (MmGetSessionById.c)
 *     SepAdtLogAuditRecord @ 0x140156510 (SepAdtLogAuditRecord.c)
 *     MmIsSessionInCurrentServerSilo @ 0x140217DF0 (MmIsSessionInCurrentServerSilo.c)
 *     NtSetSystemPowerState @ 0x140408DF4 (NtSetSystemPowerState.c)
 *     ExpSystemErrorHandler2 @ 0x14041B230 (ExpSystemErrorHandler2.c)
 *     SepCreateLogonSessionTrack @ 0x14045672C (SepCreateLogonSessionTrack.c)
 *     SepReferenceLogonSession @ 0x14046F448 (SepReferenceLogonSession.c)
 *     NtSetInformationThread @ 0x14047D650 (NtSetInformationThread.c)
 *     ExpWnfGenerateStateName @ 0x1404C2A70 (ExpWnfGenerateStateName.c)
 *     ObpReferenceDeviceMap @ 0x1404EC98C (ObpReferenceDeviceMap.c)
 *     SeCreateClientSecurityEx @ 0x14050AD10 (SeCreateClientSecurityEx.c)
 *     SepCreateClientSecurityEx @ 0x14050AF80 (SepCreateClientSecurityEx.c)
 *     PsLookupThreadByThreadId @ 0x14050EEE0 (PsLookupThreadByThreadId.c)
 *     PsLookupProcessByProcessId @ 0x14050F8F0 (PsLookupProcessByProcessId.c)
 *     ObpLookupObjectName @ 0x14052F630 (ObpLookupObjectName.c)
 *     ExpGetProcessInformation @ 0x140531E70 (ExpGetProcessInformation.c)
 *     SepIsMinTCB @ 0x1405454E0 (SepIsMinTCB.c)
 *     SepIsNgenImage @ 0x140545D34 (SepIsNgenImage.c)
 *     EtwpStartLogger @ 0x1405509F8 (EtwpStartLogger.c)
 *     NtImpersonateAnonymousToken @ 0x14055FD94 (NtImpersonateAnonymousToken.c)
 *     SepDeleteLogonSessionTrack @ 0x140579760 (SepDeleteLogonSessionTrack.c)
 *     SepBlockAccessForLogonSession @ 0x1405799CC (SepBlockAccessForLogonSession.c)
 *     MiSessionCreateInternal @ 0x14057EB28 (MiSessionCreateInternal.c)
 *     SepMakeLogonSessionsSiblings @ 0x1406F764C (SepMakeLogonSessionsSiblings.c)
 * Callees:
 *     <none>
 */

__int64 PsGetCurrentServerSilo()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  if ( *(_QWORD *)&CurrentThread[1].WaitBlockFill11[160] == -3LL )
    return *(_QWORD *)&CurrentThread->Process[2].ActiveProcessors.Count;
  else
    return PsGetEffectiveServerSilo(*(_QWORD *)&CurrentThread[1].WaitBlockFill11[160]);
}
