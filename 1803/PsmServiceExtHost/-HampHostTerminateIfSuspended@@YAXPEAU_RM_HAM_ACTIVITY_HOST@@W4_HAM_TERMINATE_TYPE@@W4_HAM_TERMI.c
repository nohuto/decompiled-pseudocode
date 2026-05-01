/*
 * XREFs of ?HampHostTerminateIfSuspended@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAE@Z @ 0x1800655D0
 * Callers:
 *     ?HampOplockCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180033680 (-HampOplockCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 *     ?HampManagerTerminateHostIfSuspended@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAE@Z @ 0x18003381C (-HampManagerTerminateHostIfSuspended@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KW4_HAM_TERMINATE_TYPE@@W4_.c)
 * Callees:
 *     ?HampHostQueueTerminate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@@Z @ 0x180006920 (-HampHostQueueTerminate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_R.c)
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000FD20 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180014210 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     _TlgCreateWsz @ 0x180014DC0 (_TlgCreateWsz.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001B210 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

void __fastcall HampHostTerminateIfSuspended(__int64 a1, int a2, unsigned int a3, unsigned __int8 *a4)
{
  int v8; // esi
  unsigned __int8 v9; // di
  int v10; // r10d
  int v11; // [rsp+30h] [rbp-59h] BYREF
  int v12; // [rsp+34h] [rbp-55h] BYREF
  unsigned int v13; // [rsp+38h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-29h] BYREF
  int *v16; // [rsp+70h] [rbp-19h]
  int v17; // [rsp+78h] [rbp-11h]
  int v18; // [rsp+7Ch] [rbp-Dh]
  int *v19; // [rsp+80h] [rbp-9h]
  int v20; // [rsp+88h] [rbp-1h]
  int v21; // [rsp+8Ch] [rbp+3h]
  unsigned int *v22; // [rsp+90h] [rbp+7h]
  int v23; // [rsp+98h] [rbp+Fh]
  int v24; // [rsp+9Ch] [rbp+13h]

  v8 = 0;
  v9 = 0;
  HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)a1, 0);
  if ( *(char *)(a1 + 1092) < 0 || *(char *)(a1 + 1096) < 0 )
  {
    v9 = 1;
    v8 = HampHostQueueTerminate(a1, 1u, a3, 0LL, 1);
  }
  HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)a1);
  *a4 = v9;
  if ( v8 )
    HampDepGroupRunStateChangeWorker(*(struct _HAM_DEPENDENCY_GROUP **)(a1 + 664));
  if ( _volatile_metadata > 4u )
  {
    TlgCreateWsz(&pDesc, (LPCWSTR)(a1 + 24));
    v18 = 0;
    v21 = 0;
    v24 = 0;
    v16 = &v11;
    v19 = &v12;
    v22 = &v13;
    v11 = v9;
    v17 = v10;
    v12 = a2;
    v20 = v10;
    v13 = a3;
    v23 = v10;
    TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_180082C47, 0LL, 0LL, 6u, &pData);
  }
}
