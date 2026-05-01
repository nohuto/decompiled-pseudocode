/*
 * XREFs of CemRcTableGetNext @ 0x180005FE4
 * Callers:
 *     ?HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z @ 0x180005F40 (-HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z.c)
 *     ?HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z @ 0x180006068 (-HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z.c)
 *     ?HampClientRundownObjects@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x1800347D0 (-HampClientRundownObjects@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampManagerSystemStateChangedCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18003DC70 (-HampManagerSystemStateChangedCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 *     ?HampWakeManagerNotifyConnectedStandbyExit@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x180068C30 (-HampWakeManagerNotifyConnectedStandbyExit@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 *     ?HampWakeManagerPreRundown@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x180068C78 (-HampWakeManagerPreRundown@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 * Callees:
 *     CempRcTableGetFirstActiveObject @ 0x18000612C (CempRcTableGetFirstActiveObject.c)
 *     CemRcObjectDereference @ 0x180024A90 (CemRcObjectDereference.c)
 */

__int64 __fastcall CemRcTableGetNext(struct _CEM_RC_OBJECT *a1)
{
  unsigned __int64 v2; // rsi
  _QWORD **v3; // rcx
  struct _CEM_RC_OBJECT *v4; // rax
  __int64 j; // rcx
  struct _CEM_RC_OBJECT *v6; // rcx
  __int64 FirstActiveObject; // rbx
  _QWORD *i; // rdx

  v2 = *((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL;
  RtlAcquireSRWLockShared(v2 + 16);
  v3 = (_QWORD **)*((_QWORD *)a1 + 1);
  v4 = a1;
  if ( v3 )
  {
    for ( i = *v3; i; i = (_QWORD *)*i )
      ;
  }
  else
  {
    for ( j = *((_QWORD *)a1 + 2); ; j = *((_QWORD *)v6 + 2) )
    {
      v6 = (struct _CEM_RC_OBJECT *)(j & 0xFFFFFFFFFFFFFFFCuLL);
      if ( !v6 || *(struct _CEM_RC_OBJECT **)v6 == v4 )
        break;
      v4 = v6;
    }
  }
  FirstActiveObject = CempRcTableGetFirstActiveObject();
  RtlReleaseSRWLockShared(v2 + 16);
  CemRcObjectDereference(a1);
  return FirstActiveObject;
}
