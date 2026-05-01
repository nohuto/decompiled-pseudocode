/*
 * XREFs of CrmStateMonitorCleanup @ 0x18006A644
 * Callers:
 *     CrmRegisterToStateMonitor @ 0x180039818 (CrmRegisterToStateMonitor.c)
 *     CrmStateMonitorRegistrationRemove @ 0x18006A6E0 (CrmStateMonitorRegistrationRemove.c)
 * Callees:
 *     CrmStateMonitorTestCleanup @ 0x18006A850 (CrmStateMonitorTestCleanup.c)
 */

char __fastcall CrmStateMonitorCleanup(__int64 a1)
{
  bool v2; // zf
  void *v3; // rcx
  __int64 v4; // rcx

  if ( *(int *)a1 > 10 )
  {
    if ( *(_DWORD *)a1 != 11 )
    {
      if ( *(int *)a1 <= 11 )
        return CrmLogStateMonitorStop((int *)a1);
      if ( *(int *)a1 <= 14 )
      {
LABEL_8:
        if ( *(_QWORD *)(a1 + 72) )
          RtlUnsubscribeWnfNotificationWaitForCompletion();
        return CrmLogStateMonitorStop((int *)a1);
      }
      v2 = *(_DWORD *)a1 == 15;
LABEL_7:
      if ( !v2 )
        return CrmLogStateMonitorStop((int *)a1);
      goto LABEL_8;
    }
    goto LABEL_17;
  }
  if ( *(_DWORD *)a1 == 10 )
  {
LABEL_17:
    v4 = *(_QWORD *)(a1 + 64);
    if ( v4 )
    {
      TpSetTimer(v4, 0LL, 0LL, 0LL);
      TpWaitForTimer(*(_QWORD *)(a1 + 64), 1LL);
      TpReleaseTimer(*(_QWORD *)(a1 + 64));
    }
    return CrmLogStateMonitorStop((int *)a1);
  }
  if ( *(int *)a1 < 0 )
    return CrmLogStateMonitorStop((int *)a1);
  if ( *(int *)a1 <= 1 )
  {
    CrmStateMonitorTestCleanup();
    return CrmLogStateMonitorStop((int *)a1);
  }
  if ( *(int *)a1 > 7 )
  {
    v2 = *(_DWORD *)a1 == 8;
    goto LABEL_7;
  }
  v3 = *(void **)(a1 + 64);
  if ( v3 )
    PowerSettingUnregisterNotification(v3);
  return CrmLogStateMonitorStop((int *)a1);
}
