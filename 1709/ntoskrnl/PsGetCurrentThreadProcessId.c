/*
 * XREFs of PsGetCurrentThreadProcessId @ 0x1400851E0
 * Callers:
 *     NtTraceControl @ 0x14049AB40 (NtTraceControl.c)
 *     ObpCreateHandle @ 0x1404AE7E0 (ObpCreateHandle.c)
 *     CmpCreateKeyBody @ 0x1404B8240 (CmpCreateKeyBody.c)
 *     EtwpNotifyGuid @ 0x1404EDE90 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x1404EE2B8 (EtwpEnableGuid.c)
 *     PiUEventHandleRegistration @ 0x1405486E8 (PiUEventHandleRegistration.c)
 *     PiDqIrpQueryCreate @ 0x14054C90C (PiDqIrpQueryCreate.c)
 *     SeAuditHandleCreation @ 0x140595FF8 (SeAuditHandleCreation.c)
 *     PoShutdownBugCheck @ 0x1406FC900 (PoShutdownBugCheck.c)
 *     EtwpDisallowedGuidAddition @ 0x140743A34 (EtwpDisallowedGuidAddition.c)
 *     EtwpDisallowedGuidRemoval @ 0x140743BBC (EtwpDisallowedGuidRemoval.c)
 *     EtwpRegisterPrivateSession @ 0x14074F4D4 (EtwpRegisterPrivateSession.c)
 * Callees:
 *     <none>
 */

unsigned __int64 PsGetCurrentThreadProcessId()
{
  return KeGetCurrentThread()[1].CycleTime;
}
