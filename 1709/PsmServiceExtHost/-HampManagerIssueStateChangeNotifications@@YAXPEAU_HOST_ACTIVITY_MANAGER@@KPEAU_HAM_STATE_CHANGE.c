/*
 * XREFs of ?HampManagerIssueStateChangeNotifications@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KPEAU_HAM_STATE_CHANGE_NOTIFICATION_PAYLOAD@@@Z @ 0x180042E1C
 * Callers:
 *     ?HampAppIssueStateChangeNotification@@YAXPEAU_HAM_APPLICATION@@W4_HAM_EXTERNAL_APPLICATION_STATE@@@Z @ 0x18004631C (-HampAppIssueStateChangeNotification@@YAXPEAU_HAM_APPLICATION@@W4_HAM_EXTERNAL_APPLICATION_STATE.c)
 *     ?HampPkgIssueStateChangeNotification@@YAXPEAU_HAM_PACKAGE@@W4_HAM_EXTERNAL_APPLICATION_STATE@@@Z @ 0x180046CEC (-HampPkgIssueStateChangeNotification@@YAXPEAU_HAM_PACKAGE@@W4_HAM_EXTERNAL_APPLICATION_STATE@@@Z.c)
 * Callees:
 *     RmpWnfPublishMessageToClientStateName @ 0x18001F138 (RmpWnfPublishMessageToClientStateName.c)
 *     ?HampManagerAcquireLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180042DF8 (-HampManagerAcquireLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 */

void __fastcall HampManagerIssueStateChangeNotifications(
        struct _HOST_ACTIVITY_MANAGER *a1,
        __int64 a2,
        struct _HAM_STATE_CHANGE_NOTIFICATION_PAYLOAD *a3)
{
  __int64 **v4; // rsi
  int v5; // ebp
  __int64 *i; // rbx

  v4 = (__int64 **)((char *)a1 + 48);
  v5 = a2;
  HampManagerAcquireLockShared(a1, a2);
  for ( i = *v4; i != (__int64 *)v4; i = (__int64 *)*i )
  {
    if ( !v5 || !*((_DWORD *)i + 30) || v5 == *((_DWORD *)i + 30) )
      RmpWnfPublishMessageToClientStateName(i + 12, a3, 0x154u, i[13]);
  }
  HampManagerReleaseLockShared(a1);
}
