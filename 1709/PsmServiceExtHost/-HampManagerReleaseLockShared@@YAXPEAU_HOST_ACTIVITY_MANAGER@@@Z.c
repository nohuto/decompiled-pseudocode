/*
 * XREFs of ?HampManagerReleaseLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180042E9C
 * Callers:
 *     ?HampManagerIssueStateChangeNotifications@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KPEAU_HAM_STATE_CHANGE_NOTIFICATION_PAYLOAD@@@Z @ 0x180042E1C (-HampManagerIssueStateChangeNotifications@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KPEAU_HAM_STATE_CHANGE.c)
 *     ?HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180042EC0 (-HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampActIsAllowed@@YAKPEAU_HAM_ACTIVITY@@@Z @ 0x1800479A8 (-HampActIsAllowed@@YAKPEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     CempLockTrackerMarkReleased @ 0x180017F3C (CempLockTrackerMarkReleased.c)
 */

void __fastcall HampManagerReleaseLockShared(struct _HOST_ACTIVITY_MANAGER *a1, __int64 a2)
{
  CempLockTrackerMarkReleased((__int64)a1, a2, 6u);
  RtlReleaseSRWLockShared(a1);
}
