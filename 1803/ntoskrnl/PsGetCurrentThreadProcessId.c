/*
 * XREFs of PsGetCurrentThreadProcessId @ 0x1400A1C70
 * Callers:
 *     PiDqIrpQueryCreate @ 0x140523298 (PiDqIrpQueryCreate.c)
 *     CmpCreateKeyBody @ 0x14054C380 (CmpCreateKeyBody.c)
 *     SeAuditHandleCreation @ 0x140577208 (SeAuditHandleCreation.c)
 *     EtwpNotifyGuid @ 0x14058B468 (EtwpNotifyGuid.c)
 *     PiUEventHandleRegistration @ 0x14058C23C (PiUEventHandleRegistration.c)
 *     EtwpEnableGuid @ 0x14058D2FC (EtwpEnableGuid.c)
 *     NtTraceControl @ 0x14058F8F0 (NtTraceControl.c)
 *     ObpCreateHandle @ 0x1405AB660 (ObpCreateHandle.c)
 *     PoShutdownBugCheck @ 0x140762AF0 (PoShutdownBugCheck.c)
 *     EtwpDisallowedGuidAddition @ 0x1407A5704 (EtwpDisallowedGuidAddition.c)
 *     EtwpDisallowedGuidRemoval @ 0x1407A5894 (EtwpDisallowedGuidRemoval.c)
 *     EtwpRegisterPrivateSession @ 0x1407B0348 (EtwpRegisterPrivateSession.c)
 * Callees:
 *     <none>
 */

unsigned __int64 PsGetCurrentThreadProcessId()
{
  return KeGetCurrentThread()[1].CycleTime;
}
