/*
 * XREFs of EtwpCheckGuidAccess @ 0x140554B20
 * Callers:
 *     EtwpStartLogger @ 0x1405509F8 (EtwpStartLogger.c)
 *     EtwpNotifyGuid @ 0x140551CB4 (EtwpNotifyGuid.c)
 *     EtwpCheckProviderLoggingAccess @ 0x1405534E0 (EtwpCheckProviderLoggingAccess.c)
 *     EtwpEnableDisableSpecialGuids @ 0x140553FF8 (EtwpEnableDisableSpecialGuids.c)
 *     EtwpCheckNotificationAccess @ 0x140554AB4 (EtwpCheckNotificationAccess.c)
 *     EtwpCheckSystemTraceAccess @ 0x1405D8D94 (EtwpCheckSystemTraceAccess.c)
 *     EtwSetPerformanceTraceInformation @ 0x14070CEA0 (EtwSetPerformanceTraceInformation.c)
 *     EtwpCheckGuidAccessAndDoRundown @ 0x14070FEBC (EtwpCheckGuidAccessAndDoRundown.c)
 * Callees:
 *     EtwpAccessCheck @ 0x1404F2AB8 (EtwpAccessCheck.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x1404F2EF8 (EtwpGetSecurityDescriptorByGuid.c)
 *     EtwpFreeSecurityDescriptor @ 0x1404F65AC (EtwpFreeSecurityDescriptor.c)
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
