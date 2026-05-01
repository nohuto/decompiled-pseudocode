/*
 * XREFs of CemRcTableInitialize @ 0x18002A2D0
 * Callers:
 *     ?HampClientInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KKW4_HAM_CLIENT_TYPE@@PEAU_HAM_LOCAL_CALLBACKS@@PEAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18002A190 (-HampClientInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KKW4_HAM_CLIENT_TYPE@@PEAU_HAM_LOCAL_CALLB.c)
 *     ?HamRcNodeInitialize@@YAXP6AXPEAU_CEM_RC_OBJECT@@@ZPEAU_HAM_RC_TREE_NODE@@2@Z @ 0x18002A254 (-HamRcNodeInitialize@@YAXP6AXPEAU_CEM_RC_OBJECT@@@ZPEAU_HAM_RC_TREE_NODE@@2@Z.c)
 *     ?HampSessionInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KPEAU_HAM_SESSION@@@Z @ 0x180036868 (-HampSessionInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KPEAU_HAM_SESSION@@@Z.c)
 *     ?HampManagerInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180038014 (-HampManagerInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 * Callees:
 *     memset_0 @ 0x180041D1C (memset_0.c)
 */

__int64 __fastcall CemRcTableInitialize(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  memset_0(a2, 0, 0x30uLL);
  *a2 = 0LL;
  a2[1] = 0LL;
  RtlInitializeSRWLock(a2 + 2);
  result = RtlInitializeConditionVariable(a2 + 4);
  a2[3] = a1;
  return result;
}
