/*
 * XREFs of EtwpCheckGuidAccess @ 0x14058DC64
 * Callers:
 *     EtwpStartLogger @ 0x14058A5A4 (EtwpStartLogger.c)
 *     EtwpNotifyGuid @ 0x14058B468 (EtwpNotifyGuid.c)
 *     EtwpCheckProviderLoggingAccess @ 0x14058C7B0 (EtwpCheckProviderLoggingAccess.c)
 *     EtwpCheckNotificationAccess @ 0x14058D188 (EtwpCheckNotificationAccess.c)
 *     EtwpCheckSystemTraceAccess @ 0x140628A28 (EtwpCheckSystemTraceAccess.c)
 *     EtwSetPerformanceTraceInformation @ 0x1407A9CB0 (EtwSetPerformanceTraceInformation.c)
 *     EtwpCheckGuidAccessAndDoRundown @ 0x1407AE77C (EtwpCheckGuidAccessAndDoRundown.c)
 *     EtwpLogFileNameRundown @ 0x1407AEBBC (EtwpLogFileNameRundown.c)
 * Callees:
 *     EtwpAccessCheck @ 0x14058F44C (EtwpAccessCheck.c)
 *     EtwpFreeSecurityDescriptor @ 0x1405917E4 (EtwpFreeSecurityDescriptor.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x14059189C (EtwpGetSecurityDescriptorByGuid.c)
 */

__int64 __fastcall EtwpCheckGuidAccess(__int64 a1, ACCESS_MASK a2, struct _SECURITY_SUBJECT_CONTEXT *a3)
{
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+48h] [rbp+20h] BYREF

  SecurityDescriptor = 0LL;
  EtwpGetSecurityDescriptorByGuid(a1, &SecurityDescriptor);
  LODWORD(a3) = EtwpAccessCheck(SecurityDescriptor, a2, a3);
  EtwpFreeSecurityDescriptor(&SecurityDescriptor);
  return (unsigned int)a3;
}
