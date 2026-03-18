/*
 * XREFs of PsGetCurrentThreadProcessId @ 0x14003C360
 * Callers:
 *     SeAuditHandleCreation @ 0x140458A5C (SeAuditHandleCreation.c)
 *     NtTraceControl @ 0x14047FD70 (NtTraceControl.c)
 *     PiUEventHandleRegistration @ 0x1404A4F10 (PiUEventHandleRegistration.c)
 *     PiDqTraceQueryCreate @ 0x1404B8E84 (PiDqTraceQueryCreate.c)
 *     ObpCreateHandle @ 0x14052CD90 (ObpCreateHandle.c)
 *     CmpCreateKeyBody @ 0x140538160 (CmpCreateKeyBody.c)
 *     EtwpNotifyGuid @ 0x140551CB4 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x140552C6C (EtwpEnableGuid.c)
 *     EtwpDisallowedGuidAddition @ 0x1405C7F38 (EtwpDisallowedGuidAddition.c)
 *     PoShutdownBugCheck @ 0x1406C9EC0 (PoShutdownBugCheck.c)
 *     EtwpDisallowedGuidRemoval @ 0x140709A14 (EtwpDisallowedGuidRemoval.c)
 *     EtwpRegisterPrivateSession @ 0x140711984 (EtwpRegisterPrivateSession.c)
 * Callees:
 *     <none>
 */

__int64 PsGetCurrentThreadProcessId()
{
  return *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
}
