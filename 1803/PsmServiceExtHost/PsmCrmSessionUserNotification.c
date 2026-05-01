/*
 * XREFs of PsmCrmSessionUserNotification @ 0x180036ED0
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateMonitorTimeSinceLogonReset @ 0x180036F20 (CrmStateMonitorTimeSinceLogonReset.c)
 */

__int64 __fastcall PsmCrmSessionUserNotification(int a1)
{
  __int64 result; // rax

  if ( a1 == 6 )
    return CrmGlobalsRundown((__int64)&CrmGlobals);
  if ( a1 == 5 )
  {
    RtlAcquireSRWLockShared(&CrmGlobals);
    if ( qword_1800929E8 )
      CrmStateMonitorTimeSinceLogonReset();
    return RtlReleaseSRWLockShared(&CrmGlobals);
  }
  return result;
}
