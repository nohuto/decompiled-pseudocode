/*
 * XREFs of ?RmpActivatorCleanup@@YAXPEAU_RM_ACTIVATOR@@@Z @ 0x180035454
 * Callers:
 *     ?Handle_RM_ConnectToServer@ResourceManagerServerProxy@@QEAAJPEAXPEAPEAXPEAU_WNF_STATE_NAME@@@Z @ 0x1800250A0 (-Handle_RM_ConnectToServer@ResourceManagerServerProxy@@QEAAJPEAXPEAPEAXPEAU_WNF_STATE_NAME@@@Z.c)
 *     ?RmpCoreApiConnectToRmServer@@YAJPEAT_RM_SID@@KPEAPEAU_RM_ACTIVATOR@@PEAU_WNF_STATE_NAME@@@Z @ 0x180025188 (-RmpCoreApiConnectToRmServer@@YAJPEAT_RM_SID@@KPEAPEAU_RM_ACTIVATOR@@PEAU_WNF_STATE_NAME@@@Z.c)
 *     ?RmpActivatorRegister@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAT_RM_SID@@KPEAPEAU_RM_ACTIVATOR@@@Z @ 0x180025208 (-RmpActivatorRegister@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAT_RM_SID@@KPEAPEAU_RM_ACTIVATOR@@@Z.c)
 *     ?Handle_RM_DisconnectFromServer@ResourceManagerServerProxy@@QEAAJPEAPEAX@Z @ 0x180030B34 (-Handle_RM_DisconnectFromServer@ResourceManagerServerProxy@@QEAAJPEAPEAX@Z.c)
 *     RmpDestroyResourceManagerServer @ 0x180031264 (RmpDestroyResourceManagerServer.c)
 *     RM_CONNECTION_CONTEXT_HANDLE_TYPE_rundown @ 0x1800348C0 (RM_CONNECTION_CONTEXT_HANDLE_TYPE_rundown.c)
 *     RmCoreRpcSrvDisconnectFromRmServer @ 0x180034950 (RmCoreRpcSrvDisconnectFromRmServer.c)
 * Callees:
 *     RmpWnfCleanupPendingCallbackList @ 0x18001F5D0 (RmpWnfCleanupPendingCallbackList.c)
 *     ?RmpHostSubscriptionDeleteForRtlTree@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x180035554 (-RmpHostSubscriptionDeleteForRtlTree@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z.c)
 */

void __fastcall RmpActivatorCleanup(struct _RM_ACTIVATOR *a1)
{
  char v1; // si
  struct _RTL_BALANCED_NODE *v3; // rcx
  int v4; // esi
  struct _RTL_BALANCED_NODE *v5; // rdx
  unsigned __int64 v6; // rax
  struct _RTL_BALANCED_NODE *v7; // rdx
  unsigned __int64 v8; // rdi
  char v9; // al
  _QWORD *v10; // rcx
  _QWORD *v11; // rbx
  __int64 v12; // rcx
  _QWORD *v13; // rax

  v1 = *((_BYTE *)a1 + 48);
  v3 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)a1 + 5);
  v4 = v1 & 1;
  if ( v3 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( v3->Children[0] )
        {
          v5 = v3;
          if ( v4 )
            v3 = (struct _RTL_BALANCED_NODE *)((unsigned __int64)v3->Children[0] ^ (unsigned __int64)v3);
          else
            v3 = v3->Children[0];
          v5->Children[0] = 0LL;
        }
        v6 = (unsigned __int64)v3->Children[1];
        if ( !v6 )
          break;
        v7 = v3;
        if ( v4 )
          v3 = (struct _RTL_BALANCED_NODE *)(v6 ^ (unsigned __int64)v3);
        else
          v3 = v3->Children[1];
        v7->Children[1] = 0LL;
      }
      v8 = v3->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v4 && v8 )
        v8 ^= (unsigned __int64)v3;
      RmpHostSubscriptionDeleteForRtlTree(v3, (void *)1);
      if ( !v8 )
        break;
      v3 = (struct _RTL_BALANCED_NODE *)v8;
    }
  }
  v9 = *((_BYTE *)a1 + 48);
  *((_QWORD *)a1 + 5) = 0LL;
  *((_QWORD *)a1 + 6) = 0LL;
  if ( (v9 & 1) != 0 )
    *((_BYTE *)a1 + 48) |= 1u;
  v10 = (_QWORD *)*((_QWORD *)a1 + 4);
  if ( v10 )
    RmpWnfCleanupPendingCallbackList(v10);
  if ( *((_DWORD *)a1 + 6) || *((_DWORD *)a1 + 7) )
    NtDeleteWnfStateName((char *)a1 + 24);
  v11 = (_QWORD *)((char *)a1 + 8);
  if ( *v11 )
  {
    v12 = *v11;
    if ( *(_QWORD **)(*v11 + 8LL) != v11 || (v13 = (_QWORD *)v11[1], (_QWORD *)*v13 != v11) )
      __fastfail(3u);
    *v13 = v12;
    *(_QWORD *)(v12 + 8) = v13;
  }
}
