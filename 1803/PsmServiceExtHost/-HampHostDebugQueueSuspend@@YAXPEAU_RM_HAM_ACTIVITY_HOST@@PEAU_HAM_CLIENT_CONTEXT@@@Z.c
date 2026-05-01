/*
 * XREFs of ?HampHostDebugQueueSuspend@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180064F50
 * Callers:
 *     ?HampPkgSuspend@@YAJPEAU_HAM_PACKAGE@@PEAU_HAM_CLIENT_CONTEXT@@PEAW4_HAM_EXTERNAL_APPLICATION_STATE@@@Z @ 0x18006776C (-HampPkgSuspend@@YAJPEAU_HAM_PACKAGE@@PEAU_HAM_CLIENT_CONTEXT@@PEAW4_HAM_EXTERNAL_APPLICATION_ST.c)
 * Callees:
 *     ?HampActCanBeInvalidated@@YAKPEAU_HAM_ACTIVITY@@@Z @ 0x180006784 (-HampActCanBeInvalidated@@YAKPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z @ 0x1800087C8 (-HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180014210 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800165D0 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001A390 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001B210 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampActRequestStop@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@W4_HAM_TERMINATE_REASON@@KPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180040EFC (-HampActRequestStop@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_ST.c)
 */

void __fastcall HampHostDebugQueueSuspend(struct _RM_HAM_ACTIVITY_HOST *a1, struct _HAM_CLIENT_CONTEXT *a2)
{
  __int64 *v4; // rbx
  struct _HAM_ACTIVITY *i; // rax
  __int64 v6; // rcx
  struct _HAM_ACTIVITY *v7; // rbx
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  HampHostAcquireLockExclusiveEx(a1, 0);
  v4 = (__int64 *)((char *)a1 + 632);
  while ( (*v4 & 0x1000000000000LL) != 0 )
  {
    v8 = *v4;
    HampHostReleaseLockExclusiveEx(a1);
    RtlWaitOnAddress((char *)a1 + 632, &v8, 8LL, 0LL);
    HampHostAcquireLockExclusiveEx(a1, 0);
  }
  *v4 |= 0x1000000000000uLL;
  for ( i = HampHostGetFirstActivity(a1); ; i = HampHostGetNextActivity(v7) )
  {
    v7 = i;
    if ( !i )
      break;
    if ( HampActCanBeInvalidated(i) && *((_BYTE *)v7 + 540) == 3 )
      HampActRequestStop(v6, 1u, 6, 6400, 0, (__int64)a2);
  }
  HampHostCheckQueueStateWorker(a1, 0);
  HampHostReleaseLockExclusiveEx(a1);
}
