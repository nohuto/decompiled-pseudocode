/*
 * XREFs of ?RmpQoSRundown@@YAXPEAU_RM_QOS_CONTEXT@@@Z @ 0x18003FD18
 * Callers:
 *     ?RmpEnforcerContextRundown@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18003B31C (-RmpEnforcerContextRundown@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     ?RmpQoSGetEarliestHostInfo@@YAPEAU_RM_ACTIVITY_ENFORCEMENT_INFO@@PEAU_RM_QOS_CONTEXT@@@Z @ 0x180003CE4 (-RmpQoSGetEarliestHostInfo@@YAPEAU_RM_ACTIVITY_ENFORCEMENT_INFO@@PEAU_RM_QOS_CONTEXT@@@Z.c)
 *     ?RmpQoSSetForHost@@YAJPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180003CF8 (-RmpQoSSetForHost@@YAJPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostRelease@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001269C (-RmpActivityHostRelease@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 */

void __fastcall RmpQoSRundown(struct _RM_QOS_CONTEXT *a1)
{
  char *v2; // rdi
  _QWORD *v3; // rax
  __int64 v4; // rdx
  _QWORD *v5; // rcx
  struct _RM_ACTIVITY_ENFORCEMENT_INFO *v6; // rax
  __int64 v7; // rcx

  RmpAcquireGlobalLock();
  while ( 1 )
  {
    v6 = RmpQoSGetEarliestHostInfo(a1);
    if ( !v6 )
      break;
    v2 = (char *)v6 - 872;
    *((_DWORD *)v6 + 34) |= 4u;
    RmpQoSSetForHost(a1, (struct _RM_ACTIVITY_ENFORCEMENT_INFO *)((char *)v6 - 872), 0);
    v3 = v2 + 1040;
    v4 = *((_QWORD *)v2 + 130);
    if ( *(char **)(v4 + 8) != v2 + 1040 || (v5 = (_QWORD *)*((_QWORD *)v2 + 131), (_QWORD *)*v5 != v3) )
      __fastfail(3u);
    *v5 = v4;
    *(_QWORD *)(v4 + 8) = v5;
    *v3 = 0LL;
    *((_QWORD *)v2 + 131) = 0LL;
    RmpActivityHostRelease(v2);
  }
  RmpReleaseGlobalLock();
  v7 = *((_QWORD *)a1 + 2);
  if ( v7 )
  {
    TpSetTimer(v7, 0LL, 0LL, 0LL);
    TpWaitForTimer(*((_QWORD *)a1 + 2), 1LL);
  }
}
