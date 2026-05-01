/*
 * XREFs of CrmStateMonitorTimeSinceLogonReset @ 0x180036F20
 * Callers:
 *     PsmCrmSessionUserNotification @ 0x180036ED0 (PsmCrmSessionUserNotification.c)
 * Callees:
 *     CrmStateMonitorStateSet @ 0x180005574 (CrmStateMonitorStateSet.c)
 */

__int64 __fastcall CrmStateMonitorTimeSinceLogonReset(__int64 a1)
{
  __int64 v2; // rcx
  int v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  TpSetTimer(*(_QWORD *)(a1 + 64), 0LL, 0LL, 0LL);
  TpWaitForTimer(*(_QWORD *)(a1 + 64), 1LL);
  v4 = 0;
  CrmStateMonitorStateSet((void **)a1, &v4, 4uLL);
  v2 = *(_QWORD *)(a1 + 64);
  *(_DWORD *)(a1 + 60) = 30;
  v5 = -300000000LL;
  return TpSetTimer(v2, &v5, 0LL, 0LL);
}
