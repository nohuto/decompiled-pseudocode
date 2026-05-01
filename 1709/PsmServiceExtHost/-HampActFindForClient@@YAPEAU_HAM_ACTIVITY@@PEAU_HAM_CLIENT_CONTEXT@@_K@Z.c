/*
 * XREFs of ?HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x180047634
 * Callers:
 *     ?HamSrvCloseActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x180041B64 (-HamSrvCloseActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 *     ?HamSrvCompleteExtendedExecution@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x180041CBC (-HamSrvCompleteExtendedExecution@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 *     ?HamSrvStartActivityAsync@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_ACTIVITY_START_TYPE@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180042828 (-HamSrvStartActivityAsync@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_ACTIVITY_START_TYPE@@PEAU_HAM_AC.c)
 *     ?HamSrvStartExtendedExecutionAsync@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x180042980 (-HamSrvStartExtendedExecutionAsync@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 *     ?HamSrvStopActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x180042AD8 (-HamSrvStopActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 *     ?HamSrvTerminateActivityHost@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_ACTIVITY_HOST_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@@Z @ 0x180042C30 (-HamSrvTerminateActivityHost@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_ACTIVITY_HOST_TERMINATE_TYPE@.c)
 * Callees:
 *     CemRcObjectDereference @ 0x1800492EC (CemRcObjectDereference.c)
 *     CemRcTableFind @ 0x1800493B8 (CemRcTableFind.c)
 */

struct _HAM_ACTIVITY *__fastcall HampActFindForClient(struct _HAM_CLIENT_CONTEXT *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = a2;
  v3 = CemRcTableFind(*(_QWORD *)a1 + 176LL, &v9, HampActCompareByHandle);
  v7 = 0LL;
  if ( v3 )
  {
    if ( *(struct _HAM_CLIENT_CONTEXT **)(v3 + 64) == a1 )
      return (struct _HAM_ACTIVITY *)v3;
  }
  else
  {
    v3 = 0LL;
  }
  if ( v3 )
    CemRcObjectDereference(v3, v4, v5, v6);
  return (struct _HAM_ACTIVITY *)v7;
}
