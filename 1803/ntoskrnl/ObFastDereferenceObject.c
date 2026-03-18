/*
 * XREFs of ObFastDereferenceObject @ 0x140105100
 * Callers:
 *     DbgkCreateThread @ 0x1404B87D4 (DbgkCreateThread.c)
 *     PspExitThread @ 0x1404B8D70 (PspExitThread.c)
 *     NtOpenThreadTokenEx @ 0x1404C0990 (NtOpenThreadTokenEx.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x1404D4070 (EtwpGetSidExtendedHeaderItem.c)
 *     AlpcpCheckConnectionSecurity @ 0x1404DDFAC (AlpcpCheckConnectionSecurity.c)
 *     PspMapSystemDll @ 0x1404E9248 (PspMapSystemDll.c)
 *     PspInitializeProcessSecurity @ 0x1404F019C (PspInitializeProcessSecurity.c)
 *     SeSubProcessToken @ 0x1404F0580 (SeSubProcessToken.c)
 *     ExpWnfQueryCurrentUserSID @ 0x1404F7234 (ExpWnfQueryCurrentUserSID.c)
 *     EtwpPsProvTraceProcess @ 0x1404F7F94 (EtwpPsProvTraceProcess.c)
 *     EtwpBuildProcessEvent @ 0x1404F8968 (EtwpBuildProcessEvent.c)
 *     PsQueryProcessAttributes @ 0x1404F8F34 (PsQueryProcessAttributes.c)
 *     PfSnCheckModernApp @ 0x14050DB3C (PfSnCheckModernApp.c)
 *     EtwTraceAppStateChange @ 0x140510E74 (EtwTraceAppStateChange.c)
 *     NtImpersonateAnonymousToken @ 0x14051C480 (NtImpersonateAnonymousToken.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1405349D0 (PspAllocateAndQueryNotificationChannel.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x140551F78 (AlpcpPortQueryConnectedSidInfo.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x14055A1FC (PopEtGetProcessSidAndPackageIdentity.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140561188 (EtwQueryProcessTelemetryInfo.c)
 *     SeIsTokenAssignableToProcess @ 0x140562F14 (SeIsTokenAssignableToProcess.c)
 *     SepIsChildTokenByPointer @ 0x140563080 (SepIsChildTokenByPointer.c)
 *     SepIsSiblingTokenByPointer @ 0x14056310C (SepIsSiblingTokenByPointer.c)
 *     PspSetQuotaLimits @ 0x14057899C (PspSetQuotaLimits.c)
 *     PsImpersonateClient @ 0x14059AA70 (PsImpersonateClient.c)
 *     ExpGetProcessInformation @ 0x1405A2940 (ExpGetProcessInformation.c)
 *     ObOpenObjectByNameEx @ 0x1405AC6B0 (ObOpenObjectByNameEx.c)
 *     SeReleaseSubjectContext @ 0x1405AD310 (SeReleaseSubjectContext.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1405AD720 (CmKeyBodyRemapToVirtualForEnum.c)
 *     PfQuerySuperfetchInformation @ 0x1405B0640 (PfQuerySuperfetchInformation.c)
 *     PspGetNoChildProcessRestrictedPolicy @ 0x14077A2D4 (PspGetNoChildProcessRestrictedPolicy.c)
 *     PspSetNoChildProcessRestrictedPolicy @ 0x14077A340 (PspSetNoChildProcessRestrictedPolicy.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x1407A5470 (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     EtwpPsProvProcessEnumCallback @ 0x1407AFB10 (EtwpPsProvProcessEnumCallback.c)
 *     EtwpApplyPackageIdFilter @ 0x1407B15DC (EtwpApplyPackageIdFilter.c)
 *     MmInitSystemDll @ 0x1408C9E98 (MmInitSystemDll.c)
 *     PspGetSystemDllSecureHandle @ 0x1408E13F8 (PspGetSystemDllSecureHandle.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 */

signed __int64 __fastcall ObFastDereferenceObject(signed __int64 *a1, unsigned __int64 a2)
{
  signed __int64 result; // rax
  signed __int64 v3; // rtt

  _m_prefetchw(a1);
  result = *a1;
  if ( (a2 ^ *a1) >= 0xF )
    return ObfDereferenceObject((PVOID)a2);
  while ( 1 )
  {
    v3 = result;
    result = _InterlockedCompareExchange64(a1, result + 1, result);
    if ( v3 == result )
      break;
    if ( (a2 ^ result) >= 0xF )
      return ObfDereferenceObject((PVOID)a2);
  }
  return result;
}
