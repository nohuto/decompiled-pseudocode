/*
 * XREFs of PsGetCurrentServerSilo @ 0x140089070
 * Callers:
 *     PsGetServerSiloGlobals @ 0x140089394 (PsGetServerSiloGlobals.c)
 *     MmGetSessionById @ 0x140089C70 (MmGetSessionById.c)
 *     MiGetNextSession @ 0x1400B15E4 (MiGetNextSession.c)
 *     RtlGetCurrentServiceSessionId @ 0x140101FB0 (RtlGetCurrentServiceSessionId.c)
 *     SepAdtLogAuditRecord @ 0x1401338F0 (SepAdtLogAuditRecord.c)
 *     MmIsSessionInCurrentServerSilo @ 0x140221E00 (MmIsSessionInCurrentServerSilo.c)
 *     NtSetSystemPowerState @ 0x140437F10 (NtSetSystemPowerState.c)
 *     ExpSystemErrorHandler2 @ 0x14043AD40 (ExpSystemErrorHandler2.c)
 *     SepReferenceLogonSession @ 0x14045CEC8 (SepReferenceLogonSession.c)
 *     SeCreateClientSecurityEx @ 0x14049CD70 (SeCreateClientSecurityEx.c)
 *     SepCreateClientSecurityEx @ 0x14049D260 (SepCreateClientSecurityEx.c)
 *     ExpGetProcessInformation @ 0x1404AF9A0 (ExpGetProcessInformation.c)
 *     ObpLookupObjectName @ 0x1404B2490 (ObpLookupObjectName.c)
 *     PsOpenProcess @ 0x1404C4620 (PsOpenProcess.c)
 *     PsLookupThreadByThreadId @ 0x1404C5690 (PsLookupThreadByThreadId.c)
 *     ObpReferenceDeviceMap @ 0x1404C64B0 (ObpReferenceDeviceMap.c)
 *     NtSetInformationThread @ 0x1404CD4F0 (NtSetInformationThread.c)
 *     EtwpStartLogger @ 0x1404ECD4C (EtwpStartLogger.c)
 *     ExpWnfGenerateStateName @ 0x1405035C4 (ExpWnfGenerateStateName.c)
 *     NtImpersonateAnonymousToken @ 0x140512CF4 (NtImpersonateAnonymousToken.c)
 *     SepIsNgenImage @ 0x14053A4C8 (SepIsNgenImage.c)
 *     SepIsMinTCB @ 0x14053AAD0 (SepIsMinTCB.c)
 *     PsLookupProcessByProcessId @ 0x140575060 (PsLookupProcessByProcessId.c)
 *     PsCaptureUserProcessParameters @ 0x14059CC00 (PsCaptureUserProcessParameters.c)
 *     SepCreateLogonSessionTrack @ 0x1405A784C (SepCreateLogonSessionTrack.c)
 *     SepDeleteLogonSessionTrack @ 0x1405A79E0 (SepDeleteLogonSessionTrack.c)
 *     MiSessionCreateInternal @ 0x1405B3F68 (MiSessionCreateInternal.c)
 *     PopTransitionCheckpoint @ 0x1406F5940 (PopTransitionCheckpoint.c)
 *     NtGetNextProcess @ 0x14071C6A0 (NtGetNextProcess.c)
 *     SepBlockAccessForLogonSession @ 0x14072F038 (SepBlockAccessForLogonSession.c)
 *     SepMakeLogonSessionsSiblings @ 0x14072F21C (SepMakeLogonSessionsSiblings.c)
 * Callees:
 *     PsIsServerSilo @ 0x1400D4250 (PsIsServerSilo.c)
 */

__int64 PsGetCurrentServerSilo()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v2; // rcx

  CurrentThread = KeGetCurrentThread();
  if ( *(_QWORD *)&CurrentThread[1].WaitBlockFill11[160] == -3LL )
    return *(_QWORD *)&CurrentThread->Process[2].ActiveProcessors.Count;
  if ( !*(_QWORD *)&CurrentThread[1].WaitBlockFill11[160] )
    return 0LL;
  while ( !(unsigned __int8)PsIsServerSilo() )
    ;
  return v2;
}
