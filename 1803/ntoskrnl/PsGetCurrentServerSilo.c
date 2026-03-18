/*
 * XREFs of PsGetCurrentServerSilo @ 0x1400F17B0
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x1404714E0 (PopTransitionSystemPowerStateEx.c)
 *     ExpSystemErrorHandler2 @ 0x140487900 (ExpSystemErrorHandler2.c)
 *     SeCreateClientSecurityEx @ 0x1404C92A0 (SeCreateClientSecurityEx.c)
 *     SepCreateClientSecurityEx @ 0x1404C9490 (SepCreateClientSecurityEx.c)
 *     PsLookupThreadByThreadId @ 0x1404D75A0 (PsLookupThreadByThreadId.c)
 *     SepIsMinTCB @ 0x1404F4270 (SepIsMinTCB.c)
 *     ExpWnfGenerateStateName @ 0x1404F4B24 (ExpWnfGenerateStateName.c)
 *     ObpReferenceDeviceMap @ 0x1404FD200 (ObpReferenceDeviceMap.c)
 *     NtImpersonateAnonymousToken @ 0x14051C480 (NtImpersonateAnonymousToken.c)
 *     PnpNotifyTargetDeviceChange @ 0x14051F60C (PnpNotifyTargetDeviceChange.c)
 *     SepReferenceLogonSession @ 0x14054491C (SepReferenceLogonSession.c)
 *     PsCaptureUserProcessParameters @ 0x140550780 (PsCaptureUserProcessParameters.c)
 *     SepCreateLogonSessionTrack @ 0x14056A56C (SepCreateLogonSessionTrack.c)
 *     SepIsNgenImage @ 0x14057689C (SepIsNgenImage.c)
 *     EtwpStartLogger @ 0x14058A5A4 (EtwpStartLogger.c)
 *     PsLookupProcessByProcessId @ 0x14059A9C0 (PsLookupProcessByProcessId.c)
 *     NtSetInformationThread @ 0x14059B270 (NtSetInformationThread.c)
 *     ExpGetProcessInformation @ 0x1405A2940 (ExpGetProcessInformation.c)
 *     ObpLookupObjectName @ 0x1405A5B90 (ObpLookupObjectName.c)
 *     IopParseDevice @ 0x1405B17F0 (IopParseDevice.c)
 *     IoRegisterPlugPlayNotification @ 0x1405E22E0 (IoRegisterPlugPlayNotification.c)
 *     PopTransitionCheckpoint @ 0x1405EBCD4 (PopTransitionCheckpoint.c)
 *     SepBlockAccessForLogonSession @ 0x1405EE51C (SepBlockAccessForLogonSession.c)
 *     SepDeleteLogonSessionTrack @ 0x1405F0844 (SepDeleteLogonSessionTrack.c)
 *     PnpNotifyDeviceClassChange @ 0x1406027D0 (PnpNotifyDeviceClassChange.c)
 *     MiSessionCreateInternal @ 0x14060B190 (MiSessionCreateInternal.c)
 *     NtGetNextProcess @ 0x14060E220 (NtGetNextProcess.c)
 *     SepMakeLogonSessionsSiblings @ 0x140793220 (SepMakeLogonSessionsSiblings.c)
 * Callees:
 *     PsIsServerSilo @ 0x14008A910 (PsIsServerSilo.c)
 */

__int64 PsGetCurrentServerSilo()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // rcx

  CurrentThread = KeGetCurrentThread();
  v1 = *(_QWORD *)&CurrentThread[1].WaitBlockFill11[160];
  if ( v1 == -3 )
    return *(_QWORD *)&CurrentThread->Process[2].ActiveProcessors.Count;
  if ( v1 )
  {
    while ( !PsIsServerSilo(v1) )
      v1 = *(_QWORD *)(v1 + 1072);
  }
  return v1;
}
