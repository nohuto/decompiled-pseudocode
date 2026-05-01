/*
 * XREFs of ?RmpActivatorUnsubscribeFromNotifications@@YAJPEAU_RM_ACTIVATOR@@_K@Z @ 0x180031EBC
 * Callers:
 *     ?RmSrvHostNotificationUnsubscribe@@YAJPEAU_RM_ACTIVATOR@@_K@Z @ 0x180031D48 (-RmSrvHostNotificationUnsubscribe@@YAJPEAU_RM_ACTIVATOR@@_K@Z.c)
 * Callees:
 *     ?RmpHostSubscriptionCompareForRtlTree@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x180027C64 (-RmpHostSubscriptionCompareForRtlTree@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?RmpHostSubscriptionCleanup@@YAXPEAU_RM_HOST_SUBSCRIPTION@@K@Z @ 0x180031F70 (-RmpHostSubscriptionCleanup@@YAXPEAU_RM_HOST_SUBSCRIPTION@@K@Z.c)
 */

__int64 __fastcall RmpActivatorUnsubscribeFromNotifications(struct _RM_ACTIVATOR *a1, __int64 a2)
{
  __int64 v2; // rax
  struct _RTL_BALANCED_NODE **v3; // rcx
  unsigned int v4; // edi
  unsigned __int64 v5; // rbx
  int v6; // esi
  int v7; // eax
  unsigned __int64 v8; // rax
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = a2;
  v2 = *((_QWORD *)a1 + 6);
  v3 = (struct _RTL_BALANCED_NODE **)((char *)a1 + 40);
  v4 = 0;
  v5 = (unsigned __int64)*v3;
  if ( (v2 & 1) != 0 )
  {
    if ( v5 )
      v5 ^= (unsigned __int64)v3;
    else
      v5 = 0LL;
  }
  v6 = v2 & 1;
  if ( !v5 )
    return (unsigned int)-1073741275;
  do
  {
    v7 = RmpHostSubscriptionCompareForRtlTree(&v10, (struct _RTL_BALANCED_NODE *)v5);
    if ( v7 >= 0 )
    {
      if ( v7 <= 0 )
        break;
      v8 = *(_QWORD *)(v5 + 8);
    }
    else
    {
      v8 = *(_QWORD *)v5;
    }
    if ( v6 && v8 )
      v5 ^= v8;
    else
      v5 = v8;
  }
  while ( v5 );
  if ( v5 )
  {
    RmpHostSubscriptionCleanup((struct _RM_HOST_SUBSCRIPTION *)(v5 - 24), 0);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)(v5 - 24));
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return v4;
}
