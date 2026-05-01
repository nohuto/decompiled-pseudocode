/*
 * XREFs of ?HampHostDepDestroy@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x180045698
 * Callers:
 *     ?HampDepGroupAddDependency@@YAJPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HOST_ACTIVITY_MANAGER@@PEAX2@Z @ 0x180044290 (-HampDepGroupAddDependency@@YAJPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HOST_ACTIVITY_MANAGER@@PEAX2@Z.c)
 *     ?HampActDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x180047480 (-HampActDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z.c)
 * Callees:
 *     ?HampHostDepCleanup@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x1800455F8 (-HampHostDepCleanup@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z.c)
 */

void __fastcall HampHostDepDestroy(struct _HAM_HOST_DEPENDENCY *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *((_QWORD *)a1 + 4);
  if ( v2 )
  {
    TpSetWait(v2, 0LL, 0LL);
    TpWaitForWait(*((_QWORD *)a1 + 4), 1LL);
  }
  v3 = *((_QWORD *)a1 + 5);
  if ( v3 )
  {
    TpSetWait(v3, 0LL, 0LL);
    TpWaitForWait(*((_QWORD *)a1 + 5), 1LL);
  }
  HampHostDepCleanup(a1);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
