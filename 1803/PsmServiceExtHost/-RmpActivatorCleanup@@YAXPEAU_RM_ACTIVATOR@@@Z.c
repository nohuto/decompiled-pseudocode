/*
 * XREFs of ?RmpActivatorCleanup@@YAXPEAU_RM_ACTIVATOR@@@Z @ 0x180053A94
 * Callers:
 *     ?Handle_RM_ConnectToServer@ResourceManagerServerProxy@@QEAAJPEAXPEAPEAXPEAU_WNF_STATE_NAME@@@Z @ 0x18003D7A0 (-Handle_RM_ConnectToServer@ResourceManagerServerProxy@@QEAAJPEAXPEAPEAXPEAU_WNF_STATE_NAME@@@Z.c)
 *     ?RmpCoreApiConnectToRmServer@@YAJPEAT_RM_SID@@KPEAPEAU_RM_ACTIVATOR@@PEAU_WNF_STATE_NAME@@@Z @ 0x18003D890 (-RmpCoreApiConnectToRmServer@@YAJPEAT_RM_SID@@KPEAPEAU_RM_ACTIVATOR@@PEAU_WNF_STATE_NAME@@@Z.c)
 *     ?RmpActivatorRegister@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAT_RM_SID@@KPEAPEAU_RM_ACTIVATOR@@@Z @ 0x18003D910 (-RmpActivatorRegister@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAT_RM_SID@@KPEAPEAU_RM_ACTIVATOR@@@Z.c)
 *     ?Handle_RM_DisconnectFromServer@ResourceManagerServerProxy@@QEAAJPEAPEAX@Z @ 0x18004DDC4 (-Handle_RM_DisconnectFromServer@ResourceManagerServerProxy@@QEAAJPEAPEAX@Z.c)
 *     ?RmpRundownAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18004E354 (-RmpRundownAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     RM_CONNECTION_CONTEXT_HANDLE_TYPE_rundown @ 0x180051D70 (RM_CONNECTION_CONTEXT_HANDLE_TYPE_rundown.c)
 *     RmCoreRpcSrvDisconnectFromRmServer @ 0x180051E00 (RmCoreRpcSrvDisconnectFromRmServer.c)
 * Callees:
 *     RmpWnfCleanupPendingCallbackList @ 0x1800348AC (RmpWnfCleanupPendingCallbackList.c)
 *     ?RmpHostSubscriptionDeleteForRtlTree@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x180053BA8 (-RmpHostSubscriptionDeleteForRtlTree@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z.c)
 */

void __fastcall RmpActivatorCleanup(struct _RM_ACTIVATOR *a1)
{
  unsigned __int64 v1; // rdi
  __int64 v3; // rax
  struct _RTL_BALANCED_NODE *v4; // rcx
  int v5; // ebp
  struct _RTL_BALANCED_NODE *v6; // rdx
  unsigned __int64 v7; // rax
  struct _RTL_BALANCED_NODE *v8; // rdx
  unsigned __int64 v9; // rbx
  _QWORD *v10; // rcx
  char *v11; // rcx
  __int64 v12; // rax
  char **v13; // rdx

  v1 = (unsigned __int64)a1 + 40;
  v3 = *((_QWORD *)a1 + 6);
  v4 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)a1 + 5);
  if ( (v3 & 1) != 0 && v4 )
    v4 = (struct _RTL_BALANCED_NODE *)(v1 ^ (unsigned __int64)v4);
  v5 = v3 & 1;
  if ( v4 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( v4->Children[0] )
        {
          v6 = v4;
          if ( v5 )
            v4 = (struct _RTL_BALANCED_NODE *)((unsigned __int64)v4->Children[0] ^ (unsigned __int64)v4);
          else
            v4 = v4->Children[0];
          v6->Children[0] = 0LL;
        }
        v7 = (unsigned __int64)v4->Children[1];
        if ( !v7 )
          break;
        v8 = v4;
        if ( v5 )
          v4 = (struct _RTL_BALANCED_NODE *)(v7 ^ (unsigned __int64)v4);
        else
          v4 = v4->Children[1];
        v8->Children[1] = 0LL;
      }
      v9 = v4->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v5 && v9 )
        v9 ^= (unsigned __int64)v4;
      RmpHostSubscriptionDeleteForRtlTree(v4, (void *)1);
      if ( !v9 )
        break;
      v4 = (struct _RTL_BALANCED_NODE *)v9;
    }
    LOBYTE(v3) = *(_BYTE *)(v1 + 8);
  }
  *(_QWORD *)v1 = 0LL;
  *(_QWORD *)(v1 + 8) = 0LL;
  if ( (v3 & 1) != 0 )
    *(_BYTE *)(v1 + 8) = 1;
  v10 = (_QWORD *)*((_QWORD *)a1 + 4);
  if ( v10 )
    RmpWnfCleanupPendingCallbackList(v10);
  if ( *((_DWORD *)a1 + 6) || *((_DWORD *)a1 + 7) )
    NtDeleteWnfStateName((char *)a1 + 24);
  v11 = (char *)a1 + 8;
  v12 = *((_QWORD *)a1 + 1);
  if ( v12 )
  {
    if ( *(char **)(v12 + 8) != v11 || (v13 = (char **)*((_QWORD *)a1 + 2), *v13 != v11) )
      __fastfail(3u);
    *v13 = (char *)v12;
    *(_QWORD *)(v12 + 8) = v13;
  }
}
