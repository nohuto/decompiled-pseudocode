/*
 * XREFs of ?HampPkgNotifyDebugModeChanged@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18006772C
 * Callers:
 *     ?HampClientPkgDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x180004E30 (-HampClientPkgDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z.c)
 *     ?HampClientPkgEnableDebugging@@YAJPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@@Z @ 0x180067968 (-HampClientPkgEnableDebugging@@YAJPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@@Z.c)
 * Callees:
 *     ?HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERARCHY_DEPTH@@PEAU1@@Z @ 0x180005E9C (-HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERAR.c)
 */

void __fastcall HampPkgNotifyDebugModeChanged(struct _HAM_PACKAGE *a1)
{
  __int64 v1; // r8
  struct _RM_HAM_ACTIVITY_HOST *v2; // rax
  struct _RM_HAM_ACTIVITY_HOST *v3; // rbx

  v1 = 0LL;
  while ( 1 )
  {
    v2 = HampHostEnumerateHostsInNode(a1, 3, v1);
    v3 = v2;
    if ( !v2 )
      break;
    RtlWakeAllConditionVariable((char *)v2 + 656);
    v1 = (__int64)v3;
    a1 = *(struct _HAM_PACKAGE **)(*((_QWORD *)v3 + 93) + 88LL);
  }
}
