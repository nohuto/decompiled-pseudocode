/*
 * XREFs of PsmCrmSuspendNotification @ 0x180035330
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateMonitorStateSet @ 0x180005574 (CrmStateMonitorStateSet.c)
 */

__int64 __fastcall PsmCrmSuspendNotification(unsigned __int8 a1)
{
  int v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1;
  RtlAcquireSRWLockShared(&CrmGlobals);
  if ( qword_1800929D8 )
    CrmStateMonitorStateSet((void **)qword_1800929D8, &v2, 4uLL);
  return RtlReleaseSRWLockShared(&CrmGlobals);
}
