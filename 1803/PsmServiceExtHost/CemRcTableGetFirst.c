/*
 * XREFs of CemRcTableGetFirst @ 0x1800060D0
 * Callers:
 *     ?HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z @ 0x180006068 (-HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z.c)
 *     ?HampClientRundownObjects@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x1800347D0 (-HampClientRundownObjects@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampManagerSystemStateChangedCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18003DC70 (-HampManagerSystemStateChangedCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 *     ?HampWakeManagerNotifyConnectedStandbyExit@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x180068C30 (-HampWakeManagerNotifyConnectedStandbyExit@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 *     ?HampWakeManagerPreRundown@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x180068C78 (-HampWakeManagerPreRundown@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 * Callees:
 *     CempRcTableGetFirstActiveObject @ 0x18000612C (CempRcTableGetFirstActiveObject.c)
 */

__int64 __fastcall CemRcTableGetFirst(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 FirstActiveObject; // rbx

  v1 = a1 + 16;
  RtlAcquireSRWLockShared(a1 + 16);
  v3 = *(_QWORD *)(a1 + 8);
  if ( (v3 & 1) != 0 )
  {
    if ( v3 == 1 )
      v4 = 0LL;
    else
      v4 = v3 ^ (a1 | 1);
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 8);
  }
  FirstActiveObject = CempRcTableGetFirstActiveObject(v4);
  RtlReleaseSRWLockShared(v1);
  return FirstActiveObject;
}
