/*
 * XREFs of ??1?$CLockExclusive@VDLT_QUEUE@@@@QEAA@XZ @ 0x1C00A082C
 * Callers:
 *     PostEventMessageEx @ 0x1C009F99C (PostEventMessageEx.c)
 *     _ScheduleDispatchNotification @ 0x1C00A0450 (_ScheduleDispatchNotification.c)
 * Callees:
 *     <none>
 */

void __fastcall CLockExclusive<DLT_QUEUE>::~CLockExclusive<DLT_QUEUE>(tagObjLock **a1)
{
  tagObjLock::UnLock(a1[1]);
  tagObjLock::UnLock(*a1);
}
