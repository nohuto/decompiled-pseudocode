/*
 * XREFs of EtwpCheckGuidAccess @ 0x1404EF040
 * Callers:
 *     EtwpStartLogger @ 0x1404ECD4C (EtwpStartLogger.c)
 *     EtwpNotifyGuid @ 0x1404EDE90 (EtwpNotifyGuid.c)
 *     EtwpEnableDisableSpecialGuids @ 0x1404EEB84 (EtwpEnableDisableSpecialGuids.c)
 *     EtwpCheckNotificationAccess @ 0x1404EEFD4 (EtwpCheckNotificationAccess.c)
 *     EtwpCheckProviderLoggingAccess @ 0x1404EFE30 (EtwpCheckProviderLoggingAccess.c)
 *     EtwSetPerformanceTraceInformation @ 0x140748538 (EtwSetPerformanceTraceInformation.c)
 *     EtwpCheckGuidAccessAndDoRundown @ 0x14074CB5C (EtwpCheckGuidAccessAndDoRundown.c)
 *     EtwpCheckSystemTraceAccess @ 0x140751BD8 (EtwpCheckSystemTraceAccess.c)
 * Callees:
 *     EtwpGetSecurityDescriptorByGuid @ 0x14048685C (EtwpGetSecurityDescriptorByGuid.c)
 *     EtwpAccessCheck @ 0x140490118 (EtwpAccessCheck.c)
 *     EtwpFreeSecurityDescriptor @ 0x140492ADC (EtwpFreeSecurityDescriptor.c)
 */

__int64 __fastcall EtwpCheckGuidAccess(unsigned int *a1, ACCESS_MASK a2, struct _SECURITY_SUBJECT_CONTEXT *a3)
{
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+48h] [rbp+20h] BYREF

  SecurityDescriptor = 0LL;
  EtwpGetSecurityDescriptorByGuid(a1, &SecurityDescriptor);
  LODWORD(a3) = EtwpAccessCheck(SecurityDescriptor, a2, a3);
  EtwpFreeSecurityDescriptor(&SecurityDescriptor);
  return (unsigned int)a3;
}
