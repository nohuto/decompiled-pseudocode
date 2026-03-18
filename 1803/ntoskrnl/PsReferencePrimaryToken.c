/*
 * XREFs of PsReferencePrimaryToken @ 0x1404C13D0
 * Callers:
 *     RtlpQueryLowBoxId @ 0x140061174 (RtlpQueryLowBoxId.c)
 *     SepReferenceTokenUsingPseudoHandle @ 0x1400EF560 (SepReferenceTokenUsingPseudoHandle.c)
 *     PspDisablePrimaryTokenExchange @ 0x1404B8C60 (PspDisablePrimaryTokenExchange.c)
 *     PspExitThread @ 0x1404B8D70 (PspExitThread.c)
 *     MmCreateSectionEx @ 0x1404BF1DC (MmCreateSectionEx.c)
 *     NtOpenThreadTokenEx @ 0x1404C0990 (NtOpenThreadTokenEx.c)
 *     MmCreateCacheManagerSection @ 0x1404C10BC (MmCreateCacheManagerSection.c)
 *     MmCreateSection @ 0x1404C1C80 (MmCreateSection.c)
 *     SepCreateClientSecurityEx @ 0x1404C9490 (SepCreateClientSecurityEx.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x1404D4070 (EtwpGetSidExtendedHeaderItem.c)
 *     AlpcpCheckConnectionSecurity @ 0x1404DDFAC (AlpcpCheckConnectionSecurity.c)
 *     NtSetInformationProcess @ 0x1404E4550 (NtSetInformationProcess.c)
 *     PspInitializeProcessSecurity @ 0x1404F019C (PspInitializeProcessSecurity.c)
 *     PspReferenceTokenForNewProcess @ 0x1404F4708 (PspReferenceTokenForNewProcess.c)
 *     ExpWnfQueryCurrentUserSID @ 0x1404F7234 (ExpWnfQueryCurrentUserSID.c)
 *     EtwpPsProvTraceProcess @ 0x1404F7F94 (EtwpPsProvTraceProcess.c)
 *     EtwpBuildProcessEvent @ 0x1404F8968 (EtwpBuildProcessEvent.c)
 *     PsQueryProcessAttributes @ 0x1404F8F34 (PsQueryProcessAttributes.c)
 *     PfSnCheckModernApp @ 0x14050DB3C (PfSnCheckModernApp.c)
 *     EtwTraceAppStateChange @ 0x140510E74 (EtwTraceAppStateChange.c)
 *     NtImpersonateAnonymousToken @ 0x14051C480 (NtImpersonateAnonymousToken.c)
 *     SepFilterToken @ 0x140542044 (SepFilterToken.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x140551F78 (AlpcpPortQueryConnectedSidInfo.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x14055A1FC (PopEtGetProcessSidAndPackageIdentity.c)
 *     ObSetCurrentProcessDeviceMap @ 0x14055FBE0 (ObSetCurrentProcessDeviceMap.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140561188 (EtwQueryProcessTelemetryInfo.c)
 *     SeIsTokenAssignableToProcess @ 0x140562F14 (SeIsTokenAssignableToProcess.c)
 *     SepIsChildTokenByPointer @ 0x140563080 (SepIsChildTokenByPointer.c)
 *     SepIsSiblingTokenByPointer @ 0x14056310C (SepIsSiblingTokenByPointer.c)
 *     PspSetQuotaLimits @ 0x14057899C (PspSetQuotaLimits.c)
 *     PsIsProcessAppContainer @ 0x14058A3A4 (PsIsProcessAppContainer.c)
 *     ExpGetProcessInformation @ 0x1405A2940 (ExpGetProcessInformation.c)
 *     PsCreateMinimalProcess @ 0x14062C5DC (PsCreateMinimalProcess.c)
 *     CmpCreateRegistryProcessToken @ 0x14062C9C4 (CmpCreateRegistryProcessToken.c)
 *     SeAuditProcessCreation @ 0x1406414B8 (SeAuditProcessCreation.c)
 *     NtLoadEnclaveData @ 0x1407535B8 (NtLoadEnclaveData.c)
 *     PspGetNoChildProcessRestrictedPolicy @ 0x14077A2D4 (PspGetNoChildProcessRestrictedPolicy.c)
 *     PspSetNoChildProcessRestrictedPolicy @ 0x14077A340 (PspSetNoChildProcessRestrictedPolicy.c)
 *     SeAuditProcessExit @ 0x14078DDCC (SeAuditProcessExit.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x1407A5470 (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     EtwpAcquireTokenAccessInformation @ 0x1407A565C (EtwpAcquireTokenAccessInformation.c)
 *     EtwpPsProvProcessEnumCallback @ 0x1407AFB10 (EtwpPsProvProcessEnumCallback.c)
 *     EtwpApplyPackageIdFilter @ 0x1407B15DC (EtwpApplyPackageIdFilter.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     ObFastReferenceObjectLocked @ 0x1400EB804 (ObFastReferenceObjectLocked.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ObFastReferenceObject @ 0x1401051D0 (ObFastReferenceObject.c)
 */

PACCESS_TOKEN __stdcall PsReferencePrimaryToken(PEPROCESS Process)
{
  unsigned __int64 *v1; // rsi
  void *v3; // rbx
  struct _KTHREAD *CurrentThread; // rbp
  signed __int64 *p_Lock; // rdi

  v1 = &Process[1].Affinity.Bitmap[5];
  v3 = (void *)ObFastReferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5]);
  if ( !v3 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    p_Lock = (signed __int64 *)&Process[1].Header.Lock;
    ExAcquirePushLockSharedEx((ULONG_PTR)p_Lock, 0LL);
    v3 = (void *)ObFastReferenceObjectLocked(v1);
    if ( _InterlockedCompareExchange64(p_Lock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(p_Lock);
    KeAbPostRelease((ULONG_PTR)p_Lock);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  return v3;
}
