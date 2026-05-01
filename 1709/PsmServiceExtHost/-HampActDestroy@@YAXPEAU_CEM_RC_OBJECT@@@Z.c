/*
 * XREFs of ?HampActDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x180047480
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180019FA0 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostDepDestroy@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x180045698 (-HampHostDepDestroy@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z.c)
 *     ?HampRmContextDestroy@@YAXPEAX@Z @ 0x180045AA0 (-HampRmContextDestroy@@YAXPEAX@Z.c)
 *     CemRcObjectCleanup @ 0x1800492B8 (CemRcObjectCleanup.c)
 */

void __fastcall HampActDestroy(struct _CEM_RC_OBJECT *a1)
{
  struct _HAM_HOST_DEPENDENCY *v2; // rcx
  __int64 *v3; // rcx
  __int64 v4; // rdi

  if ( (*((_DWORD *)a1 + 124) & 0x180) == 0x80 )
  {
    v2 = (struct _HAM_HOST_DEPENDENCY *)*((_QWORD *)a1 + 8);
    if ( v2 )
      HampHostDepDestroy(v2);
  }
  v3 = (__int64 *)*((_QWORD *)a1 + 10);
  if ( v3 )
    HampRmContextDestroy(v3);
  v4 = *((_QWORD *)a1 + 9);
  if ( v4 )
  {
    RmpAcquireGlobalLock();
    if ( (*(_QWORD *)(v4 + 576))-- == 1LL )
      RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(v4 - 64));
    RmpReleaseGlobalLock();
  }
  CemRcObjectCleanup(a1);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
