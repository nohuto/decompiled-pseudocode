/*
 * XREFs of ?RmpHostSubscriptionCompareForRtlTree@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x180027C64
 * Callers:
 *     ?RmpActivatorSubscribeForNotifications@@YAJPEAU_RM_ACTIVATOR@@PEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x180027B30 (-RmpActivatorSubscribeForNotifications@@YAJPEAU_RM_ACTIVATOR@@PEAU_RM_ACTIVITY_HOST@@PEA_K@Z.c)
 *     ?RmpActivatorUnsubscribeFromNotifications@@YAJPEAU_RM_ACTIVATOR@@_K@Z @ 0x180031EBC (-RmpActivatorUnsubscribeFromNotifications@@YAJPEAU_RM_ACTIVATOR@@_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpHostSubscriptionCompareForRtlTree(_QWORD *a1, struct _RTL_BALANCED_NODE *a2)
{
  struct _RTL_BALANCED_NODE *v2; // r8

  v2 = a2[-1].Children[0];
  if ( *a1 < (unsigned __int64)v2 )
    return 0xFFFFFFFFLL;
  else
    return *a1 > (unsigned __int64)v2;
}
