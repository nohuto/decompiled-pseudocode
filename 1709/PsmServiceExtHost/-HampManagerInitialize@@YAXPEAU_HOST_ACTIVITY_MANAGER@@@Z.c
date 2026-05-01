/*
 * XREFs of ?HampManagerInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18002459C
 * Callers:
 *     ?RmpInitializeAllModules@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800242F0 (-RmpInitializeAllModules@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     CemRcTableInitialize @ 0x18001CA58 (CemRcTableInitialize.c)
 *     memset_0 @ 0x180026AAB (memset_0.c)
 */

void __fastcall HampManagerInitialize(struct _HOST_ACTIVITY_MANAGER *a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rcx

  memset(HampNextHandleValues, 0xFFu, sizeof(HampNextHandleValues));
  memset_0(a1, 0, 0x108uLL);
  RtlInitializeSRWLock(a1);
  *((_DWORD *)a1 + 2) = 0;
  v2 = (_QWORD *)((char *)a1 + 16);
  v3 = 4LL;
  do
  {
    v2[1] = v2;
    *v2 = v2;
    v2 += 2;
    --v3;
  }
  while ( v3 );
  CemRcTableInitialize((__int64)HampActDestroy, (_QWORD *)a1 + 22);
  CemRcTableInitialize((__int64)HampPkgDestroy, (_QWORD *)a1 + 16);
  CemRcTableInitialize((__int64)HampSessionDestroy, (_QWORD *)a1 + 10);
}
