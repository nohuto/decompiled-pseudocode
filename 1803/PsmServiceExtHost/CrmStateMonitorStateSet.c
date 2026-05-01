/*
 * XREFs of CrmStateMonitorStateSet @ 0x180005574
 * Callers:
 *     CrmStateMonitorTimeSinceBootCallback @ 0x180005460 (CrmStateMonitorTimeSinceBootCallback.c)
 *     CrmStateMonitorTimeSinceLogonCallback @ 0x180005520 (CrmStateMonitorTimeSinceLogonCallback.c)
 *     PsmCrmSuspendNotification @ 0x180035330 (PsmCrmSuspendNotification.c)
 *     CrmStateMonitorSebCallback @ 0x180036A70 (CrmStateMonitorSebCallback.c)
 *     CrmStateMonitorTimeSinceLogonReset @ 0x180036F20 (CrmStateMonitorTimeSinceLogonReset.c)
 *     CrmStateMonitorPowerSettingsCallback @ 0x180036FA0 (CrmStateMonitorPowerSettingsCallback.c)
 *     CrmStateMonitorWNFCallback @ 0x18003E150 (CrmStateMonitorWNFCallback.c)
 *     CrmStateMonitorWorkerThread @ 0x18006A940 (CrmStateMonitorWorkerThread.c)
 * Callees:
 *     CrmLogStateMonitorStateSet @ 0x180005620 (CrmLogStateMonitorStateSet.c)
 *     CrmStateMonitorLogDataGet @ 0x180005764 (CrmStateMonitorLogDataGet.c)
 *     CrmRegistrationUpdate @ 0x180005820 (CrmRegistrationUpdate.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180041D16 (memcpy_0.c)
 */

__int64 __fastcall CrmStateMonitorStateSet(void **a1, const void *a2, size_t a3)
{
  unsigned int *i; // rbx
  _BYTE v8[40]; // [rsp+20h] [rbp-58h] BYREF

  RtlAcquireSRWLockExclusive(a1 + 1);
  *((_DWORD *)a1 + 4) = GetCurrentThreadId();
  CrmStateMonitorLogDataGet(a1, v8, a2);
  memcpy_0(a1[5], a2, a3);
  for ( i = (unsigned int *)a1[3]; i != (unsigned int *)(a1 + 3); i = *(unsigned int **)i )
    CrmRegistrationUpdate(*((_QWORD *)i - 4), i - 8, *(unsigned int *)a1, a2);
  *((_DWORD *)a1 + 4) = 0;
  RtlReleaseSRWLockExclusive(a1 + 1);
  return CrmLogStateMonitorStateSet(a1, v8);
}
