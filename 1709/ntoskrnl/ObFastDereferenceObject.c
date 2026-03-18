/*
 * XREFs of ObFastDereferenceObject @ 0x140081E20
 * Callers:
 *     PfSnCheckModernApp @ 0x140447F04 (PfSnCheckModernApp.c)
 *     PspSetQuotaLimits @ 0x140449BF0 (PspSetQuotaLimits.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x1404593A4 (PopEtGetProcessSidAndPackageIdentity.c)
 *     PspMapSystemDll @ 0x14045FDEC (PspMapSystemDll.c)
 *     AlpcpCheckConnectionSecurity @ 0x140467994 (AlpcpCheckConnectionSecurity.c)
 *     PsQueryProcessAttributes @ 0x140486A80 (PsQueryProcessAttributes.c)
 *     PspInitializeProcessSecurity @ 0x14048C3A8 (PspInitializeProcessSecurity.c)
 *     SeSubProcessToken @ 0x14048CA94 (SeSubProcessToken.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x14049CA10 (EtwpGetSidExtendedHeaderItem.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1404A8000 (CmKeyBodyRemapToVirtualForEnum.c)
 *     SeReleaseSubjectContext @ 0x1404AC530 (SeReleaseSubjectContext.c)
 *     ObOpenObjectByNameEx @ 0x1404AC5A0 (ObOpenObjectByNameEx.c)
 *     ExpGetProcessInformation @ 0x1404AF9A0 (ExpGetProcessInformation.c)
 *     CmpDoParseKey @ 0x1404B47B0 (CmpDoParseKey.c)
 *     PfQuerySuperfetchInformation @ 0x1404C4070 (PfQuerySuperfetchInformation.c)
 *     PsOpenProcess @ 0x1404C4620 (PsOpenProcess.c)
 *     NtOpenThreadTokenEx @ 0x1404C5CB0 (NtOpenThreadTokenEx.c)
 *     PsImpersonateClient @ 0x1404CE640 (PsImpersonateClient.c)
 *     PspExitThread @ 0x1404D5FB4 (PspExitThread.c)
 *     EtwpBuildProcessEvent @ 0x1404DBDC0 (EtwpBuildProcessEvent.c)
 *     EtwpPsProvTraceProcess @ 0x1404DCB5C (EtwpPsProvTraceProcess.c)
 *     EtwTraceAppStateChange @ 0x1404FE234 (EtwTraceAppStateChange.c)
 *     ExpWnfQueryCurrentUserSID @ 0x1405033D4 (ExpWnfQueryCurrentUserSID.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x14050E064 (PspAllocateAndQueryNotificationChannel.c)
 *     NtImpersonateAnonymousToken @ 0x140512CF4 (NtImpersonateAnonymousToken.c)
 *     DbgkCreateThread @ 0x14053F718 (DbgkCreateThread.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x1405626DC (AlpcpPortQueryConnectedSidInfo.c)
 *     CmpIsVirtEnabled @ 0x140569DE8 (CmpIsVirtEnabled.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140573710 (EtwQueryProcessTelemetryInfo.c)
 *     SeIsTokenAssignableToProcess @ 0x140573A88 (SeIsTokenAssignableToProcess.c)
 *     SepIsChildTokenByPointer @ 0x140573BF4 (SepIsChildTokenByPointer.c)
 *     SepIsSiblingTokenByPointer @ 0x140573C84 (SepIsSiblingTokenByPointer.c)
 *     CmpGetVirtualizationID @ 0x1406921DC (CmpGetVirtualizationID.c)
 *     PspGetNoChildProcessRestrictedPolicy @ 0x140716134 (PspGetNoChildProcessRestrictedPolicy.c)
 *     PspSetNoChildProcessRestrictedPolicy @ 0x1407161A0 (PspSetNoChildProcessRestrictedPolicy.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x140743848 (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     EtwpPsProvProcessEnumCallback @ 0x14074E870 (EtwpPsProvProcessEnumCallback.c)
 *     EtwpApplyPackageIdFilter @ 0x140750908 (EtwpApplyPackageIdFilter.c)
 *     MmInitSystemDll @ 0x140857D2C (MmInitSystemDll.c)
 *     PspGetSystemDllSecureHandle @ 0x14086C6B0 (PspGetSystemDllSecureHandle.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
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
