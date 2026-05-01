/*
 * XREFs of CemRcTableGetFirst @ 0x18001F640
 * Callers:
 *     ?HampClientDestroy@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18001F4E4 (-HampClientDestroy@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampManagerSystemStateChanged@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180025570 (-HampManagerSystemStateChanged@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 *     ?HampPkgGetFirstHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_PACKAGE@@@Z @ 0x180046980 (-HampPkgGetFirstHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_PACKAGE@@@Z.c)
 * Callees:
 *     CempRcTableGetFirstActiveObject @ 0x18001F684 (CempRcTableGetFirstActiveObject.c)
 */

__int64 __fastcall CemRcTableGetFirst(__int64 a1)
{
  __int64 v1; // rdi
  __int64 FirstActiveObject; // rbx

  v1 = a1 + 16;
  RtlAcquireSRWLockShared(a1 + 16);
  FirstActiveObject = CempRcTableGetFirstActiveObject(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFFEuLL);
  RtlReleaseSRWLockShared(v1);
  return FirstActiveObject;
}
